// callconv: rax amd64 (rdi, rsi, rdx, rcx, r8, r9, xmm0, xmm1, xmm2, xmm3, xmm4);
void sym.__rakurai_scheduler__rakurai_transaction_state_container__RakuraiTransactionContainer_Tx__as_rakurai_scheduler__rakurai_transaction_state_container__RakuraiStateContainer_Tx____push_ids_into_queue__h2979fa376df14a23 (int64_t arg1, int64_t arg2, int64_t arg3) {
        // CALL XREF from _<rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_2::scheduler::Scheduler<Tx>>::schedule_2::h5d59a757f888b217 @ 0x67adaf(x) // sym.__rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler_Tx__as_rakurai_scheduler::scheduler_2::scheduler::Scheduler_Tx__::schedule_2::h5d59a757f888b217
        // _<rakurai_scheduler::rakurai_transaction_state_container::RakuraiTra
        // nsactionContainer<Tx> as rakurai_scheduler::rakurai_transaction_state_
        // container::RakuraiStateContainer<Tx>>::push_ids_into_queue::h2979fa376
        // df14a23
        push (rbp)
        push (r15)
        push (r14)
        push (r13)
        push (r12)
        push (rbx)
        rsp -= 0x338
        r14 = rsi     // arg2
        qword [var_78h] = rdi // arg1
        xmm0 = xmmword [rdx] // arg3
        xmm1 = xmmword [rdx + 0x10] // arg3
        xmmword [var_20h] = xmm0
        rax = qword [rdx + 0x20] // arg3 // elf_phdr
        qword [var_40h] = rax
        xmmword [var_30h] = xmm1
        r15 = rsi + 0x48 // arg2
        r13 = qword [var_20h]
        rbp = qword [var_28h]
        v = r13 - rbp
        if (!v) goto loc_0x5ec22a // unlikely
        goto loc_0x005ec12a;
    loc_0x005ec22a:
        // CODE XREFS from _<rakurai_scheduler::rakurai_transaction_state_container::RakuraiTransactionContainer<Tx> as rakurai_scheduler::rakurai_transaction_state_container::RakuraiStateContainer<Tx>>::push_ids_into_queue::h2979fa376df14a23 @ 0x5ec124(x), 0x5ec184(x)
        rbx = qword [var_40h]
        v = rbx & rbx
        if (!v) goto loc_0x5ec273 // likely
        goto loc_0x005ec234;
    loc_0x005ec273:
        // CODE XREF from _<rakurai_scheduler::rakurai_transaction_state_container::RakuraiTransactionContainer<Tx> as rakurai_scheduler::rakurai_transaction_state_container::RakuraiStateContainer<Tx>>::push_ids_into_queue::h2979fa376df14a23 @ 0x5ec232(x)
        rcx = 0x8000000000000000
        rax = qword [r14 + 0x18]
        edx = 0
        rax -= qword [r14 + 0x40]
        cmovae rdx rax
        qword [var_50h] = rdx
        if (((unsigned) v) <= 0) goto 0x5ec577 // likely
        goto loc_0x005ec296;
    loc_0x005ec577:
        // CODE XREF from _<rakurai_scheduler::rakurai_transaction_state_container::RakuraiTransactionContainer<Tx> as rakurai_scheduler::rakurai_transaction_state_container::RakuraiStateContainer<Tx>>::push_ids_into_queue::h2979fa376df14a23 @ 0x5ec290(x)
        rax = qword [var_78h]
        rdx = qword [var_50h]
        qword [rax] = rdx
        qword [rax + 8] = rcx
        xmm0 = xmmword [var_80h]
        xmmword [rax + 0x10] = xmm0
        rsp += 0x338
        rbx = pop ()
        r12 = pop ()
        r13 = pop ()
        r14 = pop ()
        r15 = pop ()
        rbp = pop ()
        return
        goto loc_0x005ec248;
    loc_0x005ec140: // orphan
         // CODE XREF from _<rakurai_scheduler::rakurai_transaction_state_container::RakuraiTransactionContainer<Tx> as rakurai_scheduler::rakurai_transaction_state_container::RakuraiStateContainer<Tx>>::push_ids_into_queue::h2979fa376df14a23 @ 0x5ec19c(x)
         edx = 0

    loc_0x005ec142: // orphan
         // CODE XREFS from _<rakurai_scheduler::rakurai_transaction_state_container::RakuraiTransactionContainer<Tx> as rakurai_scheduler::rakurai_transaction_state_container::RakuraiStateContainer<Tx>>::push_ids_into_queue::h2979fa376df14a23 @ 0x5ec1ff(x), 0x5ec217(x)
         qword [var_98h] = r15
         qword [var_a0h] = rax
         qword [var_a8h] = rcx
         qword [var_b0h] = rdx
         qword [var_b8h] = 0
         qword [var_c0h] = rdi    // arg1
         rdi = rbx                // int64_t arg1
         rsi = r12                // uint32_t arg2
         sym.alloc::collections::btree::map::entry::VacantEntry_K_V_A_::insert_entry::h229a94bd7f243703 () // alloc::collections::btree::map::entry::VacantEntry<K,V,A>::insert_entry::h229a94bd7f243703 // sym.alloc::collections::btree::map::entry::VacantEntry_K_V_A_::insert_entry::h229a94bd7f243703(0x0, 0x0)

    loc_0x005ec181: // orphan
         // CODE XREF from _<rakurai_scheduler::rakurai_transaction_state_container::RakuraiTransactionContainer<Tx> as rakurai_scheduler::rakurai_transaction_state_container::RakuraiStateContainer<Tx>>::push_ids_into_queue::h2979fa376df14a23 @ 0x5ec1f7(x)
         v = r13 - rbp
         if (!v) 
         goto loc_0x005ec18a;
    loc_0x005ec18a: // orphan
         // CODE XREF from _<rakurai_scheduler::rakurai_transaction_state_container::RakuraiTransactionContainer<Tx> as rakurai_scheduler::rakurai_transaction_state_container::RakuraiStateContainer<Tx>>::push_ids_into_queue::h2979fa376df14a23 @ 0x5ec137(x)
         rax = qword [r13]
         rcx = qword [r13 + 8]
         r13 += 0x10
         rdx = qword [r15]
         v = rdx & rdx
         if (!v) 
         goto loc_0x005ec19e;
    loc_0x005ec19e: // orphan
         rsi = qword [r14 + 0x50] // elf_phdr

    loc_0x005ec1a2: // orphan
         // CODE XREF from _<rakurai_scheduler::rakurai_transaction_state_container::RakuraiTransactionContainer<Tx> as rakurai_scheduler::rakurai_transaction_state_container::RakuraiStateContainer<Tx>>::push_ids_into_queue::h2979fa376df14a23 @ 0x5ec225(x)
         r8d = word [rdx + 0xba]  // sym.tokio::runtime::context::CONTEXT::__u7b__u7b_constant_u7d__u7d_::__u7b__u7b_closure_u7d__u7d_::__RUST_STD_INTERNAL_VAL::h7a0bda7a98ce7214
         r9d = r8d                // sym.tokio::runtime::context::CONTEXT::__u7b__u7b_constant_u7d__u7d_::__u7b__u7b_closure_u7d__u7d_::__RUST_STD_INTERNAL_VAL::h7a0bda7a98ce7214
         r9d <<<= 4
         rdi = 0xffffffffffffffff
         r10 = rdx
         
         goto loc_0x005ec1c0;
    loc_0x005ec1c0: // orphan
         // CODE XREFS from _<rakurai_scheduler::rakurai_transaction_state_container::RakuraiTransactionContainer<Tx> as rakurai_scheduler::rakurai_transaction_state_container::RakuraiStateContainer<Tx>>::push_ids_into_queue::h2979fa376df14a23 @ 0x5ec1e1(x), 0x5ec1e7(x)
         seta r11b
         r11b = r11b - 0
         r10 += 0x10
         r9 += 0xfffffffffffffff0
         rdi++
         v = r11b - 1
         if (v) 
         goto loc_0x005ec1d9;
    loc_0x005ec1d9: // orphan
         // CODE XREF from _<rakurai_scheduler::rakurai_transaction_state_container::RakuraiTransactionContainer<Tx> as rakurai_scheduler::rakurai_transaction_state_container::RakuraiStateContainer<Tx>>::push_ids_into_queue::h2979fa376df14a23 @ 0x5ec1bb(x)
         v = r9 & r9
         if (!v) 
         goto loc_0x005ec1de;
    loc_0x005ec1de: // orphan
         v = rax - qword [r10]
         if (v) 
         goto loc_0x005ec1e3;
    loc_0x005ec1e3: // orphan
         v = rcx - qword [r10 + 8]
         
         goto loc_0x005ec1f0;
    loc_0x005ec1f0: // orphan
         // CODE XREF from _<rakurai_scheduler::rakurai_transaction_state_container::RakuraiTransactionContainer<Tx> as rakurai_scheduler::rakurai_transaction_state_container::RakuraiStateContainer<Tx>>::push_ids_into_queue::h2979fa376df14a23 @ 0x5ec1d7(x)
         r8d = r11b
         v = r8d & r8d
         if (!v) 
         goto loc_0x005ec1f9;
    loc_0x005ec1f9: // orphan
         rsi -= 1
         jae 0x5ec21d             // unlikely

         goto loc_0x005ec1ff;
    loc_0x005ec1ff: // orphan
         
         goto loc_0x005ec210;
    loc_0x005ec210: // orphan
         // CODE XREF from _<rakurai_scheduler::rakurai_transaction_state_container::RakuraiTransactionContainer<Tx> as rakurai_scheduler::rakurai_transaction_state_container::RakuraiStateContainer<Tx>>::push_ids_into_queue::h2979fa376df14a23 @ 0x5ec1dc(x)
         rdi = r8
         rsi -= 1
         if (((unsigned) v) < 0) 
         goto loc_0x005ec21d;
    loc_0x005ec21d: // orphan
         // CODE XREF from _<rakurai_scheduler::rakurai_transaction_state_container::RakuraiTransactionContainer<Tx> as rakurai_scheduler::rakurai_transaction_state_container::RakuraiStateContainer<Tx>>::push_ids_into_queue::h2979fa376df14a23 @ 0x5ec1fd(x)
         rdx = qword [rdx + rdi*8 + 0xc0] // case.0x95d678.1
         
         goto loc_0x005ec22a;
    loc_0x005ec234: // orphan
         r12 = qword [var_30h]
         rsi = qword [var_38h]
         r13 = qword [r12 + 0x10]
         v = rsi - r13
         if (!v) 
         goto loc_0x005ec248;
    loc_0x005ec248: // orphan
         rax = qword [r12 + 8]
         rsi <<<= 4
         rsi += rax
         rdi = r13
         rdi <<<= 4
         rdi += rax
         rdx = rbx
         rdx <<<= 4
         qword [memmove] ()       // [0xe37768:8]=0 // 0xe37768(0x0, 0x0, 0x0, 0x0)

    loc_0x005ec26b: // orphan
         // CODE XREF from _<rakurai_scheduler::rakurai_transaction_state_container::RakuraiTransactionContainer<Tx> as rakurai_scheduler::rakurai_transaction_state_container::RakuraiStateContainer<Tx>>::push_ids_into_queue::h2979fa376df14a23 @ 0x5ec246(x)
         r13 += rbx
         qword [r12 + 0x10] = r13

    loc_0x005ec296: // orphan
         qword [var_58h] = 0
         qword [var_60h] = 8
         qword [var_68h] = 0
         r12d = 0

    loc_0x005ec2c0: // orphan
         // CODE XREF from _<rakurai_scheduler::rakurai_transaction_state_container::RakuraiTransactionContainer<Tx> as rakurai_scheduler::rakurai_transaction_state_container::RakuraiStateContainer<Tx>>::push_ids_into_queue::h2979fa376df14a23 @ 0x5ec547(x)
         rax = qword [r15]
         v = rax & rax
         if (!v) 
         goto loc_0x005ec2cc;
    loc_0x005ec2cc: // orphan
         rcx = qword [r14 + 0x50] // elf_phdr
         v = rcx & rcx
         if (!v) 
         goto loc_0x005ec2d5;
    loc_0x005ec2d5: // orphan
         rdx = rcx
         rdx &= 7
         if (!v) 
         goto loc_0x005ec2e2;
    loc_0x005ec2e2: // orphan
         esi = 0

    loc_0x005ec2f0: // orphan
         // CODE XREF from _<rakurai_scheduler::rakurai_transaction_state_container::RakuraiTransactionContainer<Tx> as rakurai_scheduler::rakurai_transaction_state_container::RakuraiStateContainer<Tx>>::push_ids_into_queue::h2979fa376df14a23 @ 0x5ec2fd(x)
         rax = qword [rax + 0xc0] // case.0x95d678.1
         rsi++
         v = rdx - rsi
         if (v) 
         goto loc_0x005ec2ff;
    loc_0x005ec2ff: // orphan
         rdx = rcx
         rdx -= rsi
         v = rcx - 8
         if (((unsigned) v) < 0) 
         goto loc_0x005ec30b;
    loc_0x005ec30b: // orphan
         

    loc_0x005ec310: // orphan
         // CODE XREFS from _<rakurai_scheduler::rakurai_transaction_state_container::RakuraiTransactionContainer<Tx> as rakurai_scheduler::rakurai_transaction_state_container::RakuraiStateContainer<Tx>>::push_ids_into_queue::h2979fa376df14a23 @ 0x5ec34c(x), 0x5ec557(x)
         rax = qword [rax + 0xc0] // case.0x95d678.1
         rax = qword [rax + 0xc0]
         rax = qword [rax + 0xc0]
         rax = qword [rax + 0xc0]
         rax = qword [rax + 0xc0]
         rax = qword [rax + 0xc0]
         rax = qword [rax + 0xc0]
         rax = qword [rax + 0xc0]
         rdx += 0xfffffffffffffff8
         if (v) 
         goto loc_0x005ec34e;
    loc_0x005ec34e: // orphan
         // CODE XREFS from _<rakurai_scheduler::rakurai_transaction_state_container::RakuraiTransactionContainer<Tx> as rakurai_scheduler::rakurai_transaction_state_container::RakuraiStateContainer<Tx>>::push_ids_into_queue::h2979fa376df14a23 @ 0x5ec2d3(x), 0x5ec309(x), 0x5ec55d(x)
         v = word [rax + 0xba] - 0
         if (!v) 
         goto loc_0x005ec35c;
    loc_0x005ec35c: // orphan
         rcx = var_a0h
         xmm0 ^= xmm0
         xmmword [rcx] = xmm0
         qword [var_98h] = rax
         qword [var_b0h] = r15
         rdi = var_98h            // int64_t arg1
         sym.alloc::collections::btree::map::entry::OccupiedEntry_K_V_A_::remove_kv::hd389f6178e992b58 () // alloc::collections::btree::map::entry::OccupiedEntry<K,V,A>::remove_kv::hd389f6178e992b58 // sym.alloc::collections::btree::map::entry::OccupiedEntry_K_V_A_::remove_kv::hd389f6178e992b58(0x10078098)
         rbp = rdx
         v = rdx - qword [r14 + 0x10]
         jae 0x5ec4a0             // likely

         goto loc_0x005ec394;
    loc_0x005ec394: // orphan
         rax = qword [r14 + 8]
         rcx = rbp * 0x2a0
         rdx = qword [rax + rcx + 0x210]
         v = rdx - 3
         if (!v) 
         goto loc_0x005ec3b1;
    loc_0x005ec3b1: // orphan
         v = edx - 2
         if (!v) 
         goto loc_0x005ec3ba;
    loc_0x005ec3ba: // orphan
         rax += rcx
         v = byte [rax + 0xaa] - 0
         if (!v) 
         goto loc_0x005ec3ca;
    loc_0x005ec3ca: // orphan
         rcx = qword [rax + 0xa0]
         edi = word [rax + 0xa8]
         rdi += qword [rcx + 0x18]
         qword [var_20h] = 0
         qword [var_28h] = 1
         qword [var_30h] = 0
         qword [var_a8h] = 0x60000020 // ' ' // [0x60000020:8]=-1
         rax = var_20h
         qword [var_98h] = rax
         rax = rip + 0x7db381     // 0xdc7798
         qword [var_a0h] = rax
         rsi = var_98h
         qword [0x00e38260] ()    // [0xe38260:8]=0 // 0xe38260(0xfff, 0x10078098, 0x0, 0x5855a8)
         v = al & al
         rax = 0x8000000000000000
         if (v) 
         goto loc_0x005ec43f;
    loc_0x005ec43f: // orphan
         r13 = qword [var_20h]
         v = r13 - rax
         if (!v) 
         goto loc_0x005ec449;
    loc_0x005ec449: // orphan
         rax = qword [var_28h]
         qword [var_10h] = rax
         rax = qword [var_30h]
         qword [var_18h] = rax
         rbx = qword [var_68h]
         v = rbx - qword [var_58h]
         if (v) 
         goto loc_0x005ec469;
    loc_0x005ec469: // orphan
         rdi = var_58h
         qword [0x00e38588] ()    // [0xe38588:8]=0 // 0xe38588(0x10078058, 0x0, 0x0, 0x0)

    loc_0x005ec474: // orphan
         // CODE XREF from _<rakurai_scheduler::rakurai_transaction_state_container::RakuraiTransactionContainer<Tx> as rakurai_scheduler::rakurai_transaction_state_container::RakuraiStateContainer<Tx>>::push_ids_into_queue::h2979fa376df14a23 @ 0x5ec467(x)
         rax = qword [var_60h]
         rcx = rbx + rbx*2
         qword [rax + rcx*8] = r13
         rdx = qword [var_10h]
         qword [rax + rcx*8 + 8] = rdx
         rdx = qword [var_18h]
         qword [rax + rcx*8 + 0x10] = rdx
         rbx++
         qword [var_68h] = rbx

    loc_0x005ec4a0: // orphan
         // CODE XREFS from _<rakurai_scheduler::rakurai_transaction_state_container::RakuraiTransactionContainer<Tx> as rakurai_scheduler::rakurai_transaction_state_container::RakuraiStateContainer<Tx>>::push_ids_into_queue::h2979fa376df14a23 @ 0x5ec38e(x), 0x5ec3ab(x), 0x5ec3c4(x), 0x5ec447(x)
         v = rbp - qword [r14 + 0x10]
         jae 0x5ec603             // likely

         goto loc_0x005ec4aa;
    loc_0x005ec4aa: // orphan
         rbx = qword [r14 + 8]
         rax = rbp * 0x2a0
         r13 = qword [rbx + rax + 0x210]
         v = r13 - 3
         if (!v) 
         goto loc_0x005ec4c7;
    loc_0x005ec4c7: // orphan
         rbx += rax
         rax = qword [r14 + 0x20] // elf_phdr
         qword [var_10h] = rax
         edx = 0x210
         rdi = var_98h
         rsi = rbx
         rax = qword [memcpy]     // [0xe37450:8]=0
         qword [var_18h] = rbp
         rbp = rax
         rax ()                   // 0x5ec4f4(0x10078098, 0x0, 0x210, 0x0)
         rsi = rbx + 0x218
         edx = 0x88
         rdi = var_2b0h
         rbp ()                   // rsp // rsp(0x100782a8, 0x218, 0x88, 0x0)
         rax = qword [var_10h]
         qword [rbx] = rax
         qword [rbx + 0x210] = 3
         qword [r14 + 0x18]--
         rax = qword [var_18h]
         qword [r14 + 0x20] = rax
         qword [var_2a8h] = r13   // [0x2a8:8]=0x1400000004 // segment.NOTE
                                  [01] -r-- section size 36 named .note.gnu.build-id
         rdi = var_98h
         sym.core::ptr::drop_in_place_rakurai_scheduler::rakurai_transaction::RakuraiTransaction_solana_runtime_transaction::runtime_transaction::RuntimeTransaction_agave_transaction_view::resolved_transaction_view::ResolvedTransactionView_alloc::sync::Arc_alloc::vec::Vec_u8______::h7080558f7b195a38__clone_llvm10741653363056930047_ () // core::ptr::drop_in_place<rakurai_scheduler::rakurai_transaction::RakuraiTransaction<solana_runtime_transaction::runtime_transaction::RuntimeTransaction<agave_transaction_view::resolved_transaction_view::ResolvedTransactionView<alloc::sync::Arc<alloc::vec::Vec<u8>>>>>>::h7080558f7b195a38 [clone llvm10741653363056930047] // sym.core::ptr::drop_in_place_rakurai_scheduler::rakurai_transaction::RakuraiTransaction_solana_runtime_transaction::runtime_transaction::RuntimeTransaction_agave_transaction_view::resolved_transaction_view::ResolvedTransactionView_alloc::sync::Arc_alloc::vec::Vec_u8______::h7080558f7b195a38__clone_llvm10741653363056930047_(0x10078088)
         r12++
         v = r12 - qword [var_50h]
         if (((unsigned) v) < 0) 
         goto loc_0x005ec54d;
    loc_0x005ec54d: // orphan
         
         goto loc_0x005ec550;
    loc_0x005ec550: // orphan
         // CODE XREF from _<rakurai_scheduler::rakurai_transaction_state_container::RakuraiTransactionContainer<Tx> as rakurai_scheduler::rakurai_transaction_state_container::RakuraiStateContainer<Tx>>::push_ids_into_queue::h2979fa376df14a23 @ 0x5ec2dc(x)
         rdx = rcx
         v = rcx - 8
         jae 0x5ec310             // unlikely

         goto loc_0x005ec55d;
    loc_0x005ec55d: // orphan
         
         goto loc_0x005ec562;
    loc_0x005ec562: // orphan
         // CODE XREF from _<rakurai_scheduler::rakurai_transaction_state_container::RakuraiTransactionContainer<Tx> as rakurai_scheduler::rakurai_transaction_state_container::RakuraiStateContainer<Tx>>::push_ids_into_queue::h2979fa376df14a23 @ 0x5ec54d(x)
         rcx = qword [var_58h]
         rax = var_60h
         xmm0 = xmmword [rax]
         xmmword [var_80h] = xmm0

    loc_0x005ec5a6: // orphan
         // CODE XREF from _<rakurai_scheduler::rakurai_transaction_state_container::RakuraiTransactionContainer<Tx> as rakurai_scheduler::rakurai_transaction_state_container::RakuraiStateContainer<Tx>>::push_ids_into_queue::h2979fa376df14a23 @ 0x5ec3b4(x)
         rdi = rip - 0x2729f7     // "transaction is not pending, transaction state must existpacket receiver6owR194mg7Vzn5k5Zo8jzwxYabPnyiQPVV6qJaqoFLJrtransaction " // 0x379bb6
         rdx = rip + 0x7dac7c     // 0xdc7230
         esi = 0x1a
         qword [reloc.fixup.UHH_HHuHEHEHE] () // [0xe37440:8]=0 // reloc.fixup.UHH_HHuHEHEHE(0x379bb6, 0x1a, 0xdc7230, 0x0)
         
         goto loc_0x005ec5c1;
    loc_0x005ec5c1: // orphan
         // CODE XREF from _<rakurai_scheduler::rakurai_transaction_state_container::RakuraiTransactionContainer<Tx> as rakurai_scheduler::rakurai_transaction_state_container::RakuraiStateContainer<Tx>>::push_ids_into_queue::h2979fa376df14a23 @ 0x5ec439(x)
         rdi = rip - 0x272668     // "a Display implementation returned an error unexpectedlycalled `Result::unwrap()` on an `Err` valueUnexpected length of inputFor" // 0x379f60
         rcx = rip + 0x7db251     // 0xdc7820
         r8 = rip + 0x7db1f2      // 0xdc77c8
         rdx = var_fh             // (pstr 0x00004000) "ar_traitsIcESaIcEE7reserveEm"
         esi = 0x37               // '7'
         qword [reloc.fixup.UHH_HHuHUHMHEHE] () // [0xe37860:8]=0 // reloc.fixup.UHH_HHuHUHMHEHE(0x379f60, 0x37, 0x1007800f, 0xdc7820)
         
         goto loc_0x005ec5e8;
    loc_0x005ec5e8: // orphan
         // CODE XREFS from _<rakurai_scheduler::rakurai_transaction_state_container::RakuraiTransactionContainer<Tx> as rakurai_scheduler::rakurai_transaction_state_container::RakuraiStateContainer<Tx>>::push_ids_into_queue::h2979fa376df14a23 @ 0x5ec2c6(x), 0x5ec356(x)
         rdi = rip - 0x27275f     // "queue is not emptystruct VersionedTransaction with 2 elementsstruct CompiledInstruction with 3 elementsstruct Message with 5 el" // 0x379e90
         rdx = rip + 0x7db0ea     // 0xdc76e0
         esi = 0x12
         qword [reloc.fixup.UHH_HHuHEHEHE] () // [0xe37440:8]=0 // reloc.fixup.UHH_HHuHEHEHE(0x379e90, 0x12, 0xdc76e0, 0x0)
         
         goto loc_0x005ec603;
    loc_0x005ec603: // orphan
         // CODE XREFS from _<rakurai_scheduler::rakurai_transaction_state_container::RakuraiTransactionContainer<Tx> as rakurai_scheduler::rakurai_transaction_state_container::RakuraiStateContainer<Tx>>::push_ids_into_queue::h2979fa376df14a23 @ 0x5ec4a4(x), 0x5ec4c1(x)
         rdi = rip - obj.anon.b507fa14ccd92fabe49991491d32ba22.34.llvm.2747347612781333634 // 0x37c22b // "invalid keysignal found waiting giver, notifyingbuffer.flattenbuffer.queueread header from client timeoutparse eofsetting h1 header read timeout timerresetting h1 header read timeout timersend_request dropped, starting conn shutdowninvalid varinttracing::spanVarintSixtyFourBitLen"
         rdx = rip + 0x7db0e7     // 0xdc76f8
         esi = 0xb
         qword [reloc.fixup.UHH_HHuHEHEHE] () // [0xe37440:8]=0 // reloc.fixup.UHH_HHuHEHEHE(0x37c22b, 0xb, 0xdc76f8, 0x0)

    loc_0x005ec61c: // orphan
         // CODE XREFS from _<rakurai_scheduler::rakurai_transaction_state_container::RakuraiTransactionContainer<Tx> as rakurai_scheduler::rakurai_transaction_state_container::RakuraiStateContainer<Tx>>::push_ids_into_queue::h2979fa376df14a23 @ 0x5ec5bf(x), 0x5ec5e6(x), 0x5ec601(x)
         ud2

        return rax;
}

