// callconv: rax amd64 (rdi, rsi, rdx, rcx, r8, r9, xmm0, xmm1, xmm2, xmm3, xmm4);
void sym.rakurai_scheduler__scheduler_2__scheduler_stats__RakuraiScheduler_Tx___find_least_loaded_thread__h992b682153c769fe (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg_80h, int64_t arg_180h, int64_t arg_190h) {
        // CALL XREFS from _<rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx> as rakurai_scheduler::scheduler_2::scheduler::Scheduler<Tx>>::schedule_2::h5d59a757f888b217 @ 0x67940b(x), 0x6794b7(x) // sym.__rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler_Tx__as_rakurai_scheduler::scheduler_2::scheduler::Scheduler_Tx__::schedule_2::h5d59a757f888b217
        // rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx
        // >::find_least_loaded_thread::h992b682153c769fe
        push (rbp)
        push (r15)
        push (r14)
        push (r13)
        push (r12)
        push (rbx)
        rsp -= 0x28
        rax = rsi     // arg2
        rcx = qword [rdx] // arg3
        rbp = rsi     // arg2
        rbp <<<= 4
        rbp += rdi    // arg1
        rsi = rcx
        rsi ~= rsi
        jno 0x68893d  // likely
        goto loc_0x006886ea;
    loc_0x0068893d:
        // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x6886e4(x)
        qword [var_20h] = rcx
        v = rax & rax
        qword [var_18h] = rdx // arg3
        if (!v) goto loc_0x688d00 // likely
        goto loc_0x00688950;
    loc_0x00688d00:
        // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x68894a(x)
        eax = 0
        
    loc_0x00688d02:
        // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x68898c(x)
        rsi = qword [var_20h]
        v = rsi & rsi
        if (!v) goto loc_0x688d2a // likely
        goto loc_0x00688d0c;
        goto loc_0x006886f3;
        return rax;
    loc_0x006886f3:
        rsi = 0xffffffffffffffff
        eax = 0
        edx = 0
        goto loc_0x688715
        
    loc_0x00688715:
        // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x6886fe(x)
        r8 = qword [rdi] // arg1
        v = r8 - 2
        if (!v) goto loc_0x6887a0 // unlikely
        goto loc_0x00688722;
        return rax;
    loc_0x00688722:
        v = r8d - 1
        if (v) goto loc_0x6887b0 // likely
        goto loc_0x0068872c;
    loc_0x006887b0:
        // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x688726(x)
        r10 = qword [rdi + 8] // arg1
        
    do {
        // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x6887d4(x)
        r11 = qword [r10 + 0x80]
        rbx = qword [r10]
        rcx = qword [r10 + 0x80]
        v = rcx - r11
    } while (rcx - r11);
    loc_0x006887d6:
        r14 = qword [r10 + 0x190]
        r9 = r14 - 1
        rcx = r9
        rcx &= rbx
        r9 &= r11
        r9 -= rcx
        if (((unsigned) v) <= 0) goto 0x688892 // likely
        goto loc_0x006887f3;
    loc_0x00688892:
        // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x6887ed(x)
        jae 0x6888f1  // likely
        goto loc_0x00688894;
    loc_0x006888f1:
        // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x688892(x)
        r14 = !r14
        r11 &= r14
        v = r11 - rbx
        if (v) goto loc_0x688928 // unlikely
        goto loc_0x006888fc;
    while (/* 0x00688928 */) {
        while (/* 0x00688746 */) {
            // XREFS: CODE 0x00688794  CODE 0x006887a6  CODE 0x00688803
            // XREFS: CODE 0x0068889e  CODE 0x00688902  CODE 0x00688932
            rdi += 0x10   // arg1
            rdx++
            v = rdi - rbp // arg1
            if (!v) goto loc_0x688d2a // unlikely
            r11 = qword [rdi + 8] // arg1
            // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x688744(x)
            r10 = qword [r11 + 0x80]
            r9 = qword [r11]
            rcx = qword [r11 + 0x80]
            v = rcx - r10
            if (v) goto loc_0x688730 // unlikely
        }
        while (/* 0x006887a0 */) {
        }
        while (/* 0x006887f3 */) {
        }
        while (/* 0x00688894 */) {
            // CODE XREFS from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x68879a(x), 0x6887ac(x), 0x6888a4(x), 0x688908(x), 0x688938(x)
            v = r8d - 2
            if (!v) goto loc_0x688700 // unlikely
            v = r8d - 1
            if (v) goto loc_0x6888a9 // likely
            r8 = qword [rdi + 8] // arg1
            // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x688844(x)
            rsi = qword [r8 + 0x80]
            rax = qword [r8]
            rcx = qword [r8 + 0x80]
            v = rcx - rsi
            if (v) goto loc_0x688830 // unlikely
            rcx = rsi
            rcx &= 0xfffffffffffffffe
            r8 = rax
            r8 &= 0xfffffffffffffffe
            esi = !esi
            r9 = rcx + 2
            v = sil & 0x3e
            if (!zf) r9 = rcx
            eax = !eax
            rcx = r8 + 2
            v = al & 0x3e
            if (!zf) rcx = r8
            rax = rcx
            rax &= 0xffffffffffffffc0
            r9 -= rax
            rsi = r9
            rsi >>>= 1
            ecx >>>= 1
            ecx &= 0x1f
            r9 >>>= 6
            r9 += rcx
            rsi -= r9
            goto loc_0x688702
        }
        while (/* 0x006888fc */) {
            // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x688817(x)
            rax = qword [rdi + 8] // arg1
            // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x6888c4(x)
            r8 = qword [rax + 0x80]
            r9 = qword [rax]
            rcx = qword [rax + 0x80]
            v = rcx - r8
            if (v) goto loc_0x6888b0 // unlikely
            r10 = qword [rax + 0x190]
            rsi = r10 - 1
            rcx = rsi
            rcx &= r9
            rsi &= r8
            rsi -= rcx
            if (((unsigned) v) > 0) goto 0x688702 // unlikely
            jae 0x68890d  // likely
            rsi += qword [rax + 0x180]
            goto loc_0x688702
        }
        // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x6888e3(x)
        r10 = !r10
        r8 &= r10
        v = r8 - r9
        if (!v) goto loc_0x688700 // likely
        rsi = qword [rax + 0x180]
        goto loc_0x688702
    }
    loc_0x00688938:
        
        goto loc_0x00688813;
        goto loc_0x00688908;
        goto loc_0x006888a4;
        goto loc_0x00688809;
    loc_0x00688700: // orphan
         // CODE XREFS from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x68880d(x), 0x688916(x)
         esi = 0

    loc_0x00688702: // orphan
         // CODE XREFS from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x68888d(x), 0x6888dd(x), 0x6888ec(x), 0x688923(x)
         rax = rdx

    loc_0x00688950: // orphan
         r8 = qword [rdx + 8]     // arg3
         rax = qword [rdx + 0x10] // arg3
         r10 = 0xffffffffffffff8  // 1152921504606846968
         r10 &= rax
         eax <<<= 3
         eax &= 0x38
         qword [var_8h] = rax
         r14 = 0xffffffffffffffff
         eax = 0
         r11d = 0
         qword [var_10h] = rbp
         
         goto loc_0x00688983;
    loc_0x00688983: // orphan
         // CODE XREFS from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x688c14(x), 0x688cea(x)
         r14d = 0

    loc_0x00688986: // orphan
         // CODE XREFS from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x688c8c(x), 0x688ccd(x), 0x688cdc(x), 0x688cf7(x)
         rax = rbx

    loc_0x00688989: // orphan
         // XREFS: CODE 0x00688a06  CODE 0x00688a96  CODE 0x00688afc   // XREFS: CODE 0x00688b16  CODE 0x00688b26  CODE 0x00688b3c   // XREFS: CODE 0x00688b52  CODE 0x00688b68  CODE 0x00688b7e   // XREFS: CODE 0x00688b94  CODE 0x00688baa  CODE 0x00688bc6   // XREFS: CODE 0x00688be4  CODE 0x00688bfb  
         v = rdi - rbp            // arg1
         if (!v) 
         goto loc_0x00688992;
    loc_0x00688992: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x688981(x)
         rbx = r11
         r15 = rdi                // arg1
         rdi += 0x10              // arg1
         r11++
         xmm0 = rbx
         pshufd xmm0 xmm0 0x44
         r12d = 0

    loc_0x006889b0: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x6889fa(x)
         v = r10 - r12
         if (!v) 
         goto loc_0x006889b5;
    loc_0x006889b5: // orphan
         xmm1 = xmmword [r8 + r12*8]
         xmm2 = xmmword [r8 + r12*8 + 0x10]
         xmm3 = xmmword [r8 + r12*8 + 0x20] // elf_phdr // elf_shdr
         xmm4 = xmmword [r8 + r12*8 + 0x30]
         pcmpeqq xmm2 xmm0
         pcmpeqq xmm1 xmm0
         packssdw xmm1 xmm2
         pcmpeqq xmm3 xmm0
         pcmpeqq xmm4 xmm0
         packssdw xmm3 xmm4
         packssdw xmm1 xmm3
         pmovmskb edx xmm1
         r12 += 8
         v = edx & edx            // arg3
         if (!v) 
         goto loc_0x006889fc;
    loc_0x006889fc: // orphan
         
         goto loc_0x00688a00;
    loc_0x00688a00: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x6889b3(x)
         v = qword [var_8h] - 0
         if (!v) 
         goto loc_0x00688a08;
    loc_0x00688a08: // orphan
         v = qword [r8 + r10*8] - rbx
         if (v) 
         goto loc_0x00688a12;
    loc_0x00688a12: // orphan
         // XREFS: CODE 0x006889fc  CODE 0x00688b31  CODE 0x00688b47   // XREFS: CODE 0x00688b5d  CODE 0x00688b73  CODE 0x00688b89   // XREFS: CODE 0x00688b9f  CODE 0x00688bb0  
         r12 = qword [r15]
         v = r12 & r12
         if (!v) 
         goto loc_0x00688a1e;
    loc_0x00688a1e: // orphan
         v = r12d - 1
         if (v) 
         goto loc_0x00688a28;
    loc_0x00688a28: // orphan
         r9 = qword [r15 + 8]

    loc_0x00688a30: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x688a44(x)
         rsi = qword [r9 + 0x80]
         rdx = qword [r9]
         rcx = qword [r9 + 0x80]
         v = rcx - rsi
         if (v) 
         goto loc_0x00688a46;
    loc_0x00688a46: // orphan
         rcx = rsi
         rcx &= 0xfffffffffffffffe
         r9 = rdx
         r9 &= 0xfffffffffffffffe
         esi = !esi
         rbp = rcx + 2
         v = sil & 0x3e
         if (!zf) rbp = rcx
         edx = !edx
         rcx = r9 + 2
         v = dl & 0x3e
         if (!zf) rcx = r9
         rdx = rcx
         rdx &= 0xffffffffffffffc0
         rbp -= rdx
         r13 = rbp
         r13 >>>= 1
         ecx >>>= 1
         ecx &= 0x1f
         rbp >>>= 6
         rbp += rcx
         r13 -= rbp
         rbp = qword [var_10h]    // rsp
         v = r13 - r14
         jae 0x688989             // likely

         goto loc_0x00688a9c;
    loc_0x00688a9c: // orphan
         
         goto loc_0x00688ab0;
    loc_0x00688ab0: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x688a18(x)
         rbp = qword [r15 + 8]

    loc_0x00688ac0: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x688ad5(x)
         r9 = qword [arg_80h]
         rdx = qword [rbp]
         rsi = qword [arg_80h]
         v = rsi - r9
         if (v) 
         goto loc_0x00688ad7;
    loc_0x00688ad7: // orphan
         rsi = qword [arg_190h]
         r13 = rsi - 1
         rcx = r13
         rcx &= rdx
         r13 &= r9
         r13 -= rcx
         if (((unsigned) v) <= 0) 
         goto loc_0x00688af4;
    loc_0x00688af4: // orphan
         rbp = qword [var_10h]    // rsp
         v = r13 - r14
         jae 0x688989             // likely

         goto loc_0x00688b02;
    loc_0x00688b02: // orphan
         
         goto loc_0x00688b10;
    loc_0x00688b10: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x688a22(x)
         r13d = 0
         v = r13 - r14
         jae 0x688989             // likely

         goto loc_0x00688b1c;
    loc_0x00688b1c: // orphan
         
         goto loc_0x00688b21;
    loc_0x00688b21: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x688a0c(x)
         v = dword [var_8h] - 8
         if (!v) 
         goto loc_0x00688b2c;
    loc_0x00688b2c: // orphan
         v = qword [r8 + r10*8 + 8] - rbx
         if (!v) 
         goto loc_0x00688b37;
    loc_0x00688b37: // orphan
         v = dword [var_8h] - 0x10
         if (!v) 
         goto loc_0x00688b42;
    loc_0x00688b42: // orphan
         v = qword [r8 + r10*8 + 0x10] - rbx
         if (!v) 
         goto loc_0x00688b4d;
    loc_0x00688b4d: // orphan
         v = dword [var_8h] - 0x18
         if (!v) 
         goto loc_0x00688b58;
    loc_0x00688b58: // orphan
         v = qword [r8 + r10*8 + 0x18] - rbx
         if (!v) 
         goto loc_0x00688b63;
    loc_0x00688b63: // orphan
         v = dword [var_8h] - 0x20
         if (!v) 
         goto loc_0x00688b6e;
    loc_0x00688b6e: // orphan
         v = qword [r8 + r10*8 + 0x20] - rbx
         if (!v) 
         goto loc_0x00688b79;
    loc_0x00688b79: // orphan
         v = dword [var_8h] - 0x28 // '('
         if (!v) 
         goto loc_0x00688b84;
    loc_0x00688b84: // orphan
         v = qword [r8 + r10*8 + 0x28] - rbx
         if (!v) 
         goto loc_0x00688b8f;
    loc_0x00688b8f: // orphan
         v = dword [var_8h] - 0x30 // '0'
         if (!v) 
         goto loc_0x00688b9a;
    loc_0x00688b9a: // orphan
         v = qword [r8 + r10*8 + 0x30] - rbx
         if (!v) 
         goto loc_0x00688ba5;
    loc_0x00688ba5: // orphan
         v = dword [var_8h] - 0x38 // '8'
         if (!v) 
         goto loc_0x00688bb0;
    loc_0x00688bb0: // orphan
         
         goto loc_0x00688bb5;
    loc_0x00688bb5: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x688aee(x)
         jae 0x688bce             // likely

         goto loc_0x00688bb7;
    loc_0x00688bb7: // orphan
         r13 += qword [arg_180h]
         rbp = qword [var_10h]    // rsp
         v = r13 - r14
         jae 0x688989             // likely

         goto loc_0x00688bcc;
    loc_0x00688bcc: // orphan
         
         goto loc_0x00688bce;
    loc_0x00688bce: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x688bb5(x)
         rsi = !rsi
         r9 &= rsi
         v = r9 - rdx
         if (v) 
         goto loc_0x00688bd9;
    loc_0x00688bd9: // orphan
         r13d = 0
         rbp = qword [var_10h]    // rsp
         v = r13 - r14
         jae 0x688989             // likely

         goto loc_0x00688bea;
    loc_0x00688bea: // orphan
         
         goto loc_0x00688bec;
    loc_0x00688bec: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x688bd7(x)
         r13 = qword [arg_180h]
         rbp = qword [var_10h]    // rsp
         v = r13 - r14
         jae 0x688989             // likely

         goto loc_0x00688c01;
    loc_0x00688c01: // orphan
         

    loc_0x00688c10: // orphan
         // CODE XREFS from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x688a9c(x), 0x688b02(x), 0x688b1c(x), 0x688bcc(x), 0x688bea(x)
         v = r12d - 2
         if (!v) 
         goto loc_0x00688c1a;
    loc_0x00688c1a: // orphan
         v = r12d - 1
         if (v) 
         goto loc_0x00688c20;
    loc_0x00688c20: // orphan
         rsi = qword [r15 + 8]

    loc_0x00688c30: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x688c44(x)
         rdx = qword [rsi + 0x80]
         rax = qword [rsi]
         rcx = qword [rsi + 0x80]
         v = rcx - rdx
         if (v) 
         goto loc_0x00688c46;
    loc_0x00688c46: // orphan
         rcx = rdx
         rcx &= 0xfffffffffffffffe
         rsi = rax
         rsi &= 0xfffffffffffffffe
         edx = !edx
         r9 = rcx + 2
         v = dl & 0x3e
         if (!zf) r9 = rcx
         eax = !eax
         rcx = rsi + 2
         v = al & 0x3e
         if (!zf) rcx = rsi
         rax = rcx
         rax &= 0xffffffffffffffc0
         r9 -= rax
         r14 = r9
         r14 >>>= 1
         ecx >>>= 1
         ecx &= 0x1f
         r9 >>>= 6
         r9 += rcx
         r14 -= r9
         
         goto loc_0x00688c91;
    loc_0x00688c91: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x688c1e(x)
         rax = qword [r15 + 8]

    loc_0x00688ca0: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x688cb4(x)
         r9 = qword [rax + 0x80]
         rdx = qword [rax]
         rcx = qword [rax + 0x80]
         v = rcx - r9
         if (v) 
         goto loc_0x00688cb6;
    loc_0x00688cb6: // orphan
         rsi = qword [rax + 0x190]
         r14 = rsi - 1
         rcx = r14
         rcx &= rdx
         r14 &= r9
         r14 -= rcx
         if (((unsigned) v) > 0) 
         goto loc_0x00688cd3;
    loc_0x00688cd3: // orphan
         jae 0x688ce1             // likely

         goto loc_0x00688cd5;
    loc_0x00688cd5: // orphan
         r14 += qword [rax + 0x180]
         
         goto loc_0x00688ce1;
    loc_0x00688ce1: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x688cd3(x)
         rsi = !rsi
         r9 &= rsi
         v = r9 - rdx
         if (!v) 
         goto loc_0x00688cf0;
    loc_0x00688cf0: // orphan
         r14 = qword [rax + 0x180]
         
         goto loc_0x00688cfc;
    loc_0x00688cfc: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x6886ed(x)
         eax = 0
         
         goto loc_0x00688d00;
    loc_0x00688d0c: // orphan
         rcx = qword [var_18h]
         rdi = qword [rcx + 8]
         rsi <<<= 3
         edx = 8
         rbx = rax
         qword [0x00e37488] ()    // [0xe37488:8]=0 // 0xe37488(0x0, 0x0, 0x8, 0x0)
         rax = rbx

    loc_0x00688d2a: // orphan
         // CODE XREFS from rakurai_scheduler::scheduler_2::scheduler_stats::RakuraiScheduler<Tx>::find_least_loaded_thread::h992b682153c769fe @ 0x68870f(x), 0x688cfe(x), 0x688d0a(x)
         rsp += 0x28
         rbx = pop ()
         r12 = pop ()
         r13 = pop ()
         r14 = pop ()
         r15 = pop ()
         rbp = pop ()
         return

}

