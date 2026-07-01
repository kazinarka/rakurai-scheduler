// callconv: rax amd64 (rdi, rsi, rdx, rcx, r8, r9, xmm0, xmm1, xmm2, xmm3, xmm4);
void sym.rakurai_scheduler__scheduler_1__thread_aware_account_locks__ThreadAwareAccountLocks__try_lock_accounts__h0ae95ae17a6617db (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, int64_t arg_1a0h) {
        // CALL XREF from _<rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait<Tx>>::rakurai_schedule::hd99e9ca52fb0a928 @ 0x68c1c0(x) // sym.__rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler_Tx__as_rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait_Tx__::rakurai_schedule::hd99e9ca52fb0a928
        // rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAw
        // areAccountLocks::try_lock_accounts::h0ae95ae17a6617db
        push (rbp)
        push (r15)
        push (r14)
        push (r13)
        push (r12)
        push (rbx)
        rsp -= 0x168
        qword [var_b0h] = r9 // arg6
        r13 = r8      // arg5
        r15 = rcx     // arg4
        r12 = rdx     // arg3
        r14 = rsi     // arg2
        v = dword [rdx] - 1 // arg3
        qword [var_20h] = rdi // arg1
        if (v) goto loc_0x699d2b // likely
        goto loc_0x00699cdf;
    loc_0x00699d2b:
        // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::try_lock_accounts::h0ae95ae17a6617db @ 0x699cdd(x)
        ebp = 0
        goto loc_0x699d98
        
    loc_0x00699d98:
        // CODE XREFS from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::try_lock_accounts::h0ae95ae17a6617db @ 0x699d0f(x), 0x699d2d(x)
        rcx = qword [r12 + 0x48] // elf_phdr
        rdx = qword [r12 + 0x50] // elf_phdr
        rsi = qword [r12 + 0x58] // elf_phdr
        rdi = qword [r12 + 0x60]
        r8 = qword [r12 + 0x68]
        r9 = qword [r12 + 0x70]
        v = dword [r15] - 1
        if (v) goto loc_0x699e12 // likely
        goto loc_0x00699dbc;
        goto loc_0x00699d15;
        return rax;
    loc_0x00699d15:
        rax <<<= 4
        rdx = r12 + rax
        rdx += 0x18
        v = rsi - 1
        if (v) goto loc_0x699d2f // likely
        goto loc_0x00699d27;
    loc_0x00699d2f:
        // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::try_lock_accounts::h0ae95ae17a6617db @ 0x699d25(x)
        edi = ecx
        edi &= 2
        r8d = 0x18
        esi = 0
        
    do {
        // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::try_lock_accounts::h0ae95ae17a6617db @ 0x699d69(x)
        xmm0 = xmmword [rdx + r8 - 0x18]
        xmmword [rsp + r8 + 0xd8] = xmm0
        rsi += 2
        xmm0 = xmmword [rdx + r8 - 8]
        xmmword [rsp + r8 + 0xe8] = xmm0
        r8 += 0x20    // sym.tracing_core::dispatcher::CURRENT_STATE::__u7b__u7b_constant_u7d__u7d_::__u7b__u7b_closure_u7d__u7d_::__RUST_STD_INTERNAL_VAL::h90d4f31268b4f161 // "@"
        v = rdi - rsi
    } while (rdi - rsi);
    loc_0x00699d6b:
        // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::try_lock_accounts::h0ae95ae17a6617db @ 0x699d29(x)
        v = cl & 1
        if (!v) goto loc_0x699d84 // likely
        goto loc_0x00699d70;
    loc_0x00699d84:
        // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::try_lock_accounts::h0ae95ae17a6617db @ 0x699d6e(x)
        qword [var_e8h] = rcx
        qword [var_e0h] = 0
            goto loc_0x00699d70;
    loc_0x00699d70:
        rax = var_f0h
        rsi <<<= 4
        xmm0 = xmmword [rdx + rsi]
        xmmword [rax + rsi] = xmm0
    loc_0x00699d27:
        esi = 0
        goto loc_0x699d6b
    loc_0x00699dbc: // orphan
         xmm0 ^= xmm0
         xmmword [var_120h] = xmm0
         rax = qword [r15 + 8]
         rbx = qword [r15 + 0x10]
         r11 = rbx
         r11 -= rax
         v = r11 - 3
         r10d = 3
         cmovb r10 r11
         r11d = 1
         qword [var_28h] = r11
         rbx -= rax
         if (!v) 
         goto loc_0x00699df7;
    loc_0x00699df7: // orphan
         qword [var_18h] = rbp
         rax <<<= 4
         r11 = r15 + rax
         r11 += 0x18
         v = rbx - 1
         if (v) 
         goto loc_0x00699e0e;
    loc_0x00699e0e: // orphan
         ebx = 0
         
         goto loc_0x00699e12;
    loc_0x00699e12: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::try_lock_accounts::h0ae95ae17a6617db @ 0x699dba(x)
         qword [var_28h] = 0
         
         goto loc_0x00699e1d;
    loc_0x00699e1d: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::try_lock_accounts::h0ae95ae17a6617db @ 0x699e0c(x)
         ebp = r10d
         ebp &= 2
         eax = 0x18
         ebx = 0

    loc_0x00699e30: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::try_lock_accounts::h0ae95ae17a6617db @ 0x699e57(x)
         xmm0 = xmmword [r11 + rax - 0x18]
         xmmword [rsp + rax + 0x118] = xmm0
         rbx += 2
         xmm0 = xmmword [r11 + rax - 8]
         xmmword [rsp + rax + 0x128] = xmm0
         rax += 0x20              // sym.tracing_core::dispatcher::CURRENT_STATE::__u7b__u7b_constant_u7d__u7d_::__u7b__u7b_closure_u7d__u7d_::__RUST_STD_INTERNAL_VAL::h90d4f31268b4f161 // "@"
         v = rbp - rbx
         if (v) 
         goto loc_0x00699e59;
    loc_0x00699e59: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::try_lock_accounts::h0ae95ae17a6617db @ 0x699e10(x)
         v = r10b & 1
         if (!v) 
         goto loc_0x00699e5f;
    loc_0x00699e5f: // orphan
         rax = var_130h
         rbx <<<= 4
         xmm0 = xmmword [r11 + rbx]
         xmmword [rax + rbx] = xmm0

    loc_0x00699e74: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::try_lock_accounts::h0ae95ae17a6617db @ 0x699e5d(x)
         qword [var_128h] = r10
         qword [var_120h] = 0
         rbp = qword [var_18h]    // rsp

    loc_0x00699e8d: // orphan
         // CODE XREFS from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::try_lock_accounts::h0ae95ae17a6617db @ 0x699df1(x), 0x699e1b(x)
         rax = qword [r15 + 0x48] // elf_phdr
         qword [var_18h] = rax
         rax = qword [r15 + 0x50] // elf_phdr
         qword [var_d8h] = rax
         rax = qword [r15 + 0x58] // elf_phdr
         qword [var_d0h] = rax
         rax = qword [r15 + 0x60]
         qword [var_c8h] = rax
         rax = qword [r15 + 0x68]
         qword [var_c0h] = rax
         rax = qword [r15 + 0x70]
         qword [var_b8h] = rax
         qword [var_30h] = rbp
         xmm0 = xmmword [var_e0h]
         xmm1 = xmmword [var_f0h]
         xmm2 = xmmword [var_100h]
         xmm3 = xmmword [var_110h]
         xmmword [var_38h] = xmm0
         xmmword [var_48h] = xmm1
         xmmword [var_58h] = xmm2
         xmmword [var_68h] = xmm3
         qword [var_78h] = rcx
         qword [var_80h] = rdx
         qword [var_88h] = rsi
         qword [var_90h] = rdi
         qword [var_98h] = r8
         qword [var_a0h] = r9
         rbp = var_30h
         rbx = qword [0x00e38da0] // [0xe38da0:8]=0

    loc_0x00699f50: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::try_lock_accounts::h0ae95ae17a6617db @ 0x699f68(x)
         rdi = rbp                // int64_t arg1 // rsp
         sym.__core::iter::adapters::filter_map::FilterMap_I_F__as_core::iter::traits::iterator::Iterator_::next::h2eabf4ebc074f3a9 () // _<core::iter::adapters::filter_map::FilterMap<I,F> as core::iter::traits::iterator::Iterator>::next::h2eabf4ebc074f3a9 // sym.__core::iter::adapters::filter_map::FilterMap_I_F__as_core::iter::traits::iterator::Iterator_::next::h2eabf4ebc074f3a9(0x10078000)
         v = rax & rax
         if (!v) 
         goto loc_0x00699f5d;
    loc_0x00699f5d: // orphan
         rdi = r14
         rsi = rax
         rbx ()                   // 0x699f65(0x0, 0x0, 0x0, 0x0)
         r13 &= rax
         if (v) 
         goto loc_0x00699f6a;
    loc_0x00699f6a: // orphan
         
         goto loc_0x00699f6f;
    loc_0x00699f6f: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::try_lock_accounts::h0ae95ae17a6617db @ 0x699f5b(x)
         rax = qword [var_28h]
         qword [var_30h] = rax
         xmm0 = xmmword [var_120h]
         xmm1 = xmmword [var_130h]
         xmm2 = xmmword [var_140h]
         xmm3 = xmmword [var_150h]
         xmmword [var_38h] = xmm0
         xmmword [var_48h] = xmm1
         xmmword [var_58h] = xmm2
         xmmword [var_68h] = xmm3
         rax = qword [var_18h]    // elf_phdr
         qword [var_78h] = rax
         rax = qword [var_d8h]    // elf_phdr
         qword [var_80h] = rax
         rax = qword [var_d0h]    // elf_phdr
         qword [var_88h] = rax
         rax = qword [var_c8h]
         qword [var_90h] = rax
         rax = qword [var_c0h]
         qword [var_98h] = rax
         rax = qword [var_b8h]
         qword [var_a0h] = rax
         rbp = var_30h
         rbx = qword [0x00e38da8] // [0xe38da8:8]=0

    loc_0x0069a020: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::try_lock_accounts::h0ae95ae17a6617db @ 0x69a038(x)
         rdi = rbp                // int64_t arg1 // rsp
         sym.__core::iter::adapters::filter_map::FilterMap_I_F__as_core::iter::traits::iterator::Iterator_::next::h5551885f696a6bf5 () // _<core::iter::adapters::filter_map::FilterMap<I,F> as core::iter::traits::iterator::Iterator>::next::h5551885f696a6bf5 // sym.__core::iter::adapters::filter_map::FilterMap_I_F__as_core::iter::traits::iterator::Iterator_::next::h5551885f696a6bf5(0x10078000)
         v = rax & rax
         if (!v) 
         goto loc_0x0069a02d;
    loc_0x0069a02d: // orphan
         rdi = r14
         rsi = rax
         rbx ()                   // 0x69a035(0x0, 0x0, 0x0, 0x0)
         r13 &= rax
         if (v) 
         goto loc_0x0069a03a;
    loc_0x0069a03a: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::try_lock_accounts::h0ae95ae17a6617db @ 0x699f6a(x)
         rax = qword [var_20h]
         byte [rax + 1] = 0

    loc_0x0069a043: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::try_lock_accounts::h0ae95ae17a6617db @ 0x69a1f1(x)
         cl = 1

    loc_0x0069a045: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::try_lock_accounts::h0ae95ae17a6617db @ 0x69a1e3(x)
         byte [rax] = cl
         rsp += 0x168
         rbx = pop ()
         r12 = pop ()
         r13 = pop ()
         r14 = pop ()
         r15 = pop ()
         rbp = pop ()
         return

    loc_0x0069a059: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::try_lock_accounts::h0ae95ae17a6617db @ 0x69a02b(x)
         v = r13 & r13
         if (!v) 
         goto loc_0x0069a062;
    loc_0x0069a062: // orphan
         rax = qword [var_b0h]
         rsi = qword [rax + 0x50] // int64_t arg2 // elf_phdr
         rdx = qword [rax + 0x58] // int64_t arg3 // elf_phdr
         rdi = qword [arg_1a0h]
         rcx = qword [rdi + 0x20] // elf_phdr
         r8 = qword [rdi + 0x28]  // elf_shdr
         r9 = qword [rax + 0x20]  // elf_phdr
         rax = qword [rax + 0x28] // elf_shdr
         xmm0 = xmmword [rdi + 8]
         xmmword [var_8h] = xmm0
         qword [rsp] = rax
         rdi = r13                // int64_t arg1
         sym.rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler_Tx_::select_thread::h220a9fc92ff688f3 () // rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx>::select_thread::h220a9fc92ff688f3 // sym.rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler_Tx_::select_thread::h220a9fc92ff688f3(0x0, 0x40, 0x40, 0x40, 0x13de510, 0x40, 0x0, 0x0, 0x0, 0x0, 0x0)
         v = rax - qword [r14 + 0x40]
         jae 0x69a1f6             // unlikely

         goto loc_0x0069a0a9;
    loc_0x0069a0a9: // orphan
         r13 = rax
         rax = qword [r12 + 0x70]
         qword [var_a0h] = rax
         xmm0 = xmmword [r12 + 0x60]
         xmmword [var_90h] = xmm0
         xmm0 = xmmword [r12 + 0x50] // elf_phdr // elf_phdr
         xmmword [var_80h] = xmm0
         xmm0 = xmmword [r12 + 0x40] // elf_phdr
         xmmword [var_70h] = xmm0
         xmm0 = xmmword [r12]
         xmm1 = xmmword [r12 + 0x10]
         xmm2 = xmmword [r12 + 0x20] // elf_phdr // elf_shdr
         xmm3 = xmmword [r12 + 0x30]
         xmmword [var_60h] = xmm3
         xmmword [var_50h] = xmm2
         xmmword [var_40h] = xmm1
         xmmword [var_30h] = xmm0
         rdi = var_30h            // int64_t arg1
         sym.__core::iter::adapters::filter_map::FilterMap_I_F__as_core::iter::traits::iterator::Iterator_::next::h2eabf4ebc074f3a9 () // _<core::iter::adapters::filter_map::FilterMap<I,F> as core::iter::traits::iterator::Iterator>::next::h2eabf4ebc074f3a9 // sym.__core::iter::adapters::filter_map::FilterMap_I_F__as_core::iter::traits::iterator::Iterator_::next::h2eabf4ebc074f3a9(0x10078030)
         v = rax & rax
         if (!v) 
         goto loc_0x0069a11a;
    loc_0x0069a11a: // orphan
         rbx = qword [reloc.fixup.SHpHHHH_H__Z] // [0xe38db0:8]=0
         r12 = var_30h

    loc_0x0069a130: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::try_lock_accounts::h0ae95ae17a6617db @ 0x69a146(x)
         rdi = r14
         rsi = rax
         rdx = r13
         rbx ()                   // 0x69a13b(0x0, 0x0, 0x0, 0x0)
         rdi = r12                // int64_t arg1
         sym.__core::iter::adapters::filter_map::FilterMap_I_F__as_core::iter::traits::iterator::Iterator_::next::h2eabf4ebc074f3a9 () // _<core::iter::adapters::filter_map::FilterMap<I,F> as core::iter::traits::iterator::Iterator>::next::h2eabf4ebc074f3a9 // sym.__core::iter::adapters::filter_map::FilterMap_I_F__as_core::iter::traits::iterator::Iterator_::next::h2eabf4ebc074f3a9(0x0)
         v = rax & rax
         if (v) 
         goto loc_0x0069a148;
    loc_0x0069a148: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::try_lock_accounts::h0ae95ae17a6617db @ 0x69a118(x)
         rax = qword [r15 + 0x70]
         qword [var_a0h] = rax
         xmm0 = xmmword [r15 + 0x60]
         xmmword [var_90h] = xmm0
         xmm0 = xmmword [r15 + 0x50] // elf_phdr // elf_phdr
         xmmword [var_80h] = xmm0
         xmm0 = xmmword [r15 + 0x40] // elf_phdr
         xmmword [var_70h] = xmm0
         xmm0 = xmmword [r15]
         xmm1 = xmmword [r15 + 0x10]
         xmm2 = xmmword [r15 + 0x20] // elf_phdr // elf_shdr
         xmm3 = xmmword [r15 + 0x30]
         xmmword [var_60h] = xmm3
         xmmword [var_50h] = xmm2
         xmmword [var_40h] = xmm1
         xmmword [var_30h] = xmm0
         rdi = var_30h            // int64_t arg1
         sym.__core::iter::adapters::filter_map::FilterMap_I_F__as_core::iter::traits::iterator::Iterator_::next::h5551885f696a6bf5 () // _<core::iter::adapters::filter_map::FilterMap<I,F> as core::iter::traits::iterator::Iterator>::next::h5551885f696a6bf5 // sym.__core::iter::adapters::filter_map::FilterMap_I_F__as_core::iter::traits::iterator::Iterator_::next::h5551885f696a6bf5(0x10078030)
         v = rax & rax
         if (!v) 
         goto loc_0x0069a1ae;
    loc_0x0069a1ae: // orphan
         rbx = qword [0x00e38d98] // [0xe38d98:8]=0
         r15 = var_30h

    loc_0x0069a1c0: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::try_lock_accounts::h0ae95ae17a6617db @ 0x69a1d6(x)
         rdi = r14
         rsi = rax
         rdx = r13
         rbx ()                   // 0x69a1cb(0x0, 0x0, 0x0, 0x0)
         rdi = r15                // int64_t arg1
         sym.__core::iter::adapters::filter_map::FilterMap_I_F__as_core::iter::traits::iterator::Iterator_::next::h5551885f696a6bf5 () // _<core::iter::adapters::filter_map::FilterMap<I,F> as core::iter::traits::iterator::Iterator>::next::h5551885f696a6bf5 // sym.__core::iter::adapters::filter_map::FilterMap_I_F__as_core::iter::traits::iterator::Iterator_::next::h5551885f696a6bf5(0x0)
         v = rax & rax
         if (v) 
         goto loc_0x0069a1d8;
    loc_0x0069a1d8: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::try_lock_accounts::h0ae95ae17a6617db @ 0x69a1ac(x)
         rax = qword [var_20h]
         qword [rax + 8] = r13
         ecx = 0
         
         goto loc_0x0069a1e8;
    loc_0x0069a1e8: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::try_lock_accounts::h0ae95ae17a6617db @ 0x69a05c(x)
         rax = qword [var_20h]
         byte [rax + 1] = 1
         
         goto loc_0x0069a1f6;
    loc_0x0069a1f6: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::try_lock_accounts::h0ae95ae17a6617db @ 0x69a0a3(x)
         rdi = rip - obj.anon.78e7deb60e98e8b546829df530f2b378.37.llvm.1348778015432205871 // 0x37d01a // "thread_id must be < num_threadsoutstanding write lock must be on same threadoutstanding read lock must be on same threadinternal error: entered unreachable codenum threads must be > 0insufficient capacitychannel closedno available capacity"
         rdx = rip + 0x73073c     // 0xdca940
         esi = 0x3f               // '?'
         qword [reloc.fixup.UHH0HHuHEHEHUfE] () // [0xe37778:8]=0 // reloc.fixup.UHH0HHuHEHEHUfE(0x37d01a, 0x3f, 0xdca940, 0x0)
         int3

        return rax;
}

