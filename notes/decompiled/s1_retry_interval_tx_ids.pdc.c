// callconv: rax amd64 (rdi, rsi, rdx, rcx, r8, r9, xmm0, xmm1, xmm2, xmm3, xmm4);
void sym.__rakurai_scheduler__scheduler_1__rakurai_scheduler__RakuraiScheduler_Tx__as_rakurai_scheduler__scheduler_1__rakurai_scheduler_trait__RakuraiSchedulerTrait_Tx____retry_interval_tx_ids__hfa41e1c9642770d5 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
        // CALL XREF from rakurai_scheduler::scheduler_1::controller::Controller<R,S>::redump_filtered_txns::h3b6042622f50034d @ 0x6abf21(x) // sym.rakurai_scheduler::scheduler_1::controller::Controller_R_S_::redump_filtered_txns::h3b6042622f50034d
        // _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiSchedule
        // r<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::Raku
        // raiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5
        push (rbp)
        push (r15)
        push (r14)
        push (r13)
        push (r12)
        push (rbx)
        rsp -= 0x968
        r12 = rdx     // arg3
        r14 = rsi     // arg2
        rbx = rdi     // arg1
        v = ecx & ecx // arg4
        if (!v) goto loc_0x68dc62 // likely
        goto loc_0x0068db72;
    loc_0x0068dc62:
        // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68db6c(x)
        rdi = rbx
        rsi = r12
        rdx = r14
        rcx = r8      // arg5
        r8d = 0
        rsp += 0x968
        rbx = pop ()
        r12 = pop ()
        r13 = pop ()
        r14 = pop ()
        r15 = pop ()
        rbp = pop ()
        goto loc_0x684fe0 // sym.rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler_Tx_::redump_cu_throttled_ids_to_container::h00880607096142e5 // rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx>::redump_cu_throttled_ids_to_container::h00880607096142e5 // sym.rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler_Tx_::redump_cu_throttled_ids_to_container::h00880607096142e5 // sym.rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler_Tx_::redump_cu_throttled_ids_to_container::h00880607096142e5(0x0, 0x0, 0x0, 0x0, 0x0)
        goto loc_0x0068db7b;
        return rax;
    loc_0x0068db7b:
        v = qword [rbx + 0x2d8] - 0
        if (!v) goto loc_0x68db9c // likely
        goto loc_0x0068db85;
    loc_0x0068db9c:
        // CODE XREFS from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68db79(x), 0x68db83(x)
        rdi = var_c0h // int64_t arg1
        rsi = r14     // int64_t arg2
        sym.__hashbrown::map::HashMap_K_V_S_A__as_core::clone::Clone_::clone::hf29d1bdc1edfab77 () // _<hashbrown::map::HashMap<K,V,S,A> as core::clone::Clone>::clone::hf29d1bdc1edfab77 // sym.__hashbrown::map::HashMap_K_V_S_A__as_core::clone::Clone_::clone::hf29d1bdc1edfab77(0x100780c0, 0x0, 0x0, 0x0)
        r14 = rbx + 0x428
        rsi = qword [rbx + 0x430]
        v = rsi & rsi
        if (!v) goto loc_0x68dbed // likely
        goto loc_0x0068dbbf;
    loc_0x0068dbed:
        // CODE XREFS from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68dbbd(x), 0x68dbd6(x)
        xmm0 = xmmword [var_c0h]
        xmm1 = xmmword [var_d0h]
        xmm2 = xmmword [var_e0h]
        xmm3 = xmmword [var_f0h]
        xmmword [r14 + 0x30] = xmm3
        xmmword [r14 + 0x20] = xmm2
        xmmword [r14 + 0x10] = xmm1
        xmmword [r14] = xmm0
        r15 = qword [rbx + 0x2c0]
        v = r15 & r15
        if (!v) goto loc_0x68dc87 // unlikely
        goto loc_0x0068dc34;
    loc_0x0068dc87:
        // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68dc32(x)
        eax = 8
        
    loc_0x0068dc8c:
        // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68dc52(x)
        rcx = rbx + 0x2b0
        qword [var_40h] = rcx
        qword [var_18h] = r15
        qword [var_20h] = rax
        qword [var_28h] = 0
        rax = rbx + 0x468
        qword [var_58h] = rax
        qword [var_38h] = r12
        goto loc_0x0068dc54;
        goto loc_0x0068dbd8;
        return rax;
    loc_0x0068db85: // orphan
         rdi = rbx                // int64_t arg1
         rsi = r12                // int64_t arg2
         rdx = r14                // int64_t arg3
         rcx = r8                 // arg5
         r8d = 1                  // int64_t arg5
         sym.rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler_Tx_::redump_cu_throttled_ids_to_container::h00880607096142e5 () // rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx>::redump_cu_throttled_ids_to_container::h00880607096142e5 // sym.rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler_Tx_::redump_cu_throttled_ids_to_container::h00880607096142e5(0x0, 0x0, 0x0, 0x0, 0x1)

    loc_0x0068dbbf: // orphan
         rax = rsi + rsi*4
         rax = rax*8 + 0x37
         rax &= 0xfffffffffffffff0
         rsi += rax
         rsi += 0x11
         if (!v) 
         goto loc_0x0068dbd8;
    loc_0x0068dbd8: // orphan
         rdi = qword [rbx + 0x428]
         rdi -= rax
         edx = 0x10
         qword [0x00e37488] ()    // [0xe37488:8]=0 // 0xe37488(0x0, 0x0, 0x10, 0x0)

    loc_0x0068dc34: // orphan
         r14 = r15 * 0x238
         qword [0x00e37508] ()    // [0xe37508:8]=0 // 0xe37508(0x0, 0x0, 0x0, 0x0)
         esi = 8
         rdi = r14
         qword [0x00e37510] ()    // [0xe37510:8]=0 // 0xe37510(0x0, 0x8, 0x0, 0x0)
         v = rax & rax
         if (v) 
         goto loc_0x0068dc54;
    loc_0x0068dc54: // orphan
         edi = 8
         rsi = r14
         qword [reloc.fixup.UHHu] () // [0xe37788:8]=0 // reloc.fixup.UHHu(0x8, 0x0, 0x0, 0x0)

    loc_0x0068dcc0: // orphan
         // CODE XREFS from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68e674(x), 0x68e7c2(x), 0x68e7ef(x), 0x68e80c(x)
         rdi = var_730h           // int64_t arg1
         rsi = qword [var_40h]    // int64_t arg2
         sym.min_max_heap::MinMaxHeap_T_::pop_max::h2ed8c6643e07a3e8 () // min_max_heap::MinMaxHeap<T>::pop_max::hd6b6e1453d82ddb4 // sym.min_max_heap::MinMaxHeap_T_::pop_max::h2ed8c6643e07a3e8(0x10078730, 0x2b0)
         v = dword [var_8b0h] - 2
         if (!v) 
         goto loc_0x0068dce0;
    loc_0x0068dce0: // orphan
         edx = 0x238
         rdi = var_2f8h
         rsi = var_730h
         qword [memcpy] ()        // [0xe37450:8]=0 // 0xe37450(0x100782f8, 0x10078730, 0x238, 0x0)
         rax = qword [var_2f8h]
         v = rax - qword [r12 + 0x10]
         jae 0x68e948             // likely

         goto loc_0x0068dd0e;
    loc_0x0068dd0e: // orphan
         rcx = qword [r12 + 8]
         rax = rax * 0x2a0
         v = dword [rcx + rax + 0x210] - 3
         if (!v) 
         goto loc_0x0068dd28;
    loc_0x0068dd28: // orphan
         rcx += rax
         qword [var_50h] = rcx
         rax = qword [rcx + 0x98]
         qword [var_48h] = rax
         rdi = var_c0h            // int64_t arg1
         rsi = var_308h
         sym.rakurai_scheduler::scheduler_1::rakurai_scheduler::get_writable_accts::h3d7a4096e22d7ac1 () // sym.rakurai_scheduler::scheduler_1::rakurai_scheduler::get_writable_accts::h3d7a4096e22d7ac1(0x100780c0)
         r12 = qword [var_c0h]
         rcx = qword [var_c8h]
         v = rcx & rcx
         qword [var_10h] = rcx
         if (!v) 
         goto loc_0x0068dd6b;
    loc_0x0068dd6b: // orphan
         rax = rcx
         rax <<<= 5
         rcx += rax
         rcx += 0x31
         qword [var_8h] = rcx
         rcx = r12
         rcx -= rax
         rcx += 0xffffffffffffffe0
         qword [var_30h] = rcx
         eax = 0x10
         qword [rsp] = rax
         r14 = qword [var_d8h]
         v = r14 & r14
         if (v) 
         goto loc_0x0068dda3;
    loc_0x0068dda3: // orphan
         
         goto loc_0x0068ddb0;
    loc_0x0068ddb0: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68dd69(x)
         qword [rsp] = 0
         r14 = qword [var_d8h]
         v = r14 & r14
         if (!v) 
         goto loc_0x0068ddc9;
    loc_0x0068ddc9: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68dda1(x)
         xmm0 = xmmword [r12]
         pmovmskb r15d xmm0
         r15d = !r15d
         r13 = r12 + 0x10
         
         goto loc_0x0068ddf0;
    loc_0x0068ddf0: // orphan
         // CODE XREFS from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68de81(x), 0x68e0dd(x)
         rsi &= rcx
         xmm1 = xmmword [rax + rsi]
         xmm2 = xmm1
         xmm2 == xmm0
         pmovmskb r8d xmm2
         v = r8d & r8d
         if (!v) 
         goto loc_0x0068de0a;
    loc_0x0068de0a: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68de51(x)
         r9d = __builtin_ctz(r8d)
         r9 += rsi
         r9 &= rcx
         r9 ~= r9
         r9 = r9 + r9*4
         xmm2 = xmmword [rdx + r9*8]
         xmm3 = xmmword [rdx + r9*8 + 0x10]
         xmm3 ^= xmmword [var_90h]
         xmm2 ^= xmmword [var_80h]
         por xmm2 xmm3
         ptest xmm2 xmm2
         if (!v) 
         goto loc_0x0068de46;
    loc_0x0068de46: // orphan
         r9d = r8 - 1
         r9w &= r8w
         r8d = r9d
         if (v) 
         goto loc_0x0068de53;
    loc_0x0068de53: // orphan
         

    loc_0x0068de60: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68de08(x)
         pcmpeqd xmm2 xmm2
         xmm1 == xmm2
         pmovmskb r8d xmm1
         v = r8d & r8d
         if (v) 
         goto loc_0x0068de76;
    loc_0x0068de76: // orphan
         rsi += rdi
         rsi += 0x10
         rdi += 0x10
         
         goto loc_0x0068de90;
    loc_0x0068de90: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68de44(x)
         rax = qword [rax + r9*8 - 8]
         rax += qword [var_48h]
         v = rax - rbp
         if (((unsigned) v) < 0) 
         goto loc_0x0068dea3;
    loc_0x0068dea3: // orphan
         
         goto loc_0x0068deb0;
    loc_0x0068deb0: // orphan
         // CODE XREFS from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68dddc(x), 0x68e10d(x)
         v = r15w & r15w
         if (v) 
         goto loc_0x0068deb6;
    loc_0x0068deb6: // orphan
         

    loc_0x0068dec0: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68dedd(x)
         xmm0 = xmmword [r13]
         pmovmskb r15d xmm0
         r12 += 0xfffffffffffffe00
         r13 += 0x10
         v = r15d - 0xffff
         if (!v) 
         goto loc_0x0068dedf;
    loc_0x0068dedf: // orphan
         r15d = !r15d

    loc_0x0068dee2: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68deb4(x)
         eax = __builtin_ctz(r15d)
         eax <<<= 5
         rcx = r12
         rcx -= rax
         xmm0 = xmmword [rcx - 0x20]
         xmm1 = xmmword [rcx - 0x10]
         xmmword [var_d0h] = xmm1
         xmmword [var_c0h] = xmm0
         xmmword [var_90h] = xmm1
         xmmword [var_80h] = xmm0
         rbp = qword [rbx + 0x4c8]
         v = qword [rbx + 0x480] - 0
         if (!v) 
         goto loc_0x0068df33;
    loc_0x0068df33: // orphan
         xmm0 = xmmword [rbx + 0x488]
         pshufd xmm1 xmm0 0x44
         xmm1 ^= xmmword [str.uespemosarenegylHalfClosedRemote]
         xmmword [var_c0h] = xmm1
         pshufd xmm1 xmm0 0xee
         xmm1 ^= xmmword [0x00358770]
         xmmword [var_d0h] = xmm1
         xmmword [var_e0h] = xmm0
         rax = var_d0h
         xmm0 ^= xmm0
         xmmword [rax + 0x20] = xmm0
         qword [rax + 0x30] = 0
         rdi = var_80h            // int64_t arg1
         rsi = var_c0h            // int64_t arg2
         sym.__solana_address::Address_as_core::hash::Hash_::hash::he1902b712b8bd61c () // _<solana_address::Address as core::hash::Hash>::hash::he1902b712b8bd61c // sym.__solana_address::Address_as_core::hash::Hash_::hash::he1902b712b8bd61c(0x10078080, 0x100780c0)
         rdi = qword [var_f0h]
         rdi <<<= 0x38
         rdi |= qword [var_f8h]
         rcx = qword [var_d0h]
         rax = qword [var_d8h]
         rax ^= rdi
         rsi = qword [var_c0h]
         rsi += rcx
         rdx = qword [var_c8h]
         rcx <<<= rcx
         rdx += rax
         rcx ^= rsi
         rax <<<= rax
         rax ^= rdx
         rsi <<<= rsi
         rdx += rcx
         rsi += rax
         rcx <<<= rcx
         rcx ^= rdx
         rax <<<= rax
         rdx <<<= rdx
         rax ^= rsi
         rsi ^= rdi
         rdx ^= 0xff
         rsi += rcx
         rdx += rax
         rcx <<<= rcx
         rcx ^= rsi
         rax <<<= rax
         rsi <<<= rsi
         rax ^= rdx
         rdx += rcx
         rcx <<<= rcx
         rsi += rax
         rcx ^= rdx
         rax <<<= rax
         rax ^= rsi
         rdx <<<= rdx
         rsi += rcx
         rdx += rax
         rcx <<<= rcx
         rcx ^= rsi
         rax <<<= rax
         rsi <<<= rsi
         rax ^= rdx
         rdx += rcx
         rcx <<<= rcx
         rsi += rax
         rcx ^= rdx
         rax <<<= rax
         rax ^= rsi
         rdx <<<= rdx
         rsi += rcx
         rdx += rax
         rcx <<<= rcx
         rcx ^= rsi
         rax <<<= rax
         rax ^= rdx
         rdx += rcx
         rcx <<<= rcx
         rax <<<= rax
         rsi = rdx
         rsi <<<= rsi
         rsi ^= rcx
         rsi ^= rax
         rsi ^= rdx
         rdx = rsi
         rdx >>>= 0x39
         rax = qword [rbx + 0x468]
         rcx = qword [rbx + 0x470]
         movd xmm0 edx
         xmm1 ^= xmm1
         pshufb xmm0 xmm1
         rdx = rax - 0x28
         edi = 0
         
         goto loc_0x0068e0f0;
    loc_0x0068e0f0: // orphan
         // CODE XREFS from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68de70(x), 0x68df2d(x)
         eax = 0
         rax += qword [var_48h]
         v = rax - rbp
         jae 0x68e1b0             // unlikely

         goto loc_0x0068e100;
    loc_0x0068e100: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68de9d(x)
         eax = r15 - 1
         eax &= r15d
         r15d = eax
         r14--
         if (v) 
         goto loc_0x0068e113;
    loc_0x0068e113: // orphan
         // CODE XREFS from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68dda3(x), 0x68ddc3(x)
         v = qword [var_10h] - 0
         al = v == 0
         rsi = qword [var_8h]
         v = rsi & rsi
         cl = v == 0
         cl |= al
         if (v) 
         goto loc_0x0068e12b;
    loc_0x0068e12b: // orphan
         rdi = qword [var_30h]
         rdx = qword [rsp]
         qword [0x00e37488] ()    // [0xe37488:8]=0 // 0xe37488(0xffffffffffffffe0, 0x0, 0x0, 0x0)

    loc_0x0068e13a: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68e129(x)
         rdi = var_c0h            // int64_t arg1
         rsi = var_308h
         sym.rakurai_scheduler::scheduler_1::rakurai_scheduler::get_writable_accts::h3d7a4096e22d7ac1 () // sym.rakurai_scheduler::scheduler_1::rakurai_scheduler::get_writable_accts::h3d7a4096e22d7ac1(0x100780c0)
         r12 = qword [var_c0h]
         rcx = qword [var_c8h]
         v = rcx & rcx
         qword [var_10h] = rcx
         if (!v) 
         goto loc_0x0068e16d;
    loc_0x0068e16d: // orphan
         rax = rcx
         rax <<<= 5
         rbp = rax + rcx
         rbp += 0x31
         rcx = r12
         rcx -= rax
         rcx += 0xffffffffffffffe0
         qword [rsp] = rcx
         eax = 0x10
         qword [var_8h] = rax
         r14 = qword [var_d8h]
         v = r14 & r14
         if (v) 
         goto loc_0x0068e1a5;
    loc_0x0068e1a5: // orphan
         
         goto loc_0x0068e1b0;
    loc_0x0068e1b0: // orphan
         // CODE XREFS from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68dea3(x), 0x68e0fa(x)
         r14 = qword [var_2f8h]
         rdi = var_530h           // 0x530 // method.rocksdb::Random.GetTLSInstance__::tls_instance
                                  rocksdb::Random::GetTLSInstance()::tls_instance // int64_t arg1
         rsi = var_308h           // int64_t arg2
         sym._ZN115__LT_solana_runtime_transaction..runtime_transaction..RuntimeTransaction_LT_T_GT__u20_as_u20_core..clone..Clone_GT_5clone17h5ba4e1784108ccceE_1 () // _<solana_runtime_transaction::runtime_transaction::RuntimeTransaction<T> as core::clone::Clone>::clone::h5ba4e1784108ccce // sym._ZN115__LT_solana_runtime_transaction..runtime_transaction..RuntimeTransaction_LT_T_GT__u20_as_u20_core..clone..Clone_GT_5clone17h5ba4e1784108ccceE_1(0x10078530, 0x10078308)
         v = byte [var_508h] - 1
         r12 = qword [var_38h]
         if (v) 
         goto loc_0x0068e1e0;
    loc_0x0068e1e0: // orphan
         rax = var_308h
         xmm0 = xmmword [rax + 0x201]
         xmm1 = xmmword [rax + 0x211]
         xmmword [var_b0h] = xmm1
         xmmword [var_a0h] = xmm0
         bpl = 1
         
         goto loc_0x0068e220;
    loc_0x0068e220: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68e167(x)
         qword [var_8h] = 0
         r14 = qword [var_d8h]
         v = r14 & r14
         if (!v) 
         goto loc_0x0068e23a;
    loc_0x0068e23a: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68e19f(x)
         xmm0 = xmmword [r12]
         pmovmskb eax xmm0
         eax = !eax
         r13 = r12 + 0x10
         
         goto loc_0x0068e250;
    loc_0x0068e250: // orphan
         // CODE XREFS from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68e2cd(x), 0x68e516(x)
         rsi &= rcx
         xmm1 = xmmword [rax + rsi]
         xmm2 = xmm1
         xmm2 == xmm0
         pmovmskb r8d xmm2
         v = r8d & r8d
         if (!v) 
         goto loc_0x0068e26a;
    loc_0x0068e26a: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68e2ab(x)
         r9d = __builtin_ctz(r8d)
         r9 += rsi
         r9 &= rcx
         r9 ~= r9
         r9 = r9 + r9*4
         xmm2 = xmmword [rdx + r9*8]
         xmm3 = xmmword [rdx + r9*8 + 0x10]
         xmm3 ^= xmmword [var_70h]
         xmm2 ^= xmmword [var_60h]
         por xmm2 xmm3
         ptest xmm2 xmm2
         if (!v) 
         goto loc_0x0068e2a0;
    loc_0x0068e2a0: // orphan
         r9d = r8 - 1
         r9w &= r8w
         r8d = r9d
         if (v) 
         goto loc_0x0068e2ad;
    loc_0x0068e2ad: // orphan
         

    loc_0x0068e2b0: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68e268(x)
         pcmpeqd xmm2 xmm2
         xmm1 == xmm2
         pmovmskb r8d xmm1
         v = r8d & r8d
         if (v) 
         goto loc_0x0068e2c2;
    loc_0x0068e2c2: // orphan
         rsi += rdi
         rsi += 0x10
         rdi += 0x10
         
         goto loc_0x0068e2d0;
    loc_0x0068e2d0: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68e29e(x)
         rdx = qword [rax + r9*8 - 8]
         rdx += qword [var_48h]   // int64_t arg3
         xmm0 = xmmword [var_60h]
         xmm1 = xmmword [var_70h]
         xmmword [var_d0h] = xmm1
         xmmword [var_c0h] = xmm0
         rdi = qword [var_58h]    // int64_t arg1
         rsi = var_c0h            // int64_t arg2
         sym.hashbrown::map::HashMap_K_V_S_A_::insert::h53c55f6be3618938 () // hashbrown::map::HashMap<K,V,S,A>::insert::h53c55f6be3618938 // sym.hashbrown::map::HashMap_K_V_S_A_::insert::h53c55f6be3618938(0x468, 0x100780c0, 0x5855a7)

    loc_0x0068e30a: // orphan
         // CODE XREFS from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68e2c0(x), 0x68e36d(x)
         eax = r15 - 1
         eax &= r15d
         r14--
         if (!v) 
         goto loc_0x0068e31a;
    loc_0x0068e31a: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68e24b(x)
         v = ax & ax
         if (v) 
         goto loc_0x0068e31f;
    loc_0x0068e31f: // orphan
         

    loc_0x0068e320: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68e33a(x)
         xmm0 = xmmword [r13]
         pmovmskb eax xmm0
         r12 += 0xfffffffffffffe00
         r13 += 0x10
         v = eax - 0xffff
         if (!v) 
         goto loc_0x0068e33c;
    loc_0x0068e33c: // orphan
         eax = !eax

    loc_0x0068e33e: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68e31d(x)
         r15d = eax
         eax = __builtin_ctz(r15d)
         eax <<<= 5
         rcx = r12
         rcx -= rax
         xmm0 = xmmword [rcx - 0x20]
         xmm1 = xmmword [rcx - 0x10]
         xmmword [var_70h] = xmm1
         xmmword [var_60h] = xmm0
         v = qword [rbx + 0x480] - 0
         if (!v) 
         goto loc_0x0068e36f;
    loc_0x0068e36f: // orphan
         xmm0 = xmmword [rbx + 0x488]
         pshufd xmm1 xmm0 0x44
         xmm1 ^= xmmword [str.uespemosarenegylHalfClosedRemote]
         xmmword [var_c0h] = xmm1
         pshufd xmm1 xmm0 0xee
         xmm1 ^= xmmword [0x00358770]
         xmmword [var_d0h] = xmm1
         xmmword [var_e0h] = xmm0
         rax = var_d0h
         xmm0 ^= xmm0
         xmmword [rax + 0x20] = xmm0
         qword [rax + 0x30] = 0
         rdi = var_60h            // int64_t arg1
         rsi = var_c0h            // int64_t arg2
         sym.__solana_address::Address_as_core::hash::Hash_::hash::he1902b712b8bd61c () // _<solana_address::Address as core::hash::Hash>::hash::he1902b712b8bd61c // sym.__solana_address::Address_as_core::hash::Hash_::hash::he1902b712b8bd61c(0x10078060, 0x100780c0)
         rdi = qword [var_f0h]
         rdi <<<= 0x38
         rdi |= qword [var_f8h]
         rcx = qword [var_d0h]
         rax = qword [var_d8h]
         rax ^= rdi
         rsi = qword [var_c0h]
         rsi += rcx
         rdx = qword [var_c8h]
         rcx <<<= rcx
         rdx += rax
         rcx ^= rsi
         rax <<<= rax
         rax ^= rdx
         rsi <<<= rsi
         rdx += rcx
         rsi += rax
         rcx <<<= rcx
         rcx ^= rdx
         rax <<<= rax
         rdx <<<= rdx
         rax ^= rsi
         rsi ^= rdi
         rdx ^= 0xff
         rsi += rcx
         rdx += rax
         rcx <<<= rcx
         rcx ^= rsi
         rax <<<= rax
         rsi <<<= rsi
         rax ^= rdx
         rdx += rcx
         rcx <<<= rcx
         rsi += rax
         rcx ^= rdx
         rax <<<= rax
         rax ^= rsi
         rdx <<<= rdx
         rsi += rcx
         rdx += rax
         rcx <<<= rcx
         rcx ^= rsi
         rax <<<= rax
         rsi <<<= rsi
         rax ^= rdx
         rdx += rcx
         rcx <<<= rcx
         rsi += rax
         rcx ^= rdx
         rax <<<= rax
         rax ^= rsi
         rdx <<<= rdx
         rsi += rcx
         rdx += rax
         rcx <<<= rcx
         rcx ^= rsi
         rax <<<= rax
         rax ^= rdx
         rdx += rcx
         rcx <<<= rcx
         rax <<<= rax
         rsi = rdx
         rsi <<<= rsi
         rsi ^= rcx
         rsi ^= rax
         rsi ^= rdx
         rdx = rsi
         rdx >>>= 0x39
         rax = qword [rbx + 0x468]
         rcx = qword [rbx + 0x470]
         movd xmm0 edx
         xmm1 ^= xmm1
         pshufb xmm0 xmm1
         rdx = rax - 0x28
         edi = 0
         
         goto loc_0x0068e520;
    loc_0x0068e520: // orphan
         // CODE XREFS from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68e1a5(x), 0x68e234(x), 0x68e314(x)
         v = qword [var_10h] - 0
         al = v == 0
         v = rbp & rbp
         cl = v == 0
         cl |= al
         if (v) 
         goto loc_0x0068e533;
    loc_0x0068e533: // orphan
         rdi = qword [rsp]
         rsi = rbp                // rsp
         rdx = qword [var_8h]
         qword [0x00e37488] ()    // [0xe37488:8]=0 // 0xe37488(0xffffffffffffffe0, 0x10078000, 0x0, 0x0)

    loc_0x0068e545: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68e531(x)
         r13 = qword [var_50h]
         r15 = qword [r13 + 0x90]
         r14 = qword [r13 + 0x210] // segment.GNU_EH_FRAME
         r12 = qword [var_2f8h]
         v = r14 - 2
         if (v) 
         goto loc_0x0068e566;
    loc_0x0068e566: // orphan
         r13 += 0xa0
         edx = 0x200
         rbp = var_c0h
         rdi = rbp
         rsi = r13
         qword [memcpy] ()        // [0xe37450:8]=0 // 0xe37450(0x100780c0, 0xa0, 0x200, 0x0)
         edx = 0x200
         rdi = r13
         rsi = var_308h
         qword [memmove] ()       // [0xe37768:8]=0 // 0xe37768(0xa0, 0x10078300, 0x200, 0x0)
         r13 = qword [var_230h]
         rdi = rbp
         sym.core::ptr::drop_in_place_core::option::Option_solana_runtime_transaction::runtime_transaction::RuntimeTransaction_agave_transaction_view::resolved_transaction_view::ResolvedTransactionView_alloc::sync::Arc_alloc::vec::Vec_u8______::h6a8a595509c16308__clone_llvm6465956085279843449_ () // core::ptr::drop_in_place<core::option::Option<solana_runtime_transaction::runtime_transaction::RuntimeTransaction<agave_transaction_view::resolved_transaction_view::ResolvedTransactionView<alloc::sync::Arc<alloc::vec::Vec<u8>>>>>>::h6a8a595509c16308 [clone llvm6465956085279843449] // sym.core::ptr::drop_in_place_core::option::Option_solana_runtime_transaction::runtime_transaction::RuntimeTransaction_agave_transaction_view::resolved_transaction_view::ResolvedTransactionView_alloc::sync::Arc_alloc::vec::Vec_u8______::h6a8a595509c16308__clone_llvm6465956085279843449_(0x100780c0)
         v = r13d - 2
         if (v) 
         goto loc_0x0068e5b6;
    loc_0x0068e5b6: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68e564(x)
         qword [var_530h] = 1     // method.rocksdb::Random.GetTLSInstance__::tls_instance // [0x530:8]=0
         qword [var_538h] = r15   // sym.rocksdb::ThreadLocalPtr::StaticMeta::tls_ // [0x538:8]=0
         qword [var_540h] = r12   // sym.tokio::runtime::park::CURRENT_PARKER::__u7b__u7b_constant_u7d__u7d_::__u7b__u7b_closure_u7d__u7d_::__RUST_STD_INTERNAL_VAL::h14c4a1b8de9c85c1__clone_llvm6745701240000842560_ // [0x540:8]=0x1200000449 // "I\x04"
         rdi = var_c0h            // int64_t arg1
         rsi = qword [var_38h]    // int64_t arg2
         rdx = var_530h           // 0x530 // method.rocksdb::Random.GetTLSInstance__::tls_instance
                                  rocksdb::Random::GetTLSInstance()::tls_instance // int64_t arg3
         sym.__rakurai_scheduler::rakurai_transaction_state_container::RakuraiTransactionContainer_Tx__as_rakurai_scheduler::rakurai_transaction_state_container::RakuraiStateContainer_Tx__::push_ids_into_queue::h43cddeec156d36f5 () // _<rakurai_scheduler::rakurai_transaction_state_container::RakuraiTransactionContainer<Tx> as rakurai_scheduler::rakurai_transaction_state_container::RakuraiStateContainer<Tx>>::push_ids_into_queue::h43cddeec156d36f5 // sym.__rakurai_scheduler::rakurai_transaction_state_container::RakuraiTransactionContainer_Tx__as_rakurai_scheduler::rakurai_transaction_state_container::RakuraiStateContainer_Tx__::push_ids_into_queue::h43cddeec156d36f5(0x100780c0, 0x0, 0x10078530)
         r12 = qword [var_c8h]
         rax = 0x8000000000000000
         v = r12 - rax
         if (!v) 
         goto loc_0x0068e603;
    loc_0x0068e603: // orphan
         r15 = qword [var_d0h]
         r13 = qword [var_d8h]
         v = r13 & r13
         if (!v) 
         goto loc_0x0068e618;
    loc_0x0068e618: // orphan
         rbp = r15 + 8
         
         goto loc_0x0068e620;
    loc_0x0068e620: // orphan
         // CODE XREFS from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68e630(x), 0x68e641(x)
         rbp += 0x18
         r13--
         if (!v) 
         goto loc_0x0068e629;
    loc_0x0068e629: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68e61c(x)
         rsi = qword [var_bp_8h]
         v = rsi & rsi
         if (!v) 
         goto loc_0x0068e632;
    loc_0x0068e632: // orphan
         rdi = qword [rbp]
         edx = 1
         qword [0x00e37488] ()    // [0xe37488:8]=0 // 0xe37488(0xffffffffffffffe0, 0x0, 0x1, 0x0)
         
         goto loc_0x0068e650;
    loc_0x0068e650: // orphan
         // CODE XREFS from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68e616(x), 0x68e627(x)
         v = r12 & r12
         if (!v) 
         goto loc_0x0068e655;
    loc_0x0068e655: // orphan
         r12 <<<= 3
         rsi = r12 + r12*2
         edx = 8
         rdi = r15
         qword [0x00e37488] ()    // [0xe37488:8]=0 // 0xe37488(0x0, 0x0, 0x8, 0x0)

    loc_0x0068e66b: // orphan
         // CODE XREFS from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68e601(x), 0x68e653(x)
         v = r14d - 2
         r12 = qword [var_38h]
         if (!v) 
         goto loc_0x0068e67a;
    loc_0x0068e67a: // orphan
         rax = qword [var_308h]
         lock dec qword [rax]
         if (v) 
         goto loc_0x0068e68c;
    loc_0x0068e68c: // orphan
         rdi = var_308h
         qword [0x00e38178] ()    // [0xe38178:8]=0 // 0xe38178(0x10078308, 0x0, 0x0, 0x0)
         
         goto loc_0x0068e69f;
    loc_0x0068e69f: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68e1da(x)
         ebp = 0

    loc_0x0068e6a1: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68e20d(x)
         r15 = qword [var_300h]
         qword [var_c0h] = r14
         edx = 0x200
         r14 = var_d0h
         rdi = r14
         rsi = var_530h           // 0x530 // method.rocksdb::Random.GetTLSInstance__::tls_instance
                                  rocksdb::Random::GetTLSInstance()::tls_instance
         qword [memcpy] ()        // [0xe37450:8]=0 // 0xe37450(0x100780d0, 0x10078530, 0x200, 0x0)
         qword [var_c8h] = r15
         byte [var_2d0h] = bpl    // [0x2d0:1]=0 // section..dynsym
                                  [02] -r-- section size 9672 named .dynsym
         xmm0 = xmmword [var_a0h]
         xmm1 = xmmword [var_b0h]
         xmmword [r14 + 0x211] = xmm1
         xmmword [r14 + 0x201] = xmm0
         r14 = qword [var_28h]
         v = r14 - qword [var_18h]
         if (v) 
         goto loc_0x0068e70f;
    loc_0x0068e70f: // orphan
         rdi = var_18h
         qword [0x00e37e08] ()    // [0xe37e08:8]=0 // 0xe37e08(0x10078018, 0x0, 0x0, 0x0)

    loc_0x0068e71a: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68e70d(x)
         v = qword [var_10h] - 0
         bpl = v == 0
         rdi = r14 * 0x238
         rdi += qword [var_20h]
         edx = 0x238
         rsi = var_c0h
         qword [memcpy] ()        // [0xe37450:8]=0 // 0xe37450(0x0, 0x100780c0, 0x238, 0x0)
         r14++
         qword [var_28h] = r14
         rsi = qword [var_8h]
         v = rsi & rsi
         al = v == 0
         al |= bpl
         rdi = qword [var_30h]
         if (v) 
         goto loc_0x0068e760;
    loc_0x0068e760: // orphan
         rdx = qword [rsp]
         qword [0x00e37488] ()    // [0xe37488:8]=0 // 0xe37488(0x0, 0x0, 0xffffffffffffffe0, 0x0)

    loc_0x0068e76a: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68e75e(x)
         rax = qword [var_308h]
         lock dec qword [rax]
         if (v) 
         goto loc_0x0068e778;
    loc_0x0068e778: // orphan
         rdi = var_308h
         qword [0x00e38178] ()    // [0xe38178:8]=0 // 0xe38178(0x10078308, 0x0, 0x0, 0x0)

    loc_0x0068e786: // orphan
         // CODE XREFS from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68e686(x), 0x68e69a(x), 0x68e776(x)
         rax = qword [var_320h]
         v = rax & rax
         if (!v) 
         goto loc_0x0068e793;
    loc_0x0068e793: // orphan
         rdi = qword [var_328h]
         rax += rax
         rsi = rax + rax*2
         edx = 2
         qword [0x00e37488] ()    // [0xe37488:8]=0 // 0xe37488(0x0, 0x0, 0x2, 0x0)

    loc_0x0068e7ad: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68e791(x)
         rsi = qword [var_348h]
         rax = 0x8000000000000000
         v = rsi - rax
         if (!v) 
         goto loc_0x0068e7c8;
    loc_0x0068e7c8: // orphan
         v = rsi & rsi
         if (!v) 
         goto loc_0x0068e7cd;
    loc_0x0068e7cd: // orphan
         rdi = qword [var_350h]
         rsi <<<= 5
         edx = 1
         qword [0x00e37488] ()    // [0xe37488:8]=0 // 0xe37488(0x0, 0x0, 0x1, 0x0)

    loc_0x0068e7e4: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68e7cb(x)
         rsi = qword [var_360h]
         v = rsi & rsi
         if (!v) 
         goto loc_0x0068e7f5;
    loc_0x0068e7f5: // orphan
         rdi = qword [var_368h]
         rsi <<<= 5
         edx = 1
         qword [0x00e37488] ()    // [0xe37488:8]=0 // 0xe37488(0x0, 0x0, 0x1, 0x0)
         
         goto loc_0x0068e811;
    loc_0x0068e811: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68dcda(x)
         r15 = qword [var_20h]
         rax = qword [var_28h]
         qword [var_28h] = 0
         r13 = rax * 0x238
         r12 = r15 + r13
         qword [var_2f8h] = r15
         qword [var_300h] = r12
         rcx = var_18h
         qword [var_308h] = rcx
         qword [var_310h] = rax
         qword [var_318h] = 0
         v = rax & rax
         if (!v) 
         goto loc_0x0068e865;
    loc_0x0068e865: // orphan
         r15 += 0x238
         r14 = var_c0h

    loc_0x0068e880: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68e8b0(x)
         rsi = r15 - 0x238
         edx = 0x238
         rdi = r14
         qword [memcpy] ()        // [0xe37450:8]=0 // 0xe37450(0x0, 0xfffffffffffffdc8, 0x238, 0x0)
         rdi = qword [var_40h]    // int64_t arg1
         rsi = r14                // int64_t arg2
         sym.min_max_heap::MinMaxHeap_T_::push::hc85cb8b74b863cb4 () // min_max_heap::MinMaxHeap<T>::push::hc85cb8b74b863cb4 // sym.min_max_heap::MinMaxHeap_T_::push::hc85cb8b74b863cb4(0x0, 0x0, 0x238)
         r15 += 0x238
         r13 += 0xfffffffffffffdc8
         if (v) 
         goto loc_0x0068e8b2;
    loc_0x0068e8b2: // orphan
         qword [var_2f8h] = r12

    loc_0x0068e8ba: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68e863(x)
         rdi = var_2f8h           // int64_t arg1
         sym.__alloc::vec::drain::Drain_T_A__as_core::ops::drop::Drop_::drop::h4bcafabd5d475ac8 () // _<alloc::vec::drain::Drain<T,A> as core::ops::drop::Drop>::drop::hd23d6f95258de5e2 // sym.__alloc::vec::drain::Drain_T_A__as_core::ops::drop::Drop_::drop::h4bcafabd5d475ac8(0x100782f8, 0x0)
         rdi = rbx                // int64_t arg1
         sym.__rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler_Tx__as_rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait_Tx__::refresh_if_needed::h2d5c582f025eaede () // _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::refresh_if_needed::h2d5c582f025eaede // sym.__rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler_Tx__as_rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait_Tx__::refresh_if_needed::h2d5c582f025eaede(0x0)
         rdi = qword [var_20h]
         r15 = qword [var_28h]
         rdi += 0x10
         r15++

    loc_0x0068e8e0: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68e8f8(x)
         v = r15 - 1
         if (!v) 
         goto loc_0x0068e8e6;
    loc_0x0068e8e6: // orphan
         r14 = rdi + 0x238
         r15--
         sym.core::ptr::drop_in_place_agave_transaction_view::resolved_transaction_view::ResolvedTransactionView_alloc::sync::Arc_alloc::vec::Vec_u8____::hca083dfe41042ebb__clone_llvm2028329540595395077_ () // core::ptr::drop_in_place<agave_transaction_view::resolved_transaction_view::ResolvedTransactionView<alloc::sync::Arc<alloc::vec::Vec<u8>>>>::hca083dfe41042ebb [clone llvm2028329540595395077] // sym.core::ptr::drop_in_place_agave_transaction_view::resolved_transaction_view::ResolvedTransactionView_alloc::sync::Arc_alloc::vec::Vec_u8____::hca083dfe41042ebb__clone_llvm2028329540595395077_(0x0)
         rdi = r14
         
         goto loc_0x0068e8fa;
    loc_0x0068e8fa: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68e8e4(x)
         rax = qword [var_18h]
         v = rax & rax
         if (!v) 
         goto loc_0x0068e904;
    loc_0x0068e904: // orphan
         rdi = qword [var_20h]
         rsi = rax * 0x238
         edx = 8
         qword [0x00e37488] ()    // [0xe37488:8]=0 // 0xe37488(0x1, 0x0, 0x8, 0x0)

    loc_0x0068e91b: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68e902(x)
         rsp += 0x968
         rbx = pop ()
         r12 = pop ()
         r13 = pop ()
         r14 = pop ()
         r15 = pop ()
         rbp = pop ()
         return

    loc_0x0068e92d: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68e5b0(x)
         rdi = rip - obj.anon.3d0e45e350003abe61cdebf49ac4d993.9.llvm.6465956085279843449 // 0x37b2be // "transaction is pendingFieldSet corrupted (this is a bug)migrating feature index within range of MIGRATION_FEATURE_IDScalled `Result::unwrap()` on an `Err` valuesignal found waiting giver, notifyingackpayloadJoinHandle polled after completionResetGoAwayIotracing::spanstream_iddepend"
         rdx = rip + obj.anon.3d0e45e350003abe61cdebf49ac4d993.11.llvm.6465956085279843449 // 0xdc86d0
         esi = 0x2d               // '-'
         qword [reloc.fixup.UHH0HHuHEHEHUfE] () // [0xe37778:8]=0 // reloc.fixup.UHH0HHuHEHEHUfE(0x37b2be, 0x2d, 0xdc86d0, 0x0)
         
         goto loc_0x0068e948;
    loc_0x0068e948: // orphan
         // CODE XREFS from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68dd08(x), 0x68dd22(x)
         rdi = rip - 0x3121f0     // "transaction must existsolBnkTxSchedRecvrakurai scheduler receiver abortedrakurai scheduler controller abortedtransaction not al" // 0x37c75f
         rdx = rip + 0x73b6d2     // 0xdca028
         esi = 0x16
         qword [reloc.fixup.UHH_HHuHEHEHE] () // [0xe37440:8]=0 // reloc.fixup.UHH_HHuHEHEHE(0x37c75f, 0x16, 0xdca028, 0x0)

    loc_0x0068e961: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68e946(x)
         ud2

        return rax;
}

