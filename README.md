# librak_scheduler — Complete Reverse-Engineering Analysis

Full static analysis of **`librak_scheduler_4_0_3_0.so`**, the closed-source banking-stage
transaction scheduler that `rakurai-validator` (a fork of Agave/Anza) loads in-process via a C ABI.
Everything here is derived from the binary; per-function decompilation is in
[`notes/decompiled/`](notes/decompiled) (`*.c` = r2ghidra, `*.pdc.c` = radare2 native disasm-decomp).

The document is weighted toward the **scheduling algorithm (§5)** and **how transactions/packets get
included and prioritized (§6)** — the main logic — with the surrounding subsystems after.
Claims that cannot be settled from a static image are marked **[needs dynamic confirmation]**.

---

## 1. What it is (one paragraph)

An ELF64 x86-64 shared object (~20.8 MB, not stripped, BuildID `b9350e46…`) that is a **drop-in
replacement for Agave's `SchedulerController`**. The validator hands it, over a C ABI, the same
crossbeam channels stock Agave's scheduler owns; the `.so` decides the **order** of transactions and
**which worker thread** each runs on. It cannot forge execution results — the bank still runs and
validates every transaction. Its differentiators over stock Agave are: a **tip-aware high-priority
lane**, **tighter conflict-free thread packing**, a **CU-pacing throttle**, an optional
**account co-occurrence graph** that clusters related accounts, and a **postpack-confirmation**
gRPC stream back to Rakurai's block engine. It also embeds a **remote kill-switch** gated by a
hardcoded authority key.

Toolchain/crates statically linked: tokio 1.49, tonic 0.9.2, rustls/ring/webpki, anchor,
jito-protos, **petgraph**, **hashbrown**, **min-max-heap**, crossbeam, brotli. Source paths in the
binary: `core/src/banking_stage/rakurai_scheduler/src/{scheduler_1,scheduler_2,scheduler_receiver,
scheduler_update_notifier,switching_controller,rakurai_transaction_state_container}.rs`.

---

## 2. Architecture at a glance — threads & data flow

The manager entry `run_rakurai_scheduler` runs on thread **`solBnkSchedulerManager`** and its
`{{closure}}` spawns the workers. Thread entry points are proven via `__rust_begin_short_backtrace`:

```
                    validator (banking stage)
                          │  packets / already-parsed txs
                          ▼
        ┌──────────────────────────────────────┐
        │  SchedulerReceiver::run  (ingest)     │   builds the co-occurrence graph
        │   • parse packets → RuntimeTransaction │   (scheduler_2): build_graph →
        │   • resolve ALTs, dedup, sanitize      │   connected_groups →
        │   • classify tip value                 │   HashMap<usize,GroupDetails>──┐
        │   • push into container / fast lane     │                               │
        └───────────────┬────────────────────────┘                              │ crossbeam
                        │ container (slab + MinMaxHeap)                          │ channel
                        ▼                                                        ▼
        ┌──────────────────────────────────────┐        ┌──────────────────────────────┐
        │ scheduler_1::Controller::run   OR      │◄───────│  GroupDetails (group hints)  │
        │ scheduler_2::SchedulerStatsController  │        └──────────────────────────────┘
        │   • pop_max (priority)                 │
        │   • conflict check (ThreadAwareLocks)  │        ┌──────────────────────────────┐
        │   • pick least-loaded thread           │───────►│ work_senders[t] (ConsumeWork)│──► workers
        │   • CU-budget throttle (0.85)          │        └──────────────────────────────┘
        │   • drain completions, requeue         │◄──────── finished_work_receiver
        └───────────────┬────────────────────────┘
                        │ SchedulerUpdate (what was packed)
                        ▼
        ┌──────────────────────────────────────┐
        │ SchedulerUpdateNotifier::run (tokio)  │──► gRPC block_engine::PacketBatchUpdate
        │   • postpack confirmation stream       │    (gossip-resolved, whitelisted nodes)
        └────────────────────────────────────────┘
```

The binary ships **two scheduler families** — `scheduler_1` (greedy packer only) and `scheduler_2`
(greedy packer **+** co-occurrence graph). Both `Controller::run` (sched1) and
`SchedulerStatsController` (sched2) are real thread entry points; which one a deployment runs is a
startup/config choice **[needs dynamic confirmation of the selector]**. Everything else (receiver,
notifier, kill-switch) is shared.

---

## 3. Reverse-engineering note: indirect (GOT) dispatch

This binary rarely uses direct `call symbol` for its own functions. At load time a bootstrap table
of 24-byte records `{tag=8, function_ptr, got_slot}` (file offset `~0xa1dc8`) populates GOT slots
(`0xe37xxx`–`0xe38xxx`); code then calls `call *0x…(%rip)` through those slots. **Static
call-graph tools that only follow direct calls will wrongly declare live functions "dead."** To get
confident control flow you must (1) parse that table into a slot→function map, then (2) re-attribute
every indirect call site. This is exactly how the co-occurrence graph (§5.9) was proven live after
`axt`/objdump initially showed "no callers." Verified examples:
`build_graph→0xe38210`, `connected_groups→0xe38218`, `process_transaction→0xe382a0`,
`CooccurrenceGraph::new→0xe382b0`, clock→`0xe38230`.

---

## 4. The plugin ABI (validator ⇄ scheduler)

Eight `extern "C"` exports:

| Export | Role |
|---|---|
| `run_rakurai_scheduler` | Entry/glue: build controller, spawn threads, run |
| `rakurai_enabled` | Live on/off bool (`SWITCHING_CONTROLLER + 0xA8`) |
| `check_state` | Per-tick gate: `SwitchingController::wait_or_proceed` |
| `initial_check_state_for_standard` | Startup gate (stock-Agave mode) |
| `reset_rakurai` | Re-arm (`run-gate=2`, `standby=0`) |
| `fetch_bundle_tip` | Tip lamports of a Jito bundle |
| `check_bundle_feasability` *(sic)* | Does a bundle's cost fit block limits |
| `entrypoint` | Module init |

Channels the validator passes in (set up in `Controller::new`, offsets confirmed):
- **`work_senders`** — `Vec<Sender<ConsumeWork>>`, one per banking worker. **The only egress into
  transaction execution.**
- **`finished_work_receiver`** — `Receiver<FinishedConsumeWork>`; executed batches return here.
- **`high_priority_transaction_sender`/`_receiver`** (struct+0x7b0) — an *extra* crossbeam pair for
  the tip fast lane; stock Agave has no such pair.
- Two tx receivers (struct+0x2c0, +0x2d0), plus mode enums + Arc refcounts (bank/PoH/decision).

`run_rakurai_scheduler` installs a panic hook, builds `SwitchingController::new`, stores it in the
`SWITCHING_CONTROLLER` once_cell, validates mode enums, allocates the 0x200-byte scheduler struct,
and spawns the threads. The **6-case jump table** at rodata `0x37d2dc` is *not* scheduler
selection — its six targets are local branches (`0x6bcd7d`–`0x6bcdf3`) doing per-mode Arc setup for
the transaction-**source** enum. The manager `{{closure}}` carries a 76-case monomorphization table
and, on shutdown, `join`s and drops every channel.

---

## 5. THE SCHEDULING ALGORITHM (main logic)

### 5.1 The scheduling loop (`scheduler_1::Controller::run`; sched2 analogous)

One tick, in order:
1. **Gate** — `SwitchingController::is_rakurai_enabled` / `wait`. Parked when remotely disabled (§7).
2. **Leader detection** — bank slot at struct+0x860; sentinel `1000000000` = "not our leader slot."
   Per-slot metrics reset on slot change.
3. **Buffer** — `receive_and_buffer_transactions` pulls txs from the two receivers into the
   container (§6.1).
4. **CU-budget math** — recompute the time-sliced per-thread CU target (§5.5).
5. **Decide** — `wait_or_proceed`: schedule vs idle from (queue non-empty, high-prio non-empty,
   finished-work pending, leader status).
6. **Pack** — `rakurai_schedule` (§5.2–5.6): the greedy loop that assigns txs to threads and sends
   `ConsumeWork` batches to `work_senders`.
7. **Drain completions** — `receive_completed_*`: release account locks, requeue retryables (§5.7).
8. **Requeue** — `redump_filtered_txns`: re-inject CU-/account-throttled txs (§5.7).
9. **Report** — `update_actual_cus_and_print_logs`: push realized CUs into a ring buffer
   (struct+0x280) to correct the next tick's estimate (closed feedback loop).

### 5.2 Container & priority ordering

State lives in `RakuraiTransactionContainer` (struct+0x868, **capacity 100000 txs**):
- a **`slab`** giving each tx a stable integer id + its computed cost/priority;
- a **`min_max_heap::MinMaxHeap`** of `(priority, id)`: `push` on insert, **`pop_max`** to take the
  best next tx, with O(1) access to the *min* end for capacity-bounded eviction.

**The priority key is stock Solana, not a Rakurai invention.** `passthrough_priority` is literally
`return *arg1` — the first u64 of the tx-state struct, filled by Agave's
`calculate_priority_and_cost` (seen called directly in `receive_completed_2`) =
**priority = fee ÷ (compute-unit-limit + 1)**. Ordering is byte-for-byte vanilla Agave; the edge is
everything *around* the ordering.

The greedy loop (`rakurai_schedule`, confirmed calls): repeatedly `pop_max` → `get_writable_accts`
→ conflict check → thread select → accumulate into a per-thread batch → `send_batch`; txs that can't
be placed now are `MinMaxHeap::push`ed back or redumped.

### 5.3 Conflict detection — `ThreadAwareAccountLocks` (which threads are *eligible*)

Before a tx can run on a thread it must not conflict with account locks already held by other
threads. Rakurai reuses Agave's `ThreadAwareAccountLocks` (both a `scheduler_1` and `scheduler_2`
copy exist). Structure: a hashbrown table keyed by 32-byte account pubkey; each entry is **0x148
(328) bytes** holding per-thread read/write lock state.

- `get_writable_accts` extracts the tx's writable account set (via `as_sanitized_transaction` + a
  hashbrown set), and `ReadWriteAccountSet::check_locks` pre-screens read/write sets.
- **`write_schedulable_threads(account)`**: returns a **bitmask of threads on which a *write* to
  this account is allowed**. If the account is unlocked → `0xFFFFFFFF…` (all threads). If it is
  locked, the mask is derived from the lock state (`rax = all_ones << thread_count`, then masked):
  an account already locked by exactly one thread in a compatible mode → just that thread; locked
  incompatibly → `0` (no threads).
- **`read_schedulable_threads(account)`**: same, for reads — an unlocked or read-locked account →
  all/those threads; a write-locked account → only the writing thread (`rax = !(all_ones<<n)` form).
- The tx's per-account masks are AND-ed together → the set of threads that can run the whole tx
  conflict-free. `try_lock_accounts` / `lock_accounts` then take the locks on the chosen thread;
  `unlock_accounts` releases them at completion.

This is what makes parallel execution safe: two txs touching the same writable account can never be
scheduled onto different threads simultaneously.

### 5.4 Thread selection — least-loaded among eligible

Given the eligible-thread bitmask, pick the thread to actually use:

- **`scheduler_1::select_thread`**: iterate the set bits (trailing-zero scan) and keep the thread
  minimizing **`(cumulative_CU, queued_count)` lexicographically**:
  ```
  better = cu_cand <  cu_best  ||  (cu_cand == cu_best && queue_cand <= queue_best)
  ```
  where `cumulative_CU[t] = in_flight_CU[t] + already_scheduled_CU[t]` and `queued_count[t]` is that
  thread's pending batch depth. Result: conflict-free **and** load-balanced.
- **`scheduler_2::find_least_loaded_thread`**: the same idea (reads per-thread load at struct+0x80 /
  +0x190), used by the graph-aware scheduler.

Tie-breaking on queue depth spreads work evenly instead of hot-spotting thread 0.

### 5.5 Block limits & CU-budget pacing (the throttle)

Two independent caps are enforced *before* committing a tx:
- **Per-account / lock caps** — from `ThreadAwareAccountLocks`; over-limit → `redump_acct_limit_reached_to_container`.
- **Block CU caps** — running totals vs. the block / vote / writable-account / total-CU limits;
  over-limit → `redump_cu_throttled_ids_to_container`. **Nothing is dropped — it is requeued.**

The pacing throttle spreads packing across the ~400 ms slot. The governing constant is
`0x377ff8 = **0.85**`: the scheduler targets **~85 % of the CU budget** (headroom against overrun).
`Controller::new` seeds the budget from `slot_duration × 0.85` into struct+0x7d8/0x7e8, with
`struct+0x7e0 = (target >> 2) − 5` as an early-slot ramp; each tick rescales the per-thread CU rate
(struct+0x810/0x818) by elapsed slot time so it does not blow the whole budget up front. Supporting
float constants: `0x378548 = 2^63`, `0x378000 = 2^64` (u64↔f64 saturation), `0x3784c8 = 1.0`
(default tip weight). Initial CU seeds: struct+0x7f0 = 50,000,000; struct+0x7f8 = 12,000,000
(= Solana's max writable-account CU per block).

### 5.6 Batching & dispatch to workers — `send_batch` → `ConsumeWork`

`send_batch`:
1. `scheduler_common::Batches::take_batch` assembles the per-thread batch into a
   `ConsumeWork { batch_id, ids, transactions, max_ages }`.
2. **`crossbeam Sender::try_send`** it to `work_senders[thread]`; on a full channel it falls back to
   the blocking **`Sender::send`**.

**This is the exact and only point at which a transaction enters the validator's execution path.**

### 5.7 Completion & requeue

- `receive_completed_2` / `receive_completed_rakurai`: `try_recv` loop on `finished_work_receiver`.
  Per `FinishedConsumeWork`: look up the batch (SIMD hashmap probe), decrement in-flight counters,
  **release the account locks** for the tx's accounts, and rebuild any **retryable** tx via
  `calculate_priority_and_cost` + `insert_new_transaction_with_accounts` → `MinMaxHeap::push`
  (recycled at its priority).
- `redump_filtered_txns`: re-inject CU-/account-throttled txs (`retry_interval_tx_ids`), calling
  `refresh_if_needed` to expire txs whose blockhash has aged out. Net: every tx is scheduled,
  requeued, or expired — never silently lost.

### 5.8 Two scheduler families

- **scheduler_1** (`Controller<R,S>`): the greedy MinMaxHeap packer described above. No graph.
- **scheduler_2** (`SchedulerStatsController` + `schedule_2`): the same greedy hot loop
  (`pop_max` + `find_least_loaded_thread`) **plus** the co-occurrence graph (§5.9) feeding it group
  hints. Also has an `InFlightTracker`, `redump_*` variants, and its own
  `receive_and_buffer_transactions`.

### 5.9 The account co-occurrence graph (scheduler_2) — CONFIRMED live

`scheduler_2::cooccurrence_graph::CooccurrenceGraph` is a `petgraph`-based account-clustering engine.
It runs on the **receiver thread** (off the scheduler hot path) and its output is delivered to the
scheduler over a crossbeam channel.

Functions:
- **`new`** — `petgraph::GraphMap::with_capacity`; stores an **f64 threshold at struct+0x120** (an
  edge-weight cutoff to drop weak co-occurrences).
- **`process_transaction`** — for one tx, collects its accounts, then for every **account pair**
  canonicalizes the two 32-byte pubkeys (`memcmp` + min/max) and inserts into a hashbrown edge map,
  incrementing a co-occurrence weight = "add the clique of this tx's accounts, counting frequency."
- **`build_graph`** — iterates txs, `hash_one` + **`petgraph::GraphMap::add_edge`**; nodes = account
  pubkeys, edges = accounts that co-occur. (Self-contained; adds edges directly.)
- **`connected_groups`** — BFS/DFS **connected components** (preallocated hashbrown visited set,
  cap 1024; adjacency walk; `insertion_sort` to order groups). Output `HashMap<usize, GroupDetails>`;
  the bucket is `fallible_with_capacity(0x30,…)` = 48 B = `usize` key + **`GroupDetails` ≈ 40 B**
  (≈ member list + aggregate cost per group).

Wiring (proven via the GOT technique of §3):
1. `run_rakurai_scheduler::{{closure}}` creates `crossbeam::channel::<HashMap<usize, GroupDetails>>()`.
2. **`SchedulerReceiver::run`** calls `build_graph` (`0x5d89ca`) then `connected_groups`
   (`0x5dab1e`) as it buffers txs, and `Sender::send`s the group map.
3. **`scheduler_2::controller::SchedulerStatsController`** owns the `Receiver` (proven by its drop
   glue) and consumes it; the hot loop stays `pop_max` + `find_least_loaded_thread`, now group-aware.

**Why:** clustering accounts by co-occurrence *off the critical path* lets the packer keep related
accounts coherent across threads, reducing cross-thread write-lock contention → more parallelism per
slot. This is scheduler_2's distinguishing feature over scheduler_1. The exact per-decision use of
`GroupDetails` inside the scheduler is closure-buried **[needs dynamic confirmation]**.

---

## 6. HOW TRANSACTIONS / PACKETS ARE INCLUDED & PRIORITIZED (main logic)

### 6.1 Two ingestion paths (both converge on the container)

- **`receive_and_buffer_packets`** (`RakuraiTransactionViewReceiveAndBuffer`): `recv_timeout` +
  `try_recv` loop on the SigVerify-output channel, bounded by a **count budget** or a **time budget**
  (100 ms, or 0 ms when already holding work). Per packet: size-check `< 1233` bytes, check the
  discard meta bit, `bincode`-deserialize into a transaction view, forward valid ones. Packets that
  arrive **outside a leader slot** are buffered as `DelayPacketBatches` (and `DelayNoncePacket` for
  durable-nonce txs) and replayed when leadership starts.
- **`receive_and_buffer_transactions`**: reads already-parsed `RuntimeTransaction`s from the two
  crossbeam receivers (struct+0x2c0, +0x2d0), clones, `slab::insert` (id), `push_ids_into_queue`.

### 6.2 Packet → transaction (`try_handle_packet`, `deserialize_and_push_received_batches`)

`try_handle_packet` (4131 bytes) is the per-packet converter:
- deserializes the wire bytes to an `agave_transaction_view::TransactionView`;
- resolves **Address Lookup Tables** (`LoadedAddresses` for v0 messages) into the full account list;
- **dedups** via `hashbrown::HashMap::contains_key` (skip already-seen txs);
- sanitizes and clones into a `RuntimeTransaction`, then hands it to the container / classifier.

`deserialize_and_push_received_batches` (20239 bytes) is the batch driver that loops packets through
`try_handle_packet` and pushes accepted txs.

### 6.3 Tip / MEV valuation ("their own packets" = tip-paying user txs, re-prioritized)

There is **no synthetic packet injection**. What Rakurai "adds" is priority: it identifies
transactions that pay MEV **tips** and routes them to a fast lane.

- **`set_rakurai_tip_accounts`** (exported; the validator calls it): registers the current Jito
  tip-payment accounts into the receiver — a hashbrown set written under a seqlock
  (state at recv+0x20..0x4c; flag +0x18 = "known"). Refreshed as tip accounts rotate.
- **`rakurai_tip_amount_from_transaction`**: SIMD-probes each **writable** account of a tx against
  the tip set (hashbrown `hash_one` + `pshufb` group match). If a tip account is written, it walks
  the tx's **compiled instructions**, finds System-Program transfers into tip accounts, and **sums
  the lamports** (per-account f64 weight, default `1.0`; saturating add). Returns total tip lamports
  (0 if none / no signers).

So the "tip value" of a packet is computed directly from the on-chain transfer amounts inside the
transaction the validator already received over the wire — not from any private feed.

### 6.4 The high-priority fast lane

The scheduler is created with an **extra crossbeam pair**
`high_priority_transaction_sender/_receiver` (struct+0x7b0) that stock Agave lacks. During ingestion
(`receive_and_buffer_transactions`), when a tx's destination enum selects the high-prio sender it is
`try_send` onto that lane; the main loop's `wait_or_proceed` checks the fast lane's non-emptiness
**first**, so tip/bundle transactions are scheduled ahead of the ordinary priority heap during a
leader slot. (The exact tip-lamports threshold that flips a tx onto the lane is config/parameter
driven **[needs dynamic confirmation]**; the mechanism — compute tip, compare, route — is fixed.)

### 6.5 Bundles (Jito MEV)

- **`fetch_bundle_tip`**: builds the tx, probes the global `BUNDLE_STAGE_CONTROLLER` tip map, and
  reuses `rakurai_tip_amount_from_transaction` to value the whole bundle.
- **`check_bundle_feasability`**: returns true iff `cost < limit0 && cost < limit1 && cost < limit2`
  (block / vote / account CU caps) — i.e. the bundle still fits in the block.
- Bundle txs feed the same high-priority path and `ThreadAwareAccountLocks` conflict model.

### 6.6 Reporting what was packed (postpack confirmation)

After scheduling, packed transactions are reported to Rakurai's block engine so it can confirm
inclusion (see §8). This closes the loop: ingest → prioritize → schedule → execute → **confirm**.

---

## 7. Control plane — remote kill-switch & state machine

### SwitchingController (kill-switch)
- `create_message(slot)` = `bincode::serialize(struct{ controller_id/pubkey…, slot })`.
- `verify_signature(authority, sig[64], slot)`: ed25519-verifies the message, trying `slot` then
  `slot-1` (clock-skew tolerance).
- **The authority pubkey is hardcoded** — `SwitchingController::new` base58-decodes a 44-char string
  at rodata `0x37dc5f` into controller+0x60:

  ```
  BlockBuilder authority = 67XShdGiFmfnKv6tFYUkaXR4GEsW4tVbpHvpg8Ndtdti
  ```

  A holder of the matching private key can issue **signed, slot-bound enable/disable commands** to
  toggle the scheduler on any Rakurai validator. Slot-binding blocks replay; the key is the trust
  anchor.
- `rakurai_enabled()` → bool at `SWITCHING_CONTROLLER + 0xA8`.

### State machine (globals)
`0xe37380` = standby flag · `0xe37388` = run-gate (2 = normal) · `0xe37398` = SWITCHING_CONTROLLER
once_cell · `0xe37390` = notifier once.
- `initial_check_state_for_standard`: if remote-enabled → enabled=1 + `wait`.
- `initial_check_state_for_rakurai`: if remote-disabled → enabled=0 + drain finished work.
- `check_state`: per-tick `wait_or_proceed` (enable gate + leader/idle).
- `reset_rakurai`: run-gate=2, standby=0.

### force_switch_to_standard (graceful fallback)
standby=1 → drain `FinishedConsumeWork` (`try_recv` until empty) → enabled=0 → back off 200 ms then
100 ms → drop receivers → validator reverts to the **stock Agave scheduler**. No crash.

---

## 8. Network egress (postpack confirmation)

`SchedulerUpdateNotifier` runs its own tokio runtime (thread `solSchedTokio`):
- `sync_postpack_confirmation_config`: reads an on-chain config PDA, Borsh-deserializes
  `{ authority, Vec<(node_id: String, weight: f64)> }`, resolves node ids → addresses via Solana
  gossip (`arc_swap` `ContactInfo` table). Config-account pubkeys are **hardcoded**:
  `5SonkAVc6Pi7vfv8WayKsuCrzM6UgBgPTVneBQizs5Jg` (mainnet, @0x379c96) and
  `6owR194mg7Vzn5k5Zo8jzwxYabPnyiQPVV6qJaqoFLJr` (testnet+mainnet); owner program
  `6TwL2YBsDLZjoLeHt19ePBdV8qQsMtDRFZE9UacLbc5Q`.
- `endpoint_from_url`: `tonic::Endpoint::from_shared`; detects scheme via magic
  `*url == 0x70747468` ("http") and `url[4]=='s'` → rustls TLS for https.
- Auth = **Jito relayer challenge/response**: `auth.AuthService/GenerateAuthChallenge` →
  `GenerateAuthTokens` → `RefreshAccessToken`; Bearer tokens signed by the validator identity.
- `run` loops `recv_timeout` on the `SchedulerUpdateWork` channel, turns completed work into
  `PostPackConfirmation` / `PostPackConfirmationEntryOnChain` entries (`scheduler_updates_from_work`),
  and pushes them to the gRPC `EndpointSender` (tokio mpsc → `block_engine::PacketBatchUpdate`).
  `dispatch_scheduler_update` HKDF-derives a per-update key, then pushes per node. Periodically
  re-syncs the config. Standard `solana_metrics` InfluxDB telemetry (honors `SOLANA_METRICS_CONFIG`).

Outbound data = "what my scheduler packed," to gossip-resolved, on-chain-whitelisted nodes,
authenticated by the validator identity. No tx contents leave that weren't already public on the
wire; no hardcoded exfil host.

---

## 9. Hardcoded constants

| Constant | Value | Where |
|---|---|---|
| BlockBuilder authority pubkey | `67XShdGiFmfnKv6tFYUkaXR4GEsW4tVbpHvpg8Ndtdti` | rodata `0x37dc5f` |
| Postpack config PDA (mainnet) | `5SonkAVc6Pi7vfv8WayKsuCrzM6UgBgPTVneBQizs5Jg` | rodata `0x379c96` |
| Postpack config PDA (testnet+mainnet) | `6owR194mg7Vzn5k5Zo8jzwxYabPnyiQPVV6qJaqoFLJr` | config path |
| Postpack program owner | `6TwL2YBsDLZjoLeHt19ePBdV8qQsMtDRFZE9UacLbc5Q` | config path |
| Block-fill target | **0.85** | rodata `0x377ff8` |
| u64/i64 float saturation | 2^64 / 2^63 | `0x378000` / `0x378548` |
| Default tip weight | 1.0 | `0x3784c8` |
| Container capacity | 100000 txs | `Controller::new` |
| Worker/batch defaults | 8 threads, batch cap 8 | struct+0x2a0/+0x288 |
| CU seeds | 50,000,000 / 12,000,000 | struct+0x7f0/+0x7f8 |
| Leader-slot sentinel | 1,000,000,000 | struct+0x860 |
| Max tx size check | 1233 bytes | `receive_and_buffer_packets` |
| Per-account lock entry | 0x148 (328) bytes | `ThreadAwareAccountLocks` |
| enabled bool | `SWITCHING_CONTROLLER + 0xA8` | `rakurai_enabled` |

---

## 10. Trust summary

- The scheduler reaches consensus **only** through `work_senders` (ConsumeWork → workers); the bank
  executes and validates all transactions. It cannot forge results, balances, or signatures.
- Outbound network traffic goes **only** to on-chain-whitelisted, gossip-resolved nodes,
  authenticated by the validator identity. No key snooping beyond the given identity, no shell-out,
  no hardcoded exfil host.
- **Residual trust items:** (1) it runs in-process with full validator memory — trust rests on
  Rakurai's build pipeline; (2) Rakurai holds the private key for `67XShd…` and can remotely toggle
  the scheduler via signed, slot-bound commands.

---

## 11. Decompiled reference ([`notes/decompiled/`](notes/decompiled))

| File | Function |
|---|---|
| `run_rakurai_scheduler.c`, `run_rakurai_scheduler_closure.c` | entry glue + thread spawn |
| `s1_Controller_run.c`, `s1_Controller_new.c` | main loop + struct init / constants |
| `s1_Controller_recv_and_buffer.c`, `receive_and_buffer_packets.c` | ingestion |
| `s2_schedule_2.c`, `s1_send_batch.pdc.c` | packer + worker dispatch |
| `s1_select_thread.c`, `s2_find_least_loaded_thread.pdc.c` | thread selection |
| `s1_read_schedulable_threads.pdc.c`, `s1_write_schedulable_threads.pdc.c`, `s1_try_lock_accounts.pdc.c`, `s2_lock_accounts.pdc.c` | ThreadAwareAccountLocks (eligibility + locking) |
| `s1_passthrough_priority.c`, `s1_get_writable_accts.c` | priority + account extraction |
| `s2_cooccur_new.pdc.c`, `s2_cooccur_build_graph.pdc.c`, `s2_cooccur_process_tx.pdc.c`, `s2_cooccur_connected_groups.pdc.c` | petgraph co-occurrence graph |
| `s2_receive_completed_2.c`, `s1_redump_filtered_txns.c` | completion + requeue |
| `set_rakurai_tip_accounts.c`, `rakurai_tip_amount_from_transaction.c`, `fetch_bundle_tip.c`, `check_bundle_feasability.c` | tip / bundle valuation |
| `SwitchingController_new.c`, `SwitchingController_verify_signature.c`, `SwitchingController_create_message.c`, `rakurai_enabled.c`, `force_switch_to_standard.c`, `check_state.c`, `reset_rakurai.c`, `initial_check_state_for_standard.c`, `initial_check_state_for_rakurai.c` | control plane |
| `notifier_run.c`, `notifier_new.c`, `sync_postpack_confirmation_config.c`, `endpoint_from_url.c`, `dispatch_scheduler_update.c` | network / postpack |

Analyzed artifact: `extracted/librak_scheduler_4_0_3_0.so` (BuildID `b9350e46e896b42a0adc5c4ca0d0cc3741592724`).
