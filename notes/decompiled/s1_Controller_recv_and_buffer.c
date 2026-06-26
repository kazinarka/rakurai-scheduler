
void sym.rakurai_scheduler::scheduler_1::controller::Controller_R_S_::receive_and_buffer_transactions::h506400a828bfa1e2
               (int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    code *pcVar2;
    int64_t iVar3;
    uint uVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *puVar7;
    ulong uVar8;
    ulong *puVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong *puVar13;
    int64_t iVar14;
    ulong uVar15;
    int64_t iVar16;
    uchar auVar17 [16];
    int64_t iStack_820;
    uint uStack_7d0;
    uint uStack_7cc;
    uint uStack_7c8;
    uint uStack_7c4;
    int64_t iStack_7c0;
    int64_t iStack_7b8;
    int64_t iStack_7b0;
    int64_t iStack_7a8;
    ulong uStack_7a0;
    uint uStack_798;
    uint uStack_794;
    uint uStack_790;
    uint uStack_78c;
    uint uStack_788;
    uint uStack_784;
    uint uStack_780;
    uint uStack_77c;
    int64_t iStack_778;
    int64_t iStack_770;
    ulong *puStack_768;
    int64_t iStack_760;
    uchar auStack_758 [12];
    uint uStack_748;
    uint uStack_744;
    uint uStack_740;
    uint uStack_73c;
    int64_t iStack_738;
    ulong uStack_728;
    ulong uStack_720;
    ulong uStack_718;
    ulong uStack_710;
    uint uStack_708;
    uint uStack_704;
    uint uStack_700;
    uint uStack_6fc;
    uint uStack_6f8;
    uint uStack_6f4;
    uint uStack_6f0;
    uint uStack_6ec;
    uint uStack_6e8;
    uint uStack_6e4;
    uint uStack_6e0;
    uint uStack_6dc;
    int iStack_6d8;
    uint uStack_6d4;
    uint uStack_6d0;
    uint uStack_6cc;
    uint uStack_6c8;
    uint uStack_6c4;
    uint uStack_6c0;
    uint uStack_6bc;
    uint uStack_6b8;
    uint uStack_6b4;
    uint uStack_6b0;
    uint uStack_6ac;
    uint uStack_6a8;
    uint uStack_6a4;
    uint uStack_6a0;
    uint uStack_69c;
    int64_t iStack_698;
    int64_t iStack_690;
    int64_t iStack_688;
    ulong uStack_680;
    uint uStack_678;
    uint uStack_674;
    uint uStack_670;
    uint uStack_66c;
    uint uStack_668;
    uint uStack_664;
    uint uStack_660;
    uint uStack_65c;
    ulong uStack_658;
    ulong uStack_650;
    ulong uStack_648;
    ulong uStack_640;
    uchar auStack_638 [512];
    ulong uStack_438;
    int64_t iStack_430;
    ulong *puStack_428;
    uint uStack_420;
    uint uStack_41c;
    ulong *apuStack_230 [2];
    int64_t iStack_220;
    ulong *puStack_218;
    
    //rakurai_scheduler::scheduler_1::controller::Controller<R,S>::receive_and_buffer_transactions::h506400a828bfa1e2
    auStack_758 = (**0xe38230)();
    if (arg4 == 0) {
        sym.crossbeam_channel::channel::Receiver_T_::try_recv::he0abffa4718d9e29(&iStack_7b8,arg2 + 0x2c0);
        iVar1 = iStack_7b0;
        iVar16 = iStack_7b8;
        if (iStack_7b8 == -0x8000000000000000) {
            if (iStack_7b0 != '\0') {
                uVar8 = 0x1e;
                uVar15 = 0x37d3b1;
                goto code_r0x006ac1c6;
            }
            iStack_820 = 0;
            iVar5 = 0;
        }
        else {
            if (iStack_7a8 == 0) {
                iStack_820 = 0;
                iVar5 = 0;
            }
            else {
                iVar12 = iStack_7a8 * 0x2a0 + iStack_7b0;
                iStack_820 = 0;
                iVar5 = 0;
                iVar10 = iStack_7b0;
                do {
                    if (*(iVar10 + 0x210) == 2) {
                        (**0xe37440)(0x37d37b,0x1a,0xdcaeb0);
code_r0x006aca9e:
    //WARNING: Does not return
                        pcVar2 = invalidInstructionException();
                        (*pcVar2)();
                    }
                    sym.__solana_runtime_transaction::runtime_transaction::RuntimeTransaction_T__as_core::clone::Clone_::clone::h5ba4e1784108ccce__clone_llvm2028329540595395077_
                              (&iStack_6d8,iVar10 + 0xa0);
                    (**0xe38598)(&uStack_438,arg2 + 0x868,&iStack_6d8,*(iVar10 + 0x80),*(iVar10 + 0x88),
                                 *(iVar10 + 0x90),*(iVar10 + 0x98));
                    puVar9 = puStack_428;
                    iVar3 = iStack_430;
                    iVar11 = CONCAT44(uStack_41c,uStack_420);
                    if ((uStack_438 & iStack_430 != -0x8000000000000000) == 0) {
                        if (iStack_430 != -0x8000000000000000) {
                            if (iVar11 != 0) {
                                puVar13 = puStack_428 + 1;
                                do {
                                    if (puVar13[-1] != 0) {
                                        (**0xe37488)(*puVar13,puVar13[-1],1);
                                    }
                                    puVar13 = puVar13 + 3;
                                    iVar11 = iVar11 + -1;
                                } while (iVar11 != 0);
                            }
                            goto code_r0x006ac990;
                        }
                    }
                    else {
                        iVar14 = iVar11 * 0x18;
                        puStack_218 = puStack_428 + iVar11 * 3;
                        apuStack_230[0] = puStack_428;
                        iStack_220 = iStack_430;
                        if (iVar11 != 0) {
                            puVar13 = puStack_428;
                            if (*(arg2 + 0x7b0) == 3) {
                                iVar11 = 0;
                                do {
                                    if (*(puVar9 + iVar11) != 0) {
                                        (**0xe37488)(*(puVar9 + iVar11 + 8),*(puVar9 + iVar11),1);
                                    }
                                    iStack_820 = iStack_820 + 1;
                                    iVar11 = iVar11 + 0x18;
                                } while (iVar14 != iVar11);
                            }
                            else {
                                do {
                                    puStack_428 = puVar13[2];
                                    uStack_438 = *puVar13;
                                    iStack_430 = puVar13[1];
                                    uStack_420 = 2;
                                    sym.crossbeam_channel::channel::Sender_T_::try_send::h3ecb456130ff71f4
                                              (&iStack_6d8,arg2 + 0x7b0,&uStack_438);
                                    if ((iStack_6d8 != 2) && (CONCAT44(uStack_6cc,uStack_6d0) != 0)) {
                                        (**0xe37488)(CONCAT44(uStack_6c4,uStack_6c8),CONCAT44(uStack_6cc,uStack_6d0)
                                                     ,1);
                                    }
                                    iStack_820 = iStack_820 + 1;
                                    iVar14 = iVar14 + -0x18;
                                    puVar13 = puVar13 + 3;
                                } while (iVar14 != 0);
                            }
                        }
code_r0x006ac990:
                        if (iVar3 != 0) {
                            (**0xe37488)(puVar9,iVar3 * 0x18,8);
                        }
                    }
                    iVar5 = iVar5 + 1;
                    iVar10 = iVar10 + 0x2a0;
                } while (iVar10 != iVar12);
            }
            sym.__alloc::vec::Vec_T_A__as_core::ops::drop::Drop_::drop::ha96915e176ef54fc(&iStack_7b8);
            if (iVar16 != 0) {
                (**0xe37488)(iVar1,iVar16 * 0x2a0,8);
            }
        }
    }
    else {
        iStack_778 = arg2 + 0x2d0;
        sym.crossbeam_channel::channel::Receiver_T_::try_recv::h62c7d441648c2677(&uStack_7d0);
        if (CONCAT44(uStack_7cc,uStack_7d0) == -0x8000000000000000) {
            iStack_820 = 0;
            iVar5 = 0;
        }
        else {
            iVar5 = 0;
            iStack_820 = 0;
            do {
                uStack_748 = uStack_7d0;
                uStack_744 = uStack_7cc;
                uStack_740 = uStack_7c8;
                uStack_73c = uStack_7c4;
                iStack_738 = iStack_7c0;
                iStack_770 = iVar5;
                if (iStack_7c0 == 0) {
                    iVar16 = 0;
                    iVar5 = 0;
                }
                else {
                    puVar9 = CONCAT44(uStack_7c4,uStack_7c8);
                    puStack_768 = puVar9 + iStack_7c0 * 0x44;
                    iVar16 = 0;
                    iVar5 = 0;
                    do {
                        if (*(puVar9 + 0x32) == 2) {
                            (**0xe37440)(0x37d37b,0x1a,0xdcaee0);
                            goto code_r0x006aca9e;
                        }
                        sym.__solana_runtime_transaction::runtime_transaction::RuntimeTransaction_T__as_core::clone::Clone_::clone::h5ba4e1784108ccce__clone_llvm2028329540595395077_
                                  (apuStack_230,puVar9 + 4);
                        if (*(arg2 + 0x868) <= *(arg2 + 0x880)) {
                            (**0xe37588)(obj.anon.06228222837a0ccab5ae122175c0ba3f.125.llvm.10741653363056930047,0x5e,
                                         obj.anon.06228222837a0ccab5ae122175c0ba3f.126.llvm.10741653363056930047);
                            goto code_r0x006aca9e;
                        }
                        uVar8 = *puVar9;
                        uVar15 = puVar9[1];
                        uStack_6e8 = *(puVar9 + 2);
                        uStack_6e4 = *(puVar9 + 0x14);
                        uStack_6e0 = *(puVar9 + 3);
                        uStack_6dc = *(puVar9 + 0x1c);
                        iStack_760 = puVar9[2];
                        puVar13 = *(arg2 + 0x888);
                        (**0xe37450)(&uStack_438,apuStack_230,0x200);
                        puVar7 = **0xe383f8;
                        if (puVar7 == NULL) {
                            puVar7 = (**0xe38410)(*0xe383f8);
                        }
                        uVar6 = *puVar7;
                        iVar1 = puVar7[1];
                        iVar10 = **0xe38400;
                        if (iVar10 == 0) {
                            iVar10 = (**0xe38418)(*0xe38400);
                        }
                        uVar6 = (**(iVar1 + 0x18))(uVar6);
                        (**0xe38408)(&uStack_798,iVar10,iVar10 + 0x20,uVar6);
                        uStack_728 = _obj.anon.78e7deb60e98e8b546829df530f2b378.3.llvm.1348778015432205871;
                        uStack_720 = *0xdca7d8;
                        uStack_718 = *0xdca7e0;
                        uStack_710 = *0xdca7e8;
                        uStack_708 = uStack_798;
                        uStack_704 = uStack_794;
                        uStack_700 = uStack_790;
                        uStack_6fc = uStack_78c;
                        uStack_6f8 = uStack_788;
                        uStack_6f4 = uStack_784;
                        uStack_6f0 = uStack_780;
                        uStack_6ec = uStack_77c;
                        puVar7 = **0xe383f8;
                        if (puVar7 == NULL) {
                            puVar7 = (**0xe38410)(*0xe383f8);
                        }
                        uVar6 = *puVar7;
                        iVar1 = puVar7[1];
                        iVar10 = **0xe38400;
                        if (iVar10 == 0) {
                            iVar10 = (**0xe38418)(*0xe38400);
                        }
                        uVar6 = (**(iVar1 + 0x18))(uVar6);
                        (**0xe38408)(&uStack_798,iVar10,iVar10 + 0x20,uVar6);
                        iStack_7a8 = *0xdca7e0;
                        uStack_7a0 = *0xdca7e8;
                        iStack_7b8 = _obj.anon.78e7deb60e98e8b546829df530f2b378.3.llvm.1348778015432205871;
                        iStack_7b0 = *0xdca7d8;
                        iStack_698 = _obj.anon.78e7deb60e98e8b546829df530f2b378.3.llvm.1348778015432205871;
                        iStack_690 = *0xdca7d8;
                        iStack_688 = *0xdca7e0;
                        uStack_680 = *0xdca7e8;
                        uStack_678 = uStack_798;
                        uStack_674 = uStack_794;
                        uStack_670 = uStack_790;
                        uStack_66c = uStack_78c;
                        uStack_668 = uStack_788;
                        uStack_664 = uStack_784;
                        uStack_660 = uStack_780;
                        uStack_65c = uStack_77c;
                        (**0xe37450)(auStack_638,apuStack_230,0x200);
                        uStack_648 = CONCAT44(uStack_6e4,uStack_6e8);
                        uStack_640 = CONCAT44(uStack_6dc,uStack_6e0);
                        iStack_6d8 = uStack_728;
                        uStack_6d4 = uStack_728._4_4_;
                        uStack_6d0 = uStack_720;
                        uStack_6cc = uStack_720._4_4_;
                        uStack_6c8 = uStack_718;
                        uStack_6c4 = uStack_718._4_4_;
                        uStack_6c0 = uStack_710;
                        uStack_6bc = uStack_710._4_4_;
                        uStack_6b8 = uStack_708;
                        uStack_6b4 = uStack_704;
                        uStack_6b0 = uStack_700;
                        uStack_6ac = uStack_6fc;
                        uStack_6a8 = uStack_6f8;
                        uStack_6a4 = uStack_6f4;
                        uStack_6a0 = uStack_6f0;
                        uStack_69c = uStack_6ec;
                        uStack_658 = uVar8;
                        uStack_650 = uVar15;
                        sym.slab::VacantEntry_T_::insert::hc513b526d1cf3314(arg2 + 0x868,puVar13,&iStack_6d8);
                        uStack_438 = 1;
                        iStack_430 = iStack_760;
                        puStack_428 = puVar13;
                        sym.__rakurai_scheduler::rakurai_transaction_state_container::RakuraiTransactionContainer_Tx__as_rakurai_scheduler::rakurai_transaction_state_container::RakuraiStateContainer_Tx__::push_ids_into_queue::h43cddeec156d36f5
                                  (&iStack_6d8,arg2 + 0x868,&uStack_438);
                        iVar1 = CONCAT44(uStack_6cc,uStack_6d0);
                        puVar13 = CONCAT44(uStack_6c4,uStack_6c8);
                        iVar10 = CONCAT44(uStack_6bc,uStack_6c0);
                        if (CONCAT44(uStack_6d4,iStack_6d8) == 0 || iVar1 == -0x8000000000000000) {
                            if (iVar1 != -0x8000000000000000) {
                                if (iVar10 != 0) {
                                    puVar7 = puVar13 + 1;
                                    do {
                                        if (puVar7[-1] != 0) {
                                            (**0xe37488)(*puVar7,puVar7[-1],1);
                                        }
                                        puVar7 = puVar7 + 3;
                                        iVar10 = iVar10 + -1;
                                    } while (iVar10 != 0);
                                }
                                goto code_r0x006ac6c0;
                            }
                        }
                        else {
                            iVar12 = iVar10 * 0x18;
                            puStack_218 = puVar13 + iVar10 * 3;
                            apuStack_230[0] = puVar13;
                            iStack_220 = iVar1;
                            if (iVar10 != 0) {
                                puVar7 = puVar13;
                                if (*(arg2 + 0x7b0) == 3) {
                                    iVar10 = 0;
                                    do {
                                        if (*(puVar13 + iVar10) != 0) {
                                            (**0xe37488)(*(puVar13 + iVar10 + 8),*(puVar13 + iVar10),1);
                                        }
                                        iVar16 = iVar16 + 1;
                                        iVar10 = iVar10 + 0x18;
                                    } while (iVar12 != iVar10);
                                }
                                else {
                                    do {
                                        puStack_428 = puVar7[2];
                                        uStack_438 = *puVar7;
                                        iStack_430 = puVar7[1];
                                        uStack_420 = 2;
                                        sym.crossbeam_channel::channel::Sender_T_::try_send::h3ecb456130ff71f4
                                                  (&iStack_6d8,arg2 + 0x7b0,&uStack_438);
                                        if ((iStack_6d8 != 2) && (CONCAT44(uStack_6cc,uStack_6d0) != 0)) {
                                            (**0xe37488)(CONCAT44(uStack_6c4,uStack_6c8),
                                                         CONCAT44(uStack_6cc,uStack_6d0),1);
                                        }
                                        iVar16 = iVar16 + 1;
                                        iVar12 = iVar12 + -0x18;
                                        puVar7 = puVar7 + 3;
                                    } while (iVar12 != 0);
                                }
                            }
code_r0x006ac6c0:
                            if (iVar1 != 0) {
                                (**0xe37488)(puVar13,iVar1 * 0x18,8);
                            }
                        }
                        iVar5 = iVar5 + 1;
                        puVar9 = puVar9 + 0x44;
                    } while (puVar9 != puStack_768);
                }
                iStack_820 = iStack_820 + iVar16;
                iVar5 = iStack_770 + iVar5;
                sym._ZN4core3ptr275drop_in_place_LT_solana_core..banking_stage..SchedulerObj_LT_solana_runtime_transaction..runtime_transaction..RuntimeTransaction_LT_agave_transaction_view..resolved_transaction_view..ResolvedTransactionView_LT_alloc..sync..Arc_LT_alloc..vec..Vec_LT_u8_GT__GT__GT__GT__GT__GT_17h1b476adc5d905fb6E_1
                          (&uStack_748);
                sym.crossbeam_channel::channel::Receiver_T_::try_recv::h62c7d441648c2677(&uStack_7d0,iStack_778);
            } while (CONCAT44(uStack_7cc,uStack_7d0) != -0x8000000000000000);
        }
        if (uStack_7c8 != '\0') {
            uVar8 = 0x2c;
            uVar15 = 0x37d3cf;
code_r0x006ac1c6:
            (**0xe38248)(auStack_758);
            *(arg1 + 8) = uVar15;
            *(arg1 + 0x10) = uVar8;
            uVar4 = 1;
            goto code_r0x006aca3b;
        }
    }
    auVar17 = (**0xe38248)(auStack_758);
    *(arg3 + 0x38) = *(arg3 + 0x38) + auVar17._0_8_ * 1000000 + (auVar17._8_8_ & 0xffffffff) / 1000;
    *arg3 = *arg3 + iVar5;
    *(arg3 + 8) = *(arg3 + 8) + iStack_820;
    uVar4 = 3;
code_r0x006aca3b:
    *arg1 = uVar4;
    return;
}

