
//WARNING: Variable defined which should be unmapped: var_28h

void sym.rakurai_scheduler::entrypoint::run_rakurai_scheduler::__u7b__u7b_closure_u7d__u7d_::hc21d929641619cab
               (int64_t arg1)

{
    int64_t *piVar1;
    code *pcVar2;
    code *pcVar3;
    ulong *puVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong uStack_4a00;
    ulong uStack_49f8;
    ulong uStack_49f0;
    ulong uStack_4170;
    int64_t iStack_4168;
    uchar auStack_4160 [16];
    ulong uStack_4000;
    uchar auStack_3480 [16];
    uchar auStack_3470 [16];
    uchar auStack_3400 [16];
    uint uStack_3380;
    uchar uStack_337c;
    ulong uStack_3378;
    ulong uStack_3370;
    uchar auStack_3368 [16];
    ulong uStack_3358;
    ulong uStack_3350;
    uchar uStack_3348;
    ulong uStack_3300;
    ulong uStack_32f8;
    uchar uStack_32f0;
    ulong uStack_3000;
    ulong uStack_2000;
    ulong uStack_1000;
    int64_t var_28h;
    
    //rakurai_scheduler::entrypoint::run_rakurai_scheduler::_$u7b$$u7b$closure$u7d$$u7d$::hc21d929641619cab
    uStack_1000 = 0;
    uStack_2000 = 0;
    uStack_3000 = 0;
    uStack_4000 = 0;
    if (*(*(arg1 + 0xa0) + 0x10) == '\0') {
        sym.imp.__tls_get_addr(0xe38278);
        piVar1 = *0xe37388;
        do {
            if (*piVar1 != 0) {
                (**0xe38590)();
                pcVar2 = *0xe37508;
                (**0xe37508)();
                pcVar3 = *0xe37510;
                puVar4 = (**0xe37510)(0x18,8);
                if (puVar4 == NULL) {
                    (**0xe37518)(8,0x18);
                }
                else {
                    *puVar4 = 1;
                    puVar4[1] = 1;
                    *(puVar4 + 2) = 0;
                    (*pcVar2)();
                    iVar7 = (*pcVar3)(160000,8);
                    if (iVar7 == 0) {
                        (**0xe37788)(8,160000);
                    }
                    else {
                        auStack_4160 = 0x0;
                        uStack_4170 = 5000;
                        iStack_4168 = iVar7;
                        (*pcVar2)();
                        iVar7 = (*pcVar3)(520000,8);
                        if (iVar7 == 0) {
                            (**0xe37788)(8,520000);
                        }
                        else {
                            auStack_3470 = 0x0;
                            auStack_3480._8_8_ = iVar7;
                            auStack_3480._0_8_ = 5000;
                            (*pcVar2)();
                            iVar7 = (**0xe37510)(0x11b340,8);
                            if (iVar7 == 0) {
                                (**0xe37788)(8,0x11b340);
                            }
                            else {
                                uStack_3300 = 1;
                                uStack_32f8 = 1;
                                uStack_32f0 = 0;
                                uStack_3380 = 0;
                                uStack_337c = 0;
                                uStack_3378 = 0;
                                auStack_3480 = 0x0;
                                auStack_3400 = 0x0;
                                uStack_3370 = 8;
                                auStack_3368 = 0x0;
                                uStack_3358 = 8;
                                uStack_3350 = 0;
                                uStack_3348 = 1;
                                (*pcVar2)();
                                iVar7 = (**0xe37510)(0x200,0x80);
                                pcVar2 = *0xe37450;
                                if (iVar7 == 0) {
                                    (**0xe37518)(0x80,0x200);
                                }
                                else {
                                    (**0xe37450)(iVar7,auStack_3480,0x200);
                                    uStack_3300 = 1;
                                    uStack_32f8 = 1;
                                    uStack_32f0 = 0;
                                    uStack_3380 = 0;
                                    uStack_337c = 0;
                                    uStack_3378 = 0;
                                    auStack_3480 = 0x0;
                                    auStack_3400 = 0x0;
                                    uStack_3370 = 8;
                                    auStack_3368 = 0x0;
                                    uStack_3358 = 8;
                                    uStack_3350 = 0;
                                    uStack_3348 = 1;
                                    (**0xe37508)();
                                    iVar7 = (**0xe37510)(0x200,0x80);
                                    if (iVar7 != 0) {
                                        (*pcVar2)(iVar7,auStack_3480,0x200);
    //WARNING: Could not recover jumptable at 0x0067ecae. Too many branches
    //WARNING: Treating indirect jump as call
    //switch table (76 cases) at 0x37c56c
                                        (*(*(*(arg1 + 0x30) * 4 + 0x37c56c) + 0x37c56c))();
                                        return;
                                    }
                                    (**0xe37518)(0x80,0x200);
                                }
                            }
                        }
                    }
                }
                goto code_r0x00682be3;
            }
            uVar6 = *(arg1 + 0x158) / 1000;
            (**0xe38678)(uVar6,(*(arg1 + 0x158) + uVar6 * -1000) * 1000000);
        } while (*(*(arg1 + 0xa0) + 0x10) == '\0');
    }
    uStack_49f0 = *(arg1 + 0x150);
    uStack_4a00 = *(arg1 + 0x140);
    uStack_49f8 = *(arg1 + 0x148);
    auStack_3480 = sym.std::thread::lifecycle::JoinInner_T_::join::h4d7ecb054437b0fe(&uStack_4a00);
    if (auStack_3480._0_8_ == 0) {
        piVar1 = *(arg1 + 0xa0);
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
            (**0xe37748)();
        }
        sym.__crossbeam_channel::channel::Receiver_T__as_core::ops::drop::Drop_::drop::h23afad134b1d4d68(arg1 + 0x30);
        if (*(arg1 + 0x30) == 4) {
            piVar1 = *(arg1 + 0x38);
            LOCK();
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
                (**0xe385b8)();
            }
        }
        else if (*(arg1 + 0x30) == 3) {
            piVar1 = *(arg1 + 0x38);
            LOCK();
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
                (**0xe385b0)();
            }
        }
        piVar1 = *(arg1 + 0xa8);
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
            (**0xe38328)(arg1 + 0xa8);
        }
        iVar7 = *(arg1 + 0xb8);
        if ((iVar7 != 0) && (iVar5 = iVar7 * 0x21 + 0x31, iVar5 != 0)) {
            (**0xe37488)(*(arg1 + 0xb0) + iVar7 * -0x20 + -0x20,iVar5,0x10);
        }
        piVar1 = *(arg1 + 0xf0);
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
            (**0xe38310)(arg1 + 0xf0);
        }
        if (*(arg1 + 0x20) != 3) {
            sym.__crossbeam_channel::channel::Sender_T__as_core::ops::drop::Drop_::drop::hce56dd22046052b3(arg1 + 0x20);
        }
        piVar1 = *(arg1 + 0xf8);
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
            (**0xe38480)(arg1 + 0xf8);
        }
        sym.__crossbeam_channel::channel::Receiver_T__as_core::ops::drop::Drop_::drop::h3536a26ac5d6e76d(arg1 + 0x40);
        if (*(arg1 + 0x40) == 4) {
            piVar1 = *(arg1 + 0x48);
            LOCK();
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
                (**0xe385b8)();
            }
        }
        else if (*(arg1 + 0x40) == 3) {
            piVar1 = *(arg1 + 0x48);
            LOCK();
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
                (**0xe385b0)();
            }
        }
        piVar1 = *(arg1 + 0x100);
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
            (**0xe38490)(arg1 + 0x100);
        }
        piVar1 = *(arg1 + 0x108);
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
            (**0xe38308)(arg1 + 0x108);
        }
        sym.__crossbeam_channel::channel::Sender_T__as_core::ops::drop::Drop_::drop::hfb403a21a64513e9(arg1);
        piVar1 = *(arg1 + 0x110);
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
            (**0xe38300)(arg1 + 0x110);
        }
        piVar1 = *(arg1 + 0x118);
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
            (**0xe38300)(arg1 + 0x118);
        }
        piVar1 = *(arg1 + 0x120);
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
            (**0xe385c0)(arg1 + 0x120);
        }
        piVar1 = *(arg1 + 0x128);
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
            (**0xe37748)(arg1 + 0x128);
        }
        piVar1 = *(arg1 + 0x130);
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
            (**0xe38320)(arg1 + 0x130);
        }
        piVar1 = *(arg1 + 0x138);
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
            (**0xe38318)(arg1 + 0x138);
        }
        iVar7 = *(arg1 + 0x78);
        for (iVar5 = *(arg1 + 0x80) + 1; iVar5 != 1; iVar5 = iVar5 + -1) {
            sym.__crossbeam_channel::channel::Sender_T__as_core::ops::drop::Drop_::drop::h29bbd4c6cca379a5(iVar7);
            iVar7 = iVar7 + 0x10;
        }
        if (*(arg1 + 0x70) != 0) {
            (**0xe37488)(*(arg1 + 0x78),*(arg1 + 0x70) << 4,8);
        }
        sym.__crossbeam_channel::channel::Receiver_T__as_core::ops::drop::Drop_::drop::hdccf6130e4ad359b(arg1 + 0x50);
        if (*(arg1 + 0x50) == 4) {
            piVar1 = *(arg1 + 0x58);
            LOCK();
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
                (**0xe385b8)();
            }
        }
        else if (*(arg1 + 0x50) == 3) {
            piVar1 = *(arg1 + 0x58);
            LOCK();
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
                (**0xe385b0)();
            }
        }
        sym.__crossbeam_channel::channel::Sender_T__as_core::ops::drop::Drop_::drop::hcc47f45e6098d449(arg1 + 0x10);
        pcVar2 = *0xe38840;
        if (*(arg1 + 0x98) != 0) {
            puVar4 = *(arg1 + 0x90);
            iVar7 = 1 - *(arg1 + 0x98);
            do {
                piVar1 = *puVar4;
                LOCK();
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                    (*pcVar2)(puVar4);
                }
                puVar4 = puVar4 + 1;
                iVar7 = iVar7 + 1;
            } while (iVar7 != 1);
        }
        if (*(arg1 + 0x88) != 0) {
            (**0xe37488)(*(arg1 + 0x90),*(arg1 + 0x88) << 3,8);
        }
        sym.__crossbeam_channel::channel::Receiver_T__as_core::ops::drop::Drop_::drop::h1ea8ceb48c79f1c8(arg1 + 0x60);
        puVar4 = arg1 + 0x68;
        if (*(arg1 + 0x60) == 4) {
            piVar1 = *puVar4;
            LOCK();
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
                (**0xe385b8)(puVar4);
            }
        }
        else if (*(arg1 + 0x60) == 3) {
            piVar1 = *puVar4;
            LOCK();
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
                (**0xe385b0)(puVar4);
            }
        }
        return;
    }
    (**0xe37860)(0x37cea7,0x2b,auStack_3480,0xdca6e0,0xdc9e70);
code_r0x00682be3:
    //WARNING: Does not return
    pcVar2 = invalidInstructionException();
    (*pcVar2)();
}

