
void sym.run_rakurai_scheduler
               (int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg5,int64_t arg6,int64_t arg_10h,
               int64_t arg_40h,int64_t arg_50h,int64_t arg_60h,int64_t arg_68h,int64_t arg_108h,int64_t arg_170h,
               int64_t arg_188h)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    code *pcVar4;
    uint32_t *puVar5;
    int64_t *piVar6;
    uchar (*pauVar7) [16];
    int64_t *piVar8;
    int64_t iVar9;
    ushort extraout_DX;
    ushort extraout_DX_00;
    ushort extraout_DX_01;
    ushort extraout_DX_02;
    ushort uVar10;
    ushort extraout_DX_03;
    int64_t *extraout_RDX;
    ulong in_stack_00000040;
    int64_t *in_stack_00000050;
    int iStack_5d0;
    uint uStack_5cc;
    uint uStack_5c8;
    uint uStack_5c4;
    uint uStack_5c0;
    uint uStack_5bc;
    int iStack_5b8;
    uint uStack_5b4;
    unkbyte7 Stack_5b0;
    int64_t *piStack_5a8;
    int64_t *piStack_5a0;
    int64_t *piStack_598;
    int64_t *piStack_590;
    int64_t *apiStack_588 [12];
    int64_t iStack_528;
    int64_t iStack_520;
    int64_t iStack_4e8;
    int64_t *piStack_4e0;
    int16_t iStack_4d8;
    ushort uStack_4d6;
    uint uStack_4d4;
    ulong uStack_4d0;
    uint uStack_4c8;
    ushort uStack_4c4;
    int64_t iStack_450;
    int64_t iStack_448;
    int64_t iStack_440;
    int64_t iStack_438;
    int64_t iStack_430;
    ulong uStack_428;
    ulong uStack_400;
    ulong uStack_3f8;
    ulong uStack_3f0;
    int iStack_3e8;
    uint uStack_3e4;
    uint uStack_3e0;
    uint uStack_3dc;
    uint uStack_3d8;
    uint uStack_3d4;
    uint uStack_3d0;
    uint uStack_3cc;
    uint uStack_3c8;
    uint uStack_3c4;
    uchar auStack_3c0 [16];
    ulong uStack_380;
    ulong uStack_378;
    uint uStack_300;
    uchar uStack_2fc;
    ulong uStack_2f8;
    ulong uStack_2f0;
    ulong uStack_2e8;
    ulong uStack_2e0;
    ulong uStack_2d8;
    ulong uStack_2d0;
    uchar uStack_2c8;
    ulong uStack_280;
    ulong uStack_278;
    uchar uStack_270;
    int64_t iStack_1a0;
    int64_t iStack_198;
    ulong uStack_190;
    int64_t iStack_188;
    uchar auStack_160 [304];
    
    iStack_528 = arg2;
    iStack_520 = arg3;
    iStack_450 = arg4;
    iStack_448 = arg5;
    (**0xe38ef8)();
    if (_obj.rakurai_scheduler::entrypoint::PANIC_HOOK_ONCE::h401ce115d4bf84e4 != 0) {
        iStack_5d0 = CONCAT31(iStack_5d0._1_3_,1);
        uStack_400 = &iStack_5d0;
        (**0xe38f10)(obj.rakurai_scheduler::entrypoint::PANIC_HOOK_ONCE::h401ce115d4bf84e4,0,&uStack_400,0xdcb018,
                     0xdcae08);
    }
    (**0xe37508)();
    puVar5 = (**0xe37510)(0x18,8);
    if (puVar5 == NULL) {
        (**0xe37518)(8,0x18);
        goto code_r0x006bd86f;
    }
    puVar5[0] = 1;
    puVar5[1] = 0;
    puVar5[2] = 1;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    (**0xe37508)();
    piVar6 = (**0xe37510)(0x18,8);
    if (piVar6 == NULL) {
        (**0xe37518)(8,0x18);
        goto code_r0x006bd86f;
    }
    *piVar6 = 1;
    piVar6[1] = 1;
    piVar6[2] = 0;
    pauVar7 = sym.imp.__tls_get_addr(0xe38278);
    if (pauVar7[1][0] == '\x01') {
        auStack_3c0 = *pauVar7;
    }
    else {
        auStack_3c0 = (**0xe37558)();
        *(*pauVar7 + 8) = auStack_3c0._8_8_;
        pauVar7[1][0] = 1;
    }
    **pauVar7 = auStack_3c0._0_8_ + 1;
    uStack_5bc._3_1_ = *0xdcb240;
    iStack_5b8 = *0xdcb240 >> 8;
    uStack_5b4._0_3_ = *0xdcb240 >> 0x28;
    uStack_5b4._3_1_ = *0xdcb248;
    Stack_5b0 = *0xdcb248 >> 8;
    uStack_5cc._3_1_ = *0xdcb230;
    uStack_5c8 = *0xdcb230 >> 8;
    uStack_5c4._0_3_ = *0xdcb230 >> 0x28;
    uStack_5c4._3_1_ = *0xdcb238;
    uStack_5c0 = *0xdcb238 >> 8;
    uStack_5bc._0_3_ = *0xdcb238 >> 0x28;
    uStack_400 = 0x1;
    uStack_3f8 = 0x1;
    uStack_3f0 = NULL;
    iStack_3e8 = iStack_5d0 << 8;
    uStack_3e4 = CONCAT44(uStack_5cc,iStack_5d0) >> 0x18;
    uStack_3e0 = *0xdcb230;
    uStack_3dc = CONCAT44(uStack_5c4,uStack_5c8) >> 0x18;
    uStack_3d8 = *0xdcb238;
    uStack_3d4 = *0xdcb238 >> 0x20;
    uStack_3d0 = *0xdcb240;
    uStack_3cc = *0xdcb240 >> 0x20;
    uStack_3c8 = *0xdcb248;
    uStack_3c4 = *0xdcb248 >> 0x20;
    (**0xe37508)();
    piVar8 = (**0xe37510)(0x50,8);
    if (piVar8 == NULL) {
        (**0xe37518)(8,0x50);
        goto code_r0x006bd86f;
    }
    *(piVar8 + 8) = auStack_3c0;
    *(piVar8 + 6) = uStack_3d0;
    *(piVar8 + 0x34) = uStack_3cc;
    *(piVar8 + 7) = uStack_3c8;
    *(piVar8 + 0x3c) = uStack_3c4;
    *(piVar8 + 4) = uStack_3e0;
    *(piVar8 + 0x24) = uStack_3dc;
    *(piVar8 + 5) = uStack_3d8;
    *(piVar8 + 0x2c) = uStack_3d4;
    *(piVar8 + 2) = uStack_3f0;
    *(piVar8 + 0x14) = uStack_3f0._4_4_;
    *(piVar8 + 3) = iStack_3e8;
    *(piVar8 + 0x1c) = uStack_3e4;
    *piVar8 = uStack_400;
    *(piVar8 + 4) = uStack_400._4_4_;
    *(piVar8 + 1) = uStack_3f8;
    *(piVar8 + 0xc) = uStack_3f8._4_4_;
    LOCK();
    iVar9 = *arg6;
    *arg6 = *arg6 + 1;
    UNLOCK();
    if (*arg6 == 0 || SCARRY8(iVar9,1) != *arg6 < 0) goto code_r0x006bd86f;
    LOCK();
    iVar9 = *puVar5;
    *puVar5 = *puVar5 + 1;
    UNLOCK();
    if (*puVar5 == 0 || SCARRY8(iVar9,1) != *puVar5 < 0) goto code_r0x006bd86f;
    LOCK();
    iVar9 = *piVar6;
    *piVar6 = *piVar6 + 1;
    UNLOCK();
    if (*piVar6 == 0 || SCARRY8(iVar9,1) != *piVar6 < 0) goto code_r0x006bd86f;
    LOCK();
    iVar9 = *piVar8;
    *piVar8 = *piVar8 + 1;
    UNLOCK();
    if (*piVar8 == 0 || SCARRY8(iVar9,1) != *piVar8 < 0) goto code_r0x006bd86f;
    iStack_3e8 = piVar8;
    uStack_3e4 = piVar8 >> 0x20;
    uStack_400 = arg6;
    uStack_3f8 = puVar5;
    uStack_3f0 = piVar6;
    if (*(*0xe37378 + 0x20) != 2) {
        sym.once_cell::imp::OnceCell_T_::initialize::haf27a32f47269bbd__clone_llvm8668054646338321894_
                  (*0xe37378,&uStack_400);
        piVar6 = extraout_RDX;
    }
    uVar10 = SUB82(piVar6,0);
    if (uStack_400 != NULL) {
        uVar10 = iStack_3e8;
        iStack_5b8 = iStack_3e8;
        uStack_5b4 = uStack_3e4;
        uStack_5c8 = uStack_3f8;
        uStack_5c4 = uStack_3f8._4_4_;
        uStack_5c0 = uStack_3f0;
        uStack_5bc = uStack_3f0._4_4_;
        iStack_5d0 = uStack_400;
        uStack_5cc = uStack_400 >> 0x20;
        LOCK();
        *uStack_400 = *uStack_400 + -1;
        UNLOCK();
        if (*uStack_400 == 0) {
            (**0xe38300)(&iStack_5d0);
            uVar10 = extraout_DX;
        }
        piVar6 = CONCAT44(uStack_5c4,uStack_5c8);
        LOCK();
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (*piVar6 == 0) {
            (**0xe38300)(&uStack_5c8);
            uVar10 = extraout_DX_00;
        }
        piVar6 = CONCAT44(uStack_5bc,uStack_5c0);
        LOCK();
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (*piVar6 == 0) {
            (**0xe38300)(&uStack_5c0);
            uVar10 = extraout_DX_01;
        }
        piVar6 = CONCAT44(uStack_5b4,iStack_5b8);
        LOCK();
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (*piVar6 == 0) {
            (**0xe38490)(&iStack_5b8);
            uVar10 = extraout_DX_02;
        }
    }
    puVar5 = arg_60h + 0x10;
    uVar3 = *(arg_60h + 0x10);
    if (uVar3 < 0x3ffffffe) {
        LOCK();
        uVar1 = *puVar5;
        if (uVar3 == uVar1) {
            *puVar5 = uVar3 + 1;
        }
        UNLOCK();
        if (uVar3 != uVar1) goto code_r0x006bd50c;
    }
    else {
code_r0x006bd50c:
        (**0xe381c8)(puVar5);
        uVar10 = extraout_DX_03;
    }
    if (*(arg_60h + 0x18) == '\0') {
        uStack_4c8 = *(arg_60h + 100);
        iStack_4d8 = *(arg_60h + 0x54);
        uStack_4c4 = *(arg_60h + 0x68);
        uStack_4d0 = *(arg_60h + 0x5c);
        uStack_4d4 = *(arg_60h + 0x58);
        uStack_4d6 = uVar10;
        if (iStack_4d8 != 0) {
            uStack_4d6 = *(arg_60h + 0x56);
        }
        LOCK();
        uVar3 = *puVar5;
        *puVar5 = *puVar5 - 1;
        UNLOCK();
        if (SBORROW4(0,uVar3 - 1 & 0xbfffffff)) {
            (**0xe37d60)(puVar5);
        }
        LOCK();
        iVar9 = *arg_60h;
        *arg_60h = *arg_60h + 1;
        UNLOCK();
        if (*arg_60h != 0 && SCARRY8(iVar9,1) == *arg_60h < 0) {
            LOCK();
            iVar9 = *arg_170h;
            *arg_170h = *arg_170h + 1;
            UNLOCK();
            if (*arg_170h != 0 && SCARRY8(iVar9,1) == *arg_170h < 0) {
                LOCK();
                iVar9 = *arg_188h;
                *arg_188h = *arg_188h + 1;
                UNLOCK();
                if (*arg_188h != 0 && SCARRY8(iVar9,1) == *arg_188h < 0) {
                    sym.rakurai_scheduler::switching_controller::SwitchingController::new::h0a0c261202843d74
                              (auStack_160,arg_60h,&iStack_4d8,&arg_68h,arg_108h,arg_170h,arg_188h);
                    (**0xe37450)(&uStack_400,auStack_160,0xa8);
                    if (**0xe37398 != 2) {
                        sym.once_cell::imp::OnceCell_T_::initialize::h514097ad34ed4405__clone_llvm8668054646338321894_
                                  (*0xe37398,&uStack_400);
                    }
                    piVar6 = uStack_400;
                    if (uStack_400 != 0x2) {
                        (**0xe37450)(&uStack_5c8,&uStack_3f8,0xa0);
                        iStack_5d0 = piVar6;
                        uStack_5cc = piVar6 >> 0x20;
                        LOCK();
                        *piStack_5a8 = *piStack_5a8 + -1;
                        UNLOCK();
                        if (*piStack_5a8 == 0) {
                            (**0xe37748)(&piStack_5a8);
                        }
                        LOCK();
                        *piStack_5a0 = *piStack_5a0 + -1;
                        UNLOCK();
                        if (*piStack_5a0 == 0) {
                            (**0xe38318)(&piStack_5a0);
                        }
                        LOCK();
                        *piStack_598 = *piStack_598 + -1;
                        UNLOCK();
                        if (*piStack_598 == 0) {
                            (**0xe38f00)(&piStack_598);
                        }
                        LOCK();
                        *piStack_590 = *piStack_590 + -1;
                        UNLOCK();
                        if (*piStack_590 == 0) {
                            (**0xe38328)(&piStack_590);
                        }
                        LOCK();
                        *apiStack_588[0] = *apiStack_588[0] + -1;
                        UNLOCK();
                        if (*apiStack_588[0] == 0) {
                            (**0xe38f08)(apiStack_588);
                        }
                    }
                    if (SBORROW8(0,arg_10h)) {
                        sym.__T_as_alloc::slice::_impl__T__::to_vec_in::ConvertVec_::to_vec::h36ddef38f5959dc2
                                  (&uStack_400,0x37d820,0x1a);
                        uStack_5c0 = SUB84(uStack_3f0,0);
                        uStack_5bc = uStack_3f0 >> 0x20;
                        iStack_5d0 = uStack_400;
                        uStack_5cc = uStack_400._4_4_;
                        uStack_5c8 = uStack_3f8;
                        uStack_5c4 = uStack_3f8._4_4_;
                        (**0xe38d60)(&iStack_5d0);
                        (**0xe37588)(0x37d48b,0x28,0xdcb268);
                    }
                    else if (iStack_528 == 6) {
                        sym.__T_as_alloc::slice::_impl__T__::to_vec_in::ConvertVec_::to_vec::h36ddef38f5959dc2
                                  (&uStack_400,0x37d83a,0x24);
                        uStack_5c0 = SUB84(uStack_3f0,0);
                        uStack_5bc = uStack_3f0 >> 0x20;
                        iStack_5d0 = uStack_400;
                        uStack_5cc = uStack_400._4_4_;
                        uStack_5c8 = uStack_3f8;
                        uStack_5c4 = uStack_3f8._4_4_;
                        (**0xe38d60)(&iStack_5d0);
                        (**0xe37588)(0x37d48b,0x28,0xdcb280);
                    }
                    else {
                        iStack_440 = iStack_528;
                        iStack_438 = iStack_520;
                        if (arg4 == 3) {
                            sym.__T_as_alloc::slice::_impl__T__::to_vec_in::ConvertVec_::to_vec::h36ddef38f5959dc2
                                      (&uStack_400,0x37d85e,0x2e);
                            uStack_5c0 = SUB84(uStack_3f0,0);
                            uStack_5bc = uStack_3f0 >> 0x20;
                            iStack_5d0 = uStack_400;
                            uStack_5cc = uStack_400._4_4_;
                            uStack_5c8 = uStack_3f8;
                            uStack_5c4 = uStack_3f8._4_4_;
                            (**0xe38d60)(&iStack_5d0);
                            (**0xe37588)(0x37d48b,0x28,0xdcb298);
                        }
                        else {
                            iStack_198 = iStack_448;
                            iStack_1a0 = arg4;
                            if (arg_40h == 6) {
                                sym.__T_as_alloc::slice::_impl__T__::to_vec_in::ConvertVec_::to_vec::h36ddef38f5959dc2
                                          (&uStack_400,0x37d88c,0x30);
                                uStack_5c0 = SUB84(uStack_3f0,0);
                                uStack_5bc = uStack_3f0 >> 0x20;
                                iStack_5d0 = uStack_400;
                                uStack_5cc = uStack_400._4_4_;
                                uStack_5c8 = uStack_3f8;
                                uStack_5c4 = uStack_3f8._4_4_;
                                (**0xe38d60)(&iStack_5d0);
                                (**0xe37588)(0x37d48b,0x28,0xdcb2b0);
                            }
                            else {
                                iStack_430 = arg_40h;
                                uStack_428 = in_stack_00000040;
                                uStack_280 = 1;
                                uStack_278 = 1;
                                uStack_270 = 0;
                                uStack_300 = 0;
                                uStack_2fc = 0;
                                uStack_2f8 = 0;
                                uStack_400 = NULL;
                                uStack_3f8 = NULL;
                                uStack_380 = 0;
                                uStack_378 = 0;
                                uStack_2f0 = 8;
                                uStack_2e8 = 0;
                                uStack_2e0 = 0;
                                uStack_2d8 = 8;
                                uStack_2d0 = 0;
                                uStack_2c8 = 1;
                                (**0xe37508)();
                                iVar9 = (**0xe37510)(0x200,0x80);
                                if (iVar9 == 0) {
                                    (**0xe37518)(0x80,0x200);
                                }
                                else {
                                    (**0xe37450)(iVar9,&uStack_400,0x200);
                                    uStack_190 = 1;
                                    LOCK();
                                    iVar2 = *arg_50h;
                                    *arg_50h = *arg_50h + 1;
                                    UNLOCK();
                                    iStack_188 = iVar9;
                                    if (*arg_50h != 0 && SCARRY8(iVar2,1) == *arg_50h < 0) {
                                        LOCK();
                                        iVar9 = *in_stack_00000050;
                                        *in_stack_00000050 = *in_stack_00000050 + 1;
                                        UNLOCK();
                                        if (*in_stack_00000050 != 0 && SCARRY8(iVar9,1) == *in_stack_00000050 < 0) {
                                            iStack_4e8 = arg_50h;
                                            piStack_4e0 = in_stack_00000050;
                                            LOCK();
                                            iVar9 = *arg_170h;
                                            *arg_170h = *arg_170h + 1;
                                            UNLOCK();
                                            if (*arg_170h != 0 && SCARRY8(iVar9,1) == *arg_170h < 0) {
    //WARNING: Could not recover jumptable at 0x006bcd7b. Too many branches
    //WARNING: Treating indirect jump as call
    //switch table (6 cases) at 0x37d2dc
                                                (*(*0x37d2e0 + 0x37d2dc))();
                                                return;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else {
        uStack_400 = arg_60h + 0x20;
        uStack_3f8 = puVar5;
        (**0xe37860)(0x37d4ea,0x2b,&uStack_400,0xdcb160,0xdcb250);
    }
code_r0x006bd86f:
    //WARNING: Does not return
    pcVar4 = invalidInstructionException();
    (*pcVar4)();
}

