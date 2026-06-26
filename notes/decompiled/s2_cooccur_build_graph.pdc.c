// callconv: rax amd64 (rdi, rsi, rdx, rcx, r8, r9, xmm0, xmm1, xmm2, xmm3, xmm4);
void sym.rakurai_scheduler__scheduler_2__cooccurrence_graph__CooccurrenceGraph__build_graph__h7274b6cc8cbae08b (int64_t arg1, int64_t arg2, int64_t arg_10h) {
        // DATA XREF from reloc.fixup.SH_HGHOHO_HG_HtH @ +0x10(r)
        // rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGrap
        // h::build_graph::h7274b6cc8cbae08b
        push (rbp)
        push (r15)
        push (r14)
        push (r13)
        push (r12)
        push (rbx)
        rsp -= 0xa8
        rbx = rdi     // arg1
        v = qword [rdi + 0x30] - 0 // arg1
        if (!v) goto loc_0x5d44f1 // unlikely
        goto loc_0x005d44ab;
    loc_0x005d44f1:
        // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::build_graph::h7274b6cc8cbae08b @ 0x5d44a9(x)
        r14 = qword [rbx + 8]
        r15 = qword [rbx + 0x10]
        qword [rbx + 0x10] = 0
        v = r15 & r15
        if (!v) goto loc_0x5d4547 // unlikely
        goto loc_0x005d4506;
    loc_0x005d4547:
        // CODE XREFS from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::build_graph::h7274b6cc8cbae08b @ 0x5d4504(x), 0x5d4527(x)
        v = qword [rbx + 0x78] - 0
        if (!v) goto loc_0x5d4594 // unlikely
        goto loc_0x005d454e;
    loc_0x005d4594:
        // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::build_graph::h7274b6cc8cbae08b @ 0x5d454c(x)
        qword [rbx + 0x58] = 0
        r13 = qword [rbx + 0xd8] // case.0x95d678.3
        v = r13 & r13
        if (!v) goto loc_0x5d4920 // unlikely
        goto loc_0x005d45ac;
    loc_0x005d4920:
        // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::build_graph::h7274b6cc8cbae08b @ 0x5d45a6(x)
        rsp += 0xa8
        rbx = pop ()
        r12 = pop ()
        r13 = pop ()
        r14 = pop ()
        r15 = pop ()
        rbp = pop ()
        return
        goto loc_0x005d4557;
        goto loc_0x005d44b4;
        return rax;
    loc_0x005d44b4:
        rdi = qword [rbx + 0x18]
        rdx = r14 + 0x11
        esi = 0xff
        qword [memset] () // [0xe37e48:8]=0 // 0xe37e48(0x0, 0xff, 0x11, 0x0)
        rax = r14 + 1
        rcx = rax
        rcx >>>= 3
        rax &= 0xfffffffffffffff8
        rax -= rcx
        v = r14 - 8
        cmovb rax r14
        goto loc_0x5d44e5
        
    loc_0x005d44e5:
        // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::build_graph::h7274b6cc8cbae08b @ 0x5d44e1(x)
        qword [rbx + 0x30] = 0
        qword [rbx + 0x28] = rax
        return rax;
    loc_0x005d44e3: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::build_graph::h7274b6cc8cbae08b @ 0x5d44b2(x)
         eax = 0

    loc_0x005d4506: // orphan
         r14 += 8
         r12 = qword [0x00e37488] // [0xe37488:8]=0
         
         goto loc_0x005d4520;
    loc_0x005d4520: // orphan
         // CODE XREFS from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::build_graph::h7274b6cc8cbae08b @ 0x5d4530(x), 0x5d4545(x)
         r14 += 0x48
         r15--
         if (!v) 
         goto loc_0x005d4529;
    loc_0x005d4529: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::build_graph::h7274b6cc8cbae08b @ 0x5d4511(x)
         rax = qword [r14 - 8]
         v = rax & rax
         if (!v) 
         goto loc_0x005d4532;
    loc_0x005d4532: // orphan
         rdi = qword [r14]
         rax <<<= 4
         rsi = rax + rax*2
         edx = 8
         r12 ()                   // 0x5d4545(0x10102464c457f, 0x0, 0x8, 0x0)
         
         goto loc_0x005d4547;
    loc_0x005d454e: // orphan
         r14 = qword [rbx + 0x68]
         v = r14 & r14
         if (!v) 
         goto loc_0x005d4557;
    loc_0x005d4557: // orphan
         rdi = qword [rbx + 0x60]
         rdx = r14 + 0x11
         esi = 0xff
         qword [memset] ()        // [0xe37e48:8]=0 // 0xe37e48(0x268, 0xff, 0x11, 0x0)
         rax = r14 + 1
         rcx = rax
         rcx >>>= 3
         rax &= 0xfffffffffffffff8
         rax -= rcx
         v = r14 - 8
         cmovb rax r14
         
         goto loc_0x005d4586;
    loc_0x005d4586: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::build_graph::h7274b6cc8cbae08b @ 0x5d4555(x)
         eax = 0

    loc_0x005d4588: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::build_graph::h7274b6cc8cbae08b @ 0x5d4584(x)
         qword [rbx + 0x78] = 0
         qword [rbx + 0x70] = rax

    loc_0x005d45ac: // orphan
         rax = rbx + 0xb0
         qword [rsp] = rax
         rbp = qword [rbx + 0xc0] // case.0x95d678.1
         r12 = arg_10h
         xmm0 = xmmword [rbp]
         pmovmskb eax xmm0
         eax = !eax
         
         goto loc_0x005d45e0;
    loc_0x005d45e0: // orphan
         // CODE XREFS from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::build_graph::h7274b6cc8cbae08b @ 0x5d4661(x), 0x5d48f5(x)
         rax &= rdx
         xmm1 = xmmword [rcx + rax]
         xmm2 = xmm1
         xmm2 == xmm0
         pmovmskb r8d xmm2
         v = r8d & r8d
         if (!v) 
         goto loc_0x005d45fa;
    loc_0x005d45fa: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::build_graph::h7274b6cc8cbae08b @ 0x5d463b(x)
         r9d = __builtin_ctz(r8d)
         r9 += rax
         r9 &= rdx
         r9 ~= r9
         r9 = r9 + r9*4
         xmm2 = xmmword [rsi + r9*8]
         xmm3 = xmmword [rsi + r9*8 + 0x10]
         xmm3 ^= xmmword [var_40h]
         xmm2 ^= xmmword [var_30h]
         por xmm2 xmm3
         ptest xmm2 xmm2
         if (!v) 
         goto loc_0x005d4630;
    loc_0x005d4630: // orphan
         r9d = r8 - 1
         r9w &= r8w
         r8d = r9d
         if (v) 
         goto loc_0x005d463d;
    loc_0x005d463d: // orphan
         

    loc_0x005d4640: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::build_graph::h7274b6cc8cbae08b @ 0x5d45f8(x)
         pcmpeqd xmm2 xmm2
         xmm1 == xmm2
         pmovmskb r8d xmm1
         v = r8d & r8d
         if (v) 
         goto loc_0x005d4656;
    loc_0x005d4656: // orphan
         rax += rdi
         rax += 0x10
         rdi += 0x10
         
         goto loc_0x005d4670;
    loc_0x005d4670: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::build_graph::h7274b6cc8cbae08b @ 0x5d462e(x)
         v = r14 - 0x15
         if (((unsigned) v) < 0) 
         goto loc_0x005d467a;
    loc_0x005d467a: // orphan
         rax = qword [rcx + r9*8 - 8]
         v = rax - 0x14
         if (((unsigned) v) <= 0) 
         goto loc_0x005d4689;
    loc_0x005d4689: // orphan
         xmm0 = qword [var_sp_8h]
         unpcklps xmm0 xmmword [0x00358780]
         subpd xmm0 xmmword [0x00358020]
         xmm1 = rax
         xmm2 = r14
         punpcklqdq xmm2 xmm1
         xmm1 = xmm2
         xmm3 ^= xmm3
         pblendw xmm1 xmm3 0xcc
         por xmm1 xmmword [0x0035a1a0]
         psrlq xmm2 0x20
         por xmm2 xmmword [0x00358d30]
         subpd xmm2 xmmword [0x00358d40]
         addpd xmm2 xmm1
         haddpd xmm0 xmm0
         divpd xmm0 xmm2
         movddup xmm1 qword [rbx + 0x120]
         cmplepd xmm1 xmm0
         movmskpd ecx xmm1
         v = ecx - 3
         if (v) 
         goto loc_0x005d46fd;
    loc_0x005d46fd: // orphan
         xmm0 = xmmword [var_10h]
         xmm1 = xmmword [var_20h]
         xmmword [var_60h] = xmm1
         xmmword [var_50h] = xmm0
         qword [var_70h] = r14
         xmm0 = xmmword [var_30h]
         xmm1 = xmmword [var_40h]
         xmmword [var_48h] = xmm1
         xmmword [var_80h] = xmm0
         qword [var_38h] = rax
         rdi = rbx                // int64_t arg1
         rsi = var_50h            // int64_t arg2
         rdx = var_80h            // int64_t arg3
         sym.petgraph::graphmap::GraphMap_N_E_Ty_S_::add_edge::he86dea7b47f2dbc9 () // petgraph::graphmap::GraphMap<N,E,Ty,S>::add_edge::he86dea7b47f2dbc9 // sym.petgraph::graphmap::GraphMap_N_E_Ty_S_::add_edge::he86dea7b47f2dbc9(0x0, 0x10078050, 0x10078080)
         
         goto loc_0x005d4760;
    loc_0x005d4760: // orphan
         // CODE XREFS from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::build_graph::h7274b6cc8cbae08b @ 0x5d45cd(x), 0x5d491a(x)
         v = ax & ax
         if (v) 
         goto loc_0x005d4765;
    loc_0x005d4765: // orphan
         

    loc_0x005d4770: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::build_graph::h7274b6cc8cbae08b @ 0x5d478a(x)
         xmm0 = xmmword [r12]
         pmovmskb eax xmm0
         rbp += 0xfffffffffffffb80
         r12 += 0x10
         v = eax - 0xffff
         if (!v) 
         goto loc_0x005d478c;
    loc_0x005d478c: // orphan
         eax = !eax

    loc_0x005d478e: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::build_graph::h7274b6cc8cbae08b @ 0x5d4763(x)
         r15d = eax
         eax = __builtin_ctz(r15d)
         rax ~= rax
         rax = rax + rax*8
         xmm0 = xmmword [rbp + rax*8 - 0x48]
         xmm1 = xmmword [rbp + rax*8 - 0x38]
         xmmword [var_20h] = xmm1
         xmmword [var_10h] = xmm0
         xmm0 = xmmword [rbp + rax*8 - 0x28]
         xmm1 = xmmword [rbp + rax*8 - 0x18]
         xmmword [var_40h] = xmm1
         xmmword [var_30h] = xmm0
         v = qword [rbx + 0xa8] - 0
         if (!v) 
         goto loc_0x005d47d7;
    loc_0x005d47d7: // orphan
         rax = qword [rbp + rax*8 - 8]
         qword [var_sp_8h] = rax
         rdi = qword [rsp]        // int64_t arg1
         rsi = var_10h            // int64_t arg2
         sym.core::hash::BuildHasher::hash_one::h46c1cdae8af607b0 () // sym.core::hash::BuildHasher::hash_one::h46c1cdae8af607b0(0xb0, 0x10078010, 0x0)
         rsi = rax
         rsi >>>= 0x39
         rcx = qword [rbx + 0x90]
         rdx = qword [rbx + 0x98]
         movd xmm0 esi
         xmm1 ^= xmm1
         pshufb xmm0 xmm1
         rsi = rcx - 0x28
         edi = 0

    loc_0x005d4817: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::build_graph::h7274b6cc8cbae08b @ 0x5d489d(x)
         rax &= rdx
         xmm1 = xmmword [rcx + rax]
         xmm2 = xmm1
         xmm2 == xmm0
         pmovmskb r8d xmm2
         v = r8d & r8d
         if (!v) 
         goto loc_0x005d4831;
    loc_0x005d4831: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::build_graph::h7274b6cc8cbae08b @ 0x5d4872(x)
         r9d = __builtin_ctz(r8d)
         r9 += rax
         r9 &= rdx
         r9 ~= r9
         r9 = r9 + r9*4
         xmm2 = xmmword [rsi + r9*8]
         xmm3 = xmmword [rsi + r9*8 + 0x10]
         xmm3 ^= xmmword [var_20h]
         xmm2 ^= xmmword [var_10h]
         por xmm2 xmm3
         ptest xmm2 xmm2
         if (!v) 
         goto loc_0x005d4867;
    loc_0x005d4867: // orphan
         r9d = r8 - 1
         r9w &= r8w
         r8d = r9d
         if (v) 
         goto loc_0x005d4874;
    loc_0x005d4874: // orphan
         

    loc_0x005d4880: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::build_graph::h7274b6cc8cbae08b @ 0x5d482f(x)
         pcmpeqd xmm2 xmm2
         xmm1 == xmm2
         pmovmskb r8d xmm1
         v = r8d & r8d
         if (v) 
         goto loc_0x005d4892;
    loc_0x005d4892: // orphan
         rax += rdi
         rax += 0x10
         rdi += 0x10
         
         goto loc_0x005d48b0;
    loc_0x005d48b0: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::build_graph::h7274b6cc8cbae08b @ 0x5d4865(x)
         r14 = qword [rcx + r9*8 - 8]
         v = qword [rbx + 0xa8] - 0
         if (!v) 
         goto loc_0x005d48bf;
    loc_0x005d48bf: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::build_graph::h7274b6cc8cbae08b @ 0x5d490b(x)
         rdi = qword [rsp]        // int64_t arg1
         rsi = var_30h            // int64_t arg2
         sym.core::hash::BuildHasher::hash_one::h46c1cdae8af607b0 () // sym.core::hash::BuildHasher::hash_one::h46c1cdae8af607b0(0xb0, 0x10078030, 0x0)
         rsi = rax
         rsi >>>= 0x39
         rcx = qword [rbx + 0x90]
         rdx = qword [rbx + 0x98]
         movd xmm0 esi
         xmm1 ^= xmm1
         pshufb xmm0 xmm1
         rsi = rcx - 0x28
         edi = 0
         
         goto loc_0x005d4900;
    loc_0x005d4900: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::build_graph::h7274b6cc8cbae08b @ 0x5d4890(x)
         r14d = 0
         v = qword [rbx + 0xa8] - 0
         if (v) 
         goto loc_0x005d490d;
    loc_0x005d490d: // orphan
         

    loc_0x005d4910: // orphan
         // XREFS: CODE 0x005d4650  CODE 0x005d4674  CODE 0x005d4683   // XREFS: CODE 0x005d46f7  CODE 0x005d4751  CODE 0x005d47d1   // XREFS: CODE 0x005d48bd  
         eax = r15 - 1
         eax &= r15d
         r13--
         if (v) 
         return rax;
}

