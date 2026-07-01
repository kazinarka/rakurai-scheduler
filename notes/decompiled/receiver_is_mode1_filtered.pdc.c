// callconv: rax amd64 (rdi, rsi, rdx, rcx, r8, r9, xmm0, xmm1, xmm2, xmm3, xmm4);
void sym.rakurai_scheduler__scheduler_receiver__RakuraiTransactionViewReceiveAndBuffer__is_mode1_filtered__h6988e57cdb3fd1cc (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5) {
        // DATA XREF from reloc.fixup.UH0 @ +0x8(r)
        // rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceive
        // AndBuffer::is_mode1_filtered::h6988e57cdb3fd1cc
        push (rbp)
        push (r15)
        push (r14)
        push (r13)
        push (r12)
        push (rbx)
        rsp -= 0x4f8
        r15 = r8      // arg5
        r13 = rcx     // arg4
        r12 = rdx     // arg3
        rbx = rsi     // arg2
        r14 = rdi     // arg1
        qword [var_18h] = rsi // arg2
        qword [var_10h] = 1
        rdi = var_260h // int64_t arg1
        rsi = var_10h // int64_t arg2
        sym.solana_perf::packet::PacketRef::deserialize_slice::ha4567f4ef3592c6a () // sym.solana_perf::packet::PacketRef::deserialize_slice::ha4567f4ef3592c6a(0x10077d38, 0x10077ae8)
        eax = 0
        v = rax - qword [var_260h]
        jno 0x5dbb5e  // likely
        goto loc_0x005dbb4c;
    loc_0x005dbb5e:
        // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode1_filtered::h6988e57cdb3fd1cc @ 0x5dbb4a(x)
        rbp = var_d8h
        rsi = var_260h
        edx = 0x88
        rdi = rbp
        qword [memcpy] () // [0xe37450:8]=0 // 0xe37450(0x100780d8, 0x10078260, 0x88, 0x0)
        rdi = var_260h
        rsi = rbp
        qword [0x00e38390] () // [0xe38390:8]=0 // 0xe38390(0x10078258, 0x100780d8, 0x88, 0x0)
        rax = 0x8000000000000000
        v = qword [var_260h] - rax
        if (!v) goto loc_0x5dbca2 // unlikely
        goto loc_0x005dbba5;
    loc_0x005dbca2:
        // CODE XREFS from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode1_filtered::h6988e57cdb3fd1cc @ 0x5dbb59(x), 0x5dbb9f(x), 0x5dbbf8(x), 0x5dbc60(x)
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
        
    loc_0x005dbcd7:
        // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode1_filtered::h6988e57cdb3fd1cc @ 0x5dc0fe(x)
        rdi = rbx + 0x18
        rax = qword [rbx]
        rsi = qword [rbx + 8]
        rdx = qword [rbx + 0x10]
        qword [sym.tracing_core::dispatcher::CURRENT_STATE::__u7b__u7b_constant_u7d__u7d_::__u7b__u7b_closure_u7d__u7d_::__RUST_STD_INTERNAL_VAL::h90d4f31268b4f161] ()
        rax = r14
        rsp += 0x4f8
        rbx = pop ()
        r12 = pop ()
        r13 = pop ()
        r14 = pop ()
        r15 = pop ()
        rbp = pop ()
        return
        goto loc_0x005dbbfe;
    loc_0x005dbba5: // orphan
         rbp = var_470h
         rsi = var_260h
         edx = 0x88
         rdi = rbp
         qword [memcpy] ()        // [0xe37450:8]=0 // 0xe37450(0x10078470, 0x10078260, 0x88, 0x0)
         byte [var_260h] = 1
         eax = byte [rbx + 0x3c]
         al >>>= 3
         al &= 1
         ecx = al
         rdi = var_d8h
         rdx = var_260h
         rsi = rbp
         qword [0x00e38398] ()    // [0xe38398:8]=0 // 0xe38398(0x100780d0, 0x10078470, 0x10078258, 0x0)
         v = dword [var_160h] - 2
         if (!v) 
         goto loc_0x005dbbfe;
    loc_0x005dbbfe: // orphan
         rbp = var_358h
         rsi = var_d8h
         edx = 0x118
         rdi = rbp
         qword [memcpy] ()        // [0xe37450:8]=0 // 0xe37450(0x10078358, 0x100780d8, 0x118, 0x0)
         r9 = qword [r12 + 0x3e8]
         r9 += 0x10               // int64_t arg6
         rdx = var_428h           // int64_t arg3
         ecx = byte [var_46ah]    // int64_t arg4
         rdi = var_d8h            // int64_t arg1
         rsi = rbp                // int64_t arg2
         r8 = r12                 // int64_t arg5
         sym.solana_transaction::sanitized::SanitizedTransaction::try_new::h6f3f20a73008a5b9 () // sym.solana_transaction::sanitized::SanitizedTransaction::try_new::h6f3f20a73008a5b9(0x100780d0, 0x10078358, 0x10078420, 0x0, 0x0, 0x10)
         rbp = qword [var_d8h]
         rax = 0x8000000000000000
         v = rbp - rax
         if (!v) 
         goto loc_0x005dbc62;
    loc_0x005dbc62: // orphan
         qword [var_8h] = r15
         r15 = qword [var_e0h]
         eax = dword [var_e8h]
         dword [rsp] = eax
         rsi = var_ech
         rdi = var_260h
         edx = 0xe4
         qword [memcpy] ()        // [0xe37450:8]=0 // 0xe37450(0x10078260, 0x100780ec, 0xe4, 0x0)
         r12 = qword [var_3e0h]
         v = r12 - 2
         if (v) 
         goto loc_0x005dbca2;
    loc_0x005dbcfe: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode1_filtered::h6988e57cdb3fd1cc @ 0x5dbca0(x)
         qword [var_d8h] = rbp
         qword [var_e0h] = r15
         eax = dword [rsp]
         dword [var_e8h] = eax
         rdi = var_ech
         rsi = var_260h
         r15 = qword [memcpy]     // [0xe37450:8]=0
         edx = 0xe4
         r15 ()                   // 0x5dbd37(0x100780ec, 0x10078260, 0xe4, 0x0)
         rbp = var_1d0h
         qword [var_1d0h] = r12
         rdi = var_1d8h
         edx = 0x88
         rsi = var_3e8h
         r15 ()                   // 0x5dbd5f(0x100781d0, 0x100783e0, 0x88, 0x0)
         rdx = qword [r13 + 0x3e0]
         rdx += 0x10
         rdi = var_260h
         rsi = rbp
         qword [reloc.fixup.UAWAVATSHA] () // [0xe383a0:8]=0 // reloc.fixup.UAWAVATSHA(0x10078250, 0x100781c8, 0x10, 0x0)
         v = dword [var_270h] - 0
         if (!v) 
         goto loc_0x005dbd89;
    loc_0x005dbd89: // orphan
         eax = dword [var_26ch]
         rax = rax * qword [var_260h]
         rsi = rdx
         rdx = 0xffffffffffffffff
         rcx = 0xfffffffffff0bdc0
         v = rcx - rax
         ecx = 0xf423f            // '?B\x0f'
         rcx = rcx - rsi
         if (((unsigned) v) < 0) 
         goto loc_0x005dbdb6;
    loc_0x005dbdb6: // orphan
         rax += 0xf423f
         rsi += 0
         edx = 0xf4240            // '@B\x0f'
         rdi = rax
         ecx = 0
         qword [0x00e383a8] ()    // [0xe383a8:8]=0 // 0xe383a8(0xf423f, 0x0, 0xf4240, 0x0)
         rdx = rax

    loc_0x005dbdd3: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode1_filtered::h6988e57cdb3fd1cc @ 0x5dbdb4(x)
         qword [rsp] = rdx
         rdx = qword [r13 + 0x3e0]
         rdx += 0x10              // int64_t arg3
         rdi = var_a0h            // int64_t arg1
         rsi = var_d8h            // int64_t arg2
         sym.solana_cost_model::cost_model::CostModel::calculate_cost::h6c07365ae3ffac2d () // sym.solana_cost_model::cost_model::CostModel::calculate_cost::h6c07365ae3ffac2d(0x100780a0, 0x100780d8, 0x10)
         v = qword [var_a0h] - 0
         if (!v) 
         goto loc_0x005dbe06;
    loc_0x005dbe06: // orphan
         rax = qword [var_a8h]
         rax += qword [var_b0h]
         rcx = 0xffffffffffffffff
         cmovb rax rcx
         ebp = word [var_d0h]
         rbp += rax               // rsp
         cmovb rbp rcx
         rbp += qword [var_b8h]   // rsp
         cmovb rbp rcx
         rbp += qword [var_c0h]   // rsp
         cmovb rbp rcx
         
         goto loc_0x005dbe4a;
    loc_0x005dbe4a: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode1_filtered::h6988e57cdb3fd1cc @ 0x5dbd83(x)
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
         rdi = var_d8h
         
         goto loc_0x005dbe8c;
    loc_0x005dbe8c: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode1_filtered::h6988e57cdb3fd1cc @ 0x5dbe00(x)
         ebp = 0xd64              // 'd\r'

    loc_0x005dbe91: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode1_filtered::h6988e57cdb3fd1cc @ 0x5dbe48(x)
         rdi = var_260h
         rsi = r13
         qword [reloc.fixup.AWAVSH0IIH0F0_wpH] () // [0xe381a0:8]=0 // reloc.fixup.AWAVSH0IIH0F0_wpH(0x10078260, 0x0, 0x0, 0x0)
         r15 = qword [var_280h]
         r12 = qword [r13 + 0xa18]
         rdi = qword [r13 + 0x3e0]
         rdi += 0x10
         qword [0x00e381a8] ()    // [0xe381a8:8]=0 // 0xe381a8(0x10, 0x0, 0x0, 0x0)
         r8 = qword [var_f0h]
         v = r15 & r15
         if (!v) 
         goto loc_0x005dbed3;
    loc_0x005dbed3: // orphan
         ecx = 0
         r10 = 0x8000000000000000
         v = r8 - r10
         rdx = var_110h
         r9 = var_108h
         if (!v) r9 = rdx
         cl = v == 0
         rdi = qword [var_110h]
         rsi = qword [var_118h]
         rdx = rdi
         if (!v) rdx = rsi
         v = qword [rsp + rcx*8 + sym.rocksdb::iostats_context] - r10
         if (!zf) rdx = r9
         rcx = rdx + 0x68
         rdx += 0x50              // sym.rocksdb::perf_level
         v = r8 - r10
         if (!zf) rdx = rcx
         edx = byte [rdx]
         rdx += qword [var_248h]
         r9 = 0xffffffffffffffff
         cmovb rdx r9
         rdx += qword [var_240h]
         cmovb rdx r9
         rcx = qword [var_250h]
         rcx += rdx
         cmovb rcx r9
         v = al & al
         if (!v) rcx = rdx
         rax = rcx
         rax = rax * r12
         rcx = 0xffffffffffffffff
         jo 0x5dbf79              // unlikely

         goto loc_0x005dbf71;
    loc_0x005dbf71: // orphan
         v = rax & rax
         if (!v) 
         goto loc_0x005dbf76;
    loc_0x005dbf76: // orphan
         rcx = rax

    loc_0x005dbf79: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode1_filtered::h6988e57cdb3fd1cc @ 0x5dbf6f(x)
         rax = rcx * 0x32
         rax >>>= 2
         rdx = 0x28f5c28f5c28f5c3
         rax = rax * rdx
         rdx >>>= 2
         eax = 0
         rcx -= rdx
         cmovae rax rcx
         r15 = qword [rsp]
         r15 += rax
         cmovb r15 r9
         
         goto loc_0x005dbfa8;
    loc_0x005dbfa8: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode1_filtered::h6988e57cdb3fd1cc @ 0x5dbecd(x)
         rdi = qword [var_110h]
         rsi = qword [var_118h]

    loc_0x005dbfb8: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode1_filtered::h6988e57cdb3fd1cc @ 0x5dbf74(x)
         r15d = 0

    loc_0x005dbfbb: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode1_filtered::h6988e57cdb3fd1cc @ 0x5dbfa6(x)
         eax = 0
         rdx = 0x8000000000000000
         v = r8 - rdx
         if (!zf) rsi = rdi
         cl = v != 0
         if (!v) 
         goto loc_0x005dbfd3;
    loc_0x005dbfd3: // orphan
         rsi += 0x48
         rdi = qword [var_108h]
         
         goto loc_0x005dbfe1;
    loc_0x005dbfe1: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode1_filtered::h6988e57cdb3fd1cc @ 0x5dbfd1(x)
         rsi += 0x30

    loc_0x005dbfe5: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode1_filtered::h6988e57cdb3fd1cc @ 0x5dbfdf(x)
         al = cl
         eax <<<= 4
         v = rdi - rdx
         rax = rsp + rax + 0x140
         if (!v) rax = rsi
         xmm0 = xmmword [rax]
         xmm1 = xmmword [rax + 0x10]
         xmmword [var_20h] = xmm0
         xmmword [var_30h] = xmm1
         rdi = var_d8h
         qword [0x00e383b0] ()    // [0xe383b0:8]=0 // 0xe383b0(0x100780d8, 0x0, 0x0, 0x0)
         xmm0 = xmmword [rax]
         xmm1 = xmmword [rax + 0x10]
         xmm2 = xmmword [rax + 0x20]
         xmm3 = xmmword [rax + 0x30]
         xmmword [var_70h] = xmm3
         xmmword [var_60h] = xmm2
         xmmword [var_50h] = xmm1
         xmmword [var_40h] = xmm0
         r13 = var_260h
         rsi = var_d8h
         edx = 0xf8
         rdi = r13
         qword [memcpy] ()        // [0xe37450:8]=0 // 0xe37450(0x10078258, 0x100780d0, 0xf8, 0x0)
         rdi = r13
         qword [0x00e383b8] ()    // [0xe383b8:8]=0 // 0xe383b8(0x10078258, 0x100780d0, 0xf8, 0x0)
         v = rax & rax
         rcx = qword [var_8h]
         if (!v) 
         goto loc_0x005dc06c;
    loc_0x005dc06c: // orphan
         xmm0 = xmmword [rax]
         xmm1 = xmmword [rax + 0x10]
         xmmword [var_90h] = xmm1
         xmmword [var_80h] = xmm0
         al = 1
         
         goto loc_0x005dc087;
    loc_0x005dc087: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode1_filtered::h6988e57cdb3fd1cc @ 0x5dc06a(x)
         eax = 0

    loc_0x005dc089: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode1_filtered::h6988e57cdb3fd1cc @ 0x5dc085(x)
         v = rbp - rcx
         seta byte [r14 + 0x89]
         qword [r14 + 0x60] = r15
         xmm0 = xmmword [var_20h]
         xmm1 = xmmword [var_30h]
         xmmword [r14 + 0x40] = xmm0
         xmmword [r14 + 0x50] = xmm1
         xmm0 = xmmword [var_40h]
         xmm1 = xmmword [var_50h]
         xmm2 = xmmword [var_60h]
         xmm3 = xmmword [var_70h]
         xmmword [r14] = xmm0
         xmmword [r14 + 0x10] = xmm1
         xmmword [r14 + 0x20] = xmm2
         xmmword [r14 + 0x30] = xmm3
         byte [r14 + 0x68] = al
         xmm0 = xmmword [var_80h]
         xmm1 = xmmword [var_90h]
         xmmword [r14 + 0x69] = xmm0
         xmmword [r14 + 0x79] = xmm1
         rdi = var_260h

    loc_0x005dc0f9: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer::is_mode1_filtered::h6988e57cdb3fd1cc @ 0x5dbe87(x)
         sym.core::ptr::drop_in_place_solana_transaction::sanitized::SanitizedTransaction_::h0440ee21d8c1f1d8 () // core::ptr::drop_in_place<solana_transaction::sanitized::SanitizedTransaction>::h0440ee21d8c1f1d8 // sym.core::ptr::drop_in_place_solana_transaction::sanitized::SanitizedTransaction_::h0440ee21d8c1f1d8(0x0)
         
}

