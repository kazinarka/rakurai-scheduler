// callconv: rax amd64 (rdi, rsi, rdx, rcx, r8, r9, xmm0, xmm1, xmm2, xmm3, xmm4);
void sym.rakurai_scheduler__scheduler_2__cooccurrence_graph__CooccurrenceGraph__process_transaction__h5735a33ec1376b76 (int64_t arg1, int64_t arg2, int64_t arg3) {
        // DATA XREF from reloc.fixup.UHSH8H @ +0x48(r)
        // rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGrap
        // h::process_transaction::h5735a33ec1376b76
        push (rbp)
        push (r15)
        push (r14)
        push (r13)
        push (r12)
        push (rbx)
        rsp -= 0x148
        rbx = rdi     // arg1
        rdx <<<= 5    // arg3
        rdx += rsi    // arg3
        rax = rdi + 0xf0 // arg1
        qword [var_130h] = rsi // arg2
        qword [var_138h] = rdx // arg3
        qword [var_140h] = rax
        rdi = var_18h // int64_t arg1
        rsi = var_130h // int64_t arg2
        sym.__alloc::vec::Vec_T__as_alloc::vec::spec_from_iter_nested::SpecFromIterNested_T_I__::from_iter::h4b81b6d1ed45b04c () // _<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter::h4b81b6d1ed45b04c // sym.__alloc::vec::Vec_T__as_alloc::vec::spec_from_iter_nested::SpecFromIterNested_T_I__::from_iter::h4b81b6d1ed45b04c(0x10077ea0, 0x10077fb8, 0x0)
        rcx = qword [var_28h]
        v = rcx & rcx
        if (!v) goto loc_0x5d58fa // likely
        goto loc_0x005d524a;
    loc_0x005d58fa:
        // CODE XREFS from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::process_transaction::h5735a33ec1376b76 @ 0x5d5244(x), 0x5d52ac(x)
        rsi = qword [var_18h]
        v = rsi & rsi
        if (!v) goto loc_0x5d5918 // likely
        goto loc_0x005d5904;
    loc_0x005d5918:
        // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::process_transaction::h5735a33ec1376b76 @ 0x5d5902(x)
        rsp += 0x148
        rbx = pop ()
        r12 = pop ()
        r13 = pop ()
        r14 = pop ()
        r15 = pop ()
        rbp = pop ()
        return
    loc_0x005d52a0: // orphan
         // CODE XREFS from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::process_transaction::h5735a33ec1376b76 @ 0x5d53ec(x), 0x5d577f(x)
         r14 += 0x20              // sym.tracing_core::dispatcher::CURRENT_STATE::__u7b__u7b_constant_u7d__u7d_::__u7b__u7b_closure_u7d__u7d_::__RUST_STD_INTERNAL_VAL::h90d4f31268b4f161 // "@"
         v = r14 - qword [var_c0h]
         if (!v) 
         goto loc_0x005d52b2;
    loc_0x005d52b2: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::process_transaction::h5735a33ec1376b76 @ 0x5d5290(x)
         xmm0 = xmmword [r14]
         xmm1 = xmmword [r14 + 0x10]
         xmmword [var_e0h] = xmm1
         xmmword [var_d0h] = xmm0
         rdi = var_30h            // int64_t arg1
         rsi = qword [var_c8h]    // int64_t arg2
         rdx = var_d0h            // int64_t arg3
         sym.hashbrown::rustc_entry::__impl_hashbrown::map::HashMap_K_V_S_A__::rustc_entry::ha40e9db56ddae184 () // hashbrown::rustc_entry::_<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry::ha40e9db56ddae184 // sym.hashbrown::rustc_entry::__impl_hashbrown::map::HashMap_K_V_S_A__::rustc_entry::ha40e9db56ddae184(0x10078030, 0x90, 0x100780d0)
         rax = qword [var_30h]
         v = rax & rax
         if (!v) 
         goto loc_0x005d52f7;
    loc_0x005d52f7: // orphan
         rsi = qword [var_38h]
         rcx = qword [var_40h]
         rdi = var_48h
         rdx = qword [rdi + 0x10]
         qword [var_120h] = rdx
         xmm0 = xmmword [rdi]
         xmmword [var_110h] = xmm0
         rdx = qword [rax]
         rdi = qword [rax + 8]
         r8 = rdi
         r8 &= rsi
         xmm0 = xmmword [rdx + r8]
         pmovmskb r9d xmm0
         v = r9d & r9d
         if (!v) 
         goto loc_0x005d533e;
    loc_0x005d533e: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::process_transaction::h5735a33ec1376b76 @ 0x5d589c(x)
         r9d = __builtin_ctz(r9d)
         r9 += r8
         r9 &= rdi
         r8d = byte [rdx + r9]
         v = r8b & r8b
         jns 0x5d58a4             // likely

         goto loc_0x005d5357;
    loc_0x005d5357: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::process_transaction::h5735a33ec1376b76 @ 0x5d58b7(x)
         rsi >>>= 0x39
         r10 = r9 - 0x10
         r10 &= rdi
         byte [rdx + r9] = sil
         byte [rdx + r10 + 0x10] = sil
         r9 ~= r9
         rdi = r9 + r9*4
         rsi = rdx + rdi*8
         r8b &= 1
         r8d = r8b
         qword [rdx + rdi*8 - 0x28] = rcx
         xmm0 = xmmword [var_110h]
         xmmword [rdx + rdi*8 - 0x20] = xmm0
         rcx = qword [var_120h]
         qword [rdx + rdi*8 - 0x10] = rcx
         qword [rdx + rdi*8 - 8] = 0
         xmm0 = xmmword [rax + 0x10]
         xmm1 = xmmword [0x00358350] // [0x358350:16]=-1
         pinsrq xmm1 r8 0
         psubq xmm0 xmm1
         xmmword [rax + 0x10] = xmm0
         
         goto loc_0x005d53d0;
    loc_0x005d53d0: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::process_transaction::h5735a33ec1376b76 @ 0x5d52f1(x)
         rsi = qword [var_38h]

    loc_0x005d53d5: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::process_transaction::h5735a33ec1376b76 @ 0x5d53c3(x)
         qword [rsi - 8]++
         rcx = qword [rsp]
         rcx++
         r15 = qword [var_28h]
         qword [rsp] = rcx
         v = rcx - r15
         jae 0x5d52a0             // likely

         goto loc_0x005d53f2;
    loc_0x005d53f2: // orphan
         r13 = qword [var_20h]
         rbp = qword [rsp]
         rbp <<<= 5               // sym.tracing_core::dispatcher::CURRENT_STATE::__u7b__u7b_constant_u7d__u7d_::__u7b__u7b_closure_u7d__u7d_::__RUST_STD_INTERNAL_VAL::h90d4f31268b4f161
         rbp += r13               // sym.tracing_core::dispatcher::CURRENT_STATE::__u7b__u7b_constant_u7d__u7d_::__u7b__u7b_closure_u7d__u7d_::__RUST_STD_INTERNAL_VAL::h90d4f31268b4f161
         edx = sym.tracing_core::dispatcher::CURRENT_STATE::__u7b__u7b_constant_u7d__u7d_::__u7b__u7b_closure_u7d__u7d_::__RUST_STD_INTERNAL_VAL::h90d4f31268b4f161 // 0x20 // "@"
         rdi = r14
         rsi = rbp                // sym.tracing_core::dispatcher::CURRENT_STATE::__u7b__u7b_constant_u7d__u7d_::__u7b__u7b_closure_u7d__u7d_::__RUST_STD_INTERNAL_VAL::h90d4f31268b4f161
         qword [memcmp] ()        // [0xe38298:8]=0 // 0xe38298(0x0, 0x20, 0x20, 0x0)
         v = eax & eax
         rax = rbp                // sym.tracing_core::dispatcher::CURRENT_STATE::__u7b__u7b_constant_u7d__u7d_::__u7b__u7b_closure_u7d__u7d_::__RUST_STD_INTERNAL_VAL::h90d4f31268b4f161
         cmovs rax r14
         rcx = r14
         cmovs rcx rbp
         xmm0 = xmmword [rax]     // elf_phdr // elf_shdr
         xmm1 = xmmword [rax + 0x10]
         xmmword [var_90h] = xmm1
         xmmword [var_80h] = xmm0
         xmm0 = xmmword [rcx]
         xmm1 = xmmword [rcx + 0x10]
         rax = var_a0h
         xmmword [rax] = xmm0
         xmmword [rax + 0x10] = xmm1
         rdi = var_30h            // int64_t arg1
         rsi = qword [var_8h]     // int64_t arg2
         rdx = var_80h            // int64_t arg3
         sym.hashbrown::rustc_entry::__impl_hashbrown::map::HashMap_K_V_S_A__::rustc_entry::h1f78600f386c3032 () // hashbrown::rustc_entry::_<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry::h1f78600f386c3032 // sym.hashbrown::rustc_entry::__impl_hashbrown::map::HashMap_K_V_S_A__::rustc_entry::h1f78600f386c3032(0x10078028, 0x1, 0x10078078)
         rax = qword [var_30h]
         v = rax & rax
         if (!v) 
         goto loc_0x005d5479;
    loc_0x005d5479: // orphan
         rsi = qword [var_38h]
         rcx = qword [var_40h]
         rdx = var_48h
         xmm0 = xmmword [rdx]
         xmm1 = xmmword [rdx + 0x10]
         xmm2 = xmmword [rdx + 0x20]
         xmmword [var_d0h] = xmm0
         xmmword [var_e0h] = xmm1
         xmmword [var_f0h] = xmm2
         rdx = qword [rdx + 0x30] // elf_phdr
         qword [var_100h] = rdx
         rdx = qword [rax]
         rdi = qword [rax + 8]
         r8 = rdi
         r8 &= rsi
         xmm0 = xmmword [rdx + r8]
         pmovmskb r9d xmm0
         v = r9d & r9d
         if (!v) 
         goto loc_0x005d54dc;
    loc_0x005d54dc: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::process_transaction::h5735a33ec1376b76 @ 0x5d58da(x)
         r9d = __builtin_ctz(r9d)
         r9 += r8
         r9 &= rdi
         r8d = byte [rdx + r9]
         v = r8b & r8b
         jns 0x5d58e2             // likely

         goto loc_0x005d54f5;
    loc_0x005d54f5: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::process_transaction::h5735a33ec1376b76 @ 0x5d58f5(x)
         rsi >>>= 0x39
         r10 = r9 - 0x10
         r10 &= rdi
         byte [rdx + r9] = sil
         byte [rdx + r10 + 0x10] = sil
         r9 ~= r9
         rdi = r9 + r9*8
         rsi = rdx + rdi*8
         r8b &= 1
         r8d = r8b
         qword [rax + 0x10] -= r8
         qword [rdx + rdi*8 - 0x48] = rcx
         xmm0 = xmmword [var_d0h]
         xmm1 = xmmword [var_e0h]
         xmm2 = xmmword [var_f0h]
         xmmword [rdx + rdi*8 - 0x40] = xmm0
         xmmword [rdx + rdi*8 - 0x30] = xmm1
         xmmword [rdx + rdi*8 - 0x20] = xmm2
         rcx = qword [var_100h]   // elf_phdr
         qword [rdx + rdi*8 - 0x10] = rcx
         qword [rdx + rdi*8 - 8] = 0
         qword [rax + 0x18]++
         
         goto loc_0x005d556e;
    loc_0x005d556e: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::process_transaction::h5735a33ec1376b76 @ 0x5d5473(x)
         rsi = qword [var_38h]

    loc_0x005d5573: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::process_transaction::h5735a33ec1376b76 @ 0x5d556c(x)
         r15 <<<= 5
         r13 += r15
         rbp += 0x20              // sym.tracing_core::dispatcher::CURRENT_STATE::__u7b__u7b_constant_u7d__u7d_::__u7b__u7b_closure_u7d__u7d_::__RUST_STD_INTERNAL_VAL::h90d4f31268b4f161 // "@"
         qword [rsi - 8]++
         
         goto loc_0x005d5590;
    loc_0x005d5590: // orphan
         // CODE XREFS from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::process_transaction::h5735a33ec1376b76 @ 0x5d564b(x), 0x5d5814(x)
         rsi &= rcx
         xmm1 = xmmword [rax + rsi]
         xmm2 = xmm1
         xmm2 == xmm0
         pmovmskb edi xmm2
         v = edi & edi
         if (!v) 
         goto loc_0x005d55ac;
    loc_0x005d55ac: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::process_transaction::h5735a33ec1376b76 @ 0x5d5625(x)
         r8d = __builtin_ctz(edi)
         r8 += rsi
         r8 &= rcx
         r8 ~= r8
         r8 = r8 + r8*8
         xmm2 = xmmword [rax + r8*8 - 0x48]
         xmm3 = xmmword [rax + r8*8 - 0x38]
         xmm3 ^= xmmword [var_90h]
         xmm2 ^= xmmword [var_80h]
         por xmm2 xmm3
         ptest xmm2 xmm2
         if (v) 
         goto loc_0x005d55e9;
    loc_0x005d55e9: // orphan
         r8 = rax + r8*8
         xmm2 = xmmword [r8 - 0x28]
         xmm3 = xmmword [r8 - 0x18] // elf_phdr
         xmm3 ^= xmmword [var_b0h]
         xmm2 ^= xmmword [var_a0h]
         por xmm2 xmm3            // elf_phdr
         ptest xmm2 xmm2
         if (!v) 
         goto loc_0x005d561a;
    loc_0x005d561a: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::process_transaction::h5735a33ec1376b76 @ 0x5d55e7(x)
         r8d = rdi - 1
         r8w &= di
         edi = r8d
         if (v) 
         goto loc_0x005d5627;
    loc_0x005d5627: // orphan
         

    loc_0x005d5630: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::process_transaction::h5735a33ec1376b76 @ 0x5d55a6(x)
         pcmpeqd xmm2 xmm2
         xmm1 == xmm2
         pmovmskb edi xmm1
         v = edi & edi
         if (v) 
         goto loc_0x005d5640;
    loc_0x005d5640: // orphan
         rsi += rdx
         rsi += 0x10
         rdx += 0x10
         
         goto loc_0x005d5650;
    loc_0x005d5650: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::process_transaction::h5735a33ec1376b76 @ 0x5d563e(x)
         v = qword [rbx + 0xd0] - 0
         if (!v) 
         goto loc_0x005d565e;
    loc_0x005d565e: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::process_transaction::h5735a33ec1376b76 @ 0x5d5864(x)
         xmm0 = xmmword [var_80h] // elf_shdr
         xmm1 = xmmword [var_90h]
         xmm2 = xmmword [var_a0h]
         xmm3 = xmmword [var_b0h]
         rdx = var_48h
         xmmword [rdx + 0x28] = xmm3
         xmmword [rdx + 0x18] = xmm2
         xmmword [rdx + 8] = xmm1
         xmmword [rdx - 8] = xmm0
         rdx = qword [var_40h]    // elf_shdr
         rdi = var_a0h
         rsi = qword [rdi + 0x18]
         qword [var_60h] = rsi
         xmm0 = xmmword [rdi - 0x18]
         xmm1 = xmmword [rdi - 8]
         xmm2 = xmmword [rdi + 8]
         xmmword [var_50h] = xmm2
         xmmword [var_40h] = xmm1
         xmmword [var_30h] = xmm0
         r15 &= rcx
         xmm0 = xmmword [rax + r15]
         pmovmskb esi xmm0
         v = esi & esi
         if (!v) 
         goto loc_0x005d56df;
    loc_0x005d56df: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::process_transaction::h5735a33ec1376b76 @ 0x5d5834(x)
         esi = __builtin_ctz(esi)
         rsi += r15
         rsi &= rcx
         edi = byte [rax + rsi]
         v = dil & dil
         jns 0x5d5869             // likely

         goto loc_0x005d56f6;
    loc_0x005d56f6: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::process_transaction::h5735a33ec1376b76 @ 0x5d5879(x)
         r8 = rsi - 0x10
         r8 &= rcx
         byte [rax + rsi] = r12b
         byte [rax + r8 + 0x10] = r12b
         rsi ~= rsi
         rcx = rsi + rsi*8
         r8 = rax + rcx*8
         dil &= 1
         esi = dil
         qword [rax + rcx*8 - 0x48] = rdx
         xmm0 = xmmword [var_30h]
         xmm1 = xmmword [var_40h]
         xmm2 = xmmword [var_50h]
         xmmword [rax + rcx*8 - 0x40] = xmm0
         xmmword [rax + rcx*8 - 0x30] = xmm1
         xmmword [rax + rcx*8 - 0x20] = xmm2
         rdx = qword [var_60h]
         qword [rax + rcx*8 - 0x10] = rdx
         qword [rax + rcx*8 - 8] = 0
         xmm0 = xmmword [rbx + 0xd0] // case.0x95d678.3 // case.0x95d678.3
         xmm1 = xmmword [0x00358350] // [0x358350:16]=-1
         pinsrq xmm1 rsi 0
         psubq xmm0 xmm1
         xmmword [rbx + 0xd0] = xmm0

    loc_0x005d5774: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::process_transaction::h5735a33ec1376b76 @ 0x5d5614(x)
         rbp += 0x20              // sym.tracing_core::dispatcher::CURRENT_STATE::__u7b__u7b_constant_u7d__u7d_::__u7b__u7b_closure_u7d__u7d_::__RUST_STD_INTERNAL_VAL::h90d4f31268b4f161 // "@"
         qword [r8 - 8]++

    loc_0x005d577c: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::process_transaction::h5735a33ec1376b76 @ 0x5d5582(x)
         v = rbp - r13
         if (!v) 
         goto loc_0x005d5785;
    loc_0x005d5785: // orphan
         edx = sym.tracing_core::dispatcher::CURRENT_STATE::__u7b__u7b_constant_u7d__u7d_::__u7b__u7b_closure_u7d__u7d_::__RUST_STD_INTERNAL_VAL::h90d4f31268b4f161 // 0x20 // "@" // int64_t arg3
         rdi = r14
         rsi = rbp                // rsp
         qword [memcmp] ()        // [0xe38298:8]=0 // 0xe38298(0x0, 0x10078000, 0x20, 0x0)
         v = eax & eax
         rax = rbp                // rsp
         cmovs rax r14
         rcx = r14
         cmovs rcx rbp
         xmm0 = xmmword [rax]
         xmm1 = xmmword [rax + 0x10]
         xmmword [var_90h] = xmm1
         xmmword [var_80h] = xmm0
         xmm0 = xmmword [rcx]
         xmm1 = xmmword [rcx + 0x10]
         rax = var_a0h
         xmmword [rax] = xmm0
         xmmword [rax + 0x10] = xmm1
         rdi = qword [var_10h]    // int64_t arg1
         rsi = var_80h            // int64_t arg2
         sym.core::hash::BuildHasher::hash_one::hc1ea168cd0e71d2e () // sym.core::hash::BuildHasher::hash_one::hc1ea168cd0e71d2e(0xc0, 0x10078078, 0x20)
         r15 = rax
         r12 = rax
         r12 >>>= 0x39
         rax = qword [rbx + 0xc0] // case.0x95d678.1
         rcx = qword [rbx + 0xc8] // case.0x95d678.1
         movd xmm0 r12d
         xmm1 ^= xmm1
         pshufb xmm0 xmm1
         edx = 0
         rsi = r15
         
         goto loc_0x005d5819;
    loc_0x005d5819: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::process_transaction::h5735a33ec1376b76 @ 0x5d56d9(x)
         edi = 0x10

    loc_0x005d581e: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::process_transaction::h5735a33ec1376b76 @ 0x5d583a(x)
         r15 += rdi
         r15 &= rcx
         xmm0 = xmmword [rax + r15]
         pmovmskb esi xmm0
         rdi += 0x10
         v = esi & esi
         if (v) 
         goto loc_0x005d583a;
    loc_0x005d583a: // orphan
         
         goto loc_0x005d583c;
    loc_0x005d583c: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::process_transaction::h5735a33ec1376b76 @ 0x5d5658(x)
         esi = 1
         rdi = qword [var_8h]
         rdx = qword [var_10h]
         ecx = 1
         qword [0x00e382a0] ()    // [0xe382a0:8]=0 // 0xe382a0(0xc0, 0x1, 0xe0, 0x1)
         rax = qword [rbx + 0xc0] // case.0x95d678.1
         rcx = qword [rbx + 0xc8] // case.0x95d678.1
         
         goto loc_0x005d5869;
    loc_0x005d5869: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::process_transaction::h5735a33ec1376b76 @ 0x5d56f0(x)
         xmm0 = xmmword [rax]
         pmovmskb esi xmm0
         esi = __builtin_ctz(esi)
         edi = byte [rax + rsi]
         
         goto loc_0x005d587e;
    loc_0x005d587e: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::process_transaction::h5735a33ec1376b76 @ 0x5d5338(x)
         r10d = 0x10

    loc_0x005d5884: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::process_transaction::h5735a33ec1376b76 @ 0x5d58a2(x)
         r8 += r10
         r8 &= rdi
         xmm0 = xmmword [rdx + r8]
         pmovmskb r9d xmm0
         r10 += 0x10
         v = r9d & r9d
         if (v) 
         goto loc_0x005d58a2;
    loc_0x005d58a2: // orphan
         
         goto loc_0x005d58a4;
    loc_0x005d58a4: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::process_transaction::h5735a33ec1376b76 @ 0x5d5351(x)
         xmm0 = xmmword [rdx]
         pmovmskb r8d xmm0
         r9d = __builtin_ctz(r8d)
         r8d = byte [rdx + r9]
         
         goto loc_0x005d58bc;
    loc_0x005d58bc: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::process_transaction::h5735a33ec1376b76 @ 0x5d54d6(x)
         r10d = 0x10

    loc_0x005d58c2: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::process_transaction::h5735a33ec1376b76 @ 0x5d58e0(x)
         r8 += r10
         r8 &= rdi
         xmm0 = xmmword [rdx + r8]
         pmovmskb r9d xmm0
         r10 += 0x10
         v = r9d & r9d
         if (v) 
         goto loc_0x005d58e0;
    loc_0x005d58e0: // orphan
         
         goto loc_0x005d58e2;
    loc_0x005d58e2: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::process_transaction::h5735a33ec1376b76 @ 0x5d54ef(x)
         xmm0 = xmmword [rdx]
         pmovmskb r8d xmm0
         r9d = __builtin_ctz(r8d)
         r8d = byte [rdx + r9]
         
         goto loc_0x005d58fa;
    loc_0x005d5904: // orphan
         rdi = qword [var_20h]
         rsi <<<= 5
         edx = 1
         qword [0x00e37488] ()    // [0xe37488:8]=0 // 0xe37488(0x0, 0x0, 0x1, 0x0)

}

