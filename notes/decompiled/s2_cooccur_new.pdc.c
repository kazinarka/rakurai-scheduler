// callconv: rax amd64 (rdi, rsi, rdx, rcx, r8, r9, xmm0, xmm1, xmm2, xmm3, xmm4);
void sym.rakurai_scheduler__scheduler_2__cooccurrence_graph__CooccurrenceGraph__new__hc6301b1ef31bf0d1 (int64_t arg1, int64_t arg2, int64_t arg3) {
        // DATA XREF from reloc.fixup.AWAVAUATSHP @
        // rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGrap
        // h::new::hc6301b1ef31bf0d1
        push (r15)
        push (r14)
        push (r13)
        push (r12)
        push (rbx)
        rsp -= 0x150
        r14 = rsi     // arg2
        qword [var_8h] = xmm0 // arg7
        rbx = rdi     // arg1
        rdi = var_c0h // int64_t arg1
        esi = 0       // int64_t arg2
        edx = 0       // int64_t arg3
        sym.petgraph::graphmap::GraphMap_N_E_Ty_S_::with_capacity::h6df3b3639311a8ff () // petgraph::graphmap::GraphMap<N,E,Ty,S>::with_capacity::h6df3b3639311a8ff // sym.petgraph::graphmap::GraphMap_N_E_Ty_S_::with_capacity::h6df3b3639311a8ff(0x10077f48, 0x0, 0x0, 0x0)
        rdi = rip + 0x8628e3 // 0xe38278
        sym.imp.__tls_get_addr ()
        r15 = rax
        v = byte [rax + 0x10] - 1
        if (v) goto loc_0x5d5b0a // likely
        goto loc_0x005d59aa;
    loc_0x005d5b0a:
        // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::new::hc6301b1ef31bf0d1 @ 0x5d59a4(x)
        qword [reloc.fixup.UHHW_EH] () // [0xe37558:8]=0 // reloc.fixup.UHHW_EH(0x0, 0x0, 0x0, 0x0)
        qword [r15] = rax
        qword [r15 + 8] = rdx
        byte [r15 + 0x10] = 1
        goto loc_0x5d59b1
        
    loc_0x005d59b1:
        // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::new::hc6301b1ef31bf0d1 @ 0x5d5b1c(x)
        rcx = rax + 1
        xmm0 = xmmword [0x00dc7170] // [0xdc7170:16]=-1
        xmmword [var_50h] = xmm0
        xmm1 = xmmword [0x00dc7160] // [0xdc7160:16]=-1
        xmmword [var_40h] = xmm1
        qword [var_60h] = rax
        qword [var_68h] = rdx
        rsi = rax + 2
        xmmword [var_80h] = xmm0
        xmmword [var_70h] = xmm1
        qword [var_90h] = rcx
        qword [var_98h] = rdx
        r12 = qword [r14]
        r13 = qword [r14 + 8]
        r14 = qword [r14 + 0x10]
        rax += 3
        qword [r15] = rax
        xmmword [var_20h] = xmm0
        xmmword [var_10h] = xmm1
        qword [var_30h] = rsi
        qword [var_38h] = rdx
        v = r14 & r14
        if (v) goto loc_0x5d5b21 // likely
        return rax;
        return rax;
    loc_0x005d5a27: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::new::hc6301b1ef31bf0d1 @ 0x5d5b39(x)
         r14 <<<= 5
         r14 += r13
         qword [var_a0h] = r13
         qword [var_a8h] = r13
         qword [var_b0h] = r12
         qword [var_b8h] = r14
         rdi = var_a0h            // int64_t arg1
         rsi = var_10h            // int64_t arg2
         sym.__alloc::vec::into_iter::IntoIter_T_A__as_core::iter::traits::iterator::Iterator_::fold::hb7516fec037b0a85 () // _<alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::fold::hb7516fec037b0a85 // sym.__alloc::vec::into_iter::IntoIter_T_A__as_core::iter::traits::iterator::Iterator_::fold::hb7516fec037b0a85(0x100780a0, 0x10078010, 0x0)
         xmm0 = xmmword [var_10h]
         xmm1 = xmmword [var_20h]
         xmm2 = xmmword [var_30h]
         xmmword [rbx + 0x110] = xmm2
         xmmword [rbx + sym.__tls_guard] = xmm1
         xmmword [rbx + 0xf0] = xmm0
         rsi = var_c0h
         edx = 0x90
         rdi = rbx
         qword [memcpy] ()        // [0xe37450:8]=0 // 0xe37450(0x0, 0x100780b8, 0x90, 0x0)
         xmm0 = xmmword [var_40h]
         xmm1 = xmmword [var_50h]
         xmm2 = xmmword [var_60h]
         xmmword [rbx + 0x90] = xmm0
         xmmword [rbx + 0xa0] = xmm1
         xmmword [rbx + 0xb0] = xmm2
         xmm0 = xmmword [var_70h]
         xmm1 = xmmword [var_80h]
         xmm2 = xmmword [var_90h]
         xmmword [rbx + 0xc0] = xmm0
         xmmword [rbx + 0xd0] = xmm1
         xmmword [rbx + 0xe0] = xmm2
         xmm0 = qword [var_8h]
         qword [rbx + 0x120] = xmm0
         rax = rbx
         rsp += 0x150
         rbx = pop ()
         r12 = pop ()
         r13 = pop ()
         r14 = pop ()
         r15 = pop ()
         return

    loc_0x005d5b21: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::new::hc6301b1ef31bf0d1 @ 0x5d5a21(x)
         rdx = var_30h
         rdi = var_10h
         rsi = r14
         ecx = 1
         qword [0x00e382b0] ()    // [0xe382b0:8]=0 // 0xe382b0(0x10078010, 0x0, 0x10078030, 0x1)
         
}

