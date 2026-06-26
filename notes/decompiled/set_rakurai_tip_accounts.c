
void sym.__rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer_as_rakurai_scheduler::scheduler_receiver::RakuraiReceiveAndBuffer_::set_rakurai_tip_accounts::hdcdc725c85e9c509
               (int64_t arg1,int64_t arg2)

{
    int *piVar1;
    int iVar2;
    int64_t iVar3;
    code *pcVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    uint uVar9;
    uint uVar10;
    uint uVar11;
    uint uVar12;
    uint uVar13;
    uint uVar14;
    uint uVar15;
    uint64_t *puVar16;
    char cVar17;
    uint64_t uVar18;
    int64_t iVar19;
    bool bVar20;
    int *piStack_40;
    uint8_t uStack_38;
    
    //_<rakurai_scheduler::scheduler_receiver::RakuraiTransactionViewReceiveAndBuffer as
    //rakurai_scheduler::scheduler_receiver::RakuraiReceiveAndBuffer>::set_rakurai_tip_accounts::hdcdc725c85e9c509
    iVar3 = *(arg1 + 600);
    piVar1 = iVar3 + 0x10;
    LOCK();
    bVar20 = *(iVar3 + 0x10) == 0;
    if (bVar20) {
        *(iVar3 + 0x10) = 0x3fffffff;
    }
    UNLOCK();
    if (!bVar20) {
        (**0xe38220)(piVar1);
    }
    puVar16 = *0xe37c38;
    if ((**0xe37c38 & 0x7fffffffffffffff) == 0) {
        uStack_38 = 0;
        cVar17 = *(iVar3 + 0x18);
    }
    else {
        uStack_38 = (**0xe37c48)();
        uStack_38 = uStack_38 ^ 1;
        cVar17 = *(iVar3 + 0x18);
    }
    if (cVar17 != '\0') {
        piStack_40 = piVar1;
        (**0xe37860)(0x379f97,0x2b,&piStack_40,0xdc7940,0xdc71e0);
    //WARNING: Does not return
        pcVar4 = invalidInstructionException();
        (*pcVar4)();
    }
    iVar19 = *(iVar3 + 0x28);
    if (iVar19 != 0) {
        uVar18 = iVar19 * 0x28 + 0x37U & 0xfffffffffffffff0;
        iVar19 = iVar19 + uVar18 + 0x11;
        if (iVar19 != 0) {
            (**0xe37488)(*(iVar3 + 0x20) - uVar18,iVar19,0x10);
        }
    }
    uVar5 = *arg2;
    uVar6 = *(arg2 + 4);
    uVar7 = *(arg2 + 8);
    uVar8 = *(arg2 + 0xc);
    uVar9 = *(arg2 + 0x10);
    uVar10 = *(arg2 + 0x14);
    uVar11 = *(arg2 + 0x18);
    uVar12 = *(arg2 + 0x1c);
    uVar13 = *(arg2 + 0x24);
    uVar14 = *(arg2 + 0x28);
    uVar15 = *(arg2 + 0x2c);
    *(iVar3 + 0x40) = *(arg2 + 0x20);
    *(iVar3 + 0x44) = uVar13;
    *(iVar3 + 0x48) = uVar14;
    *(iVar3 + 0x4c) = uVar15;
    *(iVar3 + 0x30) = uVar9;
    *(iVar3 + 0x34) = uVar10;
    *(iVar3 + 0x38) = uVar11;
    *(iVar3 + 0x3c) = uVar12;
    *(iVar3 + 0x20) = uVar5;
    *(iVar3 + 0x24) = uVar6;
    *(iVar3 + 0x28) = uVar7;
    *(iVar3 + 0x2c) = uVar8;
    if (((uStack_38 == 0) && ((*puVar16 & 0x7fffffffffffffff) != 0)) && (cVar17 = (**0xe37c48)(), cVar17 == '\0')) {
        *(iVar3 + 0x18) = 1;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -0x3fffffff;
    UNLOCK();
    if (iVar2 + 0xc0000001U < 0x40000000) {
        return;
    }
    //WARNING: Could not recover jumptable at 0x005d31eb. Too many branches
    //WARNING: Treating indirect jump as call
    (**0xe37d60)(piVar1);
    return;
}

