// callconv: rax amd64 (rdi, rsi, rdx, rcx, r8, r9, xmm0, xmm1, xmm2, xmm3, xmm4);
void sym.rakurai_scheduler__scheduler_1__thread_aware_account_locks__ThreadAwareAccountLocks__read_schedulable_threads__h8529ae402df29b50 (int64_t arg1, int64_t arg2, int64_t arg3) {
        // rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAw
        // areAccountLocks::read_schedulable_threads::h8529ae402df29b50
        rsp -= 0x28
        v = qword [rdi + 0x18] - 0 // arg1
        if (!v) goto loc_0x69a905 // likely
        goto loc_0x0069a76f;
    loc_0x0069a905:
        // CODE XREFS from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::read_schedulable_threads::h8529ae402df29b50 @ 0x69a769(x), 0x69a88c(x)
        rcx = qword [rdi + 0x40] // arg1
        rax = 0xffffffffffffffff
        v = rcx - 0x40 // elf_phdr
        if (v) goto loc_0x69a91b // likely
        return rax;
    loc_0x0069a91b:
        // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::read_schedulable_threads::h8529ae402df29b50 @ 0x69a914(x)
        rax <<<= cl
        rax = !rax
        rsp += 0x28
        return
        return rax;
    loc_0x0069a810: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::read_schedulable_threads::h8529ae402df29b50 @ 0x69a899(x)
         rdx &= rax               // arg3
         xmm2 = xmmword [rcx + rdx]
         xmm3 = xmm2
         xmm3 == xmm0
         pmovmskb r10d xmm3
         v = r10d & r10d
         if (!v) 
         goto loc_0x0069a82a;
    loc_0x0069a82a: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::read_schedulable_threads::h8529ae402df29b50 @ 0x69a873(x)
         r11d = __builtin_ctz(r10d)
         r11 += rdx               // arg3
         r11 &= rax
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
         goto loc_0x0069a868;
    loc_0x0069a868: // orphan
         r11d = r10 - 1
         r11w &= r10w
         r10d = r11d
         if (v) 
         goto loc_0x0069a875;
    loc_0x0069a875: // orphan
         

    loc_0x0069a880: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::read_schedulable_threads::h8529ae402df29b50 @ 0x69a828(x)
         xmm2 == xmm1
         pmovmskb r10d xmm2
         v = r10d & r10d
         if (v) 
         goto loc_0x0069a88e;
    loc_0x0069a88e: // orphan
         rdx += r9                // arg3
         rdx += 0x10              // arg3
         r9 += 0x10
         
         goto loc_0x0069a89e;
    loc_0x0069a89e: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::read_schedulable_threads::h8529ae402df29b50 @ 0x69a866(x)
         eax = byte [rcx + r11 - 0x110]
         v = byte [rcx + r11 - 0x128] - 0
         if (!v) 
         goto loc_0x0069a8b2;
    loc_0x0069a8b2: // orphan
         rcx += r11
         v = al & al
         if (!v) 
         goto loc_0x0069a8b9;
    loc_0x0069a8b9: // orphan
         rax = qword [rcx - 8]
         edx = 0
         popcnt rdx rax
         v = edx - 1
         if (v) 
         goto loc_0x0069a8cd;
    loc_0x0069a8cd: // orphan
         edx = segment.PHDR       // elf_phdr // 0x40
         rdx = __builtin_ctz(rax)
         qword [var_20h] = rdx
         qword [var_18h] = 1
         rcx = qword [rcx - 0x120]
         qword [var_10h] = rcx
         qword [var_8h] = 1
         v = rdx - rcx
         if (!v) 
         goto loc_0x0069a8ff;
    loc_0x0069a8ff: // orphan
         
         goto loc_0x0069a901;
    loc_0x0069a901: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::read_schedulable_threads::h8529ae402df29b50 @ 0x69a8b0(x)
         v = al & al
         if (!v) 
         goto loc_0x0069a905;
    loc_0x0069a916: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::read_schedulable_threads::h8529ae402df29b50 @ 0x69a8fd(x)
         rsp += 0x28
         return

    loc_0x0069a926: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::read_schedulable_threads::h8529ae402df29b50 @ 0x69a8b7(x)
         ecx = byte [rcx - 0x120]
         eax = 1
         rax <<<= cl
         rsp += 0x28
         return

    loc_0x0069a93a: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::read_schedulable_threads::h8529ae402df29b50 @ 0x69a903(x)
         rdi = rip - 0x31d8af     // "internal error: entered unreachable codenum threads must be > 0insufficient capacitychannel closedno available capacity" // 0x37d092
         rdx = rip + 0x7300e8     // 0xdcaa30
         esi = 0x28               // '('
         qword [0x00e37588] ()    // [0xe37588:8]=0 // 0xe37588(0x37d092, 0x28, 0xdcaa30, 0x0)

    loc_0x0069a953: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::read_schedulable_threads::h8529ae402df29b50 @ 0x69a8c7(x)
         qword [var_18h] = 0
         rax = qword [rcx - 0x120]
         qword [var_10h] = rax
         qword [var_8h] = 1

    loc_0x0069a971: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_1::thread_aware_account_locks::ThreadAwareAccountLocks::read_schedulable_threads::h8529ae402df29b50 @ 0x69a8ff(x)
         r9 = rip + 0x7300d0      // 0xdcaa48
         rsi = var_18h
         rdx = var_8h
         edi = 0
         ecx = 0
         qword [0x00e38db8] ()    // [0xe38db8:8]=0 // 0xe38db8(0x0, 0x10078018, 0x10078008, 0x0)
         int3

        return rax;
}

