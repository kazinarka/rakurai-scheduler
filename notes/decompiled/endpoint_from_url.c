
ulong * sym.rakurai_scheduler::scheduler_update_notifier::endpoint_from_url::h7834476ab1a90928
                  (int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int64_t iVar2;
    char cVar3;
    ulong *puVar4;
    uchar uVar5;
    uchar uStack_5c9;
    uint uStack_5c8;
    uint uStack_5c4;
    uint uStack_5c0;
    uint uStack_5bc;
    ulong uStack_5b8;
    ulong uStack_5a8;
    ulong uStack_5a0;
    ulong uStack_598;
    uint uStack_588;
    uint uStack_584;
    uint uStack_580;
    uint uStack_57c;
    ulong uStack_578;
    uint uStack_568;
    uint uStack_564;
    uint uStack_560;
    uint uStack_55c;
    ulong uStack_558;
    ulong uStack_548;
    ulong uStack_540;
    ulong uStack_538;
    ulong uStack_530;
    ulong uStack_518;
    ulong uStack_4e8;
    ulong uStack_4e0;
    ulong uStack_4d0;
    ulong uStack_4c8;
    ulong uStack_4c0;
    ulong *puStack_358;
    ulong uStack_350;
    ulong uStack_348;
    ulong uStack_340;
    uchar auStack_338 [376];
    ulong *puStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    uchar auStack_1a0 [376];
    
    //rakurai_scheduler::scheduler_update_notifier::endpoint_from_url::h7834476ab1a90928
    uVar5 = arg3 == 0;
    if (-1 < arg3) goto code_r0x005e4417;
    puVar4 = NULL;
    do {
        arg1 = puVar4;
        uVar5 = 1;
        arg2 = arg3;
        (**0xe37788)();
code_r0x005e4417:
        if (uVar5) {
            uStack_1b8 = 1;
            break;
        }
        (**0xe37508)();
        uStack_1b8 = (**0xe37510)(arg3,1);
        puVar4 = 0x1;
    } while (uStack_1b8 == 0);
    (**0xe37450)(uStack_1b8,arg2,arg3);
    puStack_1c0 = arg3;
    uStack_1b0 = arg3;
    sym.tonic::transport::channel::endpoint::Endpoint::from_shared::h2ff164b31e8eddb8(&puStack_358,&puStack_1c0);
    if (puStack_358 == 0x2) {
        uStack_538 = uStack_340;
        uStack_548 = uStack_350;
        uStack_540 = uStack_348;
        uStack_4d0 = 0;
        uStack_4c8 = 1;
        uStack_4c0 = 0;
        uStack_1b0 = 0x60000020;
        puStack_1c0 = &uStack_4d0;
        uStack_1b8 = 0xdc7798;
        cVar3 = (**0xe37a08)(&uStack_548,&puStack_1c0);
        if (cVar3 != '\0') {
            (**0xe37860)(0x379f60,0x37,&uStack_5c9,0xdc7820,0xdc77c8);
code_r0x005e485e:
    //WARNING: Does not return
            pcVar1 = invalidInstructionException();
            (*pcVar1)();
        }
        uStack_5c8 = uStack_4d0;
        uStack_5c4 = uStack_4d0._4_4_;
        uStack_5c0 = uStack_4c8;
        uStack_5bc = uStack_4c8._4_4_;
        uStack_5b8 = uStack_4c0;
        uStack_578 = uStack_4c0;
        uStack_588 = uStack_4d0;
        uStack_584 = uStack_4d0._4_4_;
        uStack_580 = uStack_4c8;
        uStack_57c = uStack_4c8._4_4_;
        if (uStack_548 != 0) {
            if (*uStack_540 != NULL) {
                (**uStack_540)(uStack_548);
            }
            uStack_578 = uStack_5b8;
            uStack_588 = uStack_5c8;
            uStack_584 = uStack_5c4;
            uStack_580 = uStack_5c0;
            uStack_57c = uStack_5bc;
            if (uStack_540[1] != 0) {
                (**0xe37488)(uStack_548,uStack_540[1],uStack_540[2]);
                uStack_578 = uStack_5b8;
                uStack_588 = uStack_5c8;
                uStack_584 = uStack_5c4;
                uStack_580 = uStack_5c0;
                uStack_57c = uStack_5bc;
            }
        }
code_r0x005e458b:
        *(arg1 + 0x18) = uStack_578;
        *(arg1 + 8) = uStack_588;
        *(arg1 + 0xc) = uStack_584;
        *(arg1 + 0x10) = uStack_580;
        *(arg1 + 0x14) = uStack_57c;
        *arg1 = 2;
    }
    else {
        uStack_578 = uStack_340;
        uStack_588 = uStack_350;
        uStack_584 = uStack_350._4_4_;
        uStack_580 = uStack_348;
        uStack_57c = uStack_348._4_4_;
        (**0xe37450)(&uStack_4d0,auStack_338,0x178);
        uStack_558 = uStack_578;
        uStack_5a8 = CONCAT44(uStack_584,uStack_588);
        uStack_5a0 = CONCAT44(uStack_57c,uStack_580);
        uStack_598 = uStack_578;
        puVar4 = puStack_358;
        if ((4 < arg3) && (*(arg2 + 4) == 's' && *arg2 == 0x70747468)) {
            uStack_350 = CONCAT44(uStack_584,uStack_588);
            uStack_348 = CONCAT44(uStack_57c,uStack_580);
            uStack_340 = uStack_578;
            (**0xe37450)(auStack_338,&uStack_4d0,0x178);
            uStack_548 = 0x8000000000000000;
            uStack_530 = 0x8000000000000000;
            uStack_518 = 0x8000000000000000;
            (**0xe384a0)(&puStack_1c0,&puStack_358,&uStack_548);
            puVar4 = puStack_1c0;
            if (puStack_1c0 == 0x2) {
                uStack_5b8 = uStack_1a8;
                uStack_5c8 = uStack_1b8;
                uStack_5c4 = uStack_1b8._4_4_;
                uStack_5c0 = uStack_1b0;
                uStack_5bc = uStack_1b0._4_4_;
                uStack_548 = 0;
                uStack_540 = 0x1;
                uStack_538 = 0;
                uStack_348 = 0x60000020;
                uStack_350 = 0xdc7798;
                puStack_358 = &uStack_548;
                cVar3 = (**0xe37a08)(&uStack_5c8,&puStack_358);
                if (cVar3 != '\0') {
                    (**0xe37860)(0x379f60,0x37,&uStack_5c9,0xdc7820,0xdc77c8);
                    goto code_r0x005e485e;
                }
                uStack_588 = uStack_548;
                uStack_584 = uStack_548._4_4_;
                uStack_580 = uStack_540;
                uStack_57c = uStack_540._4_4_;
                uStack_578 = uStack_538;
                iVar2 = CONCAT44(uStack_5c4,uStack_5c8);
                if (iVar2 != 0) {
                    puVar4 = CONCAT44(uStack_5bc,uStack_5c0);
                    if (*puVar4 != NULL) {
                        (**puVar4)(iVar2);
                    }
                    if (puVar4[1] != 0) {
                        (**0xe37488)(iVar2,puVar4[1],puVar4[2]);
                    }
                }
                goto code_r0x005e458b;
            }
            uStack_558 = uStack_1a8;
            uStack_568 = uStack_1b8;
            uStack_564 = uStack_1b8._4_4_;
            uStack_560 = uStack_1b0;
            uStack_55c = uStack_1b0._4_4_;
            (**0xe37450)(&uStack_4d0,auStack_1a0,0x178);
            uStack_5a8 = CONCAT44(uStack_564,uStack_568);
            uStack_5a0 = CONCAT44(uStack_55c,uStack_560);
            uStack_4e8 = uStack_5a8;
            uStack_4e0 = uStack_5a0;
        }
        *arg1 = puVar4;
        *(arg1 + 8) = uStack_5a8;
        *(arg1 + 0xc) = uStack_5a8._4_4_;
        *(arg1 + 0x10) = uStack_5a0;
        *(arg1 + 0x14) = uStack_5a0._4_4_;
        *(arg1 + 0x18) = uStack_558;
        uStack_598 = uStack_558;
        (**0xe37450)(arg1 + 0x20,&uStack_4d0,0x178);
    }
    return arg1;
}

