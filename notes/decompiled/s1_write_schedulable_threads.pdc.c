// callconv: rax amd64 (rdi, rsi, rdx, rcx, r8, r9, xmm0, xmm1, xmm2, xmm3, xmm4);
void sym.rakurai_scheduler__scheduler_1__thread_aware_account_locks__ThreadAwareAccountLocks__write_schedulable_threads__hc3b4a20a1687a3f3 (int64_t arg1, int64_t arg2, int64_t arg3) {
        // rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAw
        // areAccountLocks::write_schedulable_threads::hc3b4a20a1687a3f3
        rsp -= 0x28
        v = qword [rdi + 0x18] - 0 // arg1
        if (!v) goto loc_0x69aace // likely
        goto loc_0x0069a99f;
    loc_0x0069aace:
        // CODE XREFS from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::write_schedulable_threads::hc3b4a20a1687a3f3 @ 0x69a999(x), 0x69aabc(x)
        rcx = qword [rdi + 0x40] // arg1
        rax = 0xffffffffffffffff
        v = rcx - 0x40 // elf_phdr
        if (!v) goto loc_0x69ab4c // unlikely
        return rax;
    loc_0x0069ab4c:
        // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::write_schedulable_threads::hc3b4a20a1687a3f3 @ 0x69aadd(x)
        rsp += 0x28
        return
        return rax;
    loc_0x0069aa40: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::write_schedulable_threads::hc3b4a20a1687a3f3 @ 0x69aac9(x)
         rdx &= rcx               // arg3
         xmm2 = xmmword [rax + rdx]
         xmm3 = xmm2
         xmm3 == xmm0
         pmovmskb r10d xmm3
         v = r10d & r10d
         if (!v) 
         goto loc_0x0069aa5a;
    loc_0x0069aa5a: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::write_schedulable_threads::hc3b4a20a1687a3f3 @ 0x69aaa3(x)
         r11d = __builtin_ctz(r10d)
         r11 += rdx               // arg3
         r11 &= rcx
         r11 ~= r11
         r11 = r11 * 0x148
         xmm3 = xmmword [rsi]     // arg2
         xmm4 = xmmword [rsi + 0x10] // arg2
         xmm5 = xmmword [r8 + r11]
         xmm5 ^= xmm3
         xmm3 = xmmword [r8 + r11 + 0x10]
         xmm3 ^= xmm4
         por xmm3 xmm5
         ptest xmm3 xmm3
         if (!v) 
         goto loc_0x0069aa98;
    loc_0x0069aa98: // orphan
         r11d = r10 - 1
         r11w &= r10w
         r10d = r11d
         if (v) 
         goto loc_0x0069aaa5;
    loc_0x0069aaa5: // orphan
         

    loc_0x0069aab0: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::write_schedulable_threads::hc3b4a20a1687a3f3 @ 0x69aa58(x)
         xmm2 == xmm1
         pmovmskb r10d xmm2
         v = r10d & r10d
         if (v) 
         goto loc_0x0069aabe;
    loc_0x0069aabe: // orphan
         rdx += r9                // arg3
         rdx += 0x10              // arg3
         r9 += 0x10
         
         goto loc_0x0069aace;
    loc_0x0069aadf: // orphan
         rax <<<= cl
         rax = !rax
         rsp += 0x28
         return

    loc_0x0069aaea: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::write_schedulable_threads::hc3b4a20a1687a3f3 @ 0x69aa96(x)
         rcx = rax + r11
         edx = byte [rax + r11 - 0x110]
         v = byte [rax + r11 - 0x128] - 0
         if (!v) 
         goto loc_0x0069ab02;
    loc_0x0069ab02: // orphan
         v = dl & dl
         if (!v) 
         goto loc_0x0069ab06;
    loc_0x0069ab06: // orphan
         rax = qword [rcx - 8]
         edx = 0
         popcnt rdx rax
         v = edx - 1
         if (v) 
         goto loc_0x0069ab1a;
    loc_0x0069ab1a: // orphan
         edx = segment.PHDR       // elf_phdr // 0x40
         rdx = __builtin_ctz(rax)
         qword [var_20h] = rdx
         qword [var_18h] = 1
         rcx = qword [rcx - 0x120]
         qword [var_10h] = rcx
         qword [var_8h] = 1
         v = rdx - rcx
         if (v) 
         return rax;
    loc_0x0069ab51: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::write_schedulable_threads::hc3b4a20a1687a3f3 @ 0x69ab00(x)
         v = dl & dl
         if (!v) 
         return rax;
    loc_0x0069ab55: // orphan
         rax = qword [rcx - 8]
         edx = 0
         popcnt rdx rax
         ecx = segment.PHDR       // elf_phdr // 0x40
         rcx = __builtin_ctz(rax)
         esi = 1
         rsi <<<= cl
         eax = 0
         v = edx - 1
         if (!v) rax = rsi
         rsp += 0x28
         return

    loc_0x0069ab80: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::write_schedulable_threads::hc3b4a20a1687a3f3 @ 0x69ab04(x)
         ecx = byte [rcx - 0x120]
         eax = 1
         rax <<<= cl
         rsp += 0x28
         return

    loc_0x0069ab94: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::write_schedulable_threads::hc3b4a20a1687a3f3 @ 0x69ab53(x)
         rdi = rip - 0x31db09     // "internal error: entered unreachable codenum threads must be > 0insufficient capacitychannel closedno available capacity" // 0x37d092
         rdx = rip + 0x72fe8e     // 0xdcaa30
         esi = 0x28               // '('
         qword [0x00e37588] ()    // [0xe37588:8]=0 // 0xe37588(0x37d092, 0x28, 0xdcaa30, 0x0)

    loc_0x0069abad: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::write_schedulable_threads::hc3b4a20a1687a3f3 @ 0x69ab14(x)
         qword [var_18h] = 0
         rax = qword [rcx - 0x120]
         qword [var_10h] = rax
         qword [var_8h] = 1

    loc_0x0069abcb: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::write_schedulable_threads::hc3b4a20a1687a3f3 @ 0x69ab4a(x)
         r9 = rip + 0x72fe76      // 0xdcaa48
         rsi = var_18h
         rdx = var_8h
         edi = 0
         ecx = 0
         qword [0x00e38db8] ()    // [0xe38db8:8]=0 // 0xe38db8(0x0, 0x10078018, 0x10078008, 0x0)
         int3

        return rax;
}

