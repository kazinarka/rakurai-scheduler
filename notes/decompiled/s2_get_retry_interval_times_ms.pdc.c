// callconv: rax amd64 (rdi, rsi, rdx, rcx, r8, r9, xmm0, xmm1, xmm2, xmm3, xmm4);
void sym.rakurai_scheduler__scheduler_2__scheduler_stats__get_retry_interval_times_ms__hdd37f4bf85bb539f (int64_t arg1, int64_t arg2, int64_t arg3) {
        // DATA XREF from reloc.fixup.UAWAVAUATSHXHT_IH__ @
        // rakurai_scheduler::scheduler_2::scheduler_stats::get_retry_interval_
        // times_ms::hdd37f4bf85bb539f
        push (rbp)
        push (r15)
        push (r14)
        push (r13)
        push (r12)
        push (rbx)
        rsp -= 0x58
        qword [var_18h] = rdx // arg3
        r15 = rsi     // arg2
        qword [var_20h] = rdi // arg1
        qword [0x00e37508] () // [0xe37508:8]=0 // 0xe37508(0x0, 0x0, 0x0, 0x0)
        edi = 0x30    // '0'
        esi = 8
        qword [0x00e37510] () // [0xe37510:8]=0 // 0xe37510(0x30, 0x8, 0x0, 0x0)
        v = rax & rax
        if (!v) goto loc_0x68a21f // likely
        goto loc_0x0068a00a;
    loc_0x0068a21f:
        // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::get_retry_interval_times_ms::hdd37f4bf85bb539f @ 0x68a004(x)
        edi = 8
        esi = 0x30    // '0'
        qword [reloc.fixup.UHHu] () // [0xe37788:8]=0 // reloc.fixup.UHHu(0x8, 0x30, 0x0, 0x0)
        rbx = rax
        rsi = qword [rsp]
        v = rsi & rsi
        if (!v) goto loc_0x68a24f // unlikely
        goto loc_0x0068a23b;
    loc_0x0068a24f:
        // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::get_retry_interval_times_ms::hdd37f4bf85bb539f @ 0x68a239(x)
        rdi = rbx
        sym.imp._Unwind_Resume ()
        int3
        return rax;
        return rax;
    loc_0x0068a0b2:
        // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::get_retry_interval_times_ms::hdd37f4bf85bb539f @ 0x68a140(x)
        rcx = qword [var_10h]
        rax = qword [var_20h]
        qword [rax + 0x10] = rcx
        rcx = qword [rsp]
        qword [rax] = rcx
        rcx = qword [var_8h]
        qword [rax + 8] = rcx
        rsp += 0x58
        rbx = pop ()
        r12 = pop ()
        r13 = pop ()
        r14 = pop ()
        r15 = pop ()
        rbp = pop ()
        return
    loc_0x0068a0df: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::get_retry_interval_times_ms::hdd37f4bf85bb539f @ 0x68a0b0(x)
         rdx >>>= 1
         rdx++
         qword [var_28h] = rdx
         xmm0 = qword [var_18h]
         unpcklps xmm0 xmmword [0x00358780]
         subpd xmm0 xmmword [0x00358020]
         movapd xmm1 xmm0
         unpckhpd xmm1 xmm0
         addsd xmm1 xmm0
         movapd xmmword [var_30h] xmm1
         ebx = 1
         r13d = 8
         
         goto loc_0x0068a120;
    loc_0x0068a120: // orphan
         // CODE XREFS from rakurai_scheduler::scheduler_2::scheduler_stats::get_retry_interval_times_ms::hdd37f4bf85bb539f @ 0x68a1e0(x), 0x68a20b(x), 0x68a21a(x)
         rax = qword [var_8h]
         qword [rax + r13 - 8] = r14
         qword [rax + r13] = r12
         qword [var_10h] = rbx
         rbx++
         r13 += 0x10
         r12 = rbp                // rsp
         v = rbp - r15
         if (((unsigned) v) > 0) 
         goto loc_0x0068a146;
    loc_0x0068a146: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::get_retry_interval_times_ms::hdd37f4bf85bb539f @ 0x68a11c(x)
         rax = qword [var_28h]
         rbp = rax + r12
         v = r15 - rbp
         rax = rbp
         cmovb rax r15
         xmm0 = rax
         punpckldq xmm0 xmmword [0x00358780]
         subpd xmm0 xmmword [0x00358020]
         movapd xmm1 xmm0
         unpckhpd xmm1 xmm0
         addsd xmm1 xmm0
         divsd xmm1 qword [rsp + 0x40]
         mulsd xmm1 xmm1
         cvttsd2si rcx xmm1
         rdx = rcx
         rdx >>= 0x3f
         movapd xmm0 xmm1
         subsd xmm0 qword [0x00378548]
         cvttsd2si rax xmm0
         rax &= rdx
         rax |= rcx
         xorpd xmm0 xmm0
         ucomisd xmm1 xmm0
         ecx = 0
         cmovb rax rcx
         ucomisd xmm1 qword [0x00378000]
         rcx = 0xffffffffffffffff
         if (((unsigned) v) <= 0) 
         goto loc_0x0068a1cb;
    loc_0x0068a1cb: // orphan
         rax = qword [var_18h]
         r14 = rax
         v = rax - rcx
         jae 0x68a200             // likely

         goto loc_0x0068a1d8;
    loc_0x0068a1d8: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::get_retry_interval_times_ms::hdd37f4bf85bb539f @ 0x68a1fe(x)
         rax = rbx - 1
         v = rax - qword [rsp]
         if (v) 
         goto loc_0x0068a1e6;
    loc_0x0068a1e6: // orphan
         
         goto loc_0x0068a1f0;
    loc_0x0068a1f0: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::get_retry_interval_times_ms::hdd37f4bf85bb539f @ 0x68a1c9(x)
         rcx = rax
         rax = qword [var_18h]
         r14 = rax
         v = rax - rcx
         if (((unsigned) v) < 0) 
         goto loc_0x0068a200;
    loc_0x0068a200: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::get_retry_interval_times_ms::hdd37f4bf85bb539f @ 0x68a1d6(x)
         r14 = rcx
         rax = rbx - 1
         v = rax - qword [rsp]
         if (v) 
         goto loc_0x0068a211;
    loc_0x0068a211: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::get_retry_interval_times_ms::hdd37f4bf85bb539f @ 0x68a1e6(x)
         rdi = rsp
         qword [0x00e38d20] ()    // [0xe38d20:8]=0 // 0xe38d20(0x10078000, 0x0, 0x0, 0x0)
         
         goto loc_0x0068a21f;
    loc_0x0068a23b: // orphan
         rdi = qword [var_8h]
         rsi <<<= 4
         edx = 8
         qword [0x00e37488] ()    // [0xe37488:8]=0 // 0xe37488(0x0, 0x0, 0x8, 0x0)

}

