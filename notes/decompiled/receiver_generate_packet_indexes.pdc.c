// callconv: rax amd64 (rdi, rsi, rdx, rcx, r8, r9, xmm0, xmm1, xmm2, xmm3, xmm4);
void sym.rakurai_scheduler__scheduler_receiver__generate_packet_indexes__h7d60572207f6ef6a (int64_t arg1, int64_t arg2) {
        // DATA XREF from reloc.fixup.UAWAVAUATSH8IHt @
        // rakurai_scheduler::scheduler_receiver::generate_packet_indexes::h7d6
        // 0572207f6ef6a
        push (rbp)
        push (r15)
        push (r14)
        push (r13)
        push (r12)
        push (rbx)
        rsp -= 0x38
        r14 = rsi     // arg2
        rbx = rdi     // arg1
        ecx = dword [rsi] // arg2
        v = ecx & ecx
        if (!v) goto loc_0x5d5db4 // unlikely
        goto loc_0x005d5daa;
    loc_0x005d5db4:
        // CODE XREF from rakurai_scheduler::scheduler_receiver::generate_packet_indexes::h7d60572207f6ef6a @ 0x5d5da8(x)
        rbp = qword [r14 + 0x18]
        
    loc_0x005d5db8:
        // CODE XREF from rakurai_scheduler::scheduler_receiver::generate_packet_indexes::h7d60572207f6ef6a @ 0x5d5db2(x)
        r13 = 0x7ffffffffffffff8 // 9223372036854775800
        r15 = rbp*8
        rax = rbp     // rsp
        rax >>>= 0x3d
        al = v != 0
        v = r15 - r13
        seta dl
        dl |= al
        if (!v) goto loc_0x5d5ded // likely
        goto loc_0x005d5dde;
        goto loc_0x005d5db4;
        return rax;
        return rax;
    loc_0x005d5dde:
        r12d = 0
        
    loc_0x005d5de1:
        // CODE XREF from rakurai_scheduler::scheduler_receiver::generate_packet_indexes::h7d60572207f6ef6a @ 0x5d5e0f(x)
        rdi = r12
        rsi = r15
        qword [reloc.fixup.UHHu] () // [0xe37788:8]=0 // reloc.fixup.UHHu(0x0, 0x0, 0x0, 0x0)
        return rax;
    loc_0x005d5ded: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::generate_packet_indexes::h7d60572207f6ef6a @ 0x5d5ddc(x)
         v = r15 & r15
         if (!v) 
         goto loc_0x005d5df2;
    loc_0x005d5df2: // orphan
         qword [0x00e37508] ()    // [0xe37508:8]=0 // 0xe37508(0x0, 0x0, 0x0, 0x0)
         r12d = 8
         esi = 8
         rdi = r15
         qword [0x00e37510] ()    // [0xe37510:8]=0 // 0xe37510(0x0, 0x8, 0x0, 0x0)
         v = rax & rax
         if (!v) 
         goto loc_0x005d5e11;
    loc_0x005d5e11: // orphan
         ecx = dword [r14]
         
         goto loc_0x005d5e16;
    loc_0x005d5e16: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::generate_packet_indexes::h7d60572207f6ef6a @ 0x5d5df0(x)
         eax = 8
         ebp = 0

    loc_0x005d5e1d: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::generate_packet_indexes::h7d60572207f6ef6a @ 0x5d5e14(x)
         qword [var_20h] = rbp
         qword [var_28h] = rax
         qword [var_30h] = 0
         v = ecx - 2
         if (!v) 
         goto loc_0x005d5e35;
    loc_0x005d5e35: // orphan
         v = ecx - 1
         rbp = qword [r14 + 0x18]
         
         goto loc_0x005d5e3e;
    loc_0x005d5e3e: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::generate_packet_indexes::h7d60572207f6ef6a @ 0x5d5e33(x)
         ebp = 1

    loc_0x005d5e43: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::generate_packet_indexes::h7d60572207f6ef6a @ 0x5d5e3c(x)
         r15 = rbp                // rsp
         r15 <<<= 4
         rax = rbp                // rsp
         rax >>>= 0x3c
         al = v != 0
         v = r15 - r13
         seta dl
         dl |= al
         if (!v) 
         goto loc_0x005d5e5e;
    loc_0x005d5e5e: // orphan
         r12d = 0

    loc_0x005d5e61: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::generate_packet_indexes::h7d60572207f6ef6a @ 0x5d5e91(x)
         rdi = r12
         rsi = r15
         qword [reloc.fixup.UHHu] () // [0xe37788:8]=0 // reloc.fixup.UHHu(0x0, 0x0, 0x0, 0x0)
         ud2

        return rax;
    loc_0x005d5e6f: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::generate_packet_indexes::h7d60572207f6ef6a @ 0x5d5e5c(x)
         v = r15 & r15
         if (!v) 
         goto loc_0x005d5e74;
    loc_0x005d5e74: // orphan
         qword [0x00e37508] ()    // [0xe37508:8]=0 // 0xe37508(0x0, 0x0, 0x0, 0x0)
         r12d = 8
         esi = 8
         rdi = r15
         qword [0x00e37510] ()    // [0xe37510:8]=0 // 0xe37510(0x0, 0x8, 0x0, 0x0)
         v = rax & rax
         if (!v) 
         goto loc_0x005d5e93;
    loc_0x005d5e93: // orphan
         ecx = dword [r14]
         
         goto loc_0x005d5e98;
    loc_0x005d5e98: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::generate_packet_indexes::h7d60572207f6ef6a @ 0x5d5e72(x)
         eax = 8
         ebp = 0

    loc_0x005d5e9f: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::generate_packet_indexes::h7d60572207f6ef6a @ 0x5d5e96(x)
         qword [var_8h] = rbp
         qword [var_10h] = rax
         qword [var_18h] = 0
         v = ecx & ecx
         if (!v) 
         goto loc_0x005d5eb6;
    loc_0x005d5eb6: // orphan
         v = ecx - 1
         if (v) 
         goto loc_0x005d5ebf;
    loc_0x005d5ebf: // orphan
         rax = qword [r14 + 0x18]
         v = rax & rax
         if (!v) 
         goto loc_0x005d5ecc;
    loc_0x005d5ecc: // orphan
         r13 = qword [r14 + 0x10]
         r14 = rax + rax*2
         r14 <<<= 5
         r14 += r13
         
         goto loc_0x005d5ee0;
    loc_0x005d5ee0: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::generate_packet_indexes::h7d60572207f6ef6a @ 0x5d5eb4(x)
         rax = qword [r14 + 0x18]
         v = rax & rax
         if (!v) 
         goto loc_0x005d5eed;
    loc_0x005d5eed: // orphan
         r12 = qword [r14 + 0x10]
         r13 = rax * 0x510
         ebp = 0
         r14d = 0
         
         goto loc_0x005d5f00;
    loc_0x005d5f00: // orphan
         // CODE XREFS from rakurai_scheduler::scheduler_receiver::generate_packet_indexes::h7d60572207f6ef6a @ 0x5d5f3b(x), 0x5d5f48(x)
         rax = qword [var_28h]
         qword [rax + r15*8] = r14
         r15++
         qword [var_30h] = r15

    loc_0x005d5f11: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::generate_packet_indexes::h7d60572207f6ef6a @ 0x5d5fbd(x)
         rbp += 0x510
         r14++
         v = r13 - rbp
         if (!v) 
         goto loc_0x005d5f24;
    loc_0x005d5f24: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::generate_packet_indexes::h7d60572207f6ef6a @ 0x5d5efd(x)
         eax = byte [r12 + rbp + 0x4ec]
         v = al & 1
         if (v) 
         goto loc_0x005d5f31;
    loc_0x005d5f31: // orphan
         r15 = qword [var_30h]
         v = r15 - qword [var_20h]
         if (v) 
         goto loc_0x005d5f3d;
    loc_0x005d5f3d: // orphan
         rdi = var_20h
         qword [0x00e382e0] ()    // [0xe382e0:8]=0 // 0xe382e0(0x10078020, 0x0, 0x0, 0x0)
         
         goto loc_0x005d5f50;
    loc_0x005d5f50: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::generate_packet_indexes::h7d60572207f6ef6a @ 0x5d5f2f(x)
         rcx = qword [var_8h]     // rsp
         r15 = qword [var_18h]
         v = al & 0x20            // sym.tracing_core::dispatcher::CURRENT_STATE::__u7b__u7b_constant_u7d__u7d_::__u7b__u7b_closure_u7d__u7d_::__RUST_STD_INTERNAL_VAL::h90d4f31268b4f161 // "@"
         if (v) 
         goto loc_0x005d5f5e;
    loc_0x005d5f5e: // orphan
         v = r15 - rcx
         if (v) 
         goto loc_0x005d5f63;
    loc_0x005d5f63: // orphan
         rdi = var_8h
         qword [0x00e37cd8] ()    // [0xe37cd8:8]=0 // 0xe37cd8(0x10078008, 0x0, 0x0, 0x0)

    loc_0x005d5f6e: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::generate_packet_indexes::h7d60572207f6ef6a @ 0x5d5f61(x)
         rax = qword [var_10h]
         rcx = r15
         rcx <<<= 4
         qword [rax + rcx] = r14
         byte [rax + rcx + 8] = 0
         
         goto loc_0x005d5f90;
    loc_0x005d5f90: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::generate_packet_indexes::h7d60572207f6ef6a @ 0x5d5f5c(x)
         v = r15 - rcx
         if (v) 
         goto loc_0x005d5f95;
    loc_0x005d5f95: // orphan
         rdi = var_8h
         qword [0x00e37cd8] ()    // [0xe37cd8:8]=0 // 0xe37cd8(0x10078008, 0x0, 0x0, 0x0)

    loc_0x005d5fa0: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::generate_packet_indexes::h7d60572207f6ef6a @ 0x5d5f93(x)
         rax = qword [var_10h]
         rcx = r15
         rcx <<<= 4
         qword [rax + rcx] = r14
         byte [rax + rcx + 8] = 1

    loc_0x005d5fb5: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::generate_packet_indexes::h7d60572207f6ef6a @ 0x5d5f83(x)
         r15++
         qword [var_18h] = r15
         
         goto loc_0x005d5fc2;
    loc_0x005d5fc2: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::generate_packet_indexes::h7d60572207f6ef6a @ 0x5d5eb9(x)
         r13 = r14 + 8
         r14 += 0x68

    loc_0x005d5fca: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::generate_packet_indexes::h7d60572207f6ef6a @ 0x5d5edb(x)
         ebp = 0
         r12 = var_8h
         
         goto loc_0x005d5fe0;
    loc_0x005d5fe0: // orphan
         // CODE XREFS from rakurai_scheduler::scheduler_receiver::generate_packet_indexes::h7d60572207f6ef6a @ 0x5d6014(x), 0x5d6021(x)
         rax = qword [var_28h]
         qword [rax + r15*8] = rbp
         r15++
         qword [var_30h] = r15
         r13 += 0x60
         rbp++
         v = r13 - r14
         if (!v) 
         goto loc_0x005d6001;
    loc_0x005d6001: // orphan
         // CODE XREFS from rakurai_scheduler::scheduler_receiver::generate_packet_indexes::h7d60572207f6ef6a @ 0x5d5fd1(x), 0x5d60a5(x)
         eax = byte [r13 + 0x3c]
         v = al & 1
         if (v) 
         goto loc_0x005d600a;
    loc_0x005d600a: // orphan
         r15 = qword [var_30h]
         v = r15 - qword [var_20h]
         if (v) 
         goto loc_0x005d6016;
    loc_0x005d6016: // orphan
         rdi = var_20h
         qword [0x00e382e0] ()    // [0xe382e0:8]=0 // 0xe382e0(0x10078020, 0x0, 0x0, 0x0)
         
         goto loc_0x005d6030;
    loc_0x005d6030: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::generate_packet_indexes::h7d60572207f6ef6a @ 0x5d6008(x)
         rcx = qword [var_8h]     // rsp
         r15 = qword [var_18h]
         v = al & 0x20            // sym.tracing_core::dispatcher::CURRENT_STATE::__u7b__u7b_constant_u7d__u7d_::__u7b__u7b_closure_u7d__u7d_::__RUST_STD_INTERNAL_VAL::h90d4f31268b4f161 // "@"
         if (v) 
         goto loc_0x005d603e;
    loc_0x005d603e: // orphan
         v = r15 - rcx
         if (v) 
         goto loc_0x005d6043;
    loc_0x005d6043: // orphan
         rdi = r12
         qword [0x00e37cd8] ()    // [0xe37cd8:8]=0 // 0xe37cd8(0x0, 0x0, 0x0, 0x0)

    loc_0x005d604c: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::generate_packet_indexes::h7d60572207f6ef6a @ 0x5d6041(x)
         rax = qword [var_10h]
         rcx = r15
         rcx <<<= 4
         qword [rax + rcx] = rbp
         byte [rax + rcx + 8] = 0
         
         goto loc_0x005d6070;
    loc_0x005d6070: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::generate_packet_indexes::h7d60572207f6ef6a @ 0x5d603c(x)
         v = r15 - rcx
         if (v) 
         goto loc_0x005d6075;
    loc_0x005d6075: // orphan
         rdi = r12
         qword [0x00e37cd8] ()    // [0xe37cd8:8]=0 // 0xe37cd8(0x0, 0x0, 0x0, 0x0)

    loc_0x005d607e: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::generate_packet_indexes::h7d60572207f6ef6a @ 0x5d6073(x)
         rax = qword [var_10h]
         rcx = r15
         rcx <<<= 4
         qword [rax + rcx] = rbp
         byte [rax + rcx + 8] = 1

    loc_0x005d6093: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::generate_packet_indexes::h7d60572207f6ef6a @ 0x5d6061(x)
         r15++
         qword [var_18h] = r15
         r13 += 0x60
         rbp++
         v = r13 - r14
         if (v) 
         return rax;
    loc_0x005d60ab: // orphan
         // CODE XREFS from rakurai_scheduler::scheduler_receiver::generate_packet_indexes::h7d60572207f6ef6a @ 0x5d5ec6(x), 0x5d5ee7(x), 0x5d5f1e(x), 0x5d5ffb(x)
         rax = qword [var_30h]
         qword [rbx + 0x10] = rax
         xmm0 = xmmword [var_20h] // rsp
         xmmword [rbx] = xmm0
         xmm0 = xmmword [var_8h]  // rsp
         xmmword [rbx + 0x18] = xmm0
         rax = qword [var_18h]
         qword [rbx + 0x28] = rax
         rax = rbx
         rsp += 0x38
         rbx = pop ()
         r12 = pop ()
         r13 = pop ()
         r14 = pop ()
         r15 = pop ()
         rbp = pop ()
         return

}

