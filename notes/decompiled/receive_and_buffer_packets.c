
ulong * sym.__rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer_as_rakurai_scheduler::scheduler_receiver::RakuraiReceiveAndBuffer_::receive_and_buffer_packets::h82d0502ca142d20d
                  (int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,ulong noname_4,int64_t arg5)

{
    int64_t iVar1;
    int *piVar2;
    uint *puVar3;
    int iVar4;
    code *pcVar5;
    int64_t *piVar6;
    uint32_t uVar7;
    uchar auVar8 [12];
    uint8_t uVar9;
    char cVar10;
    int64_t iVar11;
    int64_t iVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uint64_t *puVar15;
    int64_t *piVar16;
    ulong uVar17;
    uint64_t uVar18;
    int *piVar19;
    uint64_t uVar20;
    ulong *puVar21;
    int *piVar22;
    int64_t iVar23;
    int64_t iVar24;
    int64_t iVar25;
    int *piVar26;
    bool bVar27;
    uchar auVar28 [12];
    int64_t iStack_2f0;
    int64_t iStack_2b0;
    ulong uStack_2a8;
    ulong uStack_2a0;
    int64_t *piStack_298;
    ulong uStack_290;
    ulong uStack_288;
    uint uStack_280;
    ulong uStack_268;
    uint uStack_260;
    uint uStack_25c;
    ulong uStack_258;
    ulong uStack_250;
    int64_t iStack_248;
    ulong uStack_240;
    int64_t iStack_238;
    int64_t iStack_230;
    int64_t iStack_228;
    int64_t iStack_220;
    int64_t iStack_218;
    int64_t iStack_210;
    int64_t iStack_1e0;
    ulong *puStack_1d8;
    int64_t iStack_1d0;
    int64_t iStack_1c8;
    uint64_t uStack_1c0;
    int64_t iStack_1b8;
    int64_t *piStack_1b0;
    uint uStack_1a8;
    uint uStack_1a4;
    ulong uStack_1a0;
    int64_t iStack_198;
    uint64_t uStack_190;
    int *piStack_188;
    int64_t iStack_180;
    uint64_t uStack_178;
    int64_t iStack_170;
    uint64_t uStack_168;
    uint64_t uStack_160;
    uchar auStack_158 [12];
    uint uStack_14c;
    ulong uStack_148;
    uint uStack_140;
    int64_t iStack_130;
    int *piStack_128;
    int64_t iStack_120;
    ulong uStack_118;
    uint64_t uStack_110;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    
    //_<rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer as
    //rakurai_scheduler::scheduler_receiver::RakuraiReceiveAndBuffer>::receive_and_buffer_packets::h82d0502ca142d20d
    if (arg5 == 0) {
        *(arg1 + 0x60) = 0;
        *(arg1 + 0x68) = 0;
        *(arg1 + 0x50) = 0;
        *(arg1 + 0x58) = 0;
        *(arg1 + 0x40) = 0;
        *(arg1 + 0x48) = 0;
        *(arg1 + 0x30) = 0;
        *(arg1 + 0x38) = 0;
        *(arg1 + 0x20) = 0;
        *(arg1 + 0x28) = 0;
        *(arg1 + 0x10) = 0;
        *(arg1 + 0x18) = 0;
        *arg1 = 0;
        *(arg1 + 8) = 0;
        return arg1;
    }
    *(arg2 + 0xb8) = 0;
    pcVar5 = *0xe38230;
    puStack_1d8 = arg1;
    auVar28 = (**0xe38230)();
    iStack_2b0 = auVar28._0_8_;
    uStack_2a8 = CONCAT44(uStack_2a8._4_4_,auVar28._8_4_);
    iVar4 = *arg5;
    auStack_158 = (*pcVar5)();
    uVar7 = 100000000;
    if (iVar4 - 2U < 2) {
code_r0x005d332c:
        bVar27 = true;
    }
    else {
        if (iVar4 == 0) {
            uVar7 = 100000000;
            if (*(arg3 + 0x58) != 0) {
                uVar7 = 0;
            }
            goto code_r0x005d332c;
        }
        bVar27 = false;
    }
    iVar1 = arg2 + 0x58;
    iVar23 = *arg3;
    iVar25 = *(arg3 + 0x18);
    sym.crossbeam_channel::channel::Receiver_T_::recv_timeout::h7dfe8af8caf99725(&uStack_268,arg2 + 0x38,0,uVar7);
    if (uStack_268 == '\x01') {
        uVar20 = 0;
    }
    else {
        piVar6 = CONCAT44(uStack_25c,uStack_260);
        piStack_298 = piVar6;
        uStack_250 = (**0xe38238)(arg2);
        iVar12 = piVar6[4];
        if (iVar12 == 0) {
            uVar20 = 0;
        }
        else {
            piVar16 = piVar6[3] + 0x18;
            uVar20 = 0;
            do {
                if ((piVar16[-3] == 0) || (iVar11 = 1, piVar16[-3] == 1)) {
                    iVar11 = *piVar16;
                }
                uVar20 = uVar20 + iVar11;
                piVar16 = piVar16 + 0xd;
                iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
        }
        sym.__alloc::vec::Vec_T_A__as_core::clone::Clone_::clone::h8ff231de969a655f(&iStack_120,piVar6 + 2);
        uStack_268 = iStack_120;
        uStack_260 = uStack_118;
        uStack_25c = uStack_118._4_4_;
        uStack_258 = uStack_110;
        uVar14 = *(arg2 + 0x58);
        uVar13 = *(arg2 + 0x70);
        if (uVar13 == uVar14) {
            (**0xe37c98)(iVar1);
            uVar14 = *(arg2 + 0x58);
            uVar13 = *(arg2 + 0x70);
        }
        *(arg2 + 0x70) = uVar13 + 1;
        uVar13 = uVar13 + *(arg2 + 0x68);
        uVar18 = 0;
        if (uVar14 <= uVar13) {
            uVar18 = uVar14;
        }
        iVar12 = *(arg2 + 0x60);
        iVar11 = (uVar13 - uVar18) * 0x20;
        puVar3 = iVar12 + 0x10 + iVar11;
        *puVar3 = uStack_258;
        puVar3[1] = uStack_258._4_4_;
        puVar3[2] = uStack_250;
        puVar3[3] = uStack_250._4_4_;
        puVar3 = iVar12 + iVar11;
        *puVar3 = uStack_268;
        puVar3[1] = uStack_268._4_4_;
        puVar3[2] = uStack_260;
        puVar3[3] = uStack_25c;
        LOCK();
        *piStack_298 = *piStack_298 + -1;
        UNLOCK();
        if (*piStack_298 == 0) {
            (**0xe38240)(&piStack_298);
        }
    }
    while( true ) {
        sym.crossbeam_channel::channel::Receiver_T_::try_recv::h1472a72b9996a9ef(&piStack_298,arg2 + 0x38);
        piVar6 = uStack_290;
        if (piStack_298 != '\0') break;
        piStack_1b0 = uStack_290;
        iVar11 = (**0xe38238)(arg2);
        iVar12 = piVar6[4];
        if (iVar12 == 0) {
            iVar24 = 0;
        }
        else {
            piVar16 = piVar6[3] + 0x18;
            iVar24 = 0;
            do {
                while (piVar16[-3] == 2) {
                    iVar24 = iVar24 + 1;
                    piVar16 = piVar16 + 0xd;
                    iVar12 = iVar12 + -1;
                    if (iVar12 == 0) goto code_r0x005d3543;
                }
                iVar24 = iVar24 + *piVar16;
                piVar16 = piVar16 + 0xd;
                iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
        }
code_r0x005d3543:
        sym.__alloc::vec::Vec_T_A__as_core::clone::Clone_::clone::h8ff231de969a655f(&iStack_120,piVar6 + 2);
        uStack_268 = iStack_120;
        uStack_260 = uStack_118;
        uStack_25c = uStack_118._4_4_;
        uStack_258 = uStack_110;
        uVar14 = *(arg2 + 0x58);
        uVar13 = *(arg2 + 0x70);
        uStack_250 = iVar11;
        if (uVar13 == uVar14) {
            (**0xe37c98)(iVar1);
            uVar14 = *(arg2 + 0x58);
            uVar13 = *(arg2 + 0x70);
        }
        *(arg2 + 0x70) = uVar13 + 1;
        uVar13 = uVar13 + *(arg2 + 0x68);
        uVar18 = 0;
        if (uVar14 <= uVar13) {
            uVar18 = uVar14;
        }
        iVar12 = *(arg2 + 0x60);
        iVar11 = (uVar13 - uVar18) * 0x20;
        puVar3 = iVar12 + 0x10 + iVar11;
        *puVar3 = uStack_258;
        puVar3[1] = uStack_258._4_4_;
        puVar3[2] = uStack_250;
        puVar3[3] = uStack_250._4_4_;
        puVar3 = iVar12 + iVar11;
        *puVar3 = uStack_268;
        puVar3[1] = uStack_268._4_4_;
        puVar3[2] = uStack_260;
        puVar3[3] = uStack_25c;
        LOCK();
        *piStack_1b0 = *piStack_1b0 + -1;
        UNLOCK();
        if (*piStack_1b0 == 0) {
            (**0xe38240)(&piStack_1b0);
        }
        uVar20 = uVar20 + iVar24;
        if (iVar23 - iVar25 < uVar20) break;
        auVar28 = (**0xe38248)(auStack_158);
        if ((auVar28._0_8_ != 0) || (uVar7 < auVar28._8_4_)) break;
    }
    auVar28 = (**0xe38248)(&iStack_2b0);
    iStack_198 = auVar28._0_8_;
    if (bVar27) {
        (**0xe38250)(&uStack_98,arg2,arg3,arg4,arg5);
        *(arg2 + 0xb8) = uStack_38;
        puStack_1d8[0xd] = uStack_38;
        puStack_1d8[0xb] = uStack_48;
        puStack_1d8[0xc] = uStack_40;
        puStack_1d8[9] = uStack_58;
        puStack_1d8[10] = uStack_50;
        puStack_1d8[7] = uStack_68;
        puStack_1d8[8] = uStack_60;
        puStack_1d8[5] = uStack_78;
        puStack_1d8[6] = uStack_70;
        puStack_1d8[3] = uStack_88;
        puStack_1d8[4] = uStack_80;
        puStack_1d8[1] = uStack_98;
        puStack_1d8[2] = uStack_90;
        goto code_r0x005d40cf;
    }
    uStack_190 = uVar20;
    sym.__alloc::collections::vec_deque::VecDeque_T_A__as_core::clone::Clone_::clone::h4fc155dcc443b983
              (&uStack_178,iVar1);
    pcVar5 = *0xe37488;
    if (*(arg2 + 0x28) != 3) {
        if (uStack_160 == 0) {
            iVar23 = 0;
            uVar20 = 0;
code_r0x005d38da:
            iVar25 = 0;
        }
        else {
            uVar20 = 0;
            if (uStack_178 <= uStack_168) {
                uVar20 = uStack_178;
            }
            iVar23 = uStack_168 - uVar20;
            iVar25 = uStack_160 - (uStack_178 - iVar23);
            uVar20 = uStack_178;
            if (uStack_160 < uStack_178 - iVar23 || iVar25 == 0) {
                uVar20 = iVar23 + uStack_160;
                goto code_r0x005d38da;
            }
        }
        iStack_1c8 = iVar23 * 0x20 + iStack_170;
        iStack_1d0 = uVar20 * 0x20 + iStack_170;
        iStack_1e0 = iStack_170;
        uStack_1c0 = uStack_160;
        iVar23 = iVar25 * 0x20 + iStack_170;
        while ((iVar25 = iStack_1e0, iVar12 = iStack_1c8, iVar11 = iVar23, iStack_1c8 != iStack_1d0 ||
               (bVar27 = iStack_1e0 != iVar23, iStack_1e0 = iStack_1d0, iVar12 = iVar25, iVar11 = iStack_1d0,
               iStack_1d0 = iVar23, bVar27))) {
            iVar23 = iVar11;
            iStack_1c8 = iVar12 + 0x20;
            piStack_188 = *(iVar12 + 8) + *(iVar12 + 0x10) * 0x1a;
            piVar22 = *(iVar12 + 8);
            iStack_180 = iVar23;
            if (*(iVar12 + 0x10) != 0) {
                do {
                    piVar2 = piVar22 + 0x1a;
                    if (*piVar22 == 2) {
                        piVar19 = piVar22 + 2;
                        iStack_2f0 = 1;
                        piVar26 = piVar2;
code_r0x005d3a61:
                        iVar23 = 0x510;
                        if (iStack_2f0 != 0) {
                            iVar23 = 0x60;
                        }
                        do {
                            while (iStack_130 = iStack_2f0, piStack_128 = piVar19, iStack_2f0 == '\0') {
                                uVar20 = *(piVar19 + 0x134);
                                uStack_268 = -0x7ffffffffffffffa;
                                if (uVar20 < 0x4d1 && (*(piVar19 + 0x13b) & 1) == 0) {
                                    sym.core::ptr::drop_in_place_bincode::error::ErrorKind_::h2438a9c1b88e0b80__clone_llvm8668054646338321894_
                                              (&uStack_268);
                                    uVar17 = 0x4d0;
                                    piVar22 = piVar19;
                                    goto code_r0x005d3bd5;
                                }
                                uStack_268 = -0x7ffffffffffffffa;
                                (**0xe37508)();
                                puVar15 = (**0xe37510)(0x18,8);
                                if (puVar15 == NULL) {
                                    (**0xe37518)(8,0x18);
                                    goto code_r0x005d4056;
                                }
                                puVar15[2] = uStack_258;
                                *puVar15 = uStack_268;
                                *(puVar15 + 4) = uStack_268._4_4_;
                                *(puVar15 + 1) = uStack_260;
                                *(puVar15 + 0xc) = uStack_25c;
code_r0x005d3ba7:
                                iStack_120 = -0x8000000000000000;
                                uStack_118 = puVar15;
code_r0x005d3bf3:
                                (**0xe38258)(&piStack_1b0,&iStack_130);
                                uStack_288 = uStack_1a0;
                                piStack_298 = piStack_1b0;
                                uStack_290 = CONCAT44(uStack_1a4,uStack_1a8);
                                uStack_280 = 1;
                                sym.crossbeam_channel::channel::Sender_T_::try_send::h3ecb456130ff71f4
                                          (&uStack_268,arg2 + 0x28,&piStack_298);
                                if ((uStack_268 != 2) && (CONCAT44(uStack_25c,uStack_260) != 0)) {
                                    (*pcVar5)(uStack_258,CONCAT44(uStack_25c,uStack_260),1);
                                }
                                puVar15 = uStack_118;
                                uVar20 = *uStack_118;
                                uVar14 = uVar20 ^ 0x8000000000000000;
                                if (-1 < uVar20) {
                                    uVar14 = 8;
                                }
                                if (6 < uVar14 - 1) {
                                    if (uVar14 == 0) {
                                        uVar20 = uStack_118[1];
                                        if ((uVar20 & 3) == 1) {
                                            iStack_1b8 = uVar20 - 1;
                                            uVar17 = *(uVar20 - 1);
                                            puVar21 = *(uVar20 + 7);
                                            if (*puVar21 != NULL) {
                                                (**puVar21)(uVar17);
                                            }
                                            if (puVar21[1] != 0) {
                                                (*pcVar5)(uVar17,puVar21[1],puVar21[2]);
                                            }
                                            (*pcVar5)(iStack_1b8,0x18,8);
                                        }
                                    }
                                    else if (uVar20 != 0) {
                                        (*pcVar5)(uStack_118[1],uVar20,1);
                                    }
                                }
                                (*pcVar5)(puVar15,0x18,8);
                                piVar19 = piVar19 + iVar23;
                                if (piVar19 == piVar26) goto code_r0x005d39c0;
                            }
                            if (((*(piVar19 + 0xf) & 1) != 0) || (*(piVar19 + 2) == NULL)) {
                                (**0xe37508)();
                                puVar15 = (**0xe37510)(0x18,8);
                                if (puVar15 == NULL) {
                                    (**0xe37518)(8,0x18);
                                    goto code_r0x005d4056;
                                }
                                *puVar15 = 0x8000000000000006;
                                goto code_r0x005d3ba7;
                            }
                            uVar20 = *(piVar19 + 4);
                            uVar17 = *(piVar19 + 8);
                            piVar22 = *(piVar19 + 2);
code_r0x005d3bd5:
                            sym.bincode::internal::deserialize_seed::he8aff1c3c14ccc72
                                      (&iStack_120,piVar22,uVar20,uVar17);
                            if (iStack_120 == -0x8000000000000000) goto code_r0x005d3bf3;
                            (**0xe37450)(&uStack_268,&iStack_120,0x88);
                            if (uStack_258 != 0) {
                                iStack_2b0 = 0;
                                uStack_2a8 = 1;
                                uStack_2a0 = 0;
                                uStack_288 = 0x60000020;
                                piStack_298 = &iStack_2b0;
                                uStack_290 = 0xdc7798;
                                cVar10 = (**0xe38260)(CONCAT44(uStack_25c,uStack_260),&piStack_298);
                                if (cVar10 != '\0') {
                                    (**0xe37860)(0x379f60,0x37,auStack_158,0xdc7820,0xdc77c8);
code_r0x005d4056:
    //WARNING: Does not return
                                    pcVar5 = invalidInstructionException();
                                    (*pcVar5)();
                                }
                                auStack_158._0_8_ = iStack_2b0;
                                auStack_158._8_4_ = uStack_2a8;
                                uStack_14c = uStack_2a8._4_4_;
                                uStack_148 = uStack_2a0;
                                uStack_140 = 1;
                                sym.crossbeam_channel::channel::Sender_T_::try_send::h3ecb456130ff71f4
                                          (&piStack_298,arg2 + 0x28,auStack_158);
                                auVar8._8_4_ = auStack_158._8_4_;
                                auVar8._0_8_ = auStack_158._0_8_;
                                if ((piStack_298 != 2) && (auStack_158 = auVar8, uStack_290 != NULL)) {
                                    (*pcVar5)(uStack_288,uStack_290,1);
                                }
                            }
                            if (uStack_268 != 0) {
                                (*pcVar5)(CONCAT44(uStack_25c,uStack_260),uStack_268 << 6,1);
                            }
                            if (uStack_250 == -0x8000000000000000) {
                                if (iStack_248 != 0) {
                                    (*pcVar5)(uStack_240,iStack_248 << 5,1);
                                }
                                iVar25 = iStack_228;
                                if (iStack_220 != 0) {
                                    puVar21 = iStack_228 + 0x20;
                                    iVar12 = iStack_220;
                                    do {
                                        if (puVar21[-4] != 0) {
                                            (*pcVar5)(puVar21[-3],puVar21[-4],1);
                                        }
                                        if (puVar21[-1] != 0) {
                                            (*pcVar5)(*puVar21,puVar21[-1],1);
                                        }
                                        puVar21 = puVar21 + 7;
                                        iVar12 = iVar12 + -1;
                                    } while (iVar12 != 0);
                                }
                                if (iStack_230 != 0) {
                                    iVar12 = iStack_230 * 0x38;
code_r0x005d3fc0:
                                    (*pcVar5)(iVar25,iVar12,8);
                                }
                            }
                            else {
                                if (uStack_250 != 0) {
                                    (*pcVar5)(iStack_248,uStack_250 << 5,1);
                                }
                                iVar25 = iStack_230;
                                if (iStack_228 != 0) {
                                    puVar21 = iStack_230 + 0x20;
                                    iVar12 = iStack_228;
                                    do {
                                        if (puVar21[-4] != 0) {
                                            (*pcVar5)(puVar21[-3],puVar21[-4],1);
                                        }
                                        if (puVar21[-1] != 0) {
                                            (*pcVar5)(*puVar21,puVar21[-1],1);
                                        }
                                        puVar21 = puVar21 + 7;
                                        iVar12 = iVar12 + -1;
                                    } while (iVar12 != 0);
                                }
                                if (iStack_238 != 0) {
                                    (*pcVar5)(iVar25,iStack_238 * 0x38,8);
                                }
                                iVar25 = iStack_218;
                                if (iStack_210 != 0) {
                                    puVar21 = iStack_218 + 0x20;
                                    iVar12 = iStack_210;
                                    do {
                                        if (puVar21[-4] != 0) {
                                            (*pcVar5)(puVar21[-3],puVar21[-4],1);
                                        }
                                        if (puVar21[-1] != 0) {
                                            (*pcVar5)(*puVar21,puVar21[-1],1);
                                        }
                                        puVar21 = puVar21 + 10;
                                        iVar12 = iVar12 + -1;
                                    } while (iVar12 != 0);
                                }
                                if (iStack_220 != 0) {
                                    iVar12 = iStack_220 * 0x50;
                                    goto code_r0x005d3fc0;
                                }
                            }
                            piVar19 = piVar19 + iVar23;
                        } while (piVar19 != piVar26);
                    }
                    else if (*piVar22 == 1) {
                        piVar19 = *(piVar22 + 4);
                        iStack_2f0 = 1;
                        piVar26 = piVar19 + *(piVar22 + 6) * 0x18;
                        if (piVar19 != piVar19 + *(piVar22 + 6) * 0x18) goto code_r0x005d3a61;
                    }
                    else {
                        piVar19 = *(piVar22 + 4);
                        iStack_2f0 = 0;
                        piVar26 = piVar19 + *(piVar22 + 6) * 0x144;
                        if (piVar19 != piVar19 + *(piVar22 + 6) * 0x144) goto code_r0x005d3a61;
                    }
code_r0x005d39c0:
                    iVar23 = iStack_180;
                    uStack_160 = uStack_1c0;
                    piVar22 = piVar2;
                } while (piVar2 != piStack_188);
            }
        }
    }
    if (uStack_160 == 0) {
        iVar25 = 0;
        iVar23 = 0;
        uVar20 = 0;
    }
    else {
        uVar20 = 0;
        if (uStack_178 <= uStack_168) {
            uVar20 = uStack_178;
        }
        iVar23 = uStack_168 - uVar20;
        iVar25 = uStack_160 - (uStack_178 - iVar23);
        uVar20 = uStack_178;
        if (uStack_160 < uStack_178 - iVar23 || iVar25 == 0) {
            iVar25 = 0;
            uVar20 = uStack_160 + iVar23;
        }
    }
    sym.core::ptr::drop_in_place__rakurai_scheduler::scheduler_receiver::DelayPacketBatches__::h2db36b8bf7363201__clone_llvm3544922286783389764_
              (iVar23 * 0x20 + iStack_170,uVar20 - iVar23);
    sym.core::ptr::drop_in_place__rakurai_scheduler::scheduler_receiver::DelayPacketBatches__::h2db36b8bf7363201__clone_llvm3544922286783389764_
              (iStack_170,iVar25);
    if (uStack_178 != 0) {
        (**0xe37488)(iStack_170,uStack_178 << 5,8);
    }
    iVar23 = iStack_198 * 1000000;
    sym.alloc::collections::vec_deque::VecDeque_T_A_::truncate::h3513bef458dc0344(iVar1,0);
    *(arg2 + 0x68) = 0;
    sym.alloc::collections::vec_deque::VecDeque_T_A_::truncate::h394863e13e336ff7(arg2 + 0x78,0);
    *(arg2 + 0x88) = 0;
    sym.alloc::collections::vec_deque::VecDeque_T_A_::truncate::ha867a5c958de4b83(arg2 + 0x98,0);
    *(arg2 + 0xa8) = 0;
    iVar1 = *(arg2 + 0x250);
    LOCK();
    bVar27 = *(iVar1 + 0x10) == 0;
    if (bVar27) {
        *(iVar1 + 0x10) = 0x3fffffff;
    }
    UNLOCK();
    if (!bVar27) {
        (**0xe38220)(iVar1 + 0x10);
    }
    puVar15 = *0xe37c38;
    if ((**0xe37c38 & 0x7fffffffffffffff) == 0) {
        if (*(iVar1 + 0x18) == '\0') {
            uVar9 = 0;
            iVar25 = *(iVar1 + 0x38);
joined_r0x005d414c:
            if (iVar25 != 0) {
                uVar20 = *(iVar1 + 0x28);
                if (uVar20 == 0) {
                    uVar14 = 0;
                }
                else {
                    (**0xe37e48)(*(iVar1 + 0x20),0xff,uVar20 + 0x11);
                    uVar14 = (uVar20 + 1 & 0xfffffffffffffff8) - (uVar20 + 1 >> 3);
                    if (uVar20 < 8) {
                        uVar14 = uVar20;
                    }
                }
                *(iVar1 + 0x38) = 0;
                *(iVar1 + 0x30) = uVar14;
            }
            if (uVar9 != 0) goto code_r0x005d4078;
        }
code_r0x005d406b:
        if ((*puVar15 & 0x7fffffffffffffff) != 0) {
            cVar10 = (**0xe37c48)();
            if (cVar10 == '\0') {
                *(iVar1 + 0x18) = 1;
            }
        }
    }
    else {
        uVar9 = (**0xe37c48)();
        if (*(iVar1 + 0x18) == '\0') {
            uVar9 = uVar9 ^ 1;
            iVar25 = *(iVar1 + 0x38);
            goto joined_r0x005d414c;
        }
        if (uVar9 != 0) goto code_r0x005d406b;
    }
code_r0x005d4078:
    LOCK();
    piVar22 = iVar1 + 0x10;
    iVar4 = *piVar22;
    *piVar22 = *piVar22 + -0x3fffffff;
    UNLOCK();
    if (0x3fffffff < iVar4 + 0xc0000001U) {
        (**0xe37d60)(iVar1 + 0x10);
    }
    puStack_1d8[1] = uStack_190;
    puStack_1d8[2] = uStack_190;
    puStack_1d8[3] = 0;
    puStack_1d8[4] = 0;
    puStack_1d8[5] = 0;
    puStack_1d8[6] = 0;
    puStack_1d8[7] = 0;
    puStack_1d8[8] = 0;
    puStack_1d8[9] = 0;
    puStack_1d8[10] = 0;
    puStack_1d8[0xb] = 0;
    puStack_1d8[0xc] = iVar23 + auVar28._8_4_ / 1000;
    puStack_1d8[0xd] = 0;
code_r0x005d40cf:
    *puStack_1d8 = 0;
    return puStack_1d8;
}

