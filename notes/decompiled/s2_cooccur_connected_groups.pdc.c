// callconv: rax amd64 (rdi, rsi, rdx, rcx, r8, r9, xmm0, xmm1, xmm2, xmm3, xmm4);
void sym.rakurai_scheduler__scheduler_2__cooccurrence_graph__CooccurrenceGraph__connected_groups__h1f78cb5476b6aba5 (int64_t arg1, int64_t arg2) {
        // DATA XREF from reloc.fixup.SH_HGHOHO_HG_HtH @ +0x18(r)
        // rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGrap
        // h::connected_groups::h1f78cb5476b6aba5
        push (rbp)
        push (r15)
        push (r14)
        push (r13)
        push (r12)
        push (rbx)
        rsp -= 0x1d8
        qword [var_38h] = rsi // arg2
        rbx = rdi     // arg1
        edi = 0       // int64_t arg1
        sym.core::ops::function::FnOnce::call_once::h673a4c85cb3e8bb7__clone_llvm1348778015432205871_ () // core::ops::function::FnOnce::call_once::h673a4c85cb3e8bb7 [clone llvm1348778015432205871] // sym.core::ops::function::FnOnce::call_once::h673a4c85cb3e8bb7__clone_llvm1348778015432205871_(0x0)
        v = rax & rax
        if (!v) goto loc_0x5d513c // likely
        goto loc_0x005d4969;
    loc_0x005d513c:
        // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::connected_groups::h1f78cb5476b6aba5 @ 0x5d4963(x)
        rdi = rip + obj.anon.5390c4834e67f13dfdb0f734760e8668.33.llvm.17002760810674037762 // 0xdc5010
        qword [reloc.fixup.UHH_HHEHEHB] () // [0xe375a8:8]=0 // reloc.fixup.UHH_HHEHEHB(0xdc5010, 0x0, 0x0, 0x0)
        goto loc_0x5d516e
        
    loc_0x005d516e:
        // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::connected_groups::h1f78cb5476b6aba5 @ 0x5d5149(x)
        // CODE XREFS from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::connected_groups::h1f78cb5476b6aba5 @ +0x823(x), +0x82c(x) // sym.rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::connected_groups::h1f78cb5476b6aba5
        rbx = rax
        rax = qword [var_8h]
        v = rax & rax
        if (!v) goto loc_0x5d5193 // likely
        goto loc_0x005d517b;
        goto loc_0x005d49ba;
        return rax;
    loc_0x005d49ba:
        rbx = qword [r12]
        r15 = qword [r12 + 8]
        
    loc_0x005d49c3:
        // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::connected_groups::h1f78cb5476b6aba5 @ 0x5d5124(x)
        rax = rbx + 1
        qword [r12] = rax
        rdi = var_40h // int64_t arg1
        esi = 0x30    // '0' // int64_t arg2
        edx = 0x400   // uint32_t arg3
        ecx = 1       // int64_t arg4
        sym.hashbrown::raw::RawTableInner::fallible_with_capacity::h757a54cd066352dd__clone_llvm1348778015432205871_ () // hashbrown::raw::RawTableInner::fallible_with_capacity::h757a54cd066352dd [clone llvm1348778015432205871] // sym.hashbrown::raw::RawTableInner::fallible_with_capacity::h757a54cd066352dd__clone_llvm1348778015432205871_(0x10078040, 0x30, 0x400, 0x1)
        xmm0 = xmmword [var_40h]
        xmm1 = xmmword [var_50h]
        xmmword [var_d0h] = xmm1
        xmmword [var_c0h] = xmm0
        qword [var_e0h] = rbx
        qword [var_e8h] = r15
        rax = qword [var_38h]
        rax = qword [rax + 0x10]
        v = rax & rax
        if (!v) goto loc_0x5d506f // unlikely
        goto loc_0x005d4a24;
        return rax;
    loc_0x005d4a24:
        rdx = 0x7ffffffffffffff1 // 9223372036854775793
        rcx = qword [var_38h]
        rcx = qword [rcx + 8]
        rax = rax + rax*8
        rax = rcx + rax*8
        qword [var_78h] = rax
        qword [var_70h] = 0
        rbx = var_80h
        r15 = var_40h
        rdx += 0xf
        qword [var_b8h] = rdx
        r12 = var_150h
        goto loc_0x5d4b20
        
    loc_0x005d4b20:
        // CODE XREFS from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::connected_groups::h1f78cb5476b6aba5 @ 0x5d4a6e(x), 0x5d5005(x), 0x5d5041(x)
        rax = rcx
        xmm0 = xmmword [rcx + 0x20] // elf_phdr // elf_shdr
        xmm1 = xmmword [rcx + 0x30]
        rcx = qword [rcx + 0x40]
        rax += 0x48
        qword [rsp] = rax
        qword [var_1a0h] = rcx
        xmmword [var_190h] = xmm1
        xmmword [var_180h] = xmm0
        xmmword [var_f0h] = xmm0
        xmmword [var_100h] = xmm1
        qword [var_110h] = rcx
        v = qword [var_98h] - 0
        if (!v) goto loc_0x5d4bd0 // likely
        goto loc_0x005d4b78;
        return rax;
    loc_0x005d4b78:
        rdi = var_a0h // int64_t arg1
        rsi = var_f0h // int64_t arg2
        sym.core::hash::BuildHasher::hash_one::hd7e6c1296548bdfe () // sym.core::hash::BuildHasher::hash_one::hd7e6c1296548bdfe(0x100780a0, 0x100780f0, 0x0)
        rsi = rax
        rsi >>>= 0x39
        rcx = qword [var_80h]
        rdx = qword [var_88h]
        movd xmm0 esi
        xmm1 ^= xmm1
        pshufb xmm0 xmm1
        rsi = rcx - 0x28
        rdi = qword [var_110h]
        r8d = 0
        goto loc_0x5d4a80
        
    loc_0x005d4a80:
        // CODE XREFS from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::connected_groups::h1f78cb5476b6aba5 @ 0x5d4b11(x), 0x5d4bc0(x)
        rax &= rdx
        xmm1 = xmmword [rcx + rax]
        xmm2 = xmm1
        xmm2 == xmm0
        pmovmskb r9d xmm2
        v = r9d & r9d
        if (!v) goto loc_0x5d4af0 // likely
        goto loc_0x005d4a9a;
        return rax;
    loc_0x005d4a9a:
        // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::connected_groups::h1f78cb5476b6aba5 @ 0x5d4aec(x)
        r10d = __builtin_ctz(r9d)
        r10 += rax
        r10 &= rdx
        r10 ~= r10
        r10 = r10 + r10*4
        xmm2 = xmmword [rsi + r10*8]
        xmm3 = xmmword [rsi + r10*8 + 0x10]
        xmm3 ^= xmmword [var_100h]
        xmm2 ^= xmmword [var_f0h]
        por xmm2 xmm3
        ptest xmm2 xmm2
        if (v) goto loc_0x5d4ae1 // unlikely
        goto loc_0x005d4ad6;
    while (v) {
        v = rdi - qword [rsi + r10*8 + 0x20]
        if (!v) goto loc_0x5d5038 // unlikely
    }
    loc_0x005d4aee:
        
    loc_0x005d4af0:
        // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::connected_groups::h1f78cb5476b6aba5 @ 0x5d4a98(x)
        pcmpeqd xmm2 xmm2
        xmm1 == xmm2
        pmovmskb r9d xmm1
        v = r9d & r9d
        if (v) goto loc_0x5d4bd0 // unlikely
        goto loc_0x005d4b06;
        goto loc_0x005d4ae1;
        return rax;
    while (rcx - qword [var_78h]) {
        while (al & al) {
            // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::connected_groups::h1f78cb5476b6aba5 @ 0x5d4cc6(x)
            rax = qword [var_30h]
            v = rax & rax
            if (!v) goto loc_0x5d4f00 // likely
        }
        while (!(rax & rax)) {
            // CODE XREFS from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::connected_groups::h1f78cb5476b6aba5 @ 0x5d4d39(x), 0x5d4d46(x), 0x5d4d99(x)
            rbx = r14
            r13 = qword [var_18h]
            v = r13 - qword [var_8h]
            rdi = var_8h
            qword [0x00e37cf0] () // [0xe37cf0:8]=0 // 0xe37cf0(0x10078008, 0x0, 0x0, 0x0)
        }
        while (!(rcx & rcx)) {
        }
        while (r13 == rbp) {
            r13 = qword [rax + 8]
            rbp = rcx + rcx*2
            rbp <<<= 4
            rbp += r13
            goto loc_0x5d4d9f
            // CODE XREFS from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::connected_groups::h1f78cb5476b6aba5 @ 0x5d4eea(x), 0x5d4efb(x)
            rax = qword [var_28h]
            rcx = rbx + rbx*4
            rdx = qword [var_60h]
            qword [rax + rcx*8 + 0x20] = rdx
            xmm0 = xmmword [var_40h]
            xmm1 = xmmword [var_50h]
            xmmword [rax + rcx*8 + 0x10] = xmm1
            xmmword [rax + rcx*8] = xmm0
            rbx++
            qword [var_30h] = rbx
        }
        while (rdi == qword [rsi + r10*8 + 0x20]) {
            // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::connected_groups::h1f78cb5476b6aba5 @ 0x5d4d5b(x)
            rax = qword [r13 + 0x20]
            qword [var_60h] = rax
            xmm0 = xmmword [r13]
            xmm1 = xmmword [r13 + 0x10]
            xmmword [var_50h] = xmm1
            xmmword [var_40h] = xmm0
            xmm0 = xmmword [r13]
            xmm1 = xmmword [r13 + 0x10]
            rax = qword [r13 + 0x20]
            qword [var_170h] = rax
            xmmword [var_160h] = xmm1
            xmmword [var_150h] = xmm0
            v = qword [var_98h] - 0
            if (!v) goto loc_0x5d4ee0 // likely
            rdi = var_a0h // int64_t arg1
            rsi = r12     // int64_t arg2
            sym.core::hash::BuildHasher::hash_one::hd7e6c1296548bdfe () // sym.core::hash::BuildHasher::hash_one::hd7e6c1296548bdfe(0x100780a0, 0x0, 0x0)
            rsi = rax
            rsi >>>= 0x39
            rcx = qword [var_80h]
            rdx = qword [var_88h]
            movd xmm0 esi
            xmm1 ^= xmm1
            pshufb xmm0 xmm1
            rsi = rcx - 0x28
            rdi = qword [var_170h]
            r8d = 0
            // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::connected_groups::h1f78cb5476b6aba5 @ 0x5d4ecd(x)
            rax &= rdx
            xmm1 = xmmword [rcx + rax]
            xmm2 = xmm1
            xmm2 == xmm0
            pmovmskb r9d xmm2
            v = r9d & r9d
            if (!v) goto loc_0x5d4eb0 // likely
            // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::connected_groups::h1f78cb5476b6aba5 @ 0x5d4ea4(x)
            r10d = __builtin_ctz(r9d)
            r10 += rax
            r10 &= rdx
            r10 ~= r10
            r10 = r10 + r10*4
            xmm2 = xmmword [rsi + r10*8]
            xmm3 = xmmword [rsi + r10*8 + 0x10]
            xmm3 ^= xmmword [var_160h]
            xmm2 ^= xmmword [var_150h]
            por xmm2 xmm3
            ptest xmm2 xmm2
            if (v) goto loc_0x5d4e99 // unlikely
        }
        while (v) {
        }
        while (rbx - qword [var_20h]) {
            // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::connected_groups::h1f78cb5476b6aba5 @ 0x5d4e50(x)
            pcmpeqd xmm2 xmm2
            xmm1 == xmm2
            pmovmskb r9d xmm1
            v = r9d & r9d
            rax += r8
            rax += 0x10
            r8 += 0x10
            goto loc_0x5d4e38
        }
        while (rcx - qword [var_78h]) {
            // CODE XREFS from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::connected_groups::h1f78cb5476b6aba5 @ 0x5d4b00(x), 0x5d4b76(x)
            qword [0x00e37508] () // [0xe37508:8]=0 // 0xe37508(0x0, 0x0, 0x0, 0x0)
            edi = 0x28    // '('
            esi = 8
            qword [0x00e37510] () // [0xe37510:8]=0 // 0xe37510(0x28, 0x8, 0x0, 0x0)
            v = rax & rax
            if (!v) goto loc_0x5d50f7 // likely
            rcx = qword [var_1a0h]
            qword [rax + 0x20] = rcx
            xmm0 = xmmword [var_180h] // elf_phdr // elf_shdr
            xmm1 = xmmword [var_190h]
            xmmword [rax + 0x10] = xmm1
            xmmword [rax] = xmm0
            qword [var_20h] = 1
            qword [var_28h] = rax
            qword [var_8h] = 0
            qword [var_10h] = 8
            qword [var_18h] = 0
            eax = 1       // (pstr 0x00000000) "@"
            rdi = var_20h
            qword [0x00e37cf0] () // [0xe37cf0:8]=0 // 0xe37cf0(0x10078020, 0x0, 0x0, 0x0)
            goto loc_0x5d4d60
            // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::connected_groups::h1f78cb5476b6aba5 @ 0x5d4c5b(x)
            rsi = qword [var_18h]
            v = rsi & rsi // (pstr 0x00000000) "@" // (pstr 0x00000000) "@"
            if (!v) goto loc_0x5d4fcb // likely
            rdi = qword [var_10h]
            rax = var_1b0h // (cstr 0x00000000) "@"
            qword [var_40h] = rax
            v = rsi - 1   // (pstr 0x00000000) "@" // (pstr 0x00000000) "@" // (pstr 0x00000000) "@" // (pstr 0x00000000) "@"
            if (v) goto loc_0x5d5049 // likely
            // CODE XREFS from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::connected_groups::h1f78cb5476b6aba5 @ 0x5d505c(x), 0x5d506a(x)
            v = qword [var_18h] - 0 // (pstr 0x00000000) "@" // (pstr 0x00000000) "@"
            if (!v) goto loc_0x5d5129 // likely
            rax = qword [var_10h]
            rax = qword [rax + 0x20] // elf_shdr
            xmm0 = xmmword [var_8h]
            xmmword [var_40h] = xmm0
            rcx = qword [var_18h]
            qword [var_50h] = rcx
            qword [var_58h] = rax
            qword [var_60h] = 0
            rdi = var_1b0h // int64_t arg1 // (cstr 0x00000000) "@"
            rsi = var_c0h // int64_t arg2 // (cstr 0x00000000) "@"
            rdx = qword [var_70h] // int64_t arg3
            rcx = r15     // int64_t arg4
            sym.hashbrown::map::HashMap_K_V_S_A_::insert::h1a310ef9246f6522 () // hashbrown::map::HashMap<K,V,S,A>::insert::h1a310ef9246f6522 // sym.hashbrown::map::HashMap_K_V_S_A_::insert::h1a310ef9246f6522(0x100781b0, 0x100780c0, 0x0, 0x0)
            rax = qword [var_1b0h]
            v = rax - qword [var_b8h] // (pstr 0x00000000) "@" // (pstr 0x00000000) "@"
            rcx = qword [rsp]
            if (!v) goto loc_0x5d4fba // likely
            v = rax & rax // (pstr 0x00000000) "@" // (pstr 0x00000000) "@"
            if (!v) goto loc_0x5d4fba // likely
            rdi = qword [var_1b8h]
            rax <<<= 3    // (pstr 0x00000000) "@" // (pstr 0x00000000) "@" // (pstr 0x00000000) "@"
            rsi = rax + rax*4
            edx = 8
            qword [0x00e37488] () // [0xe37488:8]=0 // 0xe37488(0x0, 0x0, 0x8, 0x0)
            rcx = qword [rsp]
            // CODE XREFS from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::connected_groups::h1f78cb5476b6aba5 @ 0x5d4f94(x), 0x5d4f99(x)
            qword [var_70h]++
            rax = qword [var_20h] // (pstr 0x00000000) "@"
            v = rax & rax
            if (v) goto loc_0x5d5020 // likely
            // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::connected_groups::h1f78cb5476b6aba5 @ 0x5d4f08(x)
            rax = qword [var_8h]
            v = rax & rax // (pstr 0x00000000) "@" // (pstr 0x00000000) "@"
            if (!v) goto loc_0x5d500d // likely
            rdi = qword [var_10h]
            rax <<<= 3    // (pstr 0x00000000) "@" // (pstr 0x00000000) "@"
            rsi = rax + rax*4
            edx = 8
            qword [0x00e37488] () // [0xe37488:8]=0 // 0xe37488(0x8, 0x0, 0x8, 0x0)
            rcx = qword [rsp]
            rax = qword [var_20h]
            v = rax & rax // (pstr 0x00000000) "@" // (pstr 0x00000000) "@"
            if (v) goto loc_0x5d5020 // unlikely
        }
        while (!(rax & rax)) {
            goto loc_0x5d506f
        }
        // CODE XREFS from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::connected_groups::h1f78cb5476b6aba5 @ 0x5d4fc7(x), 0x5d4ff9(x)
        rdi = qword [var_28h]
        rax <<<= 3    // (pstr 0x00000000) "@" // (pstr 0x00000000) "@" // (pstr 0x00000000) "@"
        rsi = rax + rax*4
        edx = 8
        qword [0x00e37488] () // [0xe37488:8]=0 // 0xe37488(0x0, 0x0, 0x8, 0x0)
    }
    loc_0x005d5047:
        goto loc_0x5d506f
        
    loc_0x005d506f:
        // CODE XREFS from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::connected_groups::h1f78cb5476b6aba5 @ 0x5d4a1e(x), 0x5d500b(x), 0x5d5047(x)
        xmm0 = xmmword [var_c0h]
        xmm1 = xmmword [var_d0h]
        rax = qword [var_e0h]
        rbx = qword [var_b0h]
        qword [rbx + 0x20] = rax
        rax = qword [var_e8h]
        qword [rbx + 0x28] = rax
        xmmword [rbx + 0x10] = xmm1
        xmmword [rbx] = xmm0
        rsi = qword [var_88h]
        v = rsi & rsi
        if (!v) goto loc_0x5d50e2 // likely
        goto loc_0x005d50b3;
        return rax;
    loc_0x005d50b3:
        rax = rsi + rsi*4
        rax = rax*8 + 0x37
        rax &= 0xfffffffffffffff0
        rsi += rax
        rsi += 0x11
        if (!v) goto loc_0x5d50e2 // unlikely
        goto loc_0x005d50cc;
    loc_0x005d50e2:
        // CODE XREFS from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::connected_groups::h1f78cb5476b6aba5 @ 0x5d50b1(x), 0x5d50ca(x)
        rax = rbx
        rsp += 0x1d8
        rbx = pop ()
        r12 = pop ()
        r13 = pop ()
        r14 = pop ()
        r15 = pop ()
        rbp = pop ()
        return
        return rax;
    loc_0x005d4b06: // orphan
         rax += r8
         rax += 0x10
         r8 += 0x10
         
         goto loc_0x005d4b20;
    loc_0x005d5049: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::connected_groups::h1f78cb5476b6aba5 @ 0x5d4f24(x)
         v = rsi - 0x15
         jae 0x5d5061             // unlikely

         goto loc_0x005d504f;
    loc_0x005d504f: // orphan
         edx = 1                  // int64_t arg3
         rcx = r15
         sym.core::slice::sort::shared::smallsort::insertion_sort_shift_left::he9a771b81376b62c () // sym.core::slice::sort::shared::smallsort::insertion_sort_shift_left::he9a771b81376b62c(0x0, 0x0, 0x1)
         
         goto loc_0x005d5061;
    loc_0x005d5061: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::connected_groups::h1f78cb5476b6aba5 @ 0x5d504d(x)
         rdx = r15
         qword [0x00e38288] ()    // [0xe38288:8]=0 // 0xe38288(0x0, 0x0, 0x0, 0x0)
         
         goto loc_0x005d506f;
    loc_0x005d50cc: // orphan
         rdi = qword [var_80h]
         rdi -= rax
         edx = 0x10
         qword [0x00e37488] ()    // [0xe37488:8]=0 // 0xe37488(0x0, 0x0, 0x10, 0x0)

    loc_0x005d50f7: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::connected_groups::h1f78cb5476b6aba5 @ 0x5d4be9(x)
         edi = 8
         esi = 0x28               // '('
         qword [reloc.fixup.UHHHHTF] () // [0xe37518:8]=0 // reloc.fixup.UHHHHTF(0x8, 0x28, 0x0, 0x0)
         
         goto loc_0x005d5109;
    loc_0x005d5109: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::connected_groups::h1f78cb5476b6aba5 @ 0x5d49b4(x)
         qword [reloc.fixup.UHHW_EH] () // [0xe37558:8]=0 // reloc.fixup.UHHW_EH(0x0, 0x0, 0x0, 0x0)
         rbx = rax
         r15 = rdx
         qword [r12] = rax
         qword [r12 + 8] = rdx
         byte [r12 + 0x10] = 1
         
         goto loc_0x005d5129;
    loc_0x005d5129: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::connected_groups::h1f78cb5476b6aba5 @ 0x5d4f30(x)
         rdx = rip + 0x7f20e8     // 0xdc7218
         edi = 0
         esi = 0
         qword [0x00e37e58] ()    // [0xe37e58:8]=0 // 0xe37e58(0x0, 0x0, 0xdc7218, 0x0)

    loc_0x005d513a: // orphan
         // CODE XREF from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::connected_groups::h1f78cb5476b6aba5 @ 0x5d5107(x)
         ud2

        return rax;
    loc_0x005d517b: // orphan
         rdi = qword [var_10h]
         rax <<<= 3
         rsi = rax + rax*4
         edx = 8
         qword [0x00e37488] ()    // [0xe37488:8]=0 // 0xe37488(0x8, 0x0, 0x8, 0x0)

    loc_0x005d5193: // orphan
         // CODE XREFS from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::connected_groups::h1f78cb5476b6aba5 @ 0x828(x), 0x5d5179(x)
         rax = qword [var_20h]
         v = rax & rax
         if (!v) 
         goto loc_0x005d519d;
    loc_0x005d519d: // orphan
         rdi = qword [var_28h]
         rax <<<= 3
         rsi = rax + rax*4
         edx = 8
         qword [0x00e37488] ()    // [0xe37488:8]=0 // 0xe37488(0x0, 0x0, 0x8, 0x0)
         
    loc_0x005d51ba: // orphan
         // CODE XREFS from rakurai_scheduler::scheduler_2::cooccurrence_graph::CooccurrenceGraph::connected_groups::h1f78cb5476b6aba5 @ 0x5d519b(x), 0x5d51b5(x)
         rdi = var_c0h            // int64_t arg1
         sym.__hashbrown::raw::RawTable_T_A__as_core::ops::drop::Drop_::drop::h754098a6b6dc933a () // _<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop::h754098a6b6dc933a // sym.__hashbrown::raw::RawTable_T_A__as_core::ops::drop::Drop_::drop::h754098a6b6dc933a(0x100780c0)
         rdi = var_80h            // int64_t arg1
         sym.__hashbrown::raw::RawTable_T_A__as_core::ops::drop::Drop_::drop::h3e9ed60804539d80 () // _<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop::h1b82fd3ba43e2c9c // sym.__hashbrown::raw::RawTable_T_A__as_core::ops::drop::Drop_::drop::h3e9ed60804539d80(0x10078078)
         rdi = rbx
         sym.imp._Unwind_Resume ()
         qword [reloc.fixup.UHH1kj_q] () // [0xe37460:8]=0 // reloc.fixup.UHH1kj_q(0x0, 0x0, 0x0, 0x0)
         int3

        return rax;
}

