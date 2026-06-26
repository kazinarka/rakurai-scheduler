# librak_scheduler — Reverse-Engineering Findings

Complete static analysis of **`librak_scheduler_4_0_3_0.so`**, the closed-source banking-stage
transaction scheduler that `rakurai-validator` (a fork of Agave/Anza) loads in-process via a C ABI.
All claims below are derived from the binary; per-function decompilation lives in
[`notes/decompiled/`](notes/decompiled) (`*.c` = r2ghidra, `*.pdc.c` = radare2 native).

> Scope note: this document covers **logic only**. Where a conclusion cannot be proven from the
> static image, it is marked explicitly.

---

## 1. What it is

- ELF64 x86-64 shared object, dynamically linked, **not stripped** (~20.8 MB).
  BuildID `b9350e46e896b42a0adc5c4ca0d0cc3741592724`. Statically links rustls/ring/webpki, tokio
  1.49, tonic 0.9.2, anchor, jito-protos, brotli, petgraph, hashbrown, min-max-heap, crossbeam.
- Source paths embedded in the binary:
  `core/src/banking_stage/rakurai_scheduler/src/{scheduler_1,scheduler_2,scheduler_receiver,
  scheduler_update_notifier,switching_controller,...}.rs`.
- It is a **drop-in replacement for Agave's `SchedulerController`**: the validator hands it the same
  crossbeam channels stock Agave's scheduler would own, and it decides ordering + thread assignment
  of transactions. It cannot forge results — the bank still executes and validates everything.

## 2. Plugin ABI (the validator ⇄ scheduler interface)

Eight `extern "C"` exports:

| Export | Role |
|---|---|
| `run_rakurai_scheduler` | Entry/glue: builds the controller, picks a scheduler, runs the loop |
| `rakurai_enabled` | Returns the live on/off bool (`SWITCHING_CONTROLLER + 0xA8`) |
| `check_state` | Per-tick gate: `SwitchingController::wait_or_proceed` |
| `initial_check_state_for_standard` | Startup gate when starting in stock-Agave mode |
| `reset_rakurai` | Re-arms internal state (`run-gate=2`, `standby=0`) |
| `fetch_bundle_tip` | Tip lamports of a Jito bundle |
| `check_bundle_feasability` *(sic)* | Whether a bundle's cost fits the block limits |
| `entrypoint` | Module init |

The validator passes, by ABI:
- **`work_senders`** — `Vec<Sender<ConsumeWork>>`, one per banking worker thread. **The only egress
  into transaction execution.**
- **`finished_work_receiver`** — `Receiver<FinishedConsumeWork>`; executed batches return here.
- **`high_priority_transaction_sender`/`_receiver`** — an *extra* crossbeam pair (the tip fast lane;
  stock Agave has no such pair).
- Mode enums + Arc refcounts for bank/PoH/decision objects.

`run_rakurai_scheduler` installs a panic hook (once), builds `SwitchingController::new`, stores it in
the `SWITCHING_CONTROLLER` once_cell, validates the mode enums (panics on invalid), allocates the
0x200-byte scheduler struct, and dispatches through a **6-case jump table** to the chosen scheduler.
It runs the manager on thread `solBnkSchedulerManager` and spawns a second thread (the closure with
a 76-case channel-flavor jump table) that owns the scheduling loop; on shutdown it `join`s and drops
every channel.

## 3. Control plane — remote kill-switch & state machine

### SwitchingController (the kill-switch)
- `create_message(slot)` = `bincode::serialize(struct{ controller_id/pubkey…, slot })`.
- `verify_signature(authority, sig[64], slot)`: ed25519-verifies the signed message, trying `slot`
  then `slot-1` (clock-skew tolerance). Accepts if either verifies.
- The authority pubkey is **hardcoded**: `SwitchingController::new` base58-decodes a 44-char string
  at rodata `0x37dc5f` into controller+0x60:

  ```
  BlockBuilder authority = 67XShdGiFmfnKv6tFYUkaXR4GEsW4tVbpHvpg8Ndtdti
  ```

  An off-chain holder of the matching private key can issue **signed, slot-bound enable/disable
  commands** to toggle the scheduler on any Rakurai validator. Slot-binding blocks replay; the
  private key is the trust anchor.
- `rakurai_enabled()` → bool at `SWITCHING_CONTROLLER + 0xA8` (the live switch).

### State machine (globals)
`0xe37380` = standby flag · `0xe37388` = run-gate (2 = normal) · `0xe37398` = SWITCHING_CONTROLLER
once_cell · `0xe37390` = notifier once.

- `initial_check_state_for_standard`: if remote-enabled → set enabled=1 + `wait`.
- `initial_check_state_for_rakurai`: if remote-disabled → set enabled=0 + drain finished work.
- `check_state(...)`: per-tick `wait_or_proceed` (enable gate + leader/idle decision).
- `reset_rakurai`: `run-gate=2`, `standby=0`.

### force_switch_to_standard (graceful fallback)
Sets standby=1 → drains `FinishedConsumeWork` via `try_recv` until empty → sets enabled=0 → backs
off 200 ms then 100 ms → drops the channel receivers → validator reverts to the **stock Agave
scheduler**. No crash.

## 4. The scheduling loop (`scheduler_1::Controller::run`)

One tick:
1. **Gate** — `is_rakurai_enabled` / `wait` (§3). Parked when disabled.
2. **Leader detection** — bank slot at struct+0x860; sentinel `1000000000` = "not leader." Per-slot
   metrics reset on slot change.
3. **Buffer** — `receive_and_buffer_transactions` (§6) pulls txs into the container.
4. **CU-budget math** — recomputes a time-sliced per-thread CU target (struct+0x7e8/0x800/0x810/
   0x818) from elapsed slot time and the block CU caps, so packing is paced across the ~400 ms slot
   instead of front-loaded.
5. **Decide** — `wait_or_proceed` (schedule vs idle, given queue/high-prio/finished-work/leader).
6. **Pack** — `rakurai_schedule` → the packer (§7); sends batches to `work_senders`.
7. **Drain completions** — `receive_completed_rakurai` / `receive_completed_2` (§9).
8. **Requeue** — `redump_filtered_txns` (§9).
9. **Report** — `update_actual_cus_and_print_logs` feeds realized CUs into a ring buffer
   (struct+0x280) to correct the next estimate (closed feedback loop).

## 5. Transaction container & priority ordering

State lives in `RakuraiTransactionContainer` (struct+0x868; capacity **100000** txs):
- a **`slab`** giving each tx a stable integer id + its computed cost/priority;
- a **`min_max_heap::MinMaxHeap`** of `(priority, id)` — the ordered queue. `push` at insert,
  `pop_max` at schedule, with O(1) min-end access for capacity-bounded eviction.

**The priority key is stock Solana, not a Rakurai invention.** `passthrough_priority` is literally
`return *arg1` — the first u64 of the tx-state struct, filled by Agave's `calculate_priority_and_cost`
= priority = fee / (CU-limit + 1). Ordering is byte-for-byte vanilla Agave; the edge is everything
*around* it.

## 6. Ingestion (filling the container)

### 6a. `receive_and_buffer_packets` — raw wire packets
`RakuraiTransactionViewReceiveAndBuffer`: `recv_timeout` + `try_recv` loop on the SigVerify-output
channel, bounded by a **count budget** or a **time budget** (100 ms, or 0 ms when already holding
work). Per packet: size-check `< 1233` bytes, check the discard meta bit, `bincode`-deserialize,
forward valid txs onward. Packets arriving outside a leader slot are held as `DelayPacketBatches`.
Also refreshes the tip-account set (seqlock at struct+0x250).

### 6b. `receive_and_buffer_transactions` — parsed txs from upstream
Reads from two crossbeam receivers (struct+0x2c0 / +0x2d0). Per tx: `RuntimeTransaction::clone` →
`slab::insert` (id) → `push_ids_into_queue` (MinMaxHeap). The **tip fast-lane fork happens here**:
high-value txs are `try_send` onto the high-priority sender (struct+0x7b0). Panics rather than
overwrite if the container is full.

## 7. The packer (proven hot path)

Both scheduler impls (`scheduler_1::rakurai_schedule`, `scheduler_2::schedule_2`) are
priority-greedy packers over the MinMaxHeap. Per popped tx:

1. **Conflict check** — `get_writable_accts` extracts the writable account set, then
   `ReadWriteAccountSet::check_locks` + `ThreadAwareAccountLocks` test for write conflicts with
   transactions already assigned to threads.
2. **Thread choice** — `select_thread` (scheduler_1) / `find_least_loaded_thread` (scheduler_2):
   from a **bitmask of eligible threads**, pick the one minimizing `(cumulative_CU, queued_count)`
   lexicographically (tie-break on queue depth). Conflict-free **and** load-balanced.
3. **Block-limit gate** — running block totals checked against per-block caps (block / vote /
   account / total CU). Over-limit txs are **requeued, never dropped**:
   `redump_cu_throttled_ids_to_container` (CU cap) or `redump_acct_limit_reached_to_container`
   (account/lock cap).
4. **Dispatch** — `send_batch` → `scheduler_common::Batches::take_batch` assembles a
   `ConsumeWork { batch_id, ids, transactions, max_ages }` → `crossbeam Sender::try_send` to
   `work_senders[thread]` (blocking `send` fallback if the channel is full). **This is the exact
   point every transaction enters the validator's execution path.**

`ThreadAwareAccountLocks` (both scheduler_1 and scheduler_2 variants) implements the per-thread
read/write lock table: `try_lock_accounts`, `unlock_accounts`, `read/write_lock_account`,
`read/write_schedulable_threads`.

## 8. The account co-occurrence graph (scheduler_2) — present, wiring UNPROVEN

`scheduler_2::cooccurrence_graph::CooccurrenceGraph` is a `petgraph`-based account-clustering engine:

- **`new`** — `petgraph::GraphMap::with_capacity`; stores an **f64 threshold** at struct+0x120
  (an edge-weight cutoff).
- **`process_transaction`** — for one tx, collects its accounts, then for every **account pair**
  canonicalizes the two 32-byte pubkeys (`memcmp` + min/max) and inserts into a hashbrown edge map,
  incrementing a co-occurrence weight = "add the clique of this tx's accounts, counting frequency."
- **`build_graph`** — `hash_one` + **`petgraph::GraphMap::add_edge`**; nodes = account pubkeys,
  edges = accounts that co-occur in transactions.
- **`connected_groups`** — BFS/DFS **connected components** (preallocated hashbrown visited set,
  cap 1024; adjacency walk; `insertion_sort` to order groups). Output: `HashMap<usize, GroupDetails>`
  shipped over a dedicated **crossbeam channel** (`Channel<HashMap<usize, GroupDetails>>`).

**Caveat (important):** these four functions have **no statically-resolvable callers** (confirmed
three ways: r2 `axt`, objdump call-by-address, objdump call-by-symbol over all ~2.1M disassembly
lines). The live `schedule_2` packs with `MinMaxHeap` + `find_least_loaded_thread` **without**
invoking the graph. The graph is reached only via a monomorphized `FnOnce::call_once` closure and a
channel, which static analysis cannot follow. Two readings remain: (a) a background analysis thread
feeds `GroupDetails` to bias thread assignment; (b) compiled-but-unused experimental code. The
dedicated channel type, `GroupDetails` struct, and full drop glue make (a) more likely, but it
**cannot be proven from the static image** — confirming requires dynamic tracing.

## 9. Completion & requeue

- **`receive_completed_2`** / `receive_completed_rakurai`: `try_recv` loop on
  `finished_work_receiver`. Per `FinishedConsumeWork`: look up the batch (SIMD hashmap probe),
  decrement in-flight counters, **release the `ThreadAwareAccountLocks`** for the tx's accounts, and
  rebuild **retryable** txs via `calculate_priority_and_cost` + `insert_new_transaction_with_accounts`
  → `MinMaxHeap::push` (recycled at their priority).
- **`redump_filtered_txns`**: re-injects txs pulled by the CU-throttle / account-limit gates
  (`retry_interval_tx_ids`), with `refresh_if_needed` to expire txs whose blockhash has aged out.
  Nothing is silently lost — scheduled, requeued, or expired.

## 10. Tip / MEV valuation & fast lane

- `set_rakurai_tip_accounts`: the validator registers the current Jito tip-payment accounts into the
  receiver (hashbrown set, written under a seqlock; flag +0x18 = "known").
- `rakurai_tip_amount_from_transaction`: SIMD-probes a tx's **writable** accounts against the tip
  set; if a tip account is written, walks the compiled instructions, finds System-Program transfers
  into tip accounts, and **sums the lamports** (per-account f64 weight, saturating add). 0 if none.
- `fetch_bundle_tip`: same path per Jito bundle (probes the global `BUNDLE_STAGE_CONTROLLER` tip map).
- `check_bundle_feasability`: `cost < limit0 && cost < limit1 && cost < limit2` (block / vote /
  account CU caps) — does the bundle still fit.
- Routing: high-tip txs go onto `high_priority_transaction_sender`; `wait_or_proceed` checks that
  lane first, so tip/bundle txs schedule ahead of the ordinary heap during a leader slot.

This is **reprioritization of real user transactions by realized tip value**, not synthetic packet
injection — tips are ordinary lamport transfers the validator already received over the wire.

## 11. Network egress (postpack confirmation)

`SchedulerUpdateNotifier` runs its own tokio runtime (thread `solSchedTokio`):
- `sync_postpack_confirmation_config`: reads an on-chain config PDA, Borsh-deserializes
  `{ authority, Vec<(node_id: String, weight: f64)> }`, resolves node ids → network addresses via
  Solana gossip (`arc_swap` `ContactInfo` table). Config-account pubkeys are **hardcoded**:
  `5SonkAVc6Pi7vfv8WayKsuCrzM6UgBgPTVneBQizs5Jg` (mainnet, @0x379c96) and
  `6owR194mg7Vzn5k5Zo8jzwxYabPnyiQPVV6qJaqoFLJr` (testnet+mainnet); owner program
  `6TwL2YBsDLZjoLeHt19ePBdV8qQsMtDRFZE9UacLbc5Q`.
- `endpoint_from_url`: `tonic::Endpoint::from_shared`; detects scheme via magic `*url == 0x70747468`
  ("http") and `url[4]=='s'` → rustls TLS for https.
- Auth = **Jito relayer challenge/response**: `auth.AuthService/GenerateAuthChallenge` →
  `GenerateAuthTokens` → `RefreshAccessToken`; Bearer access+refresh tokens signed by the validator
  identity (`maybe_refresh_relayer_auth` / `generate_auth_tokens_relayer`).
- `run`: loops `recv_timeout` on the `SchedulerUpdateWork` channel, turns completed work into
  `PostPackConfirmation` / `PostPackConfirmationEntryOnChain` entries (`scheduler_updates_from_work`),
  and pushes them to the gRPC `EndpointSender` (tokio mpsc → `block_engine::PacketBatchUpdate`
  stream). `dispatch_scheduler_update` HKDF-derives a per-update key, then pushes per node.
  Periodically re-runs `sync_postpack_confirmation_config`.
- Standard `solana_metrics` InfluxDB telemetry (honors `SOLANA_METRICS_CONFIG`).

Outbound data = "what my scheduler packed", to gossip-resolved, on-chain-whitelisted nodes,
authenticated by the validator identity. No tx contents leave that weren't already public on the
wire; no hardcoded exfil host.

## 12. Hardcoded constants

| Constant | Value | Where |
|---|---|---|
| BlockBuilder authority pubkey | `67XShdGiFmfnKv6tFYUkaXR4GEsW4tVbpHvpg8Ndtdti` | rodata `0x37dc5f` |
| Postpack config PDA (mainnet) | `5SonkAVc6Pi7vfv8WayKsuCrzM6UgBgPTVneBQizs5Jg` | rodata `0x379c96` |
| Postpack config PDA (testnet+mainnet) | `6owR194mg7Vzn5k5Zo8jzwxYabPnyiQPVV6qJaqoFLJr` | config-read path |
| Postpack program owner | `6TwL2YBsDLZjoLeHt19ePBdV8qQsMtDRFZE9UacLbc5Q` | config-read path |
| Container capacity | 100000 txs | `Controller::new` |
| Leader-slot sentinel | 1000000000 | struct+0x860 |
| CU constants | 50000000, 12000000 (= max writable-acct CU/block) | struct+0x7f0/+0x7f8 |
| enabled bool | SWITCHING_CONTROLLER + 0xA8 | `rakurai_enabled` |

## 13. Trust summary

- The scheduler reaches consensus **only** through `work_senders` (ConsumeWork to banking workers);
  the bank executes and validates all transactions. It cannot forge results.
- Outbound network traffic goes **only** to on-chain-whitelisted, gossip-resolved nodes,
  authenticated by the validator identity. No key snooping beyond the identity it is given, no
  shell-out, no hardcoded exfil host.
- **Residual trust items:** (1) it runs in-process with full validator memory — trust rests on
  Rakurai's build pipeline; (2) Rakurai holds the private key for `67XShd…` and can remotely flip
  the scheduler on/off via signed, slot-bound commands.

## 14. Decompiled reference

[`notes/decompiled/`](notes/decompiled) — per-function C. Highlights:

| File | Function |
|---|---|
| `run_rakurai_scheduler.c`, `run_rakurai_scheduler_closure.c` | entry glue + scheduler thread |
| `s1_Controller_run.c`, `s1_Controller_new.c` | main loop + struct init |
| `s1_Controller_recv_and_buffer.c`, `receive_and_buffer_packets.c` | ingestion |
| `s2_schedule_2.c`, `s1_send_batch.pdc.c` | packer + worker dispatch |
| `s1_select_thread.c`, `s2_find_least_loaded_thread.pdc.c` | thread assignment |
| `s1_passthrough_priority.c`, `s1_get_writable_accts.c` | priority + account extraction |
| `s2_cooccur_*.pdc.c` | the petgraph co-occurrence graph (new/build/process/connected) |
| `s2_receive_completed_2.c`, `s1_redump_filtered_txns.c` | completion + requeue |
| `set_rakurai_tip_accounts.c`, `rakurai_tip_amount_from_transaction.c`, `fetch_bundle_tip.c`, `check_bundle_feasability.c` | tip / bundle |
| `SwitchingController_*.c`, `rakurai_enabled.c`, `force_switch_to_standard.c`, `check_state.c`, `reset_rakurai.c`, `initial_check_state_*.c` | control plane |
| `notifier_run.c`, `notifier_new.c`, `sync_postpack_confirmation_config.c`, `endpoint_from_url.c`, `dispatch_scheduler_update.c` | network |

Analyzed artifact: `extracted/librak_scheduler_4_0_3_0.so` (BuildID `b9350e46…`).
