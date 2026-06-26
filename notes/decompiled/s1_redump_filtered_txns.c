
void sym.rakurai_scheduler::scheduler_1::controller::Controller_R_S_::redump_filtered_txns::h3b6042622f50034d
               (int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    int iVar3;
    char cVar4;
    uint32_t uVar5;
    code *pcVar6;
    int *piVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong uStack_b8;
    ulong uStack_b0;
    uint uStack_a8;
    uint uStack_a4;
    uint uStack_a0;
    uint uStack_9c;
    uint uStack_98;
    uint uStack_94;
    uint uStack_90;
    uint uStack_8c;
    uint uStack_88;
    uint uStack_84;
    uint uStack_80;
    uint uStack_7c;
    uint uStack_78;
    uint uStack_74;
    uint uStack_70;
    uint uStack_6c;
    uint uStack_68;
    uint uStack_64;
    uint uStack_60;
    uint uStack_5c;
    uint uStack_58;
    uint uStack_54;
    uint uStack_50;
    uint uStack_4c;
    uint uStack_48;
    uint uStack_44;
    uint uStack_40;
    uint uStack_3c;
    
    //rakurai_scheduler::scheduler_1::controller::Controller<R,S>::redump_filtered_txns::h3b6042622f50034d
    iVar9 = *(arg1 + 0x828);
    puVar1 = iVar9 + 0x10;
    uVar5 = *(iVar9 + 0x10);
    if (uVar5 < 0x3ffffffe) {
        LOCK();
        uVar2 = *puVar1;
        if (uVar5 == uVar2) {
            *puVar1 = uVar5 + 1;
        }
        UNLOCK();
        if (uVar5 == uVar2) {
            cVar4 = *(iVar9 + 0x18);
            goto joined_r0x006abf7f;
        }
    }
    (**0xe381c8)(puVar1);
    cVar4 = *(iVar9 + 0x18);
joined_r0x006abf7f:
    if (cVar4 == '\0') {
        (**0xe38c48)(&uStack_b8,*(iVar9 + 0x28) + 0x10);
        if (uStack_b8 != 1) {
            piVar7 = CONCAT44(uStack_a4,uStack_a8);
            sym.__hashbrown::map::HashMap_K_V_S_A__as_core::clone::Clone_::clone::hf29d1bdc1edfab77
                      (&uStack_b8,uStack_b0 + 6);
            uStack_48 = uStack_88;
            uStack_44 = uStack_84;
            uStack_40 = uStack_80;
            uStack_3c = uStack_7c;
            uStack_58 = uStack_98;
            uStack_54 = uStack_94;
            uStack_50 = uStack_90;
            uStack_4c = uStack_8c;
            uStack_68 = uStack_a8;
            uStack_64 = uStack_a4;
            uStack_60 = uStack_a0;
            uStack_5c = uStack_9c;
            uStack_78 = uStack_b8;
            uStack_74 = uStack_b8._4_4_;
            uStack_70 = uStack_b0;
            uStack_6c = uStack_b0._4_4_;
            LOCK();
            iVar3 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (SBORROW4(0,iVar3 - 1U & 0xbfffffff)) {
                (**0xe37d60)(piVar7);
            }
            LOCK();
            uVar5 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if (SBORROW4(0,uVar5 - 1 & 0xbfffffff)) {
                (**0xe37d60)(puVar1,uVar5 - 1);
            }
            if (arg3 != '\0') {
                sym.__rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler_Tx__as_rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait_Tx__::refresh_if_needed::h2d5c582f025eaede
                          (arg1 + 0x2e0);
            }
            sym.__rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler_Tx__as_rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait_Tx__::retry_interval_tx_ids::hfa41e1c9642770d5
                      (arg1 + 0x2e0,&uStack_78,arg1 + 0x868,arg3 & 0xff,arg2);
            iVar9 = CONCAT44(uStack_6c,uStack_70);
            if (iVar9 != 0) {
                uVar8 = iVar9 * 0x28 + 0x37U & 0xfffffffffffffff0;
                iVar9 = iVar9 + uVar8 + 0x11;
                if (iVar9 != 0) {
                    (**0xe37488)(CONCAT44(uStack_74,uStack_78) - uVar8,iVar9,0x10);
                }
            }
            return;
        }
        uStack_78 = uStack_b0;
        uStack_74 = uStack_b0._4_4_;
        uStack_70 = uStack_a8;
        uStack_6c = uStack_a4;
        (**0xe37860)(0x37d4ea,0x2b,&uStack_78,0xdcb140,0xdcaf28);
    }
    else {
        uStack_b8 = iVar9 + 0x20;
        uStack_b0 = puVar1;
        (**0xe37860)(0x37d4ea,0x2b,&uStack_b8,0xdcb100,0xdcaf10);
    }
    //WARNING: Does not return
    pcVar6 = invalidInstructionException();
    (*pcVar6)();
}

