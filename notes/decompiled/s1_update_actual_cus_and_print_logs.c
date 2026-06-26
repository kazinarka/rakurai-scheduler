
void sym.rakurai_scheduler::scheduler_1::controller::Controller_R_S_::update_actual_cus_and_print_logs::h708b0447f2394729
               (int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint32_t *puVar2;
    uint32_t uVar3;
    int iVar4;
    char cVar5;
    uint32_t uVar6;
    int64_t iVar7;
    code *pcVar8;
    uint64_t uVar9;
    ulong uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    int64_t iVar14;
    bool bVar15;
    int64_t iVar16;
    int64_t iVar17;
    int64_t iStack_60;
    uint32_t *puStack_58;
    int *piStack_50;
    uint32_t *puStack_48;
    int *piStack_40;
    
    //rakurai_scheduler::scheduler_1::controller::Controller<R,S>::update_actual_cus_and_print_logs::h708b0447f2394729
    uVar9 = (**0xe38360)();
    uVar12 = *(arg1 + 0x7c0);
    uVar13 = 0;
    if (uVar12 <= uVar9) {
        uVar13 = uVar9 - uVar12;
    }
    if (uVar13 < 2) {
        return;
    }
    LOCK();
    bVar15 = uVar12 == *(arg1 + 0x7c0);
    if (bVar15) {
        *(arg1 + 0x7c0) = uVar9;
    }
    UNLOCK();
    if (uVar12 == 0 || !bVar15) {
        return;
    }
    iVar7 = *(arg1 + 0x828);
    puVar2 = iVar7 + 0x10;
    uVar6 = *(iVar7 + 0x10);
    if (uVar6 < 0x3ffffffe) {
        LOCK();
        uVar3 = *puVar2;
        if (uVar6 == uVar3) {
            *puVar2 = uVar6 + 1;
        }
        UNLOCK();
        if (uVar6 == uVar3) {
            cVar5 = *(iVar7 + 0x18);
            goto joined_r0x006acd14;
        }
    }
    (**0xe381c8)(puVar2);
    cVar5 = *(iVar7 + 0x18);
joined_r0x006acd14:
    if (cVar5 == '\0') {
        (**0xe38c48)(&iStack_60,*(iVar7 + 0x28) + 0x10);
        if (iStack_60 != 1) {
            uVar10 = (**0xe38c50)(puStack_58);
            *(arg1 + 0x7c8) = uVar10;
            LOCK();
            iVar4 = *piStack_50;
            *piStack_50 = *piStack_50 + -1;
            UNLOCK();
            if (SBORROW4(0,iVar4 - 1U & 0xbfffffff)) {
                (**0xe37d60)(piStack_50);
            }
            LOCK();
            uVar6 = *puVar2;
            *puVar2 = *puVar2 - 1;
            UNLOCK();
            if (SBORROW4(0,uVar6 - 1 & 0xbfffffff)) {
                (**0xe37d60)();
                uVar12 = *(arg1 + 0x468);
            }
            else {
                uVar12 = *(arg1 + 0x468);
            }
            if (uVar12 == 0) {
                iVar14 = 0;
            }
            else {
                iVar7 = *(arg1 + 0x460);
                if (3 < uVar12) {
                    uVar13 = uVar12 & 0xfffffffffffffffc;
                    iVar14 = 0;
                    iVar11 = 0;
                    uVar9 = 0;
                    iVar16 = 0;
                    iVar17 = 0;
                    do {
                        piVar1 = iVar7 + uVar9 * 8;
                        iVar14 = iVar14 + *piVar1;
                        iVar11 = iVar11 + piVar1[1];
                        piVar1 = iVar7 + 0x10 + uVar9 * 8;
                        iVar16 = iVar16 + *piVar1;
                        iVar17 = iVar17 + piVar1[1];
                        uVar9 = uVar9 + 4;
                    } while (uVar13 != uVar9);
                    iVar14 = iVar17 + iVar11 + iVar16 + iVar14;
                    goto code_r0x006ace74;
                }
                uVar13 = 0;
                iVar14 = 0;
                do {
                    iVar14 = iVar14 + *(iVar7 + uVar13 * 8);
                    uVar13 = uVar13 + 1;
code_r0x006ace74:
                } while (uVar12 != uVar13);
            }
            uVar12 = *(arg1 + 0x280);
            uVar13 = *(arg1 + 0x298);
            if (uVar13 == uVar12) {
                (**0xe37c78)(arg1 + 0x280);
                uVar12 = *(arg1 + 0x280);
                uVar13 = *(arg1 + 0x298);
            }
            *(arg1 + 0x298) = uVar13 + 1;
            uVar13 = uVar13 + *(arg1 + 0x290);
            uVar9 = 0;
            if (uVar12 <= uVar13) {
                uVar9 = uVar12;
            }
            iVar7 = *(arg1 + 0x288);
            iVar11 = (uVar13 - uVar9) * 0x20;
            *(iVar7 + iVar11) = uVar10;
            *(iVar7 + 8 + iVar11) = arg2;
            *(iVar7 + 0x10 + iVar11) = iVar14;
            *(iVar7 + 0x18 + iVar11) = arg3;
            return;
        }
        puStack_48 = puStack_58;
        piStack_40 = piStack_50;
        (**0xe37860)(0x37d4ea,0x2b,&puStack_48,0xdcb140,0xdcaf58);
    }
    else {
        iStack_60 = iVar7 + 0x20;
        puStack_58 = puVar2;
        (**0xe37860)(0x37d4ea,0x2b,&iStack_60,0xdcb100,0xdcaf40);
    }
    //WARNING: Does not return
    pcVar8 = invalidInstructionException();
    (*pcVar8)();
}

