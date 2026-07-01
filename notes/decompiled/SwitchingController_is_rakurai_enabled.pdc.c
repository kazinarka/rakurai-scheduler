// callconv: rax amd64 (rdi, rsi, rdx, rcx, r8, r9, xmm0, xmm1, xmm2, xmm3, xmm4);
void sym.rakurai_scheduler__switching_controller__SwitchingController__is_rakurai_enabled__h8ce83f041a57fb76__clone_llvm8668054646338321894_ (int64_t arg1) {
        // CALL XREF from rakurai_scheduler::scheduler_1::controller::Controller<R,S>::run::h3c7475e95bdf7f94 @ 0x6ad714(x) // sym.rakurai_scheduler::scheduler_1::controller::Controller_R_S_::run::h3c7475e95bdf7f94
        // CALL XREF from rakurai_scheduler::switching_controller::SwitchingController::wait_or_proceed::hc3a5dece5ff52606 [clone llvm8668054646338321894] @ 0x6c18a0(x) // sym.rakurai_scheduler::switching_controller::SwitchingController::wait_or_proceed::hc3a5dece5ff52606__clone_llvm8668054646338321894_
        // CALL XREF from rakurai_scheduler::switching_controller::SwitchingController::initial_check_state_for_rakurai::h8c14ed1accf25b1a @ 0x6c205b(x) // sym.rakurai_scheduler::switching_controller::SwitchingController::initial_check_state_for_rakurai::h8c14ed1accf25b1a
        // CALL XREF from sym.initial_check_state_for_standard @ 0x6d7ebb(x)
        // rakurai_scheduler::switching_controller::SwitchingController::is_rak
        // urai_enabled::h8ce83f041a57fb76 [clone llvm8668054646338321894]
        push (r15)
        push (r14)
        push (rbx)
        rsp -= 0x1d0
        rax = qword [reloc.OVERRULE_SCHEDULER_STATUS] // [0xe37380:8]=0
        eax = byte [rax]
        v = al & al
        if (v) goto loc_0x6c1d3a // likely
        goto loc_0x006c1b9e;
    loc_0x006c1d3a:
        // XREFS: CODE 0x006c1b98  CODE 0x006c1ba7  CODE 0x006c1bb2
        // XREFS: CODE 0x006c1bbd  CODE 0x006c1bc8  CODE 0x006c1c03
        ebx = 0
        
    loc_0x006c1d3c:
        // CODE XREFS from rakurai_scheduler::switching_controller::SwitchingController::is_rakurai_enabled::h8ce83f041a57fb76 [clone llvm8668054646338321894] @ 0x6c1e2f(x), 0x6c1e3e(x)
        eax = ebx
        rsp += 0x1d0
        rbx = pop ()
        r14 = pop ()
        r15 = pop ()
        return
        goto loc_0x006c1bad;
        return rax;
    loc_0x006c1bad:
        v = word [rdi + 0x20] - 4 // arg1
        if (v) goto loc_0x6c1d3a // likely
        goto loc_0x006c1bb8;
    loc_0x006c1bb8:
        v = word [rdi + 0x22] - 0 // arg1
        if (v) goto loc_0x6c1d3a // unlikely
        goto loc_0x006c1bc3;
    loc_0x006c1bc3:
        v = word [rdi + 0x24] - 3 // arg1
        if (v) goto loc_0x6c1d3a // likely
        goto loc_0x006c1bce;
    loc_0x006c1bce:
        r15 = rdi     // arg1
        rsi = qword [rdi + 0x48] // arg1 // elf_phdr
        rsi += 0x10   // int64_t arg2 // sym.rocksdb::perf_level
        rdi = var_40h // int64_t arg1
        sym.std::sync::poison::mutex::Mutex_T_::lock::h7a26bbc01984e1d8 () // std::sync::poison::mutex::Mutex<T>::lock::h7a26bbc01984e1d8 // sym.std::sync::poison::mutex::Mutex_T_::lock::h7a26bbc01984e1d8(0x10078040, 0x50)
        v = dword [var_40h] - 1
        if (!v) goto loc_0x6c1edb // unlikely
        goto loc_0x006c1bee;
    loc_0x006c1edb:
        // CODE XREF from rakurai_scheduler::switching_controller::SwitchingController::is_rakurai_enabled::h8ce83f041a57fb76 [clone llvm8668054646338321894] @ 0x6c1be8(x)
        rax = qword [var_48h]
        ecx = byte [var_50h]
        qword [rsp] = rax
        byte [var_8h] = cl
        rdi = rip - obj.anon.6416ad03d2dfdff0085698d53c36cecb.152.llvm.8668054646338321894 // 0x37df0f // "called `Result::unwrap()` on an `Err` value\x01\x03signal found waiting giver, notifyingh2 connect response with non-zero body not supportedconnection keep-alive timed outenvelope not droppedpolled after completesend_when canceledfilled must not become larger than initializedfilled overflowDropping CCSrustls::con"
        rcx = rip + 0x709de5 // 0xdcbce0
        r8 = rip + 0x7094e6 // 0xdcb3e8
        rdx = rsp
        esi = 0x2b    // '+'
        qword [reloc.fixup.UHH_HHuHUHMHEHE] () // [0xe37860:8]=0 // reloc.fixup.UHH_HHuHUHMHEHE(0x37df0f, 0x2b, 0x10078000, 0xdcbce0)
        
    loc_0x006c1f10:
        // CODE XREFS from rakurai_scheduler::switching_controller::SwitchingController::is_rakurai_enabled::h8ce83f041a57fb76 [clone llvm8668054646338321894] @ 0x6c1e8f(x), 0x6c1ed9(x)
        ud2
        goto loc_0x006c1c09;
        return rax;
    loc_0x006c1c09:
        r14 = qword [r15 + 0x30]
        rbx = r14 + 0x10
        eax = dword [r14 + 0x10]
        v = eax - 0x3ffffffd
        if (((unsigned) v) > 0) goto 0x6c1e43 // likely
        goto loc_0x006c1c20;
    while (!(al & al)) {
        // CODE XREF from rakurai_scheduler::switching_controller::SwitchingController::is_rakurai_enabled::h8ce83f041a57fb76 [clone llvm8668054646338321894] @ 0x6c1e5a(x)
        xmm0 = xmmword [r14]
        xmm1 = xmmword [r14 + 0x10]
        xmmword [var_140h] = xmm1
        xmmword [var_130h] = xmm0
        esi = 0xffffffff // -1
        lock xadd dword [rbx] esi
        esi--
        eax = esi
        eax &= 0xbfffffff
        eax ~= eax
        jo 0x6c1f12   // unlikely
        // CODE XREF from rakurai_scheduler::switching_controller::SwitchingController::is_rakurai_enabled::h8ce83f041a57fb76 [clone llvm8668054646338321894] @ 0x6c1f1e(x)
        xmm0 = xmmword [rcx + 0x80]
        xmm1 = xmmword [rcx + 0x90]
        xmmword [var_160h] = xmm1
        xmmword [var_150h] = xmm0
        rdi = var_40h
        rsi = var_150h
        rdx = var_130h
        qword [reloc.fixup.SH_HHJ_L_0_D__H] () // [0xe38fe8:8]=0 // reloc.fixup.SH_HHJ_L_0_D__H(0x10078040, 0x10078150, 0x10078130, 0x0)
        xmm0 = xmmword [var_40h]
        xmm1 = xmmword [var_50h]
        xmmword [var_180h] = xmm1
        xmmword [var_170h] = xmm0
        rbx = qword [r15 + 0x40]
        r14 = rbx + 0x10
        eax = dword [rbx + 0x10]
        v = eax - 0x3ffffffd
        if (((unsigned) v) > 0) goto 0x6c1e91 // likely
        ecx = rax + 1
        lock cmpxchg dword [r14] ecx
        if (v) goto loc_0x6c1e91 // likely
        eax = byte [rbx + 0x18]
        v = al & al
        if (v) goto loc_0x6c1ea6 // unlikely
        // CODE XREF from rakurai_scheduler::switching_controller::SwitchingController::is_rakurai_enabled::h8ce83f041a57fb76 [clone llvm8668054646338321894] @ 0x6c1ea0(x)
        rsi = qword [rbx + 0x28] // elf_shdr
        rsi += 0x10
        rdi = var_e0h
        rdx = var_170h
        qword [reloc.fixup.SHPHHHH] () // [0xe38348:8]=0 // reloc.fixup.SHPHHHH(0x100780e0, 0x13de520, 0x10078170, 0x0)
        esi = 0xffffffff // -1
        lock xadd dword [r14] esi
        esi--
        eax = esi
        eax &= 0xbfffffff
        eax ~= eax
        jo 0x6c1f23   // unlikely
        // CODE XREF from rakurai_scheduler::switching_controller::SwitchingController::is_rakurai_enabled::h8ce83f041a57fb76 [clone llvm8668054646338321894] @ 0x6c1f2c(x)
        v = byte [var_118h] - 2
        if (v) goto loc_0x6c1d4b // likely
        while (v) {
            // CODE XREF from rakurai_scheduler::switching_controller::SwitchingController::is_rakurai_enabled::h8ce83f041a57fb76 [clone llvm8668054646338321894] @ 0x6c1d38(x)
            xmm0 = xmmword [var_e0h]
            xmm1 = xmmword [var_f0h]
            xmm2 = xmmword [var_100h]
            xmm3 = xmmword [var_110h]
            xmmword [var_30h] = xmm3
            xmmword [var_20h] = xmm2
            xmmword [var_10h] = xmm1
            xmmword [rsp] = xmm0
            r14 = qword [rsp]
            xmm0 = xmmword [r14 + 0x18] // elf_phdr
            xmmword [var_120h] = xmm0
            rdi = var_40h
            rsi = var_120h
            qword [reloc.fixup.SHH_wH] () // [0xe38ff0:8]=0 // reloc.fixup.SHH_wH(0x10078040, 0x10078120, 0x0, 0x0)
            v = dword [var_40h] - 4
            if (v) goto loc_0x6c1e1b // likely
            rdi = r15
            ecx = byte [var_cfh]
            eax = byte [var_6dh]
            xmm0 = xmmword [var_6eh]
            xmmword [var_190h] = xmm0
            xmm0 = xmmword [var_7eh]
            xmmword [var_1a0h] = xmm0
            xmm0 = xmmword [var_8eh]
            xmmword [var_1b0h] = xmm0
            xmm0 = xmmword [var_9eh]
            xmmword [var_1c0h] = xmm0
            rdx = qword [r15 + 0x38]
            rdx = qword [rdx + 0x98]
            v = cl - 1
            if (v) goto loc_0x6c1e25 // likely
            v = al & 1
            if (!v) goto loc_0x6c1e25 // likely
            rdx--         // int64_t arg3
            rsi = var_190h // int64_t arg2
            sym.rakurai_scheduler::switching_controller::SwitchingController::verify_signature::h1c436174f7f4fb37 () // sym.rakurai_scheduler::switching_controller::SwitchingController::verify_signature::h1c436174f7f4fb37(0x0, 0x10078190, -1)
            ebx = eax
            // CODE XREF from rakurai_scheduler::switching_controller::SwitchingController::is_rakurai_enabled::h8ce83f041a57fb76 [clone llvm8668054646338321894] @ 0x6c1da7(x)
            rdi = var_40h // int64_t arg1
            sym.core::ptr::drop_in_place_core::result::Result_rakurai_activation::state::RakuraiActivationAccount_anchor_lang::error::Error__::hdbe664126cb950ad () // core::ptr::drop_in_place<core::result::Result<rakurai_activation::state::RakuraiActivationAccount,anchor_lang::error::Error>>::hdbe664126cb950ad // sym.core::ptr::drop_in_place_core::result::Result_rakurai_activation::state::RakuraiActivationAccount_anchor_lang::error::Error__::hdbe664126cb950ad(0x10078040)
            // CODE XREFS from rakurai_scheduler::switching_controller::SwitchingController::is_rakurai_enabled::h8ce83f041a57fb76 [clone llvm8668054646338321894] @ 0x6c1e01(x), 0x6c1e05(x)
            ebx = 0
        }
        rdi = rsp
        qword [0x00e38178] () // [0xe38178:8]=0 // 0xe38178(0x10078000, 0x0, 0x0, 0x0)
        goto loc_0x6c1d3c
    }
    loc_0x006c1e60:
        // CODE XREF from rakurai_scheduler::switching_controller::SwitchingController::is_rakurai_enabled::h8ce83f041a57fb76 [clone llvm8668054646338321894] @ 0x6c1c3b(x)
        qword [var_40h] = r14
        qword [var_48h] = rbx
        rdi = rip - obj.anon.6416ad03d2dfdff0085698d53c36cecb.152.llvm.8668054646338321894 // 0x37df0f // "called `Result::unwrap()` on an `Err` value\x01\x03signal found waiting giver, notifyingh2 connect response with non-zero body not supportedconnection keep-alive timed outenvelope not droppedpolled after completesend_when canceledfilled must not become larger than initializedfilled overflowDropping CCSrustls:"
        rcx = rip + 0x709e88 // 0xdcbd00
        r8 = rip + 0x709581 // 0xdcb400
        rdx = var_40h
        esi = 0x2b    // '+'
        qword [reloc.fixup.UHH_HHuHUHMHEHE] () // [0xe37860:8]=0 // reloc.fixup.UHH_HHuHUHMHEHE(0x37df0f, 0x2b, 0x10078040, 0xdcbd00)
        goto loc_0x6c1f10
            goto loc_0x006c1c20;
    loc_0x006c1c20:
        rcx = r15
        edx = rax + 1
        lock cmpxchg dword [rbx] edx
        if (v) goto loc_0x6c1e43 // likely
        goto loc_0x006c1c30;
        return rax;
    loc_0x006c1c30:
        eax = byte [r14 + 0x18]
        r14 += 0x20   // sym.tracing_core::dispatcher::CURRENT_STATE::__u7b__u7b_constant_u7d__u7d_::__u7b__u7b_closure_u7d__u7d_::__RUST_STD_INTERNAL_VAL::h90d4f31268b4f161 // "@"
        v = al & al
        if (v) goto loc_0x6c1e60 // unlikely
        goto loc_0x006c1c41;
        goto loc_0x006c1c74;
    loc_0x006c1f12:
        // CODE XREF from rakurai_scheduler::switching_controller::SwitchingController::is_rakurai_enabled::h8ce83f041a57fb76 [clone llvm8668054646338321894] @ 0x6c1c6e(x)
        rdi = rbx
        qword [0x00e37d60] () // [0xe37d60:8]=0 // 0xe37d60(0x0, 0x0, 0x0, 0x0)
        rcx = r15
        goto loc_0x6c1c74
            goto loc_0x006c1c74;
        goto loc_0x006c1cdd;
        return rax;
    while (!(al & al)) {
    }
    loc_0x006c1ea6:
        // CODE XREF from rakurai_scheduler::switching_controller::SwitchingController::is_rakurai_enabled::h8ce83f041a57fb76 [clone llvm8668054646338321894] @ 0x6c1cf1(x)
        rbx += 0x20   // sym.tracing_core::dispatcher::CURRENT_STATE::__u7b__u7b_constant_u7d__u7d_::__u7b__u7b_closure_u7d__u7d_::__RUST_STD_INTERNAL_VAL::h90d4f31268b4f161 // "@"
        qword [var_40h] = rbx
        qword [var_48h] = r14
        rdi = rip - obj.anon.6416ad03d2dfdff0085698d53c36cecb.152.llvm.8668054646338321894 // 0x37df0f // "called `Result::unwrap()` on an `Err` value\x01\x03signal found waiting giver, notifyingh2 connect response with non-zero body not supportedconnection keep-alive timed outenvelope not droppedpolled after completesend_when canceledfilled must not become larger than initializedfilled overflowDropping CCSrustls::con"
        rcx = rip + 0x709dbe // 0xdcbc80
        r8 = rip + 0x70954f // 0xdcb418
        rdx = var_40h // (pstr 0x00000020) "@"
        esi = 0x2b    // '+'
        qword [reloc.fixup.UHH_HHuHUHMHEHE] () // [0xe37860:8]=0 // reloc.fixup.UHH_HHuHUHMHEHE(0x37df0f, 0x2b, 0x10078040, 0xdcbc80)
        goto loc_0x6c1f10
        break;
    loc_0x006c1bee: // orphan
         rdi = qword [var_48h]    // int64_t arg1
         esi = dword [var_50h]
         ebx = byte [rdi + 5]
         sym.core::ptr::drop_in_place_std::sync::poison::mutex::MutexGuard_h2::proto::streams::buffer::Buffer_h2::frame::Frame_hyper::proto::h2::SendBuf_bytes::bytes::Bytes_____::h4ea1fcf8d02eaa83 () // core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<h2::proto::streams::buffer::Buffer<h2::frame::Frame<hyper::proto::h2::SendBuf<bytes::bytes::Bytes>>>>>::h4ea1fcf8d02eaa83 // sym.core::ptr::drop_in_place_std::sync::poison::mutex::MutexGuard_h2::proto::streams::buffer::Buffer_h2::frame::Frame_hyper::proto::h2::SendBuf_bytes::bytes::Bytes_____::h4ea1fcf8d02eaa83(0x0)
         v = bl - 1
         if (!v) 
    loc_0x006c1f23: // orphan
         // CODE XREF from rakurai_scheduler::switching_controller::SwitchingController::is_rakurai_enabled::h8ce83f041a57fb76 [clone llvm8668054646338321894] @ 0x6c1d2a(x)
         rdi = r14
         qword [0x00e37d60] ()    // [0xe37d60:8]=0 // 0xe37d60(0x0, 0x0, 0x0, 0x0)
         
}

