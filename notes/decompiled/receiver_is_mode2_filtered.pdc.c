// callconv: rax amd64 (rdi, rsi, rdx, rcx, r8, r9, xmm0, xmm1, xmm2, xmm3, xmm4);
void sym.rakurai_scheduler__scheduler_receiver__RakuraiTransactionViewReceiveAndBuffer__is_mode2_filtered__haa0ab5c29e87e680 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, int64_t arg_a18h, uint32_t arg_740h, int64_t arg_110h, int64_t arg_118h, int64_t arg_120h, int64_t arg_128h, int64_t arg_130h, int64_t arg_138h, int64_t arg_148h, int64_t arg_150h, int64_t arg_158h, int64_t arg_168h, int64_t arg_178h, int64_t arg_1a8h, int64_t arg_1c0h) {
        // DATA XREF from reloc.fixup.UAWAVATSHA @ +0x20(r)
        // rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceive
        // AndBuffer::is_mode2_filtered::haa0ab5c29e87e680
        push (rbp)
        push (r15)
        push (r14)
        push (r13)
        push (r12)
        push (rbx)
        rsp -= 0x708
        qword [var_70h] = r9 // arg6
        rbp = r8      // arg5
        r12 = rcx     // arg4
        r13 = rdx     // arg3
        rbx = rsi     // arg2
        r14 = rdi     // arg1
        qword [var_328h] = rsi // arg2
        qword [var_320h] = 1
        rdi = var_190h // int64_t arg1
        rsi = var_320h // int64_t arg2
        sym.solana_perf::packet::PacketRef::deserialize_slice::ha4567f4ef3592c6a () // sym.solana_perf::packet::PacketRef::deserialize_slice::ha4567f4ef3592c6a(0x10077a58, 0x10077be8)
        eax = 0
        v = rax - qword [var_190h]
        jno 0x5dc1a9  // likely
        goto loc_0x005dc19a;
    loc_0x005dc1a9:
        // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dc198(x)
        r15 = var_568h
        rsi = var_190h
        edx = 0x88
        rdi = r15
        qword [memcpy] () // [0xe37450:8]=0 // 0xe37450(0x10078568, 0x10078190, 0x88, 0x0)
        rdi = r15
        qword [0x00e383c8] () // [0xe383c8:8]=0 // 0xe383c8(0x10078568, 0x10078190, 0x88, 0x0)
        byte [var_17h] = al
        qword [var_58h] = r13
        r15 = var_190h
        rsi = var_568h
        edx = 0x88
        rdi = r15
        qword [memcpy] () // [0xe37450:8]=0 // 0xe37450(0x10078180, 0x10078558, 0x88, 0x0)
        rdi = var_330h
        rsi = r15
        qword [0x00e38390] () // [0xe38390:8]=0 // 0xe38390(0x10078318, 0x10078180, 0x88, 0x0)
        r13 = 0x8000000000000000
        v = qword [var_330h] - r13
        if (v) goto loc_0x5dc27f // likely
        goto loc_0x005dc21c;
    loc_0x005dc27f:
        // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dc21a(x)
        qword [var_68h] = rbp
        qword [var_48h] = r12
        rdi = var_78h
        rsi = var_330h
        edx = 0x88
        qword [memcpy] () // [0xe37450:8]=0 // 0xe37450(0x10078078, 0x10078330, 0x88, 0x0)
        rsi = qword [var_90h]
        rax = qword [var_b8h]
        v = rsi - r13
        rcx = qword [var_b0h]
        if (!v) rcx = rax
        if (!v) rax = qword [var_c0h]
        v = rax & rax
        if (!v) goto loc_0x5dc3e2 // likely
        goto loc_0x005dc2d2;
    loc_0x005dc3e2:
        // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dc2cc(x)
        al = 1
        qword [var_8h] = rax
        esi = 0
        ebp = 0
        r9d = 0
        edx = 0
        
    loc_0x005dc3f2:
        // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dc3e0(x)
        v = r9 & r9
        r8b = v != 0
        rdi = qword [var_88h]
        r15 = rdi
        r15 <<<= 6
        rax = rdi
        rax >>>= 0x3a
        al = v != 0
        v = r15 & r15
        sets cl
        cl |= al
        if (!v) goto loc_0x5dc430 // likely
        goto loc_0x005dc41c;
    loc_0x005dc21c: // orphan
         // CODE XREFS from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dc1a7(x), 0x5dcc55(x), 0x5dccb4(x), 0x5dccf1(x)
         xmm0 ^= xmm0
         xmmword [r14 + 0x50] = xmm0
         xmmword [r14 + 0x40] = xmm0
         xmmword [r14] = xmm0
         xmmword [r14 + 0x10] = xmm0
         xmmword [r14 + 0x20] = xmm0
         xmmword [r14 + 0x30] = xmm0
         byte [r14 + 0x89] = 0
         qword [r14 + 0x60] = 0
         byte [r14 + 0x68] = 0

    loc_0x005dc258: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dd156(x)
         rdi = rbx + 0x18
         rax = qword [rbx]
         rsi = qword [rbx + 8]
         rdx = qword [rbx + 0x10]
         qword [rax + sym.tracing_core::dispatcher::CURRENT_STATE::__u7b__u7b_constant_u7d__u7d_::__u7b__u7b_closure_u7d__u7d_::__RUST_STD_INTERNAL_VAL::h90d4f31268b4f161] () // 0x20 // sym.tracing_core::dispatcher::CURRENT_STATE::__u7b__u7b_constant_u7d__u7d_::__u7b__u7b_closure_u7d__u7d_::__RUST_STD_INTERNAL_VAL::h90d4f31268b4f161(0x18, 0x0, 0x0, 0x0)
         rax = r14
         rsp += 0x708
         rbx = pop ()
         r12 = pop ()
         r13 = pop ()
         r14 = pop ()
         r15 = pop ()
         rbp = pop ()
         return

    loc_0x005dc2d2: // orphan
         rdx = rax * 0x38
         v = rsi - r13
         rsi = qword [var_a0h]
         rdi = qword [var_a8h]
         if (!zf) rdi = rsi
         if (!zf) rsi = qword [var_98h]
         r8d = 0
         xmm0 = xmmword [0x0035a4a0] // [0x35a4a0:16]=-1
         xmm1 = xmmword [0x00358590] // [0x358590:16]=-1
         r9d = 0
         ebp = 0
         qword [var_8h] = 0
         r10d = 0
         
         goto loc_0x005dc320;
    loc_0x005dc320: // orphan
         // CODE XREFS from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dc382(x), 0x5dc38a(x), 0x5dc395(x)
         r11 += rsi
         xmm2 = xmmword [r11]
         xmm2 ^= xmm1
         xmm3 = xmmword [r11 + 0x10]
         xmm3 ^= xmm0
         por xmm3 xmm2
         r11d = 0
         ptest xmm3 xmm3
         r15b = v == 0
         r11b = v != 0
         r10 += r11
         bpl |= r15b
         r8 += 0x38
         v = rdx - r8
         if (!v) 
         goto loc_0x005dc359;
    loc_0x005dc359: // orphan
         // CODE XREFS from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dc31a(x), 0x5dc3b5(x)
         r11d = byte [rcx + r8 + 0x30]
         v = rdi - r11
         if (((unsigned) v) <= 0) 
         goto loc_0x005dc368;
    loc_0x005dc368: // orphan
         r11d <<<= 5
         r15 = qword [rsi + r11 + 8]
         r15 |= qword [rsi + r11 + 0x18]
         r12 = qword [rsi + r11]
         r12 |= qword [rsi + r11 + 0x10]
         r12 |= r15
         if (v) 
         goto loc_0x005dc384;
    loc_0x005dc384: // orphan
         v = qword [rcx + r8 + 0x28] - 0xb
         if (((unsigned) v) <= 0) 
         goto loc_0x005dc38c;
    loc_0x005dc38c: // orphan
         r15 = qword [rcx + r8 + 0x20]
         v = dword [r15] - 2
         if (v) 
         goto loc_0x005dc397;
    loc_0x005dc397: // orphan
         r9 += qword [r15 + 4]
         r11 = 0xffffffffffffffff
         cmovb r9 r11
         r11b = 1
         qword [var_8h] = r11
         r8 += 0x38
         v = rdx - r8
         if (v) 
         goto loc_0x005dc3b7;
    loc_0x005dc3b7: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dc357(x)
         v = r10 - 2
         setae sil
         rcx = qword [var_8h]
         cl ^= 1
         qword [var_8h] = rcx
         rcx = 0x1fffffffffffffff // 2305843009213693951
         rax &= rcx
         v = rax - 1
         dl = v != 0
         
         goto loc_0x005dc3e2;
    loc_0x005dc41c: // orphan
         r13d = 0

    loc_0x005dc41f: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dc473(x)
         rdi = r13
         rsi = r15
         qword [reloc.fixup.UHHu] () // [0xe37788:8]=0 // reloc.fixup.UHHu(0x0, 0x0, 0x0, 0x0)
         
         goto loc_0x005dc430;
    loc_0x005dc430: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dc41a(x)
         byte [var_16h] = r8b
         qword [var_50h] = rdi
         qword [var_60h] = rsi
         qword [var_18h] = rdx
         qword [var_40h] = r9
         r12 = qword [var_80h]
         v = r15 & r15
         if (!v) 
         goto loc_0x005dc456;
    loc_0x005dc456: // orphan
         qword [0x00e37508] ()    // [0xe37508:8]=0 // 0xe37508(0x0, 0x0, 0x0, 0x0)
         r13d = 1
         esi = 1
         rdi = r15
         qword [0x00e37510] ()    // [0xe37510:8]=0 // 0xe37510(0x0, 0x1, 0x0, 0x0)
         v = rax & rax
         if (!v) 
         goto loc_0x005dc475;
    loc_0x005dc475: // orphan
         rdi = rax
         rax = qword [var_50h]
         qword [var_30h] = rax
         r13 = 0x8000000000000000
         
         goto loc_0x005dc48e;
    loc_0x005dc48e: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dc454(x)
         edi = 1
         qword [var_30h] = 0

    loc_0x005dc49c: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dc48c(x)
         qword [var_38h] = rdi
         rsi = r12
         rdx = r15
         qword [memcpy] ()        // [0xe37450:8]=0 // 0xe37450(0x0, 0x0, 0x0, 0x0)
         v = qword [var_90h] - r13
         if (v) 
         goto loc_0x005dc4b7;
    loc_0x005dc4b7: // orphan
         r15 = qword [var_a8h]
         r13 = r15
         r13 <<<= 5
         rax = r15
         rax >>>= 0x3b
         al = v != 0
         v = r13 & r13
         sets cl
         cl |= al
         if (v) 
         goto loc_0x005dc4da;
    loc_0x005dc4da: // orphan
         rsi = qword [var_a0h]
         v = r13 & r13
         if (!v) 
         goto loc_0x005dc4eb;
    loc_0x005dc4eb: // orphan
         qword [var_28h] = rsi
         qword [0x00e37508] ()    // [0xe37508:8]=0 // 0xe37508(0x0, 0x0, 0x0, 0x0)
         r12d = 1
         esi = 1
         rdi = r13
         qword [0x00e37510] ()    // [0xe37510:8]=0 // 0xe37510(0x0, 0x1, 0x0, 0x0)
         v = rax & rax
         if (!v) 
         goto loc_0x005dc50f;
    loc_0x005dc50f: // orphan
         rdi = rax
         qword [var_20h] = r15
         rsi = qword [var_28h]
         
         goto loc_0x005dc521;
    loc_0x005dc521: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dc4b5(x)
         rdx = qword [var_a0h]
         r13 = rdx
         r13 <<<= 5
         rax = rdx
         rax >>>= 0x3b
         al = v != 0
         v = r13 & r13
         sets cl
         cl |= al
         r12 = qword [var_18h]
         if (!v) 
         goto loc_0x005dc549;
    loc_0x005dc549: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dc4d8(x)
         r12d = 0

    loc_0x005dc54c: // orphan
         // CODE XREFS from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dc50d(x), 0x5dc59a(x)
         rdi = r12
         rsi = r13
         r15 = qword [var_30h]
         qword [reloc.fixup.UHHu] () // [0xe37788:8]=0 // reloc.fixup.UHHu(0x0, 0x0, 0x0, 0x0)
         
         goto loc_0x005dc562;
    loc_0x005dc562: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dc547(x)
         rsi = qword [var_98h]
         v = r13 & r13
         qword [var_28h] = rdx
         if (!v) 
         goto loc_0x005dc578;
    loc_0x005dc578: // orphan
         qword [var_20h] = rsi
         qword [0x00e37508] ()    // [0xe37508:8]=0 // 0xe37508(0x0, 0x0, 0x0, 0x0)
         r12d = 1
         esi = 1
         rdi = r13
         qword [0x00e37510] ()    // [0xe37510:8]=0 // 0xe37510(0x0, 0x1, 0x0, 0x0)
         v = rax & rax
         if (!v) 
         goto loc_0x005dc59c;
    loc_0x005dc59c: // orphan
         rdi = rax
         r15 = qword [var_28h]
         r12 = qword [var_18h]
         rsi = qword [var_20h]
         
         goto loc_0x005dc5b3;
    loc_0x005dc5b3: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dc4e5(x)
         edi = 1
         qword [var_20h] = 0

    loc_0x005dc5c1: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dc51c(x)
         r12 = var_b0h
         qword [var_28h] = rdi
         rdx = r13                // int64_t arg_30h
         qword [memcpy] ()        // [0xe37450:8]=0 // 0xe37450(0x0, 0x0, 0x0, 0x0)
         rdi = var_330h           // int64_t arg1
         rsi = r12                // int64_t arg2
         sym.__alloc::vec::Vec_T_A__as_core::clone::Clone_::clone::he0f6600e2fb2532d () // _<alloc::vec::Vec<T,A> as core::clone::Clone>::clone::he0f6600e2fb2532d // sym.__alloc::vec::Vec_T_A__as_core::clone::Clone_::clone::he0f6600e2fb2532d(0x10078328, 0x100780b0, 0x0)
         eax = byte [var_eah]
         byte [var_1cah] = al
         eax = word [var_e8h]
         word [var_1c8h] = ax
         xmm0 = xmmword [var_c8h]
         xmm1 = xmmword [var_d8h]
         xmmword [var_1a8h] = xmm0
         xmmword [var_1b8h] = xmm1
         xmm0 = xmmword [var_330h]
         xmmword [var_190h] = xmm0
         rax = qword [var_340h]
         qword [var_1a0h] = rax
         rcx = 0x8000000000000000
         r12 = qword [var_18h]
         
         goto loc_0x005dc65a;
    loc_0x005dc65a: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dc572(x)
         edi = 1
         r15d = 0

    loc_0x005dc662: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dc5ae(x)
         qword [var_20h] = rdi
         rdx = r13                // int64_t arg_30h
         qword [memcpy] ()        // [0xe37450:8]=0 // 0xe37450(0x0, 0x0, 0x0, 0x0)
         rsi = var_a8h            // int64_t arg2
         rdi = var_100h           // int64_t arg1
         qword [var_18h] = r15
         sym.__alloc::vec::Vec_T_A__as_core::clone::Clone_::clone::he0f6600e2fb2532d () // _<alloc::vec::Vec<T,A> as core::clone::Clone>::clone::he0f6600e2fb2532d // sym.__alloc::vec::Vec_T_A__as_core::clone::Clone_::clone::he0f6600e2fb2532d(0x100780f8, 0x100780a0, 0x0)
         rsi = var_c0h            // int64_t arg2
         rdi = var_450h           // int64_t arg1
         sym.__alloc::vec::Vec_T_A__as_core::clone::Clone_::clone::h4a224caa1cf6325e () // _<alloc::vec::Vec<T,A> as core::clone::Clone>::clone::h4a224caa1cf6325e // sym.__alloc::vec::Vec_T_A__as_core::clone::Clone_::clone::h4a224caa1cf6325e(0x10078440, 0x100780b0, 0x0)
         eax = byte [var_fah]
         byte [var_352h] = al
         eax = word [var_f8h]
         word [var_350h] = ax
         xmm0 = xmmword [var_d8h]
         xmm1 = xmmword [var_e8h]
         xmmword [var_330h] = xmm0
         xmmword [var_340h] = xmm1
         r15 = qword [var_100h]
         xmm1 = xmmword [var_108h]
         xmmword [var_190h] = xmm1
         xmm1 = xmmword [var_450h]
         xmmword [var_1a0h] = xmm1
         rax = qword [var_460h]
         qword [var_1b0h] = rax
         rax = qword [var_e8h]
         qword [var_1c8h] = rax
         xmmword [var_1b8h] = xmm0
         rax = qword [var_348h]
         qword [var_450h] = rax   // [0x450:8]=0x12000003f8
         eax = word [var_350h]
         word [var_458h] = ax     // [0x458:2]=0
         eax = byte [var_352h]
         byte [var_45ah] = al     // [0x45a:1]=0
         eax = dword [var_353h]
         dword [var_45bh] = eax   // [0x45b:4]=0
         eax = byte [var_357h]
         byte [var_45fh] = al     // [0x45f:1]=0
         rcx = qword [var_18h]

    loc_0x005dc77f: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dc655(x)
         rdx = qword [var_8h]
         dl &= bpl
         dl &= byte [var_60h]
         r12b &= byte [var_16h]
         r12b &= bpl
         rsi = qword [var_30h]
         qword [var_100h] = rsi
         rax = qword [var_38h]
         qword [var_108h] = rax
         rax = qword [var_50h]
         qword [arg_110h] = rax
         r13 = rcx
         qword [arg_118h] = rcx
         rbp = qword [var_20h]
         qword [arg_120h] = rbp
         rax = qword [var_28h]
         qword [arg_128h] = rax
         qword [arg_130h] = r15
         xmm0 = xmmword [var_190h]
         rax = qword [var_1a0h]
         rcx = qword [arg_1a8h]
         xmm1 = xmmword [var_1b0h]
         xmm2 = xmmword [arg_1c0h]
         xmmword [arg_138h] = xmm0
         qword [arg_148h] = rax
         qword [arg_150h] = rcx
         xmmword [arg_158h] = xmm1
         xmmword [arg_168h] = xmm2
         xmm0 = xmmword [var_450h]
         xmmword [arg_178h] = xmm0
         qword [var_8h] = rdx
         eax = edx
         al |= r12b
         v = al & 1
         if (!v) 
         goto loc_0x005dc85b;
    loc_0x005dc85b: // orphan
         ebp = byte [rbx + 0x3c]
         r15 = var_330h
         rsi = var_100h
         edx = 0x88
         rdi = r15
         qword [memcpy] ()        // [0xe37450:8]=0 // 0xe37450(0x10078330, 0x10078100, 0x88, 0x0)
         byte [var_450h] = 1      // [0x450:1]=248
         bpl >>>= 3
         bpl &= 1
         ecx = bpl
         rdi = var_190h
         rdx = var_450h
         rsi = r15
         qword [0x00e38398] ()    // [0xe38398:8]=0 // 0xe38398(0x10078188, 0x10078330, 0x10078448, 0x0)
         r13 = 0x8000000000000000
         v = dword [var_218h] - 2
         if (v) 
         goto loc_0x005dc8c2;
    loc_0x005dc8c2: // orphan
         qword [var_8h] = 0
         
         goto loc_0x005dc8d0;
    loc_0x005dc8d0: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dc859(x)
         v = rsi & rsi
         if (!v) 
         goto loc_0x005dc8d5;
    loc_0x005dc8d5: // orphan
         rsi <<<= 6
         edx = 1
         rdi = qword [var_38h]
         qword [0x00e37488] ()    // [0xe37488:8]=0 // 0xe37488(0x0, 0x0, 0x1, 0x0)

    loc_0x005dc8e9: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dc8d3(x)
         rax = 0x8000000000000000
         v = r13 - rax
         if (v) 
         goto loc_0x005dc8f8;
    loc_0x005dc8f8: // orphan
         v = rbp & rbp
         if (!v) 
         goto loc_0x005dc8fd;
    loc_0x005dc8fd: // orphan
         rbp <<<= 5
         edx = 1
         rdi = qword [var_28h]
         rsi = rbp
         qword [0x00e37488] ()    // [0xe37488:8]=0 // 0xe37488(0x0, 0x200f00000, 0x1, 0x0)

    loc_0x005dc914: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dc8fb(x)
         r15 = qword [var_140h]
         r12 = qword [var_148h]
         v = r12 & r12
         if (!v) 
         goto loc_0x005dc929;
    loc_0x005dc929: // orphan
         r13 = r15 + 0x20         // sym.tracing_core::dispatcher::CURRENT_STATE::__u7b__u7b_constant_u7d__u7d_::__u7b__u7b_closure_u7d__u7d_::__RUST_STD_INTERNAL_VAL::h90d4f31268b4f161
         rbp = qword [0x00e37488] // [0xe37488:8]=0
         
         goto loc_0x005dc940;
    loc_0x005dc940: // orphan
         // CODE XREFS from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dc964(x), 0x5dc971(x)
         r13 += 0x38
         r12--
         if (!v) 
         goto loc_0x005dc949;
    loc_0x005dc949: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dc934(x)
         rsi = qword [r13 - 0x20]
         v = rsi & rsi
         if (!v) 
         goto loc_0x005dc952;
    loc_0x005dc952: // orphan
         rdi = qword [r13 - 0x18]
         edx = 1
         rbp ()                   // rsp // rsp(-1, 0x0, 0x1, 0x0)

    loc_0x005dc95d: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dc950(x)
         rsi = qword [r13 - 8]
         v = rsi & rsi
         if (!v) 
         goto loc_0x005dc966;
    loc_0x005dc966: // orphan
         rdi = qword [r13]
         edx = 1
         rbp ()                   // rsp // rsp(0x0, 0x0, 0x1, 0x0)
         
         goto loc_0x005dc973;
    loc_0x005dc973: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dc8f6(x)
         r13 = rax
         rdi = var_118h           // int64_t arg1
         sym.core::ptr::drop_in_place_solana_message::non_bpf_modules::versions::v0::Message_::h454410fbc6b6c99c () // core::ptr::drop_in_place<solana_message::non_bpf_modules::versions::v0::Message>::h454410fbc6b6c99c // sym.core::ptr::drop_in_place_solana_message::non_bpf_modules::versions::v0::Message_::h454410fbc6b6c99c(0x10078118)
         qword [var_8h] = 0
         
         goto loc_0x005dc991;
    loc_0x005dc991: // orphan
         // CODE XREFS from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dc927(x), 0x5dc947(x)
         rax = qword [var_138h]
         v = rax & rax
         if (!v) 
         goto loc_0x005dc9a2;
    loc_0x005dc9a2: // orphan
         rsi = rax * 0x38
         edx = 8
         rdi = r15
         qword [0x00e37488] ()    // [0xe37488:8]=0 // 0xe37488(0x0, 0x0, 0x8, 0x0)
         
         goto loc_0x005dc9b9;
    loc_0x005dc9b9: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dc8bc(x)
         r15 = var_330h
         rsi = var_190h
         edx = 0x118
         rdi = r15
         qword [memcpy] ()        // [0xe37450:8]=0 // 0xe37450(0x10078330, 0x10078190, 0x118, 0x0)
         r8 = qword [var_58h]     // int64_t arg5
         r9 = qword [r8 + 0x3e8]
         r9 += 0x10               // int64_t arg6
         rdx = var_400h           // int64_t arg3
         ecx = byte [var_442h]    // int64_t arg4
         rdi = var_190h           // int64_t arg1
         rsi = r15                // int64_t arg2
         sym.solana_transaction::sanitized::SanitizedTransaction::try_new::h6f3f20a73008a5b9 () // sym.solana_transaction::sanitized::SanitizedTransaction::try_new::h6f3f20a73008a5b9(0x10078188, 0x10078330, 0x100783f8, 0x0, 0x0, 0x10)
         qword [var_18h] = r12
         r12 = qword [var_190h]
         v = r12 - r13
         if (!v) 
         goto loc_0x005dca1d;
    loc_0x005dca1d: // orphan
         rbp = qword [var_198h]
         r15d = dword [var_1a0h]
         rsi = var_1a4h
         rdi = var_450h
         edx = 0xe4
         qword [memcpy] ()        // [0xe37450:8]=0 // 0xe37450(0x10078450, 0x100781a4, 0xe4, 0x0)
         r13 = qword [var_3b8h]
         v = r13 - 2
         if (!v) 
         goto loc_0x005dca5a;
    loc_0x005dca5a: // orphan
         qword [var_190h] = r12
         qword [var_198h] = rbp
         dword [var_1a0h] = r15d
         rdi = var_1a4h
         rsi = var_450h
         r15 = qword [memcpy]     // [0xe37450:8]=0
         edx = 0xe4
         r15 ()                   // 0x5dca91(0x100781a4, 0x10078450, 0xe4, 0x0)
         r12 = var_288h
         qword [var_288h] = r13
         rdi = var_290h
         edx = 0x88
         rsi = var_3c0h
         r15 ()                   // 0x5dcab9(0x10078288, 0x100783b8, 0x88, 0x0)
         rbp = qword [var_48h]
         rdx = qword [var_3e0h]
         rdx += 0x10
         rdi = var_450h
         rsi = r12
         qword [reloc.fixup.UAWAVATSHA] () // [0xe383a0:8]=0 // reloc.fixup.UAWAVATSHA(0x10078440, 0x10078280, 0x10, 0x0)
         v = dword [var_460h] - 0
         if (!v) 
         goto loc_0x005dcae8;
    loc_0x005dcae8: // orphan
         eax = dword [var_45ch]
         rax = rax * qword [var_450h] // [0x450:8]=0x12000003f8
         r15 = 0xffffffffffffffff
         rcx = 0xfffffffffff0bdc0
         v = rcx - rax
         ecx = 0xf423f            // '?B\x0f'
         rcx = rcx - rdx
         if (((unsigned) v) < 0) 
         goto loc_0x005dcb12;
    loc_0x005dcb12: // orphan
         rsi = rdx
         rax += 0xf423f
         rsi += 0
         edx = 0xf4240            // '@B\x0f'
         rdi = rax
         ecx = 0
         qword [0x00e383a8] ()    // [0xe383a8:8]=0 // 0xe383a8(0xf423f, 0x0, 0xf4240, 0x0)
         r15 = rax

    loc_0x005dcb32: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dcb10(x)
         rdi = var_450h
         rsi = rbp                // rsp
         qword [reloc.fixup.AWAVSH0IIH0F0_wpH] () // [0xe381a0:8]=0 // reloc.fixup.AWAVSH0IIH0F0_wpH(0x10078450, 0x10078000, 0x0, 0x0)
         r13 = qword [var_470h]
         r12 = qword [arg_a18h]
         rdi = qword [var_3e0h]
         rdi += 0x10
         qword [0x00e381a8] ()    // [0xe381a8:8]=0 // 0xe381a8(0x10, 0x10078000, 0x0, 0x0)
         esi = 0                  // int64_t arg2
         v = r13 & r13
         sil = v == 0
         r8d = al
         rdi = var_190h           // uint32_t arg1
         rdx = r12                // int64_t arg3
         rcx = r15
         sym.solana_fee::calculate_fee_details::h25abb3aa6e86c666 () // sym.solana_fee::calculate_fee_details::h25abb3aa6e86c666(0x10078180, 0x1, 0x0)
         v = rax & rax
         if (!v) 
         goto loc_0x005dcb8c;
    loc_0x005dcb8c: // orphan
         rcx = rdx
         rdx = rax * 0x32
         rdx >>>= 2
         rsi = 0x28f5c28f5c28f5c3
         rdi = rax
         rax = rdx
         rax = rax * rsi
         rdx >>>= 2
         eax = 0
         rdi -= rdx
         cmovae rax rdi
         rcx += rax
         rax = 0xffffffffffffffff
         cmovae rax rcx
         
         goto loc_0x005dcbca;
    loc_0x005dcbca: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dc362(x)
         rdi = rip - 0x26306a     // "program id index is sanitizedreception_info_logwarning_logreception_warning_logtransaction is not pending, transaction state mu" // 0x379b67
         rdx = rip + 0x7ea5c0     // 0xdc7198
         esi = 0x1d
         qword [reloc.fixup.UHH_HHuHEHEHE] () // [0xe37440:8]=0 // reloc.fixup.UHH_HHuHEHEHE(0x379b67, 0x1d, 0xdc7198, 0x0)

    loc_0x005dcbe3: // orphan
         // CODE XREFS from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dc42b(x), 0x5dc55d(x)
         ud2

        return rax;
    loc_0x005dcbe5: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dcae2(x)
         rdi = var_190h           // int64_t arg1
         sym.core::ptr::drop_in_place_solana_transaction::sanitized::SanitizedTransaction_::h0440ee21d8c1f1d8 () // core::ptr::drop_in_place<solana_transaction::sanitized::SanitizedTransaction>::h0440ee21d8c1f1d8 // sym.core::ptr::drop_in_place_solana_transaction::sanitized::SanitizedTransaction_::h0440ee21d8c1f1d8(0x10078190)

    loc_0x005dcbf2: // orphan
         // CODE XREFS from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dc99c(x), 0x5dc9b4(x), 0x5dca17(x), 0x5dca54(x)
         qword [var_8h] = 0
         r13 = 0x8000000000000000

    loc_0x005dcc05: // orphan
         // CODE XREFS from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dc8cb(x), 0x5dc98c(x), 0x5dd1b6(x)
         r15 = var_330h
         rsi = var_78h
         edx = 0x88
         rdi = r15
         qword [memcpy] ()        // [0xe37450:8]=0 // 0xe37450(0x10078330, 0x10078078, 0x88, 0x0)
         byte [var_450h] = 1      // [0x450:1]=248
         eax = byte [rbx + 0x3c]
         al >>>= 3
         al &= 1
         ecx = al
         rdi = var_190h
         rdx = var_450h
         rsi = r15
         qword [0x00e38398] ()    // [0xe38398:8]=0 // 0xe38398(0x10078188, 0x10078330, 0x10078448, 0x0)
         v = dword [var_218h] - 2
         if (!v) 
         goto loc_0x005dcc5b;
    loc_0x005dcc5b: // orphan
         r15 = var_5f0h           // 0x5f0 // sym.rayon_core::registry::WORKER_THREAD_STATE::__u7b__u7b_constant_u7d__u7d_::__u7b__u7b_closure_u7d__u7d_::__RUST_STD_INTERNAL_VAL::h2dde020da17d3f13
                                  rayon_core::registry::WORKER_THREAD_STATE::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h2dde020da17d3f13
         rsi = var_190h
         edx = 0x118
         rdi = r15
         qword [memcpy] ()        // [0xe37450:8]=0 // 0xe37450(0x100785f0, 0x10078190, 0x118, 0x0)
         r8 = qword [var_58h]     // int64_t arg5
         r9 = qword [r8 + 0x3e8]
         r9 += 0x10               // int64_t arg6
         rdx = var_6c0h           // int64_t arg3
         ecx = byte [var_702h]    // int64_t arg4
         rdi = var_190h           // int64_t arg1
         rsi = r15                // int64_t arg2
         sym.solana_transaction::sanitized::SanitizedTransaction::try_new::h6f3f20a73008a5b9 () // sym.solana_transaction::sanitized::SanitizedTransaction::try_new::h6f3f20a73008a5b9(0x10078188, 0x100785f0, 0x100786b8, 0x0, 0x0, 0x10)
         r12 = qword [var_190h]
         v = r12 - r13
         if (!v) 
         goto loc_0x005dccba;
    loc_0x005dccba: // orphan
         rbp = qword [var_198h]   // rsp
         r15d = dword [var_1a0h]
         rsi = var_1a4h
         rdi = var_330h
         edx = 0xe4
         qword [memcpy] ()        // [0xe37450:8]=0 // 0xe37450(0x10078330, 0x100781a4, 0xe4, 0x0)
         r13 = qword [var_678h]
         v = r13 - 2
         if (!v) 
         goto loc_0x005dccf7;
    loc_0x005dccf7: // orphan
         qword [var_190h] = r12
         qword [var_198h] = rbp
         dword [var_1a0h] = r15d
         rdi = var_1a4h
         rsi = var_330h
         r15 = qword [memcpy]     // [0xe37450:8]=0
         edx = 0xe4
         r15 ()                   // 0x5dcd2e(0x100781a4, 0x10078330, 0xe4, 0x0)
         r12 = var_288h
         qword [var_288h] = r13
         rdi = var_290h
         edx = 0x88
         rsi = var_680h           // 0x680 // sym.std::thread::current::id::ID::haefc39db7a451217
                                  std::thread::current::id::ID::haefc39db7a451217
         r15 ()                   // 0x5dcd56(0x10078288, 0x10078678, 0x88, 0x0)
         rbp = qword [var_48h]
         rdx = qword [var_3e0h]
         rdx += 0x10
         rdi = var_330h
         rsi = r12
         qword [reloc.fixup.UAWAVATSHA] () // [0xe383a0:8]=0 // reloc.fixup.UAWAVATSHA(0x10078320, 0x10078280, 0x10, 0x0)
         v = dword [var_340h] - 0
         if (!v) 
         goto loc_0x005dcd85;
    loc_0x005dcd85: // orphan
         eax = dword [var_33ch]
         rax = rax * qword [var_330h]
         r15 = 0xffffffffffffffff
         rcx = 0xfffffffffff0bdc0
         v = rcx - rax
         ecx = 0xf423f            // '?B\x0f'
         rcx = rcx - rdx
         if (((unsigned) v) < 0) 
         goto loc_0x005dcdaf;
    loc_0x005dcdaf: // orphan
         rsi = rdx
         rax += 0xf423f
         rsi += 0
         edx = 0xf4240            // '@B\x0f'
         rdi = rax
         ecx = 0
         qword [0x00e383a8] ()    // [0xe383a8:8]=0 // 0xe383a8(0xf423f, 0x0, 0xf4240, 0x0)
         r15 = rax

    loc_0x005dcdcf: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dcdad(x)
         eax = byte [var_17h]
         al ^= 1
         al |= byte [var_8h]
         v = al - 1
         if (!v) 
         goto loc_0x005dcde2;
    loc_0x005dcde2: // orphan
         rdx = qword [var_3e0h]
         rdx += 0x10              // int64_t arg3
         rdi = var_330h           // int64_t arg1
         rsi = var_190h           // int64_t arg2
         sym.solana_cost_model::cost_model::CostModel::calculate_cost::h6c07365ae3ffac2d () // sym.solana_cost_model::cost_model::CostModel::calculate_cost::h6c07365ae3ffac2d(0x10078330, 0x10078190, 0x10)
         v = qword [var_330h] - 0
         if (!v) 
         goto loc_0x005dce11;
    loc_0x005dce11: // orphan
         rcx = qword [var_338h]
         rcx += qword [var_340h]
         rdx = 0xffffffffffffffff
         cmovb rcx rdx
         eax = word [var_360h]
         rax += rcx
         cmovb rax rdx
         rax += qword [var_348h]
         cmovb rax rdx
         rax += qword [var_350h]
         cmovb rax rdx
         
         goto loc_0x005dce55;
    loc_0x005dce55: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dcd7f(x)
         xmm0 ^= xmm0
         xmmword [r14 + 0x50] = xmm0
         xmmword [r14 + 0x40] = xmm0
         xmmword [r14] = xmm0
         xmmword [r14 + 0x10] = xmm0
         xmmword [r14 + 0x20] = xmm0
         xmmword [r14 + 0x30] = xmm0
         byte [r14 + 0x89] = 0
         qword [r14 + 0x60] = 0
         byte [r14 + 0x68] = 0
         rdi = var_190h
         
         goto loc_0x005dce9e;
    loc_0x005dce9e: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dce0b(x)
         eax = 0xd64              // 'd\r'

    loc_0x005dcea3: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dce53(x)
         v = rax - qword [var_68h]
         seta al
         qword [var_8h] = rax

    loc_0x005dceb0: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dcddc(x)
         rdi = var_330h
         rsi = rbp                // rsp
         qword [reloc.fixup.AWAVSH0IIH0F0_wpH] () // [0xe381a0:8]=0 // reloc.fixup.AWAVSH0IIH0F0_wpH(0x10078330, 0x10078000, 0x0, 0x0)
         r13 = qword [var_350h]
         r12 = qword [arg_a18h]
         rdi = qword [var_3e0h]
         rdi += 0x10
         qword [0x00e381a8] ()    // [0xe381a8:8]=0 // 0xe381a8(0x10, 0x10078000, 0x0, 0x0)
         r8 = qword [var_1a8h]    // rsp
         v = r13 & r13
         if (!v) 
         goto loc_0x005dcef2;
    loc_0x005dcef2: // orphan
         ecx = 0
         r10 = 0x8000000000000000
         v = r8 - r10
         rdx = var_1c8h
         r9 = var_1c0h
         if (!v) r9 = rdx
         cl = v == 0
         rdi = qword [var_1c8h]
         rsi = qword [var_1d0h]
         rdx = rdi
         if (!v) rdx = rsi
         v = qword [rsp + rcx*8 + 0x1c0] - r10
         if (!zf) rdx = r9
         rcx = rdx + 0x68
         rdx += 0x50              // sym.rocksdb::perf_level
         v = r8 - r10
         if (!zf) rdx = rcx
         edx = byte [rdx]
         rdx += qword [var_300h]
         r9 = 0xffffffffffffffff
         cmovb rdx r9
         rdx += qword [var_2f8h]
         cmovb rdx r9
         rcx = qword [var_308h]
         rcx += rdx
         cmovb rcx r9
         v = al & al
         if (!v) rcx = rdx
         rax = rcx
         rax = rax * r12
         rcx = 0xffffffffffffffff
         jo 0x5dcf98              // unlikely

         goto loc_0x005dcf90;
    loc_0x005dcf90: // orphan
         v = rax & rax
         if (!v) 
         goto loc_0x005dcf95;
    loc_0x005dcf95: // orphan
         rcx = rax

    loc_0x005dcf98: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dcf8e(x)
         rax = rcx * 0x32
         rax >>>= 2
         rdx = 0x28f5c28f5c28f5c3
         rax = rax * rdx
         rdx >>>= 2
         eax = 0
         rcx -= rdx
         cmovae rax rcx
         r15 += rax
         cmovb r15 r9
         
         goto loc_0x005dcfc3;
    loc_0x005dcfc3: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dceec(x)
         rdi = qword [var_1c8h]
         rsi = qword [var_1d0h]
         r15d = 0
         r10 = 0x8000000000000000
         
         goto loc_0x005dcfe2;
    loc_0x005dcfe2: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dcf93(x)
         r15d = 0

    loc_0x005dcfe5: // orphan
         // CODE XREFS from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dcfc1(x), 0x5dcfe0(x)
         eax = 0
         v = r8 - r10
         if (!zf) rsi = rdi
         cl = v != 0
         if (!v) 
         goto loc_0x005dcff3;
    loc_0x005dcff3: // orphan
         rsi += 0x48
         rdi = qword [var_1c0h]
         
         goto loc_0x005dd001;
    loc_0x005dd001: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dcff1(x)
         rsi += 0x30

    loc_0x005dd005: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dcfff(x)
         al = cl
         eax <<<= 4
         v = rdi - r10
         rax = rsp + rax + 0x1f8
         if (!v) rax = rsi
         xmm0 = xmmword [rax]
         xmm1 = xmmword [rax + 0x10]
         xmmword [var_540h] = xmm0 // sym.tokio::runtime::park::CURRENT_PARKER::__u7b__u7b_constant_u7d__u7d_::__u7b__u7b_closure_u7d__u7d_::__RUST_STD_INTERNAL_VAL::h14c4a1b8de9c85c1__clone_llvm6745701240000842560_ // [0x540:16]=-1 // "I\x04"
         xmmword [var_550h] = xmm1 // sym.regex_automata::util::pool::inner::THREAD_ID::__u7b__u7b_constant_u7d__u7d_::__u7b__u7b_closure_u7d__u7d_::__RUST_STD_INTERNAL_VAL::h146657069e56d70c // [0x550:16]=-1
         rdi = var_190h
         qword [0x00e383b0] ()    // [0xe383b0:8]=0 // 0xe383b0(0x10078190, 0x0, 0x0, 0x0)
         xmm0 = xmmword [rax]
         xmm1 = xmmword [rax + 0x10]
         xmm2 = xmmword [rax + 0x20]
         xmm3 = xmmword [rax + 0x30]
         xmmword [var_480h] = xmm3 // [0x480:16]=-1
         xmmword [var_470h] = xmm2 // [0x470:16]=-1
         xmmword [var_460h] = xmm1 // [0x460:16]=-1
         xmmword [var_450h] = xmm0 // [0x450:16]=-1
         r12 = var_330h
         rsi = var_190h
         edx = 0xf8
         rdi = r12
         qword [memcpy] ()        // [0xe37450:8]=0 // 0xe37450(0x10078328, 0x10078188, 0xf8, 0x0)
         rdi = r12
         qword [0x00e383b8] ()    // [0xe383b8:8]=0 // 0xe383b8(0x10078328, 0x10078188, 0xf8, 0x0)
         v = rax & rax
         if (!v) 
         goto loc_0x005dd0a5;
    loc_0x005dd0a5: // orphan
         xmm0 = xmmword [rax]
         xmm1 = xmmword [rax + 0x10]
         xmmword [var_110h] = xmm1
         xmmword [var_100h] = xmm0
         al = 1
         
         goto loc_0x005dd0c4;
    loc_0x005dd0c4: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dd0a3(x)
         eax = 0

    loc_0x005dd0c6: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dd0c2(x)
         rcx = qword [var_8h]
         byte [r14 + 0x89] = cl
         qword [r14 + 0x60] = r15
         xmm0 = xmmword [var_540h] // [0x540:16]=-1 // "I\x04"
         xmm1 = xmmword [var_550h] // [0x550:16]=-1 // sym.regex_automata::util::pool::inner::THREAD_ID::__u7b__u7b_constant_u7d__u7d_::__u7b__u7b_closure_u7d__u7d_::__RUST_STD_INTERNAL_VAL::h146657069e56d70c
                                  regex_automata::util::pool::inner::THREAD_ID::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h146657069e56d70c
         xmmword [r14 + 0x40] = xmm0
         xmmword [r14 + 0x50] = xmm1
         xmm0 = xmmword [var_450h]
         xmm1 = xmmword [var_460h]
         xmm2 = xmmword [var_470h]
         xmm3 = xmmword [var_480h]
         xmmword [r14] = xmm0
         xmmword [r14 + 0x10] = xmm1
         xmmword [r14 + 0x20] = xmm2
         xmmword [r14 + 0x30] = xmm3
         byte [r14 + 0x68] = al
         xmm0 = xmmword [var_100h]
         xmm1 = xmmword [var_110h]
         xmmword [r14 + 0x69] = xmm0
         xmmword [r14 + 0x79] = xmm1
         rdi = var_330h

    loc_0x005dd151: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dce99(x)
         sym.core::ptr::drop_in_place_solana_transaction::sanitized::SanitizedTransaction_::h0440ee21d8c1f1d8 () // core::ptr::drop_in_place<solana_transaction::sanitized::SanitizedTransaction>::h0440ee21d8c1f1d8 // sym.core::ptr::drop_in_place_solana_transaction::sanitized::SanitizedTransaction_::h0440ee21d8c1f1d8(0x0)
         
         goto loc_0x005dd15b;
    loc_0x005dd15b: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dcb86(x)
         eax = 0

    loc_0x005dd15d: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dcbc5(x)
         rcx = qword [var_40h]
         rdx = qword [var_18h]
         v = dl & dl
         r13 = 0x8000000000000000
         if (!v) 
         goto loc_0x005dd175;
    loc_0x005dd175: // orphan
         rcx += rax
         rax = 0xffffffffffffffff
         cmovae rax rcx
         v = rax - qword [var_70h]
         seta al
         qword [var_8h] = rax
         
         goto loc_0x005dd192;
    loc_0x005dd192: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dd173(x)
         v = rax - qword [arg_740h]
         setae al
         rcx = qword [var_8h]
         cl &= al
         qword [var_8h] = rcx

    loc_0x005dd1a9: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode2_filtered::haa0ab5c29e87e680 @ 0x5dd190(x)
         rdi = var_190h           // int64_t arg1
         sym.core::ptr::drop_in_place_solana_transaction::sanitized::SanitizedTransaction_::h0440ee21d8c1f1d8 () // core::ptr::drop_in_place<solana_transaction::sanitized::SanitizedTransaction>::h0440ee21d8c1f1d8 // sym.core::ptr::drop_in_place_solana_transaction::sanitized::SanitizedTransaction_::h0440ee21d8c1f1d8(0x10078190)
         
}

