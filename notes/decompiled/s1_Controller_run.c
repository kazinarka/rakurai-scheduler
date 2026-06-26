
//WARNING: Type propagation algorithm not settling

uint64_t *
sym.rakurai_scheduler::scheduler_1::controller::Controller_R_S_::run::h3c7475e95bdf7f94(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint32_t uVar2;
    uint16_t uVar3;
    int iVar4;
    ulong uVar5;
    uint32_t *****pppppuVar6;
    uint32_t ****ppppuVar7;
    uint32_t ***pppuVar8;
    uint32_t **ppuVar9;
    uint32_t *puVar10;
    uchar *puVar11;
    uchar auVar12 [16];
    uchar auVar13 [16];
    code *pcVar14;
    uchar auVar15 [16];
    uchar auVar16 [16];
    uint32_t *******pppppppuVar17;
    uchar *puVar18;
    uint32_t *******pppppppuVar19;
    float8 fVar20;
    uint uVar21;
    char cVar22;
    uchar uVar23;
    uint32_t uVar24;
    ulong *puVar25;
    uint64_t *puVar26;
    uint64_t uVar27;
    uint32_t *******pppppppuVar28;
    uchar *in_RCX;
    int64_t iVar29;
    uint64_t *puVar30;
    uint64_t extraout_RDX;
    uint32_t ******ppppppuVar31;
    uint64_t uVar32;
    uint64_t uVar33;
    uint64_t uVar34;
    ulong uVar35;
    uint64_t uVar36;
    uint32_t *******pppppppuVar37;
    uint64_t uVar38;
    int64_t iVar39;
    uint8_t uVar40;
    ulong uVar41;
    int64_t iVar42;
    uint32_t ******ppppppuVar43;
    bool bVar44;
    uint32_t *******pppppppuVar45;
    uint32_t *******extraout_XMM0_Qa;
    float8 fVar46;
    uint32_t *******extraout_XMM0_Qb;
    uint32_t *******extraout_XMM0_Qb_00;
    uchar auVar47 [16];
    uint32_t *******extraout_XMM0_Qb_01;
    uint32_t *******extraout_XMM0_Qb_02;
    uint32_t *******extraout_XMM0_Qb_03;
    uchar auVar48 [16];
    uchar auVar49 [16];
    uchar auVar50 [16];
    uchar auVar51 [16];
    float8 fVar52;
    float8 fVar53;
    int64_t iVar54;
    int64_t iVar55;
    uchar auVar56 [12];
    uchar auVar57 [16];
    int64_t in_stack_fffffffffffffcf8;
    uint uVar58;
    uchar uStack_2e1;
    uint32_t uStack_2e0;
    uint32_t uStack_2dc;
    uint32_t *******pppppppuStack_2d8;
    ulong uStack_2d0;
    ulong uStack_2c8;
    ulong uStack_2c0;
    uchar *puStack_2b8;
    uint32_t ******ppppppuStack_2b0;
    uint32_t ******ppppppuStack_2a8;
    ulong *puStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    int64_t iStack_288;
    int64_t iStack_280;
    uchar *puStack_278;
    float8 fStack_270;
    int64_t *piStack_260;
    ulong uStack_258;
    uint32_t *******pppppppuStack_250;
    uint32_t *******pppppppuStack_248;
    uchar *puStack_240;
    uint32_t ******ppppppuStack_238;
    uint32_t ******ppppppuStack_230;
    ulong *puStack_228;
    uint64_t *puStack_220;
    uchar (*pauStack_218) [16];
    uint64_t *puStack_210;
    int *piStack_208;
    uint32_t *******pppppppuStack_200;
    uint32_t *******pppppppuStack_1f8;
    uint32_t *******pppppppuStack_1f0;
    uint32_t *******pppppppuStack_1e8;
    uint32_t *******pppppppuStack_1e0;
    ulong uStack_1d8;
    uchar (*pauStack_1d0) [16];
    int64_t iStack_1c8;
    int *piStack_1c0;
    ulong *puStack_1b8;
    int64_t *piStack_1b0;
    uint32_t uStack_1a8;
    uint uStack_1a4;
    uint uStack_1a0;
    ulong uStack_19c;
    uint uStack_194;
    ulong uStack_190;
    int64_t iStack_188;
    int64_t iStack_180;
    uchar (*pauStack_178) [16];
    uchar (*pauStack_170) [16];
    uchar (*pauStack_168) [16];
    int64_t iStack_160;
    ulong *puStack_158;
    int64_t iStack_150;
    ulong *puStack_148;
    ulong *puStack_140;
    uint64_t *puStack_138;
    int64_t iStack_130;
    uchar auStack_128 [16];
    uchar auStack_118 [16];
    ulong uStack_108;
    unkbyte7 Stack_100;
    uchar uStack_f9;
    ushort uStack_f8;
    uchar uStack_f6;
    uchar auStack_e8 [16];
    uchar auStack_d8 [16];
    uchar auStack_c8 [16];
    uchar auStack_b8 [16];
    ulong uStack_a8;
    uchar auStack_98 [12];
    uint32_t *******pppppppuStack_88;
    uint32_t *******pppppppuStack_80;
    uint32_t *******pppppppuStack_78;
    ulong uStack_70;
    uchar *puStack_68;
    uint32_t ******ppppppuStack_60;
    uint32_t ******ppppppuStack_58;
    ulong *puStack_50;
    ulong uStack_48;
    ulong uStack_40;
    
    puStack_138 = arg1;
    //rakurai_scheduler::scheduler_1::controller::Controller<R,S>::run::h3c7475e95bdf7f94
    (**0xe37508)();
    puVar25 = (**0xe37510)(0x1d,1);
    uVar41 = *0x37d410;
    if (puVar25 == NULL) {
        (**0xe37788)(1,0x1d);
code_r0x006afa6e:
    //WARNING: Does not return
        pcVar14 = invalidInstructionException();
        (*pcVar14)();
    }
    *(puVar25 + 0xd) = CONCAT53(*0x37d40b,*0x37d408);
    *(puVar25 + 0x15) = uVar41;
    uVar41 = CONCAT35(*0x37d408,*0x37d403);
    *puVar25 = *0x37d3fb;
    puVar25[1] = uVar41;
    pppppppuStack_2d8 = 0x1d;
    uStack_2d0._0_4_ = puVar25;
    uStack_2d0._4_4_ = puVar25 >> 0x20;
    uStack_2c8._0_4_ = 0x1d;
    uStack_2c8._4_4_ = 0;
    (**0xe384e0)(&pppppppuStack_2d8);
    auStack_b8 = 0x0;
    auStack_c8 = 0x0;
    auStack_d8 = 0x0;
    auStack_e8 = 0x0;
    uStack_a8 = 0;
    uStack_2e1 = 0;
    if (**0xe37398 != 2) {
        (**0xe38330)(*0xe37398,0);
    }
    piStack_1b0 = *0xe37398 + 1;
    uVar24 = sym.rakurai_scheduler::switching_controller::SwitchingController::is_rakurai_enabled::h8ce83f041a57fb76__clone_llvm8668054646338321894_
                       ();
    uVar32 = uVar24;
    pppppppuVar45 = (**0xe38d28)(*0xe37398 + 0xb,uVar24);
    pppppppuVar28 = extraout_XMM0_Qb;
    if (uVar24 == '\0') {
        *(*0xe37398 + 0x15) = 0;
        pppppppuVar45 =
             sym.rakurai_scheduler::switching_controller::SwitchingController::wait::hb0cff1635435b9d3__clone_llvm8668054646338321894_
                       (piStack_1b0);
        pppppppuVar28 = extraout_XMM0_Qb_00;
    }
    uStack_2e0 = 3;
    if (*(*(arg2 + 0x838) + 0x10) == '\0') {
        iStack_288 = arg2 + 0x868;
        iStack_280 = arg2 + 0x2e0;
        iStack_130 = arg2 + 0x2c0;
        iStack_150 = arg2 + 0x2d0;
        puStack_220 = arg2 + 0x840;
        piStack_208 = arg2 + 0x980;
        piStack_260 = arg2 + 0x8b0;
        piStack_1c0 = arg2 + 0x7b0;
        iStack_180 = arg2 + 0x900;
        pauStack_170 = arg2 + 0xc88;
        puStack_140 = arg2 + 0xbd0;
        puStack_1b8 = arg2 + 0x990;
        puStack_210 = arg2 + 0xa10;
        puStack_158 = arg2 + 0xa48;
        iStack_160 = arg2 + 0xb78;
        puStack_148 = arg2 + 0xb90;
        pauStack_1d0 = arg2 + 0xa80;
        pauStack_218 = arg2 + 0xb00;
        pauStack_168 = arg2 + 0xb38;
        iStack_188 = arg2 + 0xc30;
        pauStack_178 = arg2 + 0xc48;
        uStack_1d8 = 0xdcaf88;
        iStack_1c8 = 0;
        uStack_2dc = 0;
        do {
            uVar58 = in_stack_fffffffffffffcf8 >> 0x20;
            if (*(*(arg2 + 0x830) + 0x10) != '\0') break;
            auVar56 = (**0xe38230)();
            uStack_258 = auVar56._0_8_;
            pppppppuStack_250 = CONCAT44(pppppppuStack_250._4_4_,auVar56._8_4_);
            iVar29 = *(arg2 + 0x2b0);
            pppppppuVar28 = iVar29 + 0x10;
            uVar24 = *(iVar29 + 0x10);
            if (uVar24 < 0x3ffffffe) {
                LOCK();
                uVar2 = *pppppppuVar28;
                if (uVar24 == uVar2) {
                    *pppppppuVar28 = uVar24 + 1;
                }
                UNLOCK();
                puVar11 = uStack_2c0;
                if (uVar24 != uVar2) goto code_r0x006af253;
            }
            else {
code_r0x006af253:
                (**0xe381c8)(pppppppuVar28);
                puVar11 = uStack_2c0;
            }
            uStack_2c0._4_4_ = puVar11 >> 0x20;
            uStack_2c0._0_4_ = SUB84(puVar11,0);
            if (*(iVar29 + 0x18) != '\0') {
                pppppppuStack_2d8 = iVar29 + 0x20;
                uStack_2d0 = pppppppuVar28;
                uStack_2c0 = puVar11;
                (**0xe37860)(0x37d4ea,0x2b,&pppppppuStack_2d8,0xdcb120,0xdcaf70);
                goto code_r0x006afa6e;
            }
            uStack_1a8 = *(iVar29 + 0x20);
            pppppppuVar45 = uStack_2c8;
            if (uStack_1a8 == 0) {
                pppppppuStack_2d8 = *(iVar29 + 0x24);
                uStack_2d0 = *(iVar29 + 0x2c);
                uStack_2c8._0_4_ = *(iVar29 + 0x30) >> 0x20;
                uStack_2c8._4_4_ = *(iVar29 + 0x38);
                pppppppuVar45 = CONCAT44(uStack_2c8._4_4_,uStack_2c8);
                uStack_2c0._0_4_ = *(iVar29 + 0x38) >> 0x20;
            }
            uStack_2c8._4_4_ = pppppppuVar45 >> 0x20;
            uStack_2c8._0_4_ = SUB84(pppppppuVar45,0);
            uStack_190 = CONCAT44(uStack_2c0,uStack_2c8._4_4_);
            uStack_194 = uStack_2c8;
            uStack_1a4 = SUB84(pppppppuStack_2d8,0);
            uStack_1a0 = pppppppuStack_2d8 >> 0x20;
            LOCK();
            uVar24 = *pppppppuVar28;
            *pppppppuVar28 = *pppppppuVar28 - 1;
            UNLOCK();
            uStack_2c8 = pppppppuVar45;
            uStack_19c = uStack_2d0;
            if (SBORROW4(0,uVar24 - 1 & 0xbfffffff)) {
                (**0xe37d60)(pppppppuVar28);
            }
            auVar57 = (**0xe38248)(&uStack_258);
            iVar29 = (auVar57._8_8_ & 0xffffffff) / 1000 + auVar57._0_8_ * 1000000;
            *(arg2 + 0xc88) = *(arg2 + 0xc88) + iVar29;
            *(arg2 + 0xbd0) = *(arg2 + 0xbd0) + iVar29;
            sym.rakurai_scheduler::scheduler_1::controller::Controller_R_S_::receive_and_buffer_transactions::h506400a828bfa1e2
                      (&pppppppuStack_2d8,arg2,auStack_e8,0);
            pppppppuVar45 = uStack_2d0;
            pppppppuVar28 = uStack_2c8;
            if (pppppppuStack_2d8 != 3) {
code_r0x006af55f:
                uVar32 = pppppppuStack_2d8 >> 0x20;
                in_RCX = CONCAT44(uStack_2c0._4_4_,uStack_2c0);
                uStack_2e0 = pppppppuStack_2d8;
                uStack_2d0 = pppppppuVar45;
                uStack_2c8 = pppppppuVar28;
                uStack_2c0 = in_RCX;
                break;
            }
            sym.rakurai_scheduler::scheduler_1::controller::Controller_R_S_::receive_and_buffer_transactions::h506400a828bfa1e2
                      (&pppppppuStack_2d8,arg2,auStack_e8);
            pppppppuVar45 = uStack_2d0;
            pppppppuVar28 = uStack_2c8;
            if (pppppppuStack_2d8 != 3) goto code_r0x006af55f;
            iVar29 = *(arg2 + 0x8c0);
            pppppppuVar37 = *(arg2 + 0x450) << 3;
            pppppppuVar28 = NULL;
            do {
                pppppppuVar45 = pppppppuVar28;
                if (pppppppuVar37 == pppppppuVar45) break;
                pppppppuVar28 = pppppppuVar45 + 1;
            } while (*(*(arg2 + 0x448) + pppppppuVar45) == 0);
            cVar22 = sym.crossbeam_channel::channel::Receiver_T_::is_empty::h4127f8aa1fad25b7(iStack_130);
            if (cVar22 == '\0') {
                uVar23 = 0;
            }
            else {
                uVar23 = sym.crossbeam_channel::channel::Receiver_T_::is_empty::h4127f8aa1fad25b7(iStack_150);
            }
            uVar40 = *(*(arg2 + 0x2b8) + 0x10);
            uVar32 = uVar40;
            if (**0xe37398 != 2) {
                (**0xe38330)(*0xe37398,0);
            }
            puStack_278 = uStack_1a8;
            iVar42 = CONCAT44(uStack_19c,uStack_1a0);
            in_stack_fffffffffffffcf8 = CONCAT44(uVar58,iVar29 == 0);
            sym.rakurai_scheduler::switching_controller::SwitchingController::wait_or_proceed::hc3a5dece5ff52606__clone_llvm8668054646338321894_
                      (piStack_1b0,1,&uStack_2e1,puStack_278,iVar42,pppppppuVar37 != pppppppuVar45,
                       in_stack_fffffffffffffcf8,uVar23,uVar40 != 0);
            if (puStack_278 == 0) {
                uVar41 = 1;
                puStack_278 = NULL;
                if (iVar42 == iStack_1c8) {
                    puVar26 = &uStack_1a0;
                    iVar4 = *(arg2 + 0x860);
                    iVar42 = iStack_1c8;
                    goto joined_r0x006af1f7;
                }
                if (*(arg2 + 0x760) != 0) {
                    uVar32 = *(arg2 + 0x750);
                    if (uVar32 == 0) {
                        uVar38 = 0;
                    }
                    else {
                        (**0xe37e48)(*(arg2 + 0x748),0xff,uVar32 + 0x11);
                        uVar38 = (uVar32 + 1 & 0xfffffffffffffff8) - (uVar32 + 1 >> 3);
                        if (uVar32 < 8) {
                            uVar38 = uVar32;
                        }
                    }
                    *(arg2 + 0x760) = 0;
                    *(arg2 + 0x758) = uVar38;
                }
                sym.__rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler_Tx__as_rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait_Tx__::retry_tx_end_of_slot::hffb32d40698396dd
                          (iStack_280,iStack_288);
                if ((uStack_2dc & 1) == 0) {
                    iVar29 = *(arg2 + 0x828);
                    pppppppuVar28 = iVar29 + 0x10;
                    uVar24 = *(iVar29 + 0x10);
                    if (uVar24 < 0x3ffffffe) {
                        LOCK();
                        uVar2 = *pppppppuVar28;
                        if (uVar24 == uVar2) {
                            *pppppppuVar28 = uVar24 + 1;
                        }
                        UNLOCK();
                        if (uVar24 != uVar2) goto code_r0x006af283;
                    }
                    else {
code_r0x006af283:
                        (**0xe381c8)(pppppppuVar28);
                    }
                    if (*(iVar29 + 0x18) != '\0') {
                        pppppppuStack_2d8 = iVar29 + 0x20;
                        uStack_2d0 = pppppppuVar28;
                        (**0xe37860)(0x37d4ea,0x2b,&pppppppuStack_2d8,0xdcb100,0xdcae50);
                        goto code_r0x006afa6e;
                    }
                    (**0xe38c48)(&pppppppuStack_2d8,*(iVar29 + 0x28) + 0x10);
                    if (pppppppuStack_2d8 == 1) {
                        uStack_258 = uStack_2d0;
                        pppppppuStack_250 = uStack_2c8;
                        (**0xe37860)(0x37d4ea,0x2b,&uStack_258,0xdcb140,0xdcae68);
                        goto code_r0x006afa6e;
                    }
                    ppppppuVar31 = uStack_2d0[1];
                    LOCK();
                    uVar24 = *uStack_2c8;
                    *uStack_2c8 = *uStack_2c8 - 1;
                    UNLOCK();
                    if (SBORROW4(0,uVar24 - 1 & 0xbfffffff)) {
                        (**0xe37d60)();
                    }
                    LOCK();
                    uVar24 = *pppppppuVar28;
                    *pppppppuVar28 = *pppppppuVar28 - 1;
                    UNLOCK();
                    if (SBORROW4(0,uVar24 - 1 & 0xbfffffff)) {
                        (**0xe37d60)(pppppppuVar28);
                    }
                    iVar29 = *(arg2 + 0x828);
                    pppppppuVar28 = iVar29 + 0x10;
                    uVar24 = *(iVar29 + 0x10);
                    if (uVar24 < 0x3ffffffe) {
                        LOCK();
                        uVar2 = *pppppppuVar28;
                        if (uVar24 == uVar2) {
                            *pppppppuVar28 = uVar24 + 1;
                        }
                        UNLOCK();
                        if (uVar24 != uVar2) goto code_r0x006af291;
                    }
                    else {
code_r0x006af291:
                        (**0xe381c8)(pppppppuVar28);
                    }
                    if (*(iVar29 + 0x18) != '\0') {
                        pppppppuStack_2d8 = iVar29 + 0x20;
                        uStack_2d0 = pppppppuVar28;
                        (**0xe37860)(0x37d4ea,0x2b,&pppppppuStack_2d8,0xdcb100,0xdcae80);
                        goto code_r0x006afa6e;
                    }
                    (**0xe38c48)(&pppppppuStack_2d8,*(iVar29 + 0x28) + 0x10);
                    if (pppppppuStack_2d8 == 1) {
                        uStack_258 = uStack_2d0;
                        pppppppuStack_250 = uStack_2c8;
                        (**0xe37860)(0x37d4ea,0x2b,&uStack_258,0xdcb140,0xdcae98);
                        goto code_r0x006afa6e;
                    }
                    ppppppuVar43 = *uStack_2d0;
                    LOCK();
                    uVar24 = *uStack_2c8;
                    *uStack_2c8 = *uStack_2c8 - 1;
                    UNLOCK();
                    if (SBORROW4(0,uVar24 - 1 & 0xbfffffff)) {
                        (**0xe37d60)();
                    }
                    LOCK();
                    uVar24 = *pppppppuVar28;
                    *pppppppuVar28 = *pppppppuVar28 - 1;
                    UNLOCK();
                    if (SBORROW4(0,uVar24 - 1 & 0xbfffffff)) {
                        (**0xe37d60)(pppppppuVar28);
                    }
                    uVar38 = *(arg2 + 0x7d8);
                    uVar33 = uVar38 / 0x14;
                    *(arg2 + 0x7f0) = ppppppuVar31;
                    *(arg2 + 0x7f8) = ppppppuVar43;
                    *(arg2 + 0x2a0) = uVar33;
                    *(arg2 + 0x2a8) = 0;
                    *(arg2 + 0x7a0) = ppppppuVar31;
                    *(arg2 + 0x7a8) = ppppppuVar43;
                    uVar35 = 0;
                }
                else {
                    uVar38 = *(arg2 + 0x7d8);
                    ppppppuVar31 = *(arg2 + 0x7f0);
                    ppppppuVar43 = *(arg2 + 0x7f8);
                    uVar33 = *(arg2 + 0x2a0);
                    uVar35 = *(arg2 + 0x2a8);
                }
                fVar46 = *0x378000;
                uVar21 = *0x358784;
                uVar58 = *0x358780;
                fVar20 = *0x358028;
                fVar52 = *0x358020;
                auVar57._8_4_ = ppppppuVar31 >> 0x20;
                auVar57._0_8_ = ppppppuVar31;
                auVar57._12_4_ = *0x358784;
                fVar53 = ((auVar57._8_8_ - *0x358028) + (CONCAT44(*0x358780,ppppppuVar31) - *0x358020)) * *0x377ff8;
                uVar34 = fVar53 - *0x378548 & fVar53 >> 0x3f | fVar53;
                pppppppuVar37 = NULL;
                if (fVar53 < 0.0) {
                    uVar34 = 0;
                }
                *(arg2 + 0x7e8) = uVar38;
                uVar32 = 0xffffffffffffffff;
                if (fVar46 < fVar53) {
                    uVar34 = 0xffffffffffffffff;
                }
                auVar49._8_4_ = uVar34 >> 0x20;
                auVar49._0_8_ = uVar34;
                auVar49._12_4_ = uVar21;
                fStack_270 = auVar49._8_8_ - fVar20;
                puStack_278 = fStack_270 + (CONCAT44(uVar58,uVar34) - fVar52);
                auVar50._8_4_ = uVar38 >> 0x20;
                auVar50._0_8_ = uVar38;
                auVar50._12_4_ = uVar21;
                pppppppuStack_1e0 = auVar50._8_8_ - fVar20;
                pppppppuStack_1e8 = pppppppuStack_1e0 + (CONCAT44(uVar58,uVar38) - fVar52);
                fVar46 = (**0xe38e90)(uVar33,uVar35);
                fVar20 = *0x378548;
                fVar52 = *0x378000;
                fVar46 = pppppppuStack_1e8 / fVar46;
                fVar53 = puStack_278 / fVar46;
                uVar38 = fVar53 - *0x378548 & fVar53 >> 0x3f | fVar53;
                if (fVar53 < 0.0) {
                    uVar38 = 0;
                }
                if (*0x378000 < fVar53) {
                    uVar38 = 0xffffffffffffffff;
                }
                *(arg2 + 0x810) = uVar38;
                uVar38 = fVar46 - fVar20 & fVar46 >> 0x3f | fVar46;
                if (fVar46 < 0.0) {
                    uVar38 = 0;
                }
                if (fVar52 < fVar46) {
                    uVar38 = 0xffffffffffffffff;
                }
                if (uVar38 != 0) {
                    auVar51._8_4_ = ppppppuVar43 >> 0x20;
                    auVar51._0_8_ = ppppppuVar43;
                    auVar51._12_4_ = *0x358784;
                    fVar46 = ((auVar51._8_8_ - *0x358028) + (CONCAT44(*0x358780,ppppppuVar43) - *0x358020)) * *0x377ff8
                    ;
                    uVar33 = 0;
                    if (0.0 <= fVar46) {
                        uVar33 = fVar46 - fVar20 & fVar46 >> 0x3f | fVar46;
                    }
                    if (fVar52 < fVar46) {
                        uVar33 = 0xffffffffffffffff;
                    }
                    if ((uVar33 | uVar38) >> 0x20 == 0) {
                        uVar33 = (uVar33 & 0xffffffff) / (uVar38 & 0xffffffff);
                    }
                    else {
                        uVar33 = uVar33 / uVar38;
                    }
                    *(arg2 + 0x818) = uVar33;
                    puStack_278 = uStack_1a8;
                    puVar26 = NULL;
                    if (uStack_1a8 == 0) {
                        puVar26 = &uStack_1a0;
                    }
                    uStack_2dc = CONCAT71(&uStack_1a0 >> 8,1);
                    iVar4 = *(arg2 + 0x860);
                    iStack_1c8 = iVar42;
                    goto joined_r0x006af1f7;
                }
code_r0x006af7ea:
                (**0xe38868)(uStack_1d8);
                goto code_r0x006afa6e;
            }
            puVar26 = NULL;
            uVar41 = 0;
            iVar4 = *(arg2 + 0x860);
joined_r0x006af1f7:
            if (iVar4 == 1000000000) {
                if (puVar26 != NULL) {
                    auVar56 = (**0xe38230)();
                    uVar32 = *puVar26;
code_r0x006adba0:
                    uVar38 = puVar26[1];
                    uVar33 = puVar26[2];
                    *(arg2 + 0x840) = uVar32;
                    *(arg2 + 0x848) = uVar38;
                    *(arg2 + 0x850) = uVar33;
                    *(arg2 + 0x858) = auVar56;
                }
            }
            else if (puVar26 == NULL) {
                sym.rakurai_scheduler::scheduler_1::scheduler_metrics::RakuraiSchedulerLeaderDetectionMetrics::report_and_reset::h4698ace6c2ffc816__clone_llvm10757968547084596467_
                          (puStack_220);
            }
            else {
                uVar32 = *puVar26;
                if (*puStack_220 != uVar32) {
                    sym.rakurai_scheduler::scheduler_1::scheduler_metrics::RakuraiSchedulerLeaderDetectionMetrics::report_and_reset::h4698ace6c2ffc816__clone_llvm10757968547084596467_
                              (puStack_220);
                    auVar56 = (**0xe38230)();
                    goto code_r0x006adba0;
                }
            }
            uVar40 = uVar41;
            if (*piStack_208 == 1) {
                iVar29 = *(arg2 + 0x988);
                if ((uVar40 & iVar29 == iVar42) == 0) {
                    sym.rakurai_scheduler::scheduler_1::scheduler_metrics::SchedulerCountMetricsInner::report::ha451781c1170aaa5__clone_llvm10757968547084596467_
                              (puStack_1b8,obj.anon.a328758cb714e25685698593616e0e8b.60.llvm.10757968547084596467,0x23
                               ,obj.anon.a328758cb714e25685698593616e0e8b.61.llvm.10757968547084596467,0x2f,1,iVar29
                              );
                    in_stack_fffffffffffffcf8 = iVar29;
code_r0x006adcc0:
                    *(arg2 + 0xa38) = 0;
                    puStack_1b8[0xc] = 0;
                    puStack_1b8[0xd] = 0;
                    puStack_1b8[10] = 0;
                    puStack_1b8[0xb] = 0;
                    puStack_1b8[8] = 0;
                    puStack_1b8[9] = 0;
                    puStack_1b8[6] = 0;
                    puStack_1b8[7] = 0;
                    puStack_1b8[4] = 0;
                    puStack_1b8[5] = 0;
                    puStack_1b8[2] = 0;
                    puStack_1b8[3] = 0;
                    *puStack_1b8 = 0;
                    puStack_1b8[1] = 0;
                    puStack_1b8[0xe] = 0;
                    *(arg2 + 0xa08) = 0xffffffffffffffff;
                    puStack_210[2] = 0;
                    puStack_210[3] = 0;
                    *puStack_210 = 0;
                    puStack_210[1] = 0;
                    puStack_210[4] = 0;
                    puStack_158[4] = 0;
                    puStack_158[5] = 0;
                    puStack_158[2] = 0;
                    puStack_158[3] = 0;
                    *puStack_158 = 0;
                    puStack_158[1] = 0;
                    *(arg2 + 0x980) = uVar41;
                    *(arg2 + 0x988) = iVar42;
                    if (*(arg2 + 0xb68) != '\0') goto code_r0x006add52;
                    if (uVar40 == 0) goto code_r0x006ade0d;
                    goto code_r0x006add95;
                }
                if (*(arg2 + 0xb68) == '\0') goto code_r0x006add95;
code_r0x006add52:
                if ((uVar40 & *(arg2 + 0xb70) == iVar42) == 0) goto code_r0x006add68;
            }
            else {
                if (uVar40 != 0) goto code_r0x006adcc0;
                if (*(arg2 + 0xb68) != 1) goto code_r0x006ade0d;
code_r0x006add68:
                sym.rakurai_scheduler::scheduler_1::scheduler_metrics::SchedulerTimingMetricsInner::report::h90b2b91b92a96ab5__clone_llvm10757968547084596467_
                          (iStack_160,obj.anon.a328758cb714e25685698593616e0e8b.92.llvm.10757968547084596467,0x2f,1);
code_r0x006add95:
                *puStack_148 = 0;
                puStack_148[1] = 0;
                puStack_148[2] = 0;
                puStack_140[8] = 0;
                puStack_140[9] = 0;
                puStack_140[6] = 0;
                puStack_140[7] = 0;
                puStack_140[4] = 0;
                puStack_140[5] = 0;
                puStack_140[2] = 0;
                puStack_140[3] = 0;
                *puStack_140 = 0;
                puStack_140[1] = 0;
                puStack_140[10] = 0;
                if (*(arg2 + 0xb88) != 0) {
                    (**0xe37e48)(*(arg2 + 0xb80),0,*(arg2 + 0xb88) << 3);
                }
                *(arg2 + 0xc28) = 0;
                *(arg2 + 0xb68) = uVar41;
                *(arg2 + 0xb70) = iVar42;
            }
code_r0x006ade0d:
            auVar56 = (**0xe38230)();
            uStack_258 = auVar56._0_8_;
            pppppppuStack_250 = CONCAT44(pppppppuStack_250._4_4_,auVar56._8_4_);
            sym.__rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler_Tx__as_rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait_Tx__::receive_completed_rakurai::hfd140bd5bdf3ec72
                      (&pppppppuStack_2d8,iStack_280,iStack_288);
            pppppppuVar45 = uStack_2d0;
            pppppppuVar28 = uStack_2c8;
            if (pppppppuStack_2d8 != 3) goto code_r0x006af55f;
            pppppppuStack_1e8 = uStack_2d0;
            pppppppuStack_1e0 = uStack_2c8;
            auVar57 = (**0xe38248)(&uStack_258);
            iVar29 = (auVar57._8_8_ & 0xffffffff) / 1000 + auVar57._0_8_ * 1000000;
            *(arg2 + 0xaa8) = *(arg2 + 0xaa8) + pppppppuStack_1e8;
            *(arg2 + 0xab0) = *(arg2 + 0xab0) + pppppppuStack_1e0;
            *(arg2 + 0x9b8) = *(arg2 + 0x9b8) + pppppppuStack_1e8;
            *(arg2 + 0x9c0) = *(arg2 + 0x9c0) + pppppppuStack_1e0;
            *(arg2 + 0xcd0) = *(arg2 + 0xcd0) + iVar29;
            *(arg2 + 0xc18) = *(arg2 + 0xc18) + iVar29;
            if (puStack_278 - 1U < 2) {
                if ((uStack_2dc & 1) != 0) {
                    while (*(arg2 + 0x298) != 0) {
                        iVar29 = *(arg2 + 0x290);
                        iVar42 = *(arg2 + 0x288);
                        uVar32 = 0;
                        if (*(arg2 + 0x280) <= iVar29 + 1U) {
                            uVar32 = *(arg2 + 0x280);
                        }
                        *(arg2 + 0x290) = (iVar29 - uVar32) + 1;
                        *(arg2 + 0x298) = *(arg2 + 0x298) + -1;
                        iVar29 = iVar29 * 0x20;
                        uVar41 = *(iVar42 + iVar29);
                        uVar32 = *(iVar42 + 8 + iVar29);
                        uVar35 = *(iVar42 + 0x10 + iVar29);
                        uVar5 = *(iVar42 + 0x18 + iVar29);
                        (**0xe382c0)(&pppppppuStack_2d8,0x37d418,0x11);
                        pcVar14 = *0xe38620;
                        pppppppuVar37 = &pppppppuStack_2d8;
                        (**0xe38620)(pppppppuVar37,0x37d429,0x13,uVar41);
                        (*pcVar14)(pppppppuVar37,0x37d43c,0x14,uVar32);
                        (*pcVar14)(pppppppuVar37,0x37d450,0xd,uVar35);
                        (*pcVar14)(pppppppuVar37,0x37d45d,0x11,uVar5);
                        uStack_48 = uStack_298;
                        uStack_40 = uStack_290;
                        pppppppuStack_80 = uStack_2d0;
                        pppppppuStack_78 = uStack_2c8;
                        uStack_70 = CONCAT44(uStack_2c0._4_4_,uStack_2c0);
                        ppppppuStack_58 = ppppppuStack_2a8;
                        puStack_50 = puStack_2a0;
                        puStack_68 = puStack_2b8;
                        ppppppuStack_60 = ppppppuStack_2b0;
                        pppppppuStack_88 = pppppppuStack_2d8;
                        (**0xe382d0)(&pppppppuStack_88,3);
                    }
                    if (*(arg2 + 0x760) != 0) {
                        uVar38 = *(arg2 + 0x750);
                        if (uVar38 == 0) {
                            uVar33 = 0;
                        }
                        else {
                            (**0xe37e48)(*(arg2 + 0x748),0xff,uVar38 + 0x11);
                            uVar33 = (uVar38 + 1 & 0xfffffffffffffff8) - (uVar38 + 1 >> 3);
                            if (uVar38 < 8) {
                                uVar33 = uVar38;
                            }
                        }
                        *(arg2 + 0x760) = 0;
                        *(arg2 + 0x758) = uVar33;
                    }
                    sym.__rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler_Tx__as_rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait_Tx__::retry_tx_end_of_slot::hffb32d40698396dd
                              (iStack_280);
                    uStack_2dc = 0;
                    iVar29 = *piStack_260;
                    goto joined_r0x006ae0e5;
                }
                uStack_2dc = 0;
code_r0x006ae0f8:
                iVar29 = *piStack_260;
                if (iVar29 != 0) goto code_r0x006ae1ad;
code_r0x006ae2a0:
                uVar41 = 0;
                pppppppuVar17 = uStack_2d0;
                pppppppuVar19 = uStack_19c;
            }
            else {
                if (puStack_278 != 0) goto code_r0x006ae0f8;
                auVar56 = (**0xe38230)();
                uStack_258 = auVar56._0_8_;
                pppppppuStack_250 = CONCAT44(pppppppuStack_250._4_4_,auVar56._8_4_);
                sym.__rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler_Tx__as_rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait_Tx__::receive_completed_rakurai::hfd140bd5bdf3ec72
                          (&pppppppuStack_2d8,iStack_280,iStack_288);
                pppppppuVar45 = uStack_2d0;
                pppppppuVar28 = uStack_2c8;
                if (pppppppuStack_2d8 != 3) goto code_r0x006af55f;
                pppppppuStack_1e8 = uStack_2d0;
                pppppppuStack_1e0 = uStack_2c8;
                auVar57 = (**0xe38248)(&uStack_258);
                iVar29 = (auVar57._8_8_ & 0xffffffff) / 1000 + auVar57._0_8_ * 1000000;
                *(arg2 + 0xaa8) = *(arg2 + 0xaa8) + pppppppuStack_1e8;
                *(arg2 + 0xab0) = *(arg2 + 0xab0) + pppppppuStack_1e0;
                *(arg2 + 0x9b8) = *(arg2 + 0x9b8) + pppppppuStack_1e8;
                *(arg2 + 0x9c0) = *(arg2 + 0x9c0) + pppppppuStack_1e0;
                *(arg2 + 0xcd0) = *(arg2 + 0xcd0) + iVar29;
                *(arg2 + 0xc18) = *(arg2 + 0xc18) + iVar29;
                iVar29 = *piStack_260;
joined_r0x006ae0e5:
                if (iVar29 == 0) goto code_r0x006ae2a0;
code_r0x006ae1ad:
                uVar38 = *(arg2 + 0x8b8);
                if (uVar38 != 0) {
                    uVar33 = uVar38;
                    if ((uVar38 & 7) != 0) {
                        uVar33 = 0;
                        do {
                            iVar29 = *(iVar29 + 0xc0 + *(iVar29 + 0xba) * 8);
                            uVar33 = uVar33 + 1;
                        } while ((uVar38 & 7) != uVar33);
                        uVar33 = uVar38 - uVar33;
                    }
                    if (7 < uVar38) {
                        do {
                            iVar29 = *(iVar29 + 0xc0 + *(iVar29 + 0xba) * 8);
                            iVar29 = *(iVar29 + 0xc0 + *(iVar29 + 0xba) * 8);
                            iVar29 = *(iVar29 + 0xc0 + *(iVar29 + 0xba) * 8);
                            iVar29 = *(iVar29 + 0xc0 + *(iVar29 + 0xba) * 8);
                            iVar29 = *(iVar29 + 0xc0 + *(iVar29 + 0xba) * 8);
                            iVar29 = *(iVar29 + 0xc0 + *(iVar29 + 0xba) * 8);
                            iVar29 = *(iVar29 + 0xc0 + *(iVar29 + 0xba) * 8);
                            iVar29 = *(iVar29 + 0xc0 + *(iVar29 + 0xba) * 8);
                            uVar33 = uVar33 - 8;
                        } while (uVar33 != 0);
                    }
                }
                if ((*(iVar29 + 0xba) == 0) || (puVar25 = iVar29 + *(iVar29 + 0xba) * 0x10 + -0x10, puVar25 == NULL))
                goto code_r0x006ae2a0;
                uVar41 = *puVar25;
                pppppppuVar17 = uStack_2d0;
                pppppppuVar19 = uStack_19c;
            }
            uStack_19c._4_4_ = pppppppuVar19 >> 0x20;
            uStack_2d0._4_4_ = pppppppuVar17 >> 0x20;
            *(*(arg2 + 0x820) + 0x10) = uVar41;
            uStack_108 = 0;
            Stack_100 = 0;
            auStack_118 = 0x0;
            auStack_128 = 0x0;
            uStack_f9 = 0;
            uStack_f8 = 0;
            uStack_f6 = 0;
            puVar11 = CONCAT44(uStack_2c0._4_4_,uStack_2c0);
            if (1 < puStack_278 - 2U) {
                uStack_19c = pppppppuVar19;
                if (puStack_278 == 0) {
                    pppppppuStack_2d8 = CONCAT44(uStack_194,uStack_19c._4_4_);
                    uStack_2d0._0_4_ = uStack_190;
                    auVar57 = (**0xe38248)(&pppppppuStack_2d8);
                    auVar12._8_8_ = 0;
                    auVar12._0_8_ = auVar57._0_8_;
                    auVar15._8_8_ = 0;
                    auVar15._0_8_ = (auVar57._8_8_ & 0xffffffff) / 1000000;
                    auVar15 = auVar12 * ZEXT816(1000) + auVar15;
                    uVar34 = auVar15._0_8_;
                    uVar33 = auVar15._8_8_;
                    uVar38 = *(arg2 + 0x7d8);
                    if (uVar33 < (uVar34 < uVar38)) {
                        if (*(arg2 + 0x2a0) == 0 && *(arg2 + 0x2a8) == 0) {
                            uStack_1d8 = 0xdcaec8;
                            goto code_r0x006af7ea;
                        }
                        iVar29 = (**0xe383a8)(uVar34,uVar33,*(arg2 + 0x2a0));
                        *(arg2 + 0x800) = iVar29;
                        uVar38 = *(arg2 + 0x810) * iVar29;
                        iVar42 = *(arg2 + 0x818) * iVar29;
                        Stack_100 = iVar42;
                        uStack_f9 = iVar42 >> 0x38;
                        if (*(arg2 + 0x808) != iVar29) {
                            *(arg2 + 0x808) = iVar29;
                            uStack_f6 = 1;
                            sym.rakurai_scheduler::scheduler_1::controller::Controller_R_S_::redump_filtered_txns::h3b6042622f50034d
                                      (arg2,iVar42,0);
                        }
                        uVar33 = *(arg2 + 0x7e0);
                        uVar27 = (**0xe38360)();
                        uVar34 = *(arg2 + 2000);
                        uVar36 = 0;
                        if (uVar34 <= uVar27) {
                            uVar36 = uVar27 - uVar34;
                        }
                        if (uVar33 < uVar36) {
                            LOCK();
                            bVar44 = uVar34 == *(arg2 + 2000);
                            if (bVar44) {
                                *(arg2 + 2000) = uVar27;
                            }
                            UNLOCK();
                            if (uVar34 != 0 && bVar44) {
                                sym.rakurai_scheduler::scheduler_1::controller::Controller_R_S_::redump_filtered_txns::h3b6042622f50034d
                                          (arg2,iVar42,1);
                            }
                        }
                        sym.rakurai_scheduler::scheduler_1::controller::Controller_R_S_::update_actual_cus_and_print_logs::h708b0447f2394729
                                  (arg2,uVar38,iVar42);
                        uVar33 = *(arg2 + 0x468);
                        if (uVar33 == 0) {
                            iVar29 = 0;
                        }
                        else {
                            iVar42 = *(arg2 + 0x460);
                            if (3 < uVar33) {
                                uVar34 = uVar33 & 0xfffffffffffffffc;
                                iVar29 = 0;
                                iVar39 = 0;
                                uVar36 = 0;
                                iVar54 = 0;
                                iVar55 = 0;
                                do {
                                    piVar1 = iVar42 + uVar36 * 8;
                                    iVar29 = iVar29 + *piVar1;
                                    iVar39 = iVar39 + piVar1[1];
                                    piVar1 = iVar42 + 0x10 + uVar36 * 8;
                                    iVar54 = iVar54 + *piVar1;
                                    iVar55 = iVar55 + piVar1[1];
                                    uVar36 = uVar36 + 4;
                                } while (uVar34 != uVar36);
                                iVar29 = iVar55 + iVar39 + iVar54 + iVar29;
                                goto code_r0x006af537;
                            }
                            uVar34 = 0;
                            iVar29 = 0;
                            do {
                                iVar29 = iVar29 + *(iVar42 + uVar34 * 8);
                                uVar34 = uVar34 + 1;
code_r0x006af537:
                            } while (uVar33 != uVar34);
                        }
                        uVar33 = iVar29 + *(arg2 + 0x7c8);
                        if (uVar38 < uVar33 || uVar38 - uVar33 == 0) {
                            *(arg2 + 0xb40) = *(arg2 + 0xb40) + 1;
                            *(arg2 + 0xa50) = *(arg2 + 0xa50) + 1;
                            pppppppuVar17 = CONCAT44(uStack_2d0._4_4_,uStack_2d0);
                            puVar11 = CONCAT44(uStack_2c0._4_4_,uStack_2c0);
                            pppppppuVar19 = uStack_19c;
                            goto code_r0x006ae2eb;
                        }
                    }
                    else {
                        uVar41 = *(arg2 + 0x7f8);
                        Stack_100 = uVar41;
                        uStack_f9 = uVar41 >> 0x38;
                        auVar57 = (**0xe38248)(&pppppppuStack_2d8);
                        auVar13._8_8_ = 0;
                        auVar13._0_8_ = auVar57._0_8_;
                        auVar16._8_8_ = 0;
                        auVar16._0_8_ = (auVar57._8_8_ & 0xffffffff) / 1000000;
                        auVar16 = auVar13 * ZEXT816(1000) + auVar16;
                        iVar29 = auVar16._8_8_;
                        if (iVar29 != 0 || -iVar29 < (*(arg2 + 0x7e8) < auVar16._0_8_)) {
                            auVar48._8_4_ = uVar38 >> 0x20;
                            auVar48._0_8_ = uVar38;
                            auVar48._12_4_ = *0x358784;
                            fVar52 = ((auVar48._8_8_ - *0x358028) + (CONCAT44(*0x358780,uVar38) - *0x358020)) /
                                     *0x377ff8;
                            uVar32 = 0;
                            if (0.0 <= fVar52) {
                                uVar32 = fVar52 - *0x378548 & fVar52 >> 0x3f | fVar52;
                            }
                            if (*0x378000 < fVar52) {
                                uVar32 = 0xffffffffffffffff;
                            }
                            *(arg2 + 0x7e8) = *(arg2 + 0x7e8) + (uVar32 - uVar38) / 3;
                            sym.rakurai_scheduler::scheduler_1::controller::Controller_R_S_::redump_filtered_txns::h3b6042622f50034d
                                      (arg2,uVar41,1);
                            uVar41 = *(arg2 + 0x7f8);
                        }
                        sym.rakurai_scheduler::scheduler_1::controller::Controller_R_S_::update_actual_cus_and_print_logs::h708b0447f2394729
                                  (arg2,*(arg2 + 0x7f0),uVar41);
                    }
                    auVar56 = (**0xe38230)();
                    pppppppuStack_200 = auVar56._0_8_;
                    pppppppuStack_1f8 = CONCAT44(pppppppuStack_1f8._4_4_,auVar56._8_4_);
                    iVar29 = *(arg2 + 0x828);
                    pppppppuVar37 = iVar29 + 0x10;
                    uVar24 = *(iVar29 + 0x10);
                    if (uVar24 < 0x3ffffffe) {
                        LOCK();
                        uVar2 = *pppppppuVar37;
                        if (uVar24 == uVar2) {
                            *pppppppuVar37 = uVar24 + 1;
                        }
                        UNLOCK();
                        if (uVar24 != uVar2) goto code_r0x006af4ff;
                    }
                    else {
code_r0x006af4ff:
                        (**0xe381c8)(pppppppuVar37);
                    }
                    if (*(iVar29 + 0x18) != '\0') {
                        uStack_258 = iVar29 + 0x20;
                        pppppppuStack_250 = pppppppuVar37;
                        (**0xe37860)(0x37d4ea,0x2b,&uStack_258,0xdcb100,0xdcaef8);
                        goto code_r0x006afa6e;
                    }
                    uVar23 = (**0xe381c0)(*(*(iVar29 + 0x28) + 0x3f0) + 0x10,0x3772a0);
                    sym.__rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler_Tx__as_rakurai_scheduler::scheduler_1::rakurai_scheduler_trait::RakuraiSchedulerTrait_Tx__::rakurai_schedule::hd99e9ca52fb0a928
                              (&pppppppuStack_2d8,iStack_280,iStack_288,uVar23,iStack_180,auStack_128);
                    pppppppuVar45 = uStack_2c8;
                    uVar24 = uStack_2d0;
                    uVar32 = uStack_2d0._4_4_;
                    pppppppuVar28 = CONCAT44(uStack_2c0._4_4_,uStack_2c0);
                    if (pppppppuStack_2d8 != 1) {
                        puStack_228 = puStack_2a0;
                        ppppppuStack_238 = ppppppuStack_2b0;
                        ppppppuStack_230 = ppppppuStack_2a8;
                        uStack_258 = CONCAT44(uStack_2d0._4_4_,uStack_2d0);
                        puStack_240 = puStack_2b8;
                        LOCK();
                        uVar24 = *pppppppuVar37;
                        *pppppppuVar37 = *pppppppuVar37 - 1;
                        UNLOCK();
                        pppppppuStack_250 = uStack_2c8;
                        pppppppuStack_248 = pppppppuVar28;
                        if (SBORROW4(0,uVar24 - 1 & 0xbfffffff)) {
                            (**0xe37d60)(pppppppuVar37);
                        }
                        auVar57 = (**0xe38248)(&pppppppuStack_200);
                        uVar32 = auVar57._8_8_ & 0xffffffff;
                        pppppppuStack_2d8 = &pppppppuStack_248;
                        uStack_2d0 = &ppppppuStack_238;
                        uStack_2c8 = &ppppppuStack_230;
                        uStack_2c0 = auStack_128;
                        puStack_2b8 = auStack_128 + 8;
                        ppppppuStack_2b0 = auStack_118;
                        ppppppuStack_2a8 = auStack_118 + 8;
                        puStack_2a0 = &uStack_108;
                        sym.rakurai_scheduler::scheduler_1::scheduler_metrics::RakuraiSchedulerCountMetrics::update::h0a2fa3a5d9db372e
                                  (piStack_208,&pppppppuStack_2d8);
                        iVar29 = uVar32 / 1000 + auVar57._0_8_ * 1000000;
                        *(arg2 + 0xca8) = *(arg2 + 0xca8) + puStack_228;
                        *(arg2 + 0xcb0) = *(arg2 + 0xcb0) + iVar29;
                        *(arg2 + 0xbf0) = puStack_228 + *(arg2 + 0xbf0);
                        *(arg2 + 0xbf8) = iVar29 + *(arg2 + 0xbf8);
                        pppppppuVar17 = uStack_2d0;
                        puVar11 = uStack_2c0;
                        pppppppuVar19 = uStack_19c;
                        goto code_r0x006ae2eb;
                    }
                    puStack_278 = puStack_2b8;
                    LOCK();
                    uVar2 = *pppppppuVar37;
                    *pppppppuVar37 = *pppppppuVar37 - 1;
                    UNLOCK();
                    if (SBORROW4(0,uVar2 - 1 & 0xbfffffff)) {
                        (**0xe37d60)(pppppppuVar37);
                    }
                    puVar18 = CONCAT44(uStack_2c0._4_4_,uStack_2c0);
                    uVar32 = uVar32 << 0x20;
                    in_RCX = puStack_278;
                }
                else {
                    uStack_2d0 = pppppppuVar17;
                    auVar56 = (**0xe38230)();
                    pppppppuVar28 = *piStack_260;
                    iVar29 = 0;
                    auStack_98 = auVar56;
                    if (pppppppuVar28 != NULL) {
                        pppppppuVar37 = &pppppppuStack_2d8;
                        do {
                            uVar38 = *(arg2 + 0x8b8);
                            if (uVar38 != 0) {
                                uVar33 = uVar38;
                                if ((uVar38 & 7) != 0) {
                                    uVar33 = 0;
                                    do {
                                        pppppppuVar28 = pppppppuVar28[*(pppppppuVar28 + 0xba) + 0x18];
                                        uVar33 = uVar33 + 1;
                                    } while ((uVar38 & 7) != uVar33);
                                    uVar33 = uVar38 - uVar33;
                                }
                                if (7 < uVar38) {
                                    do {
                                        pppppuVar6 = pppppppuVar28[*(pppppppuVar28 + 0xba) + 0x18]
                                                     [*(pppppppuVar28[*(pppppppuVar28 + 0xba) + 0x18] + 0xba) + 0x18];
                                        ppppuVar7 = pppppuVar6[*(pppppuVar6 + 0xba) + 0x18];
                                        pppuVar8 = ppppuVar7[*(ppppuVar7 + 0xba) + 0x18];
                                        ppuVar9 = pppuVar8[*(pppuVar8 + 0xba) + 0x18];
                                        puVar10 = ppuVar9[*(ppuVar9 + 0xba) + 0x18];
                                        iVar42 = *(puVar10 + *(puVar10 + 0xba) * 2 + 0x30);
                                        pppppppuVar28 = *(iVar42 + 0xc0 + *(iVar42 + 0xba) * 8);
                                        uVar33 = uVar33 - 8;
                                    } while (uVar33 != 0);
                                }
                            }
                            if (*(pppppppuVar28 + 0xba) == 0) break;
                            uStack_2c8 = *(pppppppuVar28 + 0xba) - 1;
                            uStack_2d0._0_4_ = 0;
                            uStack_2d0._4_4_ = 0;
                            uStack_2c0._0_4_ = SUB84(piStack_260,0);
                            uStack_2c0._4_4_ = piStack_260 >> 0x20;
                            pppppppuStack_2d8 = pppppppuVar28;
                            sym.alloc::collections::btree::map::entry::OccupiedEntry_K_V_A_::remove_kv::hd389f6178e992b58
                                      (pppppppuVar37);
                            if (*piStack_1c0 != 3) {
                                if (extraout_RDX < *(arg2 + 0x878)) {
                                    iVar42 = *(*(arg2 + 0x870) + 0x210 + extraout_RDX * 0x2a0);
                                    if (iVar42 != 3) {
                                        if (iVar42 == 2) {
                                            (**0xe37440)(0x37d37b,0x1a,0xdcaeb0);
                                        }
                                        else {
                                            iVar42 = *(arg2 + 0x870) + extraout_RDX * 0x2a0;
                                            if (*(iVar42 + 0xaa) == '\0') {
                                                (**0xe37e58)(0,0,
                                                            obj.anon.03e8274212885106ad63e7c6f74f5e44.12.llvm.2028329540595395077
                                                            );
                                            }
                                            else {
                                                pppppppuStack_200 = NULL;
                                                pppppppuStack_1f8 = 0x1;
                                                pppppppuStack_1f0 = NULL;
                                                uStack_2c8._0_4_ = 0x60000020;
                                                uStack_2c8._4_4_ = 0;
                                                pppppppuStack_2d8 = &pppppppuStack_200;
                                                uStack_2d0._0_4_ = 0xdcb058;
                                                uStack_2d0._4_4_ = 0;
                                                cVar22 = (**0xe38260)(*(iVar42 + 0xa8) + *(*(iVar42 + 0xa0) + 0x18),
                                                                      pppppppuVar37);
                                                if (cVar22 == '\0') {
                                                    uStack_258 = pppppppuStack_200;
                                                    pppppppuStack_250 = pppppppuStack_1f8;
                                                    pppppppuStack_248 = pppppppuStack_1f0;
                                                    puStack_240 = CONCAT44(puStack_240._4_4_,3);
                                                    sym.crossbeam_channel::channel::Sender_T_::try_send::h3ecb456130ff71f4
                                                              (pppppppuVar37,piStack_1c0,&uStack_258);
                                                    uStack_2c8 = CONCAT44(uStack_2c8._4_4_,uStack_2c8);
                                                    if ((pppppppuStack_2d8 != 2) &&
                                                       (uStack_2c8 = CONCAT44(uStack_2c8._4_4_,uStack_2c8),
                                                       CONCAT44(uStack_2d0._4_4_,uStack_2d0) != 0)) {
                                                        (**0xe37488)(CONCAT44(uStack_2c8._4_4_,uStack_2c8),
                                                                     CONCAT44(uStack_2d0._4_4_,uStack_2d0),1);
                                                    }
                                                    goto code_r0x006ae7d6;
                                                }
                                                (**0xe37860)(0x37d4b3,0x37,&uStack_258,0xdcb0e0,0xdcb088);
                                            }
                                        }
                                        goto code_r0x006afa6e;
                                    }
                                }
                                (**0xe37508)();
                                pppppppuVar37 = (**0xe37510)(0x1c,1);
                                uVar41 = *0x37d3a9;
                                if (pppppppuVar37 != NULL) {
                                    *(pppppppuVar37 + 0xc) = CONCAT44(*0x37d3a5,*0x37d3a1);
                                    *(pppppppuVar37 + 0x14) = uVar41;
                                    ppppppuVar31 = CONCAT44(*0x37d3a1,*0x37d39d);
                                    *pppppppuVar37 = *0x37d395;
                                    pppppppuVar37[1] = ppppppuVar31;
                                    uVar24 = 2;
                                    uVar32 = CONCAT71(uVar32 >> 8,1);
                                    goto code_r0x006aed88;
                                }
                                (**0xe37788)(1,0x1c);
                                goto code_r0x006afa6e;
                            }
code_r0x006ae7d6:
                            sym.__rakurai_scheduler::rakurai_transaction_state_container::RakuraiTransactionContainer_Tx__as_rakurai_scheduler::rakurai_transaction_state_container::RakuraiStateContainer_Tx__::remove_by_id::h10ab73ee0cae99c1
                                      (iStack_288);
                            iVar29 = iVar29 + 1;
                            pppppppuVar28 = *piStack_260;
                        } while (pppppppuVar28 != NULL);
                    }
                    *(arg2 + 0xae0) = *(arg2 + 0xae0) + iVar29;
                    *(arg2 + 0x9f0) = *(arg2 + 0x9f0) + iVar29;
                    uVar24 = 3;
                    uVar32 = 0;
code_r0x006aed88:
                    auVar57 = (**0xe38248)(auStack_98);
                    puVar11 = CONCAT44(uStack_2c0._4_4_,uStack_2c0);
                    puVar18 = CONCAT44(uStack_2c0._4_4_,uStack_2c0);
                    if (uVar32 == '\0') {
                        iVar29 = (auVar57._8_8_ & 0xffffffff) / 1000 + auVar57._0_8_ * 1000000;
                        *(arg2 + 0xcb8) = *(arg2 + 0xcb8) + iVar29;
                        *(arg2 + 0xc00) = *(arg2 + 0xc00) + iVar29;
                        pppppppuVar17 = uStack_2d0;
                        pppppppuVar19 = uStack_19c;
                        goto code_r0x006ae2eb;
                    }
                    in_RCX = 0x1c;
                    uVar32 = 0;
                    pppppppuVar45 = 0x1c;
                    pppppppuVar28 = pppppppuVar37;
                }
                pppppppuVar17 = uStack_2d0;
                puVar11 = puVar18;
                pppppppuVar19 = uStack_19c;
                if (uVar24 != 3) {
                    uVar32 = uVar32 | uVar24;
                    *(*(arg2 + 0x830) + 0x10) = 1;
                    if (uVar24 != 4) goto code_r0x006af593;
                    (**0xe38380)(pppppppuVar45,pppppppuVar28);
                    goto code_r0x006afa6e;
                }
            }
code_r0x006ae2eb:
            *(arg2 + 0xc90) = *(arg2 + 0xc90) + auStack_b8._8_8_;
            *(arg2 + 0xbd8) = *(arg2 + 0xbd8) + auStack_b8._8_8_;
            *(arg2 + 0xaf0) = *(arg2 + 0xaf0) + auStack_d8._8_8_;
            auVar47._8_4_ = auStack_e8._0_4_;
            auVar47._0_8_ = auStack_e8._0_8_;
            auVar47._12_4_ = auStack_e8._4_4_;
            *(arg2 + 0xa80) = *(arg2 + 0xa80) + auStack_e8._0_8_;
            *(arg2 + 0xa88) = *(arg2 + 0xa88) + auVar47._8_8_;
            piVar1 = arg2 + 0xb10 + (uStack_1a8 != 0) * 8;
            *piVar1 = *piVar1 + 1;
            *(arg2 + 0xa00) = *(arg2 + 0xa00) + auStack_d8._8_8_;
            *(arg2 + 0x990) = auStack_e8._0_8_ + *(arg2 + 0x990);
            *(arg2 + 0x998) = auVar47._8_8_ + *(arg2 + 0x998);
            piVar1 = arg2 + 0xa20 + (uStack_1a8 != 0) * 8;
            *piVar1 = *piVar1 + 1;
            auStack_b8 = 0x0;
            auStack_c8 = 0x0;
            auStack_d8 = 0x0;
            auStack_e8 = 0x0;
            uStack_a8 = 0;
            uStack_2d0 = pppppppuVar17;
            uStack_2c0 = puVar11;
            uStack_19c = pppppppuVar19;
            cVar22 = (**0xe38d10)(piStack_208);
            puVar26 = *(arg2 + 0x8b0);
            if (puVar26 != NULL) {
                uVar38 = *(arg2 + 0x8b8);
                if (uVar38 == 0) {
                    uVar3 = *(puVar26 + 0xba);
                    if (uVar3 != 0) {
                        uVar38 = *puVar26;
code_r0x006ae973:
                        if (puVar26 + uVar3 * 2 + -2 == NULL) goto code_r0x006af7b4;
                        uVar33 = puVar26[uVar3 * 2 + -2];
                        if (uVar38 < *(arg2 + 0xaf8)) {
                            *(arg2 + 0xaf8) = uVar38;
                            if (uVar33 <= **pauStack_218) goto code_r0x006ae9a6;
code_r0x006ae9dd:
                            **pauStack_218 = uVar33;
                            if (*(arg2 + 0xa08) <= uVar38) goto code_r0x006ae9f1;
code_r0x006ae9af:
                            *(arg2 + 0xa08) = uVar38;
                            uVar38 = *puStack_210;
                        }
                        else {
                            if (**pauStack_218 < uVar33) goto code_r0x006ae9dd;
code_r0x006ae9a6:
                            if (uVar38 < *(arg2 + 0xa08)) goto code_r0x006ae9af;
code_r0x006ae9f1:
                            uVar38 = *puStack_210;
                        }
                        if (uVar38 < uVar33) {
                            *puStack_210 = uVar33;
                        }
                    }
                }
                else {
                    uVar34 = uVar38 & 7;
                    puVar30 = puVar26;
                    uVar33 = uVar38;
                    if (uVar34 != 0) {
                        uVar33 = 0;
                        do {
                            puVar30 = puVar30[0x18];
                            uVar33 = uVar33 + 1;
                        } while (uVar34 != uVar33);
                        uVar33 = uVar38 - uVar33;
                    }
                    if (7 < uVar38) {
                        do {
                            puVar30 = *(*(*(*(*(*(*(puVar30[0x18] + 0xc0) + 0xc0) + 0xc0) + 0xc0) + 0xc0) + 0xc0) + 0xc0
                                       );
                            uVar33 = uVar33 - 8;
                        } while (uVar33 != 0);
                    }
                    if (*(puVar30 + 0xba) != 0) {
                        uVar33 = uVar38;
                        if ((uVar38 & 7) != 0) {
                            uVar33 = 0;
                            do {
                                puVar26 = puVar26[*(puVar26 + 0xba) + 0x18];
                                uVar33 = uVar33 + 1;
                            } while (uVar34 != uVar33);
                            uVar33 = uVar38 - uVar33;
                        }
                        if (7 < uVar38) {
                            do {
                                iVar29 = *(puVar26[*(puVar26 + 0xba) + 0x18] + 0xc0 +
                                          *(puVar26[*(puVar26 + 0xba) + 0x18] + 0xba) * 8);
                                iVar29 = *(iVar29 + 0xc0 + *(iVar29 + 0xba) * 8);
                                iVar29 = *(iVar29 + 0xc0 + *(iVar29 + 0xba) * 8);
                                iVar29 = *(iVar29 + 0xc0 + *(iVar29 + 0xba) * 8);
                                iVar29 = *(iVar29 + 0xc0 + *(iVar29 + 0xba) * 8);
                                iVar29 = *(iVar29 + 0xc0 + *(iVar29 + 0xba) * 8);
                                puVar26 = *(iVar29 + 0xc0 + *(iVar29 + 0xba) * 8);
                                uVar33 = uVar33 - 8;
                            } while (uVar33 != 0);
                        }
                        uVar3 = *(puVar26 + 0xba);
                        if (uVar3 != 0) {
                            uVar38 = *puVar30;
                            goto code_r0x006ae973;
                        }
code_r0x006af7b4:
                        (**0xe37770)(obj.anon.06228222837a0ccab5ae122175c0ba3f.131.llvm.10741653363056930047);
                        goto code_r0x006afa6e;
                    }
                }
            }
            uVar34 = (**0xe38360)();
            uVar38 = *(arg2 + 0xa78);
            uVar33 = 0;
            if (uVar38 <= uVar34) {
                uVar33 = uVar34 - uVar38;
            }
            if (1000 < uVar33) {
                LOCK();
                bVar44 = uVar38 == *(arg2 + 0xa78);
                if (bVar44) {
                    *(arg2 + 0xa78) = uVar34;
                }
                UNLOCK();
                if (uVar38 != 0 && bVar44) {
                    if (cVar22 != '\0') {
                        sym.rakurai_scheduler::scheduler_1::scheduler_metrics::SchedulerCountMetricsInner::report::ha451781c1170aaa5__clone_llvm10757968547084596467_
                                  (pauStack_1d0,obj.anon.a328758cb714e25685698593616e0e8b.106.llvm.10757968547084596467
                                   ,0x1e,obj.anon.a328758cb714e25685698593616e0e8b.107.llvm.10757968547084596467,0x2a
                                   ,0);
                    }
                    *(arg2 + 0xb28) = 0;
                    pauStack_1d0[6] = 0x0;
                    pauStack_1d0[5] = 0x0;
                    pauStack_1d0[4] = 0x0;
                    pauStack_1d0[3] = 0x0;
                    pauStack_1d0[2] = 0x0;
                    pauStack_1d0[1] = 0x0;
                    *pauStack_1d0 = 0x0;
                    *pauStack_1d0[7] = 0;
                    *(arg2 + 0xaf8) = 0xffffffffffffffff;
                    pauStack_218[1] = 0x0;
                    *pauStack_218 = 0x0;
                    *pauStack_218[2] = 0;
                    pauStack_168[2] = 0x0;
                    pauStack_168[1] = 0x0;
                    *pauStack_168 = 0x0;
                }
            }
            in_RCX = (**0xe38360)();
            puVar11 = *(arg2 + 0xce8);
            uVar38 = 0;
            if (puVar11 <= in_RCX) {
                uVar38 = in_RCX - puVar11;
            }
            pppppppuVar45 = extraout_XMM0_Qa;
            pppppppuVar28 = extraout_XMM0_Qb_01;
            if (1000 < uVar38) {
                LOCK();
                bVar44 = puVar11 == *(arg2 + 0xce8);
                if (bVar44) {
                    *(arg2 + 0xce8) = in_RCX;
                }
                UNLOCK();
                bVar44 = !bVar44;
                in_RCX = CONCAT71(in_RCX >> 8,puVar11 == NULL || bVar44);
                if (puVar11 != NULL && !bVar44) {
                    if (cVar22 != '\0') {
                        in_RCX = NULL;
                        sym.rakurai_scheduler::scheduler_1::scheduler_metrics::SchedulerTimingMetricsInner::report::h90b2b91b92a96ab5__clone_llvm10757968547084596467_
                                  (iStack_188,obj.anon.a328758cb714e25685698593616e0e8b.108.llvm.10757968547084596467,
                                   0x2a);
                    }
                    pppppppuVar45 = NULL;
                    pppppppuVar28 = NULL;
                    *pauStack_178 = 0x0;
                    *pauStack_178[1] = 0;
                    pauStack_170[4] = 0x0;
                    pauStack_170[3] = 0x0;
                    pauStack_170[2] = 0x0;
                    pauStack_170[1] = 0x0;
                    *pauStack_170 = 0x0;
                    *pauStack_170[5] = 0;
                    if (*(arg2 + 0xc40) != 0) {
                        pppppppuVar45 = (**0xe37e48)(*(arg2 + 0xc38),0,*(arg2 + 0xc40) << 3);
                        pppppppuVar28 = extraout_XMM0_Qb_02;
                    }
                    *(arg2 + 0xce0) = 0;
                }
            }
            iVar29 = *(arg2 + 0x978);
            if (iVar29 != 0) {
                iVar42 = *(arg2 + 0x970);
                iVar39 = 0;
                do {
                    pppppppuVar45 = (**0xe38d48)(*(iVar42 + iVar39) + 0x10,0);
                    iVar39 = iVar39 + 8;
                    pppppppuVar28 = extraout_XMM0_Qb_03;
                } while (iVar29 << 3 != iVar39);
            }
        } while (*(*(arg2 + 0x838) + 0x10) == '\0');
    }
    uVar32 = uVar32 << 0x20 | uStack_2e0;
    *(*(arg2 + 0x830) + 0x10) = 1;
code_r0x006af593:
    puVar26 = puStack_138;
    *puStack_138 = uVar32;
    puStack_138[1] = pppppppuVar45;
    puStack_138[2] = pppppppuVar28;
    puStack_138[3] = in_RCX;
    sym._ZN4core3ptr444drop_in_place_LT_rakurai_scheduler..scheduler_1..controller..Controller_LT_rakurai_scheduler..scheduler_receiver..RakuraiTransactionViewReceiveAndBuffer_C_rakurai_scheduler..scheduler_1..rakurai_scheduler..RakuraiScheduler_LT_solana_runtime_transaction..runtime_transaction..RuntimeTransaction_LT_agave_transaction_view..resolved_transaction_view..ResolvedTransactionView_LT_alloc..sync..Arc_LT_alloc..vec..Vec_LT_u8_GT__GT__GT__GT__GT__GT__GT_17hc31edd2d1dca02a9E_2
              (arg2);
    return puVar26;
}

