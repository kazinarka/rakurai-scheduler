// callconv: rax amd64 (rdi, rsi, rdx, rcx, r8, r9, xmm0, xmm1, xmm2, xmm3, xmm4);
void sym.rakurai_scheduler__scheduler_1__rakurai_scheduler__RakuraiScheduler_Tx___send_batch__h2b1dc18c413b211f__clone_llvm10757968547084596467_ (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
        // CALL XREFS from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::rakurai_schedule::hd99e9ca52fb0a928 @ 0x68b493(x), 0x68b948(x), 0x68c47a(x) // sym.__rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler_Tx__as_rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait_Tx__::rakurai_schedule::hd99e9ca52fb0a928
        // rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<
        // Tx>::send_batch::h2b1dc18c413b211f [clone llvm10757968547084596467]
        push (rbp)
        push (r15)
        push (r14)
        push (r13)
        push (r12)
        push (rbx)
        rsp -= 0x268
        r12 = rcx     // arg4
        r15 = rsi     // arg2
        rsi = qword [rdx + 0x10] // arg3
        v = rcx - rsi // arg4
        jae 0x684cfe  // unlikely
        goto loc_0x00684764;
    loc_0x00684cfe:
        // CODE XREF from rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx>::send_batch::h2b1dc18c413b211f [clone llvm10757968547084596467] @ 0x68475e(x)
        rdx = rip + 0x74521b // 0xdc9f20
        rdi = r12
        qword [0x00e37e58] () // [0xe37e58:8]=0 // 0xe37e58(0x0, 0x0, 0xdc9f20, 0x0)
        
    loc_0x00684d0e:
        // CODE XREF from rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx>::send_batch::h2b1dc18c413b211f [clone llvm10757968547084596467] @ 0x684c0c(x)
        rdx = rip + 0x745223 // 0xdc9f38
        rdi = r12
        qword [0x00e37e58] () // [0xe37e58:8]=0 // 0xe37e58(0x0, 0x0, 0xdc9f38, 0x0)
        goto loc_0x0068477b;
        return rax;
    loc_0x0068477b:
        rdi = var_30h // int64_t arg1
        rsi = rdx     // arg3
        rdx = r12     // int64_t arg3
        sym.solana_core::banking_stage::transaction_scheduler::scheduler_common::Batches_Tx_::take_batch::h8445e24265fd8d6e () // solana_core::banking_stage::transaction_scheduler::scheduler_common::Batches<Tx>::take_batch::h8445e24265fd8d6e // sym.solana_core::banking_stage::transaction_scheduler::scheduler_common::Batches_Tx_::take_batch::h8445e24265fd8d6e(0x10078030, 0x0, 0x0)
        r14 = qword [var_30h]
        r13 = qword [var_38h]
        rsi = qword [var_40h]
        rax = qword [var_58h]
        qword [var_d0h] = rax
        xmm0 = xmmword [var_48h]
        xmmword [var_c0h] = xmm0
        rbp = r15
        r15 = qword [var_60h]
        rax = qword [var_68h]
        qword [var_b8h] = rax
        rax = qword [var_70h]
        qword [var_170h] = rax
        rdx = qword [var_78h]
        rdi = var_160h
        qword [var_178h] = rsi
        rcx = r12
        qword [reloc.fixup.SH_HLGH__HHx_L9sJH] () // [0xe38cf8:8]=0 // reloc.fixup.SH_HLGH__HHx_L9sJH(0x10078160, 0x0, 0x0, 0x0)
        qword [var_168h] = rax
        v = dword [rbp] - 3
        if (!v) goto loc_0x684b74 // unlikely
        goto loc_0x00684805;
    loc_0x00684b74:
        // CODE XREF from rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx>::send_batch::h2b1dc18c413b211f [clone llvm10757968547084596467] @ 0x6847ff(x)
        qword [var_f0h] = r14
        qword [var_f8h] = r13
        r14 = qword [var_178h]
        qword [var_100h] = r14
        rax = qword [var_d0h]
        qword [var_118h] = rax
        xmm0 = xmmword [var_c0h]
        xmmword [var_108h] = xmm0
        qword [var_120h] = r15
        rax = qword [var_b8h]
        qword [var_128h] = rax
        rax = qword [var_170h]
        qword [var_130h] = rax
        rax = qword [var_168h]
        qword [var_138h] = rax
        word [var_140h] = 0
        qword [var_e0h] = 0
        rsi = qword [var_1d8h]
        v = r12 - rsi
        jae 0x684d0e  // likely
        goto loc_0x00684c12;
    loc_0x00684c12:
        r12 <<<= 4
        r12 += qword [var_1d0h]
        rax = qword [var_140h]
        qword [var_90h] = rax
        rax = qword [var_130h]
        qword [var_80h] = rax
        rax = qword [var_138h]
        qword [var_88h] = rax
        rax = qword [var_120h]
        qword [var_70h] = rax
        rax = qword [var_128h]
        qword [var_78h] = rax
        xmm0 = xmmword [var_e0h]
        xmm1 = xmmword [var_f0h]
        xmm2 = xmmword [var_100h]
        xmm3 = xmmword [var_110h]
        xmmword [var_60h] = xmm3
        xmmword [var_50h] = xmm2
        xmmword [var_40h] = xmm1
        xmmword [var_30h] = xmm0
        rdi = var_200h // int64_t arg1
        rdx = var_30h // int64_t arg3
        rsi = r12     // int64_t arg2
        sym.crossbeam_channel::channel::Sender_T_::send::hfbed9ec6600d264c () // crossbeam_channel::channel::Sender<T>::send::hfbed9ec6600d264c // sym.crossbeam_channel::channel::Sender_T_::send::hfbed9ec6600d264c(0x10078200, 0x0, 0x10078030)
        v = dword [var_200h] - 2
        if (v) goto loc_0x684cc6 // likely
        goto loc_0x00684cba;
    loc_0x00684cc6:
        // CODE XREF from rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx>::send_batch::h2b1dc18c413b211f [clone llvm10757968547084596467] @ 0x684cb8(x)
        rdi = var_200h
        sym._ZN4core3ptr294drop_in_place_LT_solana_core..banking_stage..scheduler_messages..ConsumeWork_LT_solana_runtime_transaction..runtime_transaction..RuntimeTransaction_LT_agave_transaction_view..resolved_transaction_view..ResolvedTransactionView_LT_alloc..sync..Arc_LT_alloc..vec..Vec_LT_u8_GT__GT__GT__GT__GT__GT_17h60b1a362f030e2fcE_1 () // core::ptr::drop_in_place<solana_core::banking_stage::scheduler_messages::ConsumeWork<solana_runtime_transaction::runtime_transaction::RuntimeTransaction<agave_transaction_view::resolved_transaction_view::ResolvedTransactionView<alloc::sync::Arc<alloc::vec::Vec<u8>>>>>>::h60b1a362f030e2fc // sym._ZN4core3ptr294drop_in_place_LT_solana_core..banking_stage..scheduler_messages..ConsumeWork_LT_solana_runtime_transaction..runtime_transaction..RuntimeTransaction_LT_agave_transaction_view..resolved_transaction_view..ResolvedTransactionView_LT_alloc..sync..Arc_LT_alloc..vec..Vec_LT_u8_GT__GT__GT__GT__GT__GT_17h60b1a362f030e2fcE_1(0x10078200)
        dword [rbx] = 0
        rax = rip - 0x3084f5 // "consume work senderfinished consume workbanking_stage_scheduler_slot_countsbanking_stage_scheduler_slot_counts_extra_statsnum_r" // 0x37c7eb
        qword [rbx + 8] = rax
        qword [rbx + 0x10] = 0x13 // [0x13:8]=256
        
    loc_0x00684cec:
        // CODE XREF from rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx>::send_batch::h2b1dc18c413b211f [clone llvm10757968547084596467] @ 0x684cc4(x)
        rsp += 0x268
        rbx = pop ()
        r12 = pop ()
        r13 = pop ()
        r14 = pop ()
        r15 = pop ()
        rbp = pop ()
        return
        goto loc_0x00684856;
        return rax;
    loc_0x00684856:
        qword [var_10h] = rbx
        r13 = qword [var_c8h]
        r14 <<<= 9
        r12d = 0
        r15 = var_30h
        rbx = qword [reloc.fixup.AVSPHIj] // [0xe38580:8]=0
        
    while (byte [var_58h] == 2) {
        // CODE XREF from rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx>::send_batch::h2b1dc18c413b211f [clone llvm10757968547084596467] @ 0x684901(x)
        r12 += 0x200
        v = r14 - r12
        if (!v) goto loc_0x684981 // unlikely
    }
    while (rbp - qword [var_18h]) {
        // CODE XREFS from rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx>::send_batch::h2b1dc18c413b211f [clone llvm10757968547084596467] @ 0x68495e(x), 0x68496f(x)
        rax = qword [var_20h]
        rcx = rbp*2
        rcx += rbp
        rcx <<<= 5
        xmm0 = xmmword [var_80h]
        xmmword [rax + rcx + 0x50] = xmm0
        xmm0 = xmmword [var_70h]
        xmmword [rax + rcx + 0x40] = xmm0
        xmm0 = xmmword [var_30h]
        xmm1 = xmmword [var_40h]
        xmm2 = xmmword [var_50h]
        xmm3 = xmmword [var_60h]
        xmmword [rax + rcx + 0x30] = xmm3
        xmmword [rax + rcx + 0x20] = xmm2
        xmmword [rax + rcx + 0x10] = xmm1
        xmmword [rax + rcx] = xmm0
        rbp++
        qword [var_28h] = rbp
    }
    loc_0x00684964:
        rdi = var_18h
        qword [0x00e38d00] () // [0xe38d00:8]=0 // 0xe38d00(0x10078018, 0x0, 0x0, 0x0)
        goto loc_0x684880
        
    loc_0x00684805: // orphan
         qword [var_b0h] = rbp
         qword [var_a8h] = r12
         qword [var_8h] = r15
         qword [var_98h] = r13
         qword [var_a0h] = r14
         qword [var_18h] = 0
         qword [var_20h] = 8
         qword [var_28h] = 0
         r14 = qword [var_d0h]
         v = r14 & r14
         if (!v) 
    loc_0x00684974: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx>::send_batch::h2b1dc18c413b211f [clone llvm10757968547084596467] @ 0x684775(x)
         qword [rbx + 8] = 0
         
         goto loc_0x00684981;
    loc_0x00684981: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx>::send_batch::h2b1dc18c413b211f [clone llvm10757968547084596467] @ 0x6848e4(x)
         rax = qword [var_28h]
         rbx = qword [var_10h]
         
         goto loc_0x0068498d;
    loc_0x0068498d: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx>::send_batch::h2b1dc18c413b211f [clone llvm10757968547084596467] @ 0x684850(x)
         eax = 0

    loc_0x0068498f: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx>::send_batch::h2b1dc18c413b211f [clone llvm10757968547084596467] @ 0x68498b(x)
         qword [var_180h] = rax
         rdi = var_e0h            // int64_t arg1
         rsi = var_c0h            // int64_t arg2
         sym.__alloc::vec::Vec_T_A__as_core::clone::Clone_::clone::hc843a65272030013 () // _<alloc::vec::Vec<T,A> as core::clone::Clone>::clone::hc843a65272030013 // sym.__alloc::vec::Vec_T_A__as_core::clone::Clone_::clone::hc843a65272030013(0x100780e0, 0x100780c0, 0x0)
         rax = qword [var_28h]
         qword [var_58h] = rax
         xmm0 = xmmword [var_18h]
         xmmword [var_48h] = xmm0
         xmm0 = xmmword [var_e0h]
         xmmword [var_30h] = xmm0
         rax = qword [var_f0h]
         qword [var_40h] = rax
         rdi = var_e0h            // int64_t arg1
         r15 = var_30h
         rsi = qword [var_b0h]    // int64_t arg2
         rdx = r15                // int64_t arg3
         r14 = qword [var_a0h]
         r13 = qword [var_98h]
         sym.crossbeam_channel::channel::Sender_T_::try_send::hb307c407abb21b4c () // crossbeam_channel::channel::Sender<T>::try_send::hb307c407abb21b4c // sym.crossbeam_channel::channel::Sender_T_::try_send::hb307c407abb21b4c(0x100780d8, 0x0, 0x10078028)
         r12 = qword [var_a8h]
         v = dword [var_e0h] - 2
         if (!v) 
         goto loc_0x00684a1d;
    loc_0x00684a1d: // orphan
         rax = qword [var_110h]
         qword [var_60h] = rax
         xmm0 = xmmword [var_e0h]
         xmm1 = xmmword [var_f0h]
         xmm2 = xmmword [var_100h]
         xmmword [var_50h] = xmm2
         xmmword [var_40h] = xmm1
         xmmword [var_30h] = xmm0
         rax = var_180h
         qword [var_148h] = rax
         rax = qword [0x00e374c8] // [0xe374c8:8]=0
         qword [var_150h] = rax
         qword [var_158h] = r15
         rax = rip - sym.__crossbeam_channel::err::TrySendError_T__as_core::fmt::Display_::fmt::h32e703db89249c8e // 0x672910 // "H\x89\xf2\x83?\x01u\x12H\x8d=\xe8\x9a\xd0\xff\xbe!"
         qword [var_160h] = rax
         rsi = rip - str.Dscheduler_1:_failed_to_send_scheduler_update_for_0_transactions_and // 0x372630 // "Dscheduler_1: failed to send scheduler update for 0 transactions and"
         rdi = var_188h
         rdx = var_148h
         qword [reloc.fixup.UHAWAVAUATSH_IIHA] () // [0xe37780:8]=0 // reloc.fixup.UHAWAVAUATSH_IIHA(0x10078188, 0x372630, 0x10078148, 0x0)
         rbp = qword [var_188h]
         rax = qword [var_190h]
         qword [var_10h] = rax
         r12 = qword [var_198h]
         v = r12 & r12
         jns 0x684ad6             // likely

         goto loc_0x00684ac6;
    loc_0x00684ac6: // orphan
         edi = 0

    loc_0x00684ac8: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx>::send_batch::h2b1dc18c413b211f [clone llvm10757968547084596467] @ 0x684af4(x)
         rsi = r12
         qword [reloc.fixup.UHHu] () // [0xe37788:8]=0 // reloc.fixup.UHHu(0x0, 0x0, 0x0, 0x0)
         
         goto loc_0x00684ad6;
    loc_0x00684ad6: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx>::send_batch::h2b1dc18c413b211f [clone llvm10757968547084596467] @ 0x684ac4(x)
         if (!v) 
         goto loc_0x00684ad8;
    loc_0x00684ad8: // orphan
         qword [0x00e37508] ()    // [0xe37508:8]=0 // 0xe37508(0x0, 0x0, 0x0, 0x0)
         esi = 1
         rdi = r12
         qword [0x00e37510] ()    // [0xe37510:8]=0 // 0xe37510(0x0, 0x1, 0x0, 0x0)
         edi = 1
         v = rax & rax
         if (!v) 
         goto loc_0x00684af6;
    loc_0x00684af6: // orphan
         r15 = rax
         
         goto loc_0x00684afb;
    loc_0x00684afb: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx>::send_batch::h2b1dc18c413b211f [clone llvm10757968547084596467] @ 0x684ad6(x)
         r15d = 1

    loc_0x00684b01: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx>::send_batch::h2b1dc18c413b211f [clone llvm10757968547084596467] @ 0x684af9(x)
         rdi = r15
         rsi = qword [var_10h]
         rdx = r12
         qword [memcpy] ()        // [0xe37450:8]=0 // 0xe37450(0x0, 0x0, 0x0, 0x0)
         qword [var_148h] = r12
         qword [var_150h] = r15
         qword [var_158h] = r12
         rdi = var_148h
         qword [0x00e384e0] ()    // [0xe384e0:8]=0 // 0xe384e0(0x10078140, 0x0, 0x0, 0x0)
         v = rbp & rbp
         r15 = qword [var_8h]
         r12 = qword [var_a8h]
         if (!v) 
         goto loc_0x00684b4a;
    loc_0x00684b4a: // orphan
         edx = 1
         rdi = qword [var_10h]
         rsi = rbp                // rsp
         qword [0x00e37488] ()    // [0xe37488:8]=0 // 0xe37488(0x0, 0x10078000, 0x1, 0x0)

    loc_0x00684b5d: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx>::send_batch::h2b1dc18c413b211f [clone llvm10757968547084596467] @ 0x684b48(x)
         rdi = var_38h
         sym._ZN4core3ptr300drop_in_place_LT_rakurai_scheduler..scheduler_update_notifier..SchedulerUpdateWork_LT_solana_runtime_transaction..runtime_transaction..RuntimeTransaction_LT_agave_transaction_view..resolved_transaction_view..ResolvedTransactionView_LT_alloc..sync..Arc_LT_alloc..vec..Vec_LT_u8_GT__GT__GT__GT__GT__GT_17h8c3274466fcc4550E_1 () // core::ptr::drop_in_place<rakurai_scheduler::scheduler_update_notifier::SchedulerUpdateWork<solana_runtime_transaction::runtime_transaction::RuntimeTransaction<agave_transaction_view::resolved_transaction_view::ResolvedTransactionView<alloc::sync::Arc<alloc::vec::Vec<u8>>>>>>::h8c3274466fcc4550 // sym._ZN4core3ptr300drop_in_place_LT_rakurai_scheduler..scheduler_update_notifier..SchedulerUpdateWork_LT_solana_runtime_transaction..runtime_transaction..RuntimeTransaction_LT_agave_transaction_view..resolved_transaction_view..ResolvedTransactionView_LT_alloc..sync..Arc_LT_alloc..vec..Vec_LT_u8_GT__GT__GT__GT__GT__GT_17h8c3274466fcc4550E_1(0x10078038)

    loc_0x00684b67: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx>::send_batch::h2b1dc18c413b211f [clone llvm10757968547084596467] @ 0x684a17(x)
         r15 = qword [var_8h]
         rbp = qword [var_b0h]    // rsp

    loc_0x00684cba: // orphan
         qword [rbx + 8] = r14

    loc_0x00684cbe: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx>::send_batch::h2b1dc18c413b211f [clone llvm10757968547084596467] @ 0x68497c(x)
         dword [rbx] = 3
         
         goto loc_0x00684cc6;
    loc_0x00684d1e: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx>::send_batch::h2b1dc18c413b211f [clone llvm10757968547084596467] @ 0x684ad1(x)
         ud2

        return rax;
}

