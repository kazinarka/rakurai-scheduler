// callconv: rax amd64 (rdi, rsi, rdx, rcx, r8, r9, xmm0, xmm1, xmm2, xmm3, xmm4);
void sym.rakurai_scheduler__scheduler_2__thread_aware_account_locks__ThreadAwareAccountLocks__lock_accounts__ha108619d4cf70e7b (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
        // CALL XREF from _<rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_2::scheduler::Scheduler<Tx>>::schedule_2::h5d59a757f888b217 @ 0x67a2c3(x) // sym.__rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler_Tx__as_rakurai_scheduler::scheduler_2::scheduler::Scheduler_Tx__::schedule_2::h5d59a757f888b217
        // rakurai_scheduler::scheduler_2::thread_aware_account_locks::ThreadAw
        // areAccountLocks::lock_accounts::ha108619d4cf70e7b
        push (rbp)
        push (r15)
        push (r14)
        push (r13)
        push (r12)
        push (rbx)
        push (rax)
        v = rcx - qword [rdi + 0x40] // arg4
        jae 0x69ae4e  // unlikely
        goto loc_0x0069ad45;
    loc_0x0069ae4e:
        // CODE XREF from rakurai_scheduler::scheduler_2::thread_aware_account_locks::ThreadAwareAccountLocks::lock_accounts::ha108619d4cf70e7b @ 0x69ad3f(x)
        rdi = rip - obj.anon.78e7deb60e98e8b546829df530f2b378.37.llvm.1348778015432205871 // 0x37d01a // "thread_id must be < num_threadsoutstanding write lock must be on same threadoutstanding read lock must be on same threadinternal error: entered unreachable codenum threads must be > 0insufficient capacitychannel closedno available capacity"
        rdx = rip + obj.anon.78e7deb60e98e8b546829df530f2b378.64.llvm.1348778015432205871 // 0xdcaad8
        esi = 0x3f    // '?'
        qword [reloc.fixup.UHH0HHuHEHEHUfE] () // [0xe37778:8]=0 // reloc.fixup.UHH0HHuHEHEHUfE(0x37d01a, 0x3f, 0xdcaad8, 0x0)
        int3
        goto loc_0x0069ad58;
        return rax;
    loc_0x0069ad58:
        eax = word [rsi + 0x18] // arg2
        r13 = qword [rsi] // arg2
        rbp = qword [rsi + 8] // arg2
        
    while (ax & ax) {
        // CODE XREFS from rakurai_scheduler::scheduler_2::thread_aware_account_locks::ThreadAwareAccountLocks::lock_accounts::ha108619d4cf70e7b @ 0x69ad9f(x), 0x69adcd(x)
        r15d = rax - 1
        ecx = __builtin_ctz(eax)
        r15d &= eax
        ecx <<<= 5    // arg4
        rsi = r13
        rsi -= rcx    // arg4
        rsi += 0xffffffffffffffe0
        rdi = r14
        rdx = rbx
        qword [reloc.fixup.SHpHHHH_H__K] () // [0xe38dc0:8]=0 // reloc.fixup.SHpHHHH_H__K(0x0, 0xffffffffffffffe0, 0x0, 0x0)
        eax = r15d
        r12--
        if (!v) goto loc_0x69adcf // unlikely
    }
    loc_0x0069ada1:
        
    do {
        // CODE XREF from rakurai_scheduler::scheduler_2::thread_aware_account_locks::ThreadAwareAccountLocks::lock_accounts::ha108619d4cf70e7b @ 0x69adc9(x)
        xmm0 = xmmword [rbp]
        pmovmskb eax xmm0
        r13 += 0xfffffffffffffe00
        rbp += 0x10
        v = eax - 0xffff
    } while (eax == 0xffff);
    loc_0x0069adcb:
        eax = !eax
        goto loc_0x69ad70
        
        goto loc_0x0069ad9c;
    loc_0x0069adcf: // orphan
         // CODE XREFS from rakurai_scheduler::scheduler_2::thread_aware_account_locks::ThreadAwareAccountLocks::lock_accounts::ha108619d4cf70e7b @ 0x69ad56(x), 0x69ad9a(x)
         rcx = qword [rsp]
         r12 = qword [rcx + 0x20] // elf_phdr
         v = r12 & r12
         if (!v) 
         goto loc_0x0069addc;
    loc_0x0069addc: // orphan
         eax = word [rcx + 0x18]
         r13 = qword [rcx]
         r15 = qword [rcx + 8]
         
         goto loc_0x0069adf0;
    loc_0x0069adf0: // orphan
         // CODE XREFS from rakurai_scheduler::scheduler_2::thread_aware_account_locks::ThreadAwareAccountLocks::lock_accounts::ha108619d4cf70e7b @ 0x69ae1c(x), 0x69ae3d(x)
         ebp = rax - 1
         ecx = __builtin_ctz(eax)
         ebp &= eax
         ecx <<<= 5
         rsi = r13
         rsi -= rcx
         rsi += 0xffffffffffffffe0
         rdi = r14
         rdx = rbx
         qword [0x00e38dc8] ()    // [0xe38dc8:8]=0 // 0xe38dc8(0x0, 0xffffffffffffffe0, 0x0, 0x0)
         eax = ebp
         r12--
         if (!v) 
         goto loc_0x0069ae19;
    loc_0x0069ae19: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::thread_aware_account_locks::ThreadAwareAccountLocks::lock_accounts::ha108619d4cf70e7b @ 0x69ade7(x)
         v = ax & ax
         if (v) 
         goto loc_0x0069ae1e;
    loc_0x0069ae1e: // orphan
         

    loc_0x0069ae20: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::thread_aware_account_locks::ThreadAwareAccountLocks::lock_accounts::ha108619d4cf70e7b @ 0x69ae39(x)
         xmm0 = xmmword [r15]
         pmovmskb eax xmm0
         r13 += 0xfffffffffffffe00
         r15 += 0x10
         v = eax - 0xffff
         if (!v) 
         goto loc_0x0069ae3b;
    loc_0x0069ae3b: // orphan
         eax = !eax
         
         return rax;
    loc_0x0069ae3f: // orphan
         // CODE XREFS from rakurai_scheduler::scheduler_2::thread_aware_account_locks::ThreadAwareAccountLocks::lock_accounts::ha108619d4cf70e7b @ 0x69adda(x), 0x69ae17(x)
         rsp += 8
         rbx = pop ()
         r12 = pop ()
         r13 = pop ()
         r14 = pop ()
         r15 = pop ()
         rbp = pop ()
         return

}

