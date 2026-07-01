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

**Container internals (`push_ids_into_queue`).** The container is not just a heap. Insertion
(`RakuraiTransactionContainer::push_ids_into_queue`) maintains **both**:
- the `MinMaxHeap<(priority, id)>` (the pop-order structure), and
- an `alloc::collections::BTreeMap` used as an ordered secondary index (calls
  `BTreeMap VacantEntry::insert_entry` on insert and `OccupiedEntry::remove_kv` on removal).

The BTreeMap gives ordered iteration / range operations the heap can't (e.g. deterministic
tie-break and bulk requeue by key), while the heap gives O(1) best/worst access. IDs come from the
`slab`; the heap and BTree hold ids, the slab holds the heavy `RuntimeTransaction`. Insertion panics
rather than overwrite when `len() >= capacity` (100000).

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

**Retry / backoff mechanism (detail).**
- `get_retry_interval_times_ms` builds a small (`0x30`-byte) vector of retry interval times in
  milliseconds from the slot timing (uses the u64→f64 conversion path and a `>>1, +1` halving step)
  — a computed backoff schedule rather than a fixed constant, so throttled txs are retried on a
  spaced cadence within the slot.
- `retry_interval_tx_ids` (scheduler_1, ~4 KB): the per-interval retry driver — drains due txs and
  `push_ids_into_queue`s them back at their priority.
- `retry_tx_end_of_slot`: end-of-slot cleanup — repeatedly `MinMaxHeap::pop_max` (drains the heap)
  and re-queues via `push_ids_into_queue`, resetting for the next slot.
- `refresh_if_needed`: checks each requeued tx's blockhash age and drops it if it can no longer be
  included (prevents retrying already-expired transactions).

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
`try_handle_packet` and pushes accepted txs. `generate_packet_indexes` builds an index table over an
incoming batch for fast iteration during this loop.

### 6.2b Packet-acceptance filters — mode1 vs mode2 (the inclusion decision)

The receiver applies one of two filters (selected by the transaction-source mode, §4) to decide
whether a packet is accepted and how it is classified. **This is where a packet is admitted or
rejected.**

- **`is_mode1_filtered`** (1599 B, the *light* filter): `PacketRef::deserialize_slice` →
  `SanitizedTransaction::try_new`, then checks packet-meta flag bits (e.g. `packet.meta >> 3 & 1`)
  and a type/mode field (`== 2` comparisons). It resolves the sanitized transaction and screens on
  structural validity + meta flags. No fee/cost computation.
- **`is_mode2_filtered`** (4477 B, the *heavy* filter): `PacketRef::deserialize_slice` →
  `SanitizedTransaction::try_new` → **`solana_fee::calculate_fee_details`** →
  **`solana_cost_model::CostModel::calculate_cost`**. Mode 2 fully prices the transaction — it
  computes the actual fee details and the compute-unit cost — and filters on those. This is the mode
  that lets the scheduler reason about economic value (fee + cost) at admission time, feeding the
  priority/tip decisions downstream.

In short: mode 1 = cheap structural admission; mode 2 = full fee/cost-model admission. Both produce
a `RuntimeTransaction` that then flows into the container and (if tip-bearing) the fast lane.

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

---

# APPENDIX A — Memory & struct layout maps

All offsets observed directly in the decompilation. `struct` = the scheduler Controller object.

### A.1 `scheduler_1::Controller` (0x200-byte header + inline sub-structs; from `Controller::new`)

| Offset | Field / meaning |
|---|---|
| +0x280 | ring buffer of realized-CU samples (feedback for CU estimate) |
| +0x288 | ring capacity (init 8) |
| +0x2a0 | thread count (init 8) |
| +0x2c0 | crossbeam `Receiver` #1 (normal tx lane) |
| +0x2d0 | crossbeam `Receiver` #2 (second tx lane) |
| +0x7b0 | **high-priority transaction `Sender`** (tip fast lane) |
| +0x7c0 | last-update timestamp (for CU feedback) |
| +0x7d8 / +0x7e8 | CU budget target (seeded slot_duration × 0.85) |
| +0x7e0 | early-slot ramp = `(target >> 2) − 5` |
| +0x7f0 | initial per-thread CU seed = 50,000,000 |
| +0x7f8 | writable-account CU limit = 12,000,000 |
| +0x800 / +0x810 / +0x818 | per-tick computed CU rates (rescaled by elapsed slot time) |
| +0x820 | bank/working-bank handle |
| +0x828 | finished-work / aux Arc |
| +0x830 | exit flag |
| +0x838 | standby flag |
| +0x860 | current leader slot (sentinel `1,000,000,000` = not leader) |
| +0x868 | `RakuraiTransactionContainer` (slab + MinMaxHeap + BTreeMap; cap 100000) |
| +0x2e0 | `RakuraiScheduler` (0x4d0 bytes) |

### A.2 `SwitchingController` (0xA8 bytes; from `SwitchingController::new`)

| Offset | Field |
|---|---|
| +0x10..0x18 | config / cluster handle |
| +0x30 | identity/cluster-info Arc (source of `create_message` id) |
| +0x60..0x80 | **BlockBuilder authority pubkey** (32 B; base58-decoded from rodata `0x37dc5f`) |
| +0xA8 | `enabled` bool (read by `rakurai_enabled()`) |

### A.3 `ThreadAwareAccountLocks` entry
Hashbrown table keyed by 32-byte account pubkey; **each value entry = 0x148 (328) bytes** holding
per-thread read/write lock counts. `read/write_schedulable_threads` probe it to produce the
eligible-thread bitmask; `try_lock_accounts`/`lock_accounts`/`unlock_accounts` mutate it.

### A.4 `RakuraiTransactionViewReceiveAndBuffer`
| Offset | Field |
|---|---|
| +0x18 | "tip accounts known" flag |
| +0x20..0x4c | tip-account hashbrown set (written under a seqlock at +0x10 = `0x3fffffff` sentinel) |
| +0x250 | tip-account RwLock (touched during packet buffering) |
| +0x600 | receiver state root used by `set_rakurai_tip_accounts` |

### A.5 `CooccurrenceGraph`
| Offset | Field |
|---|---|
| +0x00..0x90 | `petgraph::GraphMap` (nodes = account pubkeys, weighted co-occurrence edges) |
| +0x90..0x120 | auxiliary hashbrown maps (account→node, edge weights) |
| +0x120 | **f64 edge-weight threshold** |
| output | `HashMap<usize, GroupDetails>`; bucket 0x30 = usize key + `GroupDetails` ≈ 40 B |

### A.6 Global GOT / control slots
`0xe37380` standby · `0xe37388` run-gate (2=normal) · `0xe37390` notifier once ·
`0xe37398` `SWITCHING_CONTROLLER` once_cell · `0xe37xxx`–`0xe38xxx` the load-time-populated indirect
call table (see §3). Graph slots: `build_graph 0xe38210`, `connected_groups 0xe38218`,
`process_transaction 0xe382a0`, `CooccurrenceGraph::new 0xe382b0`, clock `0xe38230`.

---

# APPENDIX B — Complete function-by-function reference

Every analyzed Rakurai function (112 total in the symbol table excluding drop glue; the
substantive ones below). Sizes are the symbol-table byte sizes.

### B.1 Entry / control plane
- **`run_rakurai_scheduler`** (6468 B) — C-ABI entry. Panic hook, `SwitchingController::new`,
  once_cell store, mode-enum validation, 0x200 struct alloc, spawn threads. 6-case source-mode jump
  table (local branches, `0x6bcd7d`–`0x6bcdf3`).
- **`run_rakurai_scheduler::{{closure}}`** (23943 B) — manager thread; 76-case monomorphization
  table; creates the `HashMap<usize,GroupDetails>` channel; spawns scheduler + receiver + notifier;
  shutdown joins/drops.
- **`SwitchingController::new`** (663 B) — decodes hardcoded authority key → +0x60.
- **`SwitchingController::is_rakurai_enabled`** (1201 B) — checks standby `0xe37380`; acquires the
  config `Mutex`/RwLock; verifies signature if a signed command is present.
- **`SwitchingController::verify_signature`** — ed25519 verify over `create_message(slot)`; tries
  `slot` and `slot-1`.
- **`SwitchingController::create_message`** — `bincode(struct{ id, pubkey, slot })` under a seqlock.
- **`rakurai_enabled`** — read bool @ `SWITCHING_CONTROLLER+0xA8`.
- **`check_state`** — per-tick `wait_or_proceed`.
- **`initial_check_state_for_standard` / `initial_check_state_for_rakurai`** — startup gates.
- **`reset_rakurai`** — run-gate=2, standby=0.
- **`force_switch_to_standard`** (760 B) — standby=1, drain finished work, enabled=0, 200/100 ms
  backoff, drop receivers → stock Agave.
- **`entrypoint`** — module init.

### B.2 scheduler_1 (greedy family)
- **`Controller::run`** (9336 B) — the main loop (§5.1).
- **`Controller::new`** (1846 B) — struct init + constants (Appendix A.1).
- **`Controller::receive_and_buffer_transactions`** (2679 B) — pull txs from the two receivers into
  the container; high-prio fork.
- **`Controller::update_actual_cus_and_print_logs`** (884 B) — realized-CU feedback ring buffer.
- **`Controller::redump_filtered_txns`** (738 B) — requeue throttled txs.
- **`RakuraiScheduler::rakurai_schedule`** (9354 B) — the pop_max→lock→thread→send_batch loop.
- **`RakuraiScheduler::send_batch`** (1766 B) — `take_batch` → `ConsumeWork` → `Sender::try_send`.
- **`RakuraiScheduler::passthrough_priority`** (8 B) — `return *arg1` (stock fee/CU).
- **`RakuraiScheduler::get_writable_accts`** — writable-account set extraction.
- **`RakuraiScheduler::select_thread`** — least-loaded eligible thread.
- **`RakuraiScheduler::redump_cu_throttled_ids_to_container`** (3351 B) — CU-throttle requeue.
- **`receive_completed_rakurai`** (5033 B) — drain finished work, unlock, requeue retryables.
- **`retry_interval_tx_ids`** (3997 B) / **`retry_tx_end_of_slot`** (1303 B) /
  **`refresh_if_needed`** (1180 B) — retry/backoff + blockhash expiry (§5.7).
- **`ThreadAwareAccountLocks`**: `try_lock_accounts` (1375 B), `unlock_accounts` (1230 B),
  `read_lock_account` (685 B), `write_lock_account`, `read/write_schedulable_threads`,
  `read/write_unlock_account`, `new`.
- **`SchedulerCountMetricsInner::report`** (1529 B) — count metrics.

### B.3 scheduler_2 (graph-aware family)
- **`SchedulerStatsController::receive_and_buffer_transactions`** (6016 B) — sched2 ingest driver.
- **`RakuraiScheduler::schedule_2`** (18261 B) — sched2 pack loop (pop_max + find_least_loaded).
- **`receive_completed_2`** (7382 B) — sched2 completion/unlock/requeue.
- **`redump_acct_limit_reached_to_container`** (5565 B) / **`redump_cu_throttled_ids_to_container`**
  (4741 B) — sched2 requeue variants.
- **`find_least_loaded_thread`** (1657 B) — sched2 thread pick (per-thread load @ +0x80/+0x190).
- **`get_writable_accts`** (613 B), **`get_retry_interval_times_ms`** (647 B),
  **`InFlightTracker::new`** (424 B), **`Batches::new`**.
- **`ThreadAwareAccountLocks`** (sched2 copy): `lock_accounts`, `read/write_lock_account`,
  `read/write_schedulable_threads`, `new`.
- **`SchedulerCountMetricsInner::report`** (1573 B).

### B.4 Co-occurrence graph (scheduler_2)
- **`CooccurrenceGraph::new`** (619 B) — `GraphMap::with_capacity` + f64 threshold.
- **`build_graph`** (1186 B) — `add_edge` per co-occurring account pair (GOT `0xe38210`).
- **`process_transaction`** (1895 B) — per-tx account-pair clique into edge map (GOT `0xe382a0`).
- **`connected_groups`** (2210 B) — BFS/DFS components → `HashMap<usize,GroupDetails>`
  (GOT `0xe38218`). Live: called from `SchedulerReceiver::run`, consumed by
  `SchedulerStatsController`.

### B.5 Receiver / ingestion
- **`SchedulerReceiver::run`** (20239 B) — ingest thread; also builds the co-occurrence graph.
- **`SchedulerReceiver::new`** (1694 B).
- **`RakuraiTransactionViewReceiveAndBuffer::receive_and_buffer_packets`** (4581 B) — wire packet
  loop (§6.1).
- **`deserialize_and_push_received_batches`** (20239 B) + **`::{{closure}}`** (2029 B) — batch
  driver.
- **`try_handle_packet`** (4131 B) — parse, ALT-resolve, dedup (`contains_key`), sanitize.
- **`is_mode1_filtered`** (1599 B) — light structural admission.
- **`is_mode2_filtered`** (4477 B) — heavy admission with `calculate_fee_details` +
  `CostModel::calculate_cost`.
- **`generate_packet_indexes`** (926 B) — batch index table.
- **`get_writable_accts`** (731 B), **`RakuraiTransactionViewReceiveAndBuffer::new`** (1280 B),
  **`::clone`** (2220 B).
- **`reception_info_log` / `reception_warning_log`**, **`SchedulerCountMetricsInner::report`**
  (reception metrics, 655 B).

### B.6 Transaction container
- **`RakuraiTransactionContainer::push_ids_into_queue`** (three monomorphizations, ~1276–1465 B) —
  slab insert + MinMaxHeap push + BTreeMap index (§5.2).

### B.7 Tip / bundle
- **`rakurai_tip_amount_from_transaction`** (1053 B) — SIMD tip-account probe + lamport sum.
- **`set_rakurai_tip_accounts`** — register tip accounts under seqlock.
- **`fetch_bundle_tip`** — bundle tip via `BUNDLE_STAGE_CONTROLLER`.
- **`check_bundle_feasability`** — `cost < 3 caps`.

### B.8 Network / notifier
- **`SchedulerUpdateNotifier::run`** (9170 B) + **`::new`** — tokio thread `solSchedTokio`.
- **`sync_postpack_confirmation_config`** (16036 B) + **`::{{closure}}`** (13317 B) — read config
  PDA, Borsh-decode, gossip-resolve nodes.
- **`dispatch_scheduler_update`** (3049 B) — HKDF per-update key, push per node via tokio mpsc.
- **`handle_postpack_confirmation_stream::{{closure}}`** (21181 B) — the tonic gRPC bidirectional
  stream: `Streaming::poll_next`, `Grpc::create_response`, `mpsc::Sender::send`; re-auths via
  `generate_auth_tokens_relayer`.
- **`generate_auth_tokens_relayer`** (25784 B) + **`::{{closure}}`** (25857 B) — the Jito relayer
  challenge/response auth (largest functions in the binary; sign identity, exchange bearer tokens).
- **`endpoint_from_url`** (1303 B) — tonic endpoint + rustls TLS for https.

### B.9 Metrics
Multiple `SchedulerCountMetricsInner::report`, `SchedulerTimingMetricsInner::report`,
`RakuraiSchedulerCountMetrics::update`, `RakuraiSchedulerLeaderDetectionMetrics::report_and_reset`
across scheduler_1, scheduler_2, and reception — standard `solana_metrics` InfluxDB counters/timers
(slot, scheduled/unschedulable counts, CU totals, latencies). No effect on scheduling logic.

---

# APPENDIX C — End-to-end lifecycle (one leader slot)

1. Validator calls `run_rakurai_scheduler` (once); manager spawns receiver + scheduler + notifier
   threads; `SwitchingController` gate is checked (remote enable).
2. **Ingest**: packets arrive → `receive_and_buffer_packets` → `try_handle_packet` (ALT-resolve,
   dedup, sanitize) → `is_mode1_filtered`/`is_mode2_filtered` (admission; mode 2 prices fee+cost) →
   tip valuation → push into container (heap + BTree + slab) or the high-priority lane.
   Concurrently, for scheduler_2, `build_graph` + `connected_groups` compute account clusters and
   send `GroupDetails` to the scheduler.
3. **Schedule** (per tick): gate → leader check → buffer → CU budget (0.85 pacing) → `pop_max` →
   `get_writable_accts` → `read/write_schedulable_threads` (eligibility bitmask) → `select_thread`/
   `find_least_loaded_thread` → block-limit gate → `send_batch` → `ConsumeWork` on `work_senders`.
4. **Complete**: `finished_work_receiver` → `receive_completed_*` → release locks → requeue
   retryables (retry-interval backoff; blockhash refresh).
5. **Confirm**: packed txs → `dispatch_scheduler_update` (HKDF key) →
   `SchedulerUpdateNotifier::run` → gRPC `block_engine::PacketBatchUpdate` to whitelisted nodes.
6. **End of slot**: `retry_tx_end_of_slot` drains the heap; metrics `report_and_reset`.
7. **Disable path**: a signed command (or startup config) → `force_switch_to_standard` → drain →
   revert to stock Agave, no crash.

Analyzed artifact: `extracted/librak_scheduler_4_0_3_0.so` (BuildID `b9350e46e896b42a0adc5c4ca0d0cc3741592724`).
