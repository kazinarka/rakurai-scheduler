// callconv: rax amd64 (rdi, rsi, rdx, rcx, r8, r9, xmm0, xmm1, xmm2, xmm3, xmm4);
void sym.__rakurai_scheduler__scheduler_1__rakurai_scheduler__RakuraiScheduler_Tx__as_rakurai_scheduler__scheduler_1__rakurai_scheduler_trait__RakuraiSchedulerTrait_Tx____refresh_if_needed__h2d5c582f025eaede (int64_t arg1) {
        // CALL XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::retry_interval_tx_ids::hfa41e1c9642770d5 @ 0x68e8ca(x) // sym.__rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler_Tx__as_rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait_Tx__::retry_interval_tx_ids::hfa41e1c9642770d5
        // CALL XREF from rakurai_scheduler::scheduler_1::controller::Controller<R,S>::redump_filtered_txns::h3b6042622f50034d @ 0x6abeff(x) // sym.rakurai_scheduler::scheduler_1::controller::Controller_R_S_::redump_filtered_txns::h3b6042622f50034d
        // _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiSchedule
        // r<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::Raku
        // raiSchedulerTrait<Tx>>::refresh_if_needed::h2d5c582f025eaede
        push (rbp)
        push (r15)
        push (r14)
        push (r13)
        push (r12)
        push (rbx)
        rsp -= 0x88
        rbx = rdi     // arg1
        r15 = qword [rdi + 0x498] // arg1
        r14 = r15 + 0x10
        eax = dword [r15 + 0x10]
        v = eax - 0x3ffffffd
        if (((unsigned) v) > 0) goto 0x68d4c4 // likely
        goto loc_0x0068d1be;
    while (!(al & al)) {
        // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::refresh_if_needed::h2d5c582f025eaede @ 0x68d4d4(x)
        rsi = qword [r15 + 0x28] // elf_shdr
        rsi += 0x10
        rdi = rsp
        qword [reloc.fixup.AWAVSHL] () // [0xe38c48:8]=0 // reloc.fixup.AWAVSHL(0x10078000, 0x13de520, 0x0, 0x0)
        v = dword [rsp] - 1
        if (!v) goto loc_0x68d50c // unlikely
        rsi = qword [var_8h]
        r15 = qword [var_10h]
        rsi += 0x18   // int64_t arg2
        rdi = rsp     // int64_t arg1
        sym.__hashbrown::map::HashMap_K_V_S_A__as_core::clone::Clone_::clone::hf29d1bdc1edfab77 () // _<hashbrown::map::HashMap<K,V,S,A> as core::clone::Clone>::clone::hf29d1bdc1edfab77 // sym.__hashbrown::map::HashMap_K_V_S_A__as_core::clone::Clone_::clone::hf29d1bdc1edfab77(0x10078000, 0x18, 0x0, 0x0)
        xmm0 = xmmword [rsp]
        xmm1 = xmmword [var_10h]
        xmm2 = xmmword [var_20h]
        xmm3 = xmmword [var_30h]
        xmmword [var_70h] = xmm3
        xmmword [var_60h] = xmm2
        xmmword [var_50h] = xmm1
        xmmword [var_40h] = xmm0
        r12 = rbx + 0x428
        rsi = qword [rbx + 0x430]
        v = rsi & rsi
        if (!v) goto loc_0x68d272 // likely
        rax = rsi + rsi*4
        rax = rax*8 + 0x37
        rax &= 0xfffffffffffffff0
        rsi += rax
        rsi += 0x11
        if (!v) goto loc_0x68d272 // unlikely
        rdi = qword [rbx + 0x428]
        rdi -= rax
        edx = 0x10
        qword [0x00e37488] () // [0xe37488:8]=0 // 0xe37488(0x0, 0x0, 0x10, 0x0)
        // CODE XREFS from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::refresh_if_needed::h2d5c582f025eaede @ 0x68d242(x), 0x68d25b(x)
        xmm0 = xmmword [var_40h]
        xmm1 = xmmword [var_50h]
        xmm2 = xmmword [var_60h]
        xmm3 = xmmword [var_70h]
        xmmword [r12 + 0x30] = xmm3
        xmmword [r12 + 0x20] = xmm2
        xmmword [r12 + 0x10] = xmm1
        xmmword [r12] = xmm0
        ebp = 0xffffffff // -1
        esi = 0xffffffff // -1
        lock xadd dword [r15] esi
        esi--
        eax = esi
        eax &= 0xbfffffff
        eax ~= eax
        jo 0x68d53f   // unlikely
        // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::refresh_if_needed::h2d5c582f025eaede @ 0x68d548(x)
        lock xadd dword [r14] ebp
        ebp--
        eax = ebp
        eax &= 0xbfffffff
        eax ~= eax
        jo 0x68d54d   // unlikely
        rdi = qword [rbx + 0x480]
        v = rdi & rdi
        if (!v) goto loc_0x68d568 // unlikely
        // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::refresh_if_needed::h2d5c582f025eaede @ 0x68d562(x)
        r8 = qword [rbx + 0x468]
        r9 = r8 + 0x10
        xmm0 = xmmword [r8]
        pmovmskb eax xmm0
        eax = !eax
        r10 = 0x5851f42d4c957f2d
        r11 = 0xa3e85a992afe5a0
        xmm0 ^= xmm0
        pcmpeqd xmm1 xmm1
        goto loc_0x68d3d9
        // CODE XREFS from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::refresh_if_needed::h2d5c582f025eaede @ 0x68d3b7(x), 0x68d4bf(x)
        rdx &= rcx
        xmm3 = xmmword [rax + rdx]
        xmm4 = xmm3
        xmm4 == xmm2
        pmovmskb r13d xmm4
        v = r13d & r13d
        if (!v) goto loc_0x68d3a0 // likely
        while (v) {
            // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::refresh_if_needed::h2d5c582f025eaede @ 0x68d392(x)
            ebp = __builtin_ctz(r13d)
            rbp += rdx    // rsp
            rbp &= rcx
            rbp ~= rbp
            rbp = rbp + rbp*4
            xmm4 = xmmword [r15 - 0x28]
            xmm5 = xmmword [r15 - 0x18]
            xmm6 = xmmword [rsi + rbp*8]
            xmm6 ^= xmm4
            xmm4 = xmmword [rsi + rbp*8 + 0x10]
            xmm4 ^= xmm5
            por xmm4 xmm6
            ptest xmm4 xmm4
            if (!v) goto loc_0x68d3c0 // unlikely
        }
        // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::refresh_if_needed::h2d5c582f025eaede @ 0x68d348(x)
        xmm3 == xmm1
        pmovmskb ebp xmm3
        v = ebp & ebp
        if (v) goto loc_0x68d3c9 // likely
        rdx += r12
        rdx += 0x10
        r12 += 0x10
        goto loc_0x68d330
        // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::refresh_if_needed::h2d5c582f025eaede @ 0x68d385(x)
        rax = qword [rax + rbp*8 - 8]
        qword [r15 - 8] = rax
        while (qword [rbx + 0x440] == 0) {
            // CODE XREFS from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::refresh_if_needed::h2d5c582f025eaede @ 0x68d3aa(x), 0x68d3eb(x), 0x68d418(x)
            eax = r14 - 1
            eax &= r14d
            rdi--
            if (!v) goto loc_0x68d568 // unlikely
            // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::refresh_if_needed::h2d5c582f025eaede @ 0x68d31d(x)
            v = ax & ax
            if (!v) goto loc_0x68d3f0 // likely
            r14d = eax
            v = qword [rbx + 0x440] - 0
            if (v) goto loc_0x68d41a // unlikely
            goto loc_0x68d3c9
            // CODE XREFS from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::refresh_if_needed::h2d5c582f025eaede @ 0x68d3dc(x), 0x68d409(x)
            xmm2 = xmmword [r9]
            pmovmskb eax xmm2
            r8 += 0xfffffffffffffd80
            r9 += 0x10
            v = eax - 0xffff
            if (!v) goto loc_0x68d3f0 // unlikely
        }
        // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::refresh_if_needed::h2d5c582f025eaede @ 0x68d3e9(x)
        eax = __builtin_ctz(r14d)
        rax ~= rax
        rax = rax + rax*4
        r15 = r8 + rax*8
        r12 = qword [rbx + 0x448]
        r13 = qword [rbx + 0x458]
        rcx = qword [rbx + 0x460]
        rbp = qword [rbx + 0x450]
        rbp = rbp * r10
        rdx = qword [r15 - 0x18]
        rdx ^= r13
        rax = qword [r15 - 0x10]
        rax ^= rcx
        rax = rax * rdx
        rsi = rax
        rbp += r12
        rbp += r11
        rbp ^= rdx
        rsi ^= rbp
        rsi <<<= rsi
        r13 ^= qword [r15 - 0x28]
        rsi += r12
        rcx ^= qword [r15 - 0x20]
        rax = rcx
        rax = rax * r13
        rcx = rax
        rcx ^= rdx
        rcx ^= rsi
        rcx <<<= rcx
        rax = rcx
        rax = rax * r12
        rdx ^= rax
        rol rdx cl
        rsi = rdx
        rsi >>>= 0x39
        rax = qword [rbx + 0x428]
        rcx = qword [rbx + 0x430]
        movd xmm2 esi
        pshufb xmm2 xmm0
        rsi = rax - 0x28
        r12d = 0
        goto loc_0x68d330
    }
    loc_0x0068d4da:
        // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::refresh_if_needed::h2d5c582f025eaede @ 0x68d1d3(x)
        r15 += 0x20   // sym.tracing_core::dispatcher::CURRENT_STATE::__u7b__u7b_constant_u7d__u7d_::__u7b__u7b_closure_u7d__u7d_::__RUST_STD_INTERNAL_VAL::h90d4f31268b4f161
        qword [rsp] = r15
        qword [var_8h] = r14
        rdi = rip - 0x310647 // "called `Result::unwrap()` on an `Err` valueErrorpolling StreamFuture twiceMessageheaderaccountKeysrecentBlockhashinstructionsad" // 0x37cea7
        rcx = rip + 0x73d20b // 0xdca700
        r8 = rip + 0x73d114 // 0xdca610
        rdx = rsp
        esi = 0x2b    // '+'
        qword [reloc.fixup.UHH_HHuHUHMHEHE] () // [0xe37860:8]=0 // reloc.fixup.UHH_HHuHUHMHEHE(0x37cea7, 0x2b, 0x10078000, 0xdca700)
        goto loc_0x68d53d
        
    loc_0x0068d53d:
        // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::refresh_if_needed::h2d5c582f025eaede @ 0x68d50a(x)
        ud2
        goto loc_0x0068d1cc;
        return rax;
    loc_0x0068d1cc:
        eax = byte [r15 + 0x18]
        v = al & al
        if (v) goto loc_0x68d4da // unlikely
        goto loc_0x0068d1d9;
        goto loc_0x0068d1f4;
    loc_0x0068d50c:
        // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::refresh_if_needed::h2d5c582f025eaede @ 0x68d1ee(x)
        xmm0 = xmmword [var_8h]
        xmmword [var_40h] = xmm0
        rdi = rip - 0x310678 // "called `Result::unwrap()` on an `Err` valueErrorpolling StreamFuture twiceMessageheaderaccountKeysrecentBlockhashinstructionsad" // 0x37cea7
        rcx = rip + 0x73d25a // 0xdca780
        r8 = rip + 0x73d0fb // 0xdca628
        rdx = var_40h
        esi = 0x2b    // '+'
        qword [reloc.fixup.UHH_HHuHUHMHEHE] () // [0xe37860:8]=0 // reloc.fixup.UHH_HHuHUHMHEHE(0x37cea7, 0x2b, 0x10078040, 0xdca780)
            goto loc_0x0068d1f4;
        goto loc_0x0068d244;
        return rax;
    loc_0x0068d53f: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::refresh_if_needed::h2d5c582f025eaede @ 0x68d2bf(x)
         rdi = r15
         qword [0x00e37d60] ()    // [0xe37d60:8]=0 // 0xe37d60(0x0, 0x0, 0x0, 0x0)
         
         goto loc_0x0068d54d;
    loc_0x0068d54d: // orphan
         // CODE XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::refresh_if_needed::h2d5c582f025eaede @ 0x68d2d5(x)
         rdi = r14
         esi = ebp                // rsp
         qword [0x00e37d60] ()    // [0xe37d60:8]=0 // 0xe37d60(0x0, 0x10078000, 0x0, 0x0)
         rdi = qword [rbx + 0x480]
         v = rdi & rdi
         if (v) 
         return rax;
    loc_0x0068d568: // orphan
         // CODE XREFS from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::refresh_if_needed::h2d5c582f025eaede @ 0x68d2e5(x), 0x68d3d3(x)
         rsp += 0x88
         rbx = pop ()
         r12 = pop ()
         r13 = pop ()
         r14 = pop ()
         r15 = pop ()
         rbp = pop ()
         return

}

