
//WARNING: Type propagation algorithm not settling

void sym.rakurai_scheduler::scheduler_update_notifier::dispatch_scheduler_update::h3718bad03c64d0e8
               (int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *puVar3;
    uint64_t uVar4;
    code *pcVar5;
    uint32_t uVar6;
    bool bVar7;
    uint64_t *puVar8;
    uint64_t uVar9;
    int64_t iVar10;
    char cVar11;
    uint8_t uVar12;
    uint16_t uVar13;
    int iVar14;
    uint64_t uVar15;
    code *******pppppppcVar16;
    ulong uVar17;
    code ******ppppppcVar18;
    uint32_t uVar19;
    int64_t iVar20;
    int64_t iVar21;
    code *******pppppppcVar22;
    uchar (*pauVar23) [16];
    uchar (*pauVar24) [16];
    uchar auVar25 [16];
    uchar auVar26 [16];
    uchar auVar27 [16];
    uchar auVar28 [12];
    uchar auStack_2d9 [9];
    int64_t iStack_2d0;
    ulong *puStack_2c8;
    ulong *puStack_2c0;
    uchar auStack_2b8 [16];
    code *******pppppppcStack_2a8;
    code *******pppppppcStack_2a0;
    code *******pppppppcStack_298;
    code *******pppppppcStack_290;
    code *******pppppppcStack_288;
    code *******pppppppcStack_280;
    code *******pppppppcStack_278;
    code *******pppppppcStack_270;
    ulong uStack_268;
    ulong uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    code *******pppppppcStack_208;
    code *******pppppppcStack_200;
    code *******pppppppcStack_1f8;
    code *******pppppppcStack_1f0;
    code *******pppppppcStack_1e8;
    code *******pppppppcStack_1e0;
    code *******pppppppcStack_1d8;
    uchar uStack_1d0;
    uchar uStack_1cf;
    ushort uStack_1ce;
    uchar uStack_1cc;
    uchar uStack_1cb;
    ushort uStack_1ca;
    unkbyte6 Stack_1c8;
    ushort uStack_1c2;
    unkbyte6 Stack_1c0;
    ushort uStack_1ba;
    unkbyte6 Stack_1b8;
    ushort uStack_1b2;
    unkbyte6 Stack_1b0;
    ushort uStack_1aa;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    code *******pppppppcStack_188;
    code *******pppppppcStack_180;
    code *******pppppppcStack_178;
    code *******pppppppcStack_170;
    uint64_t uStack_168;
    int64_t iStack_160;
    int64_t iStack_158;
    ulong *puStack_150;
    int64_t iStack_148;
    code ******ppppppcStack_140;
    code *******pppppppcStack_138;
    code *******pppppppcStack_130;
    code *******pppppppcStack_128;
    code *******pppppppcStack_120;
    code *******pppppppcStack_118;
    code *******pppppppcStack_110;
    code *******pppppppcStack_108;
    code *******pppppppcStack_100;
    uchar auStack_f8 [16];
    uchar auStack_e8 [16];
    uchar auStack_d8 [16];
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    code ******ppppppcStack_a8;
    ulong uStack_a0;
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
    
    //rakurai_scheduler::scheduler_update_notifier::dispatch_scheduler_update::h3718bad03c64d0e8
    iVar2 = *(arg1 + 0x18);
    if (iVar2 == 0) {
        return;
    }
    if (*(arg2 + 0x10) == 0) {
        return;
    }
    puVar3 = *(arg2 + 8);
    pppppppcStack_138 = *puVar3;
    pppppppcStack_130 = puVar3[1];
    pppppppcStack_128 = puVar3[2];
    pppppppcStack_120 = puVar3[3];
    pppppppcStack_118 = puVar3[4];
    pppppppcStack_110 = puVar3[5];
    pppppppcStack_108 = puVar3[6];
    pppppppcStack_100 = puVar3[7];
    arg3 = *arg3;
    pppppppcVar22 = arg3 + 0x10;
    uVar19 = *(arg3 + 0x10);
    if (uVar19 < 0x3ffffffe) {
        LOCK();
        uVar1 = *pppppppcVar22;
        if (uVar19 == uVar1) {
            *pppppppcVar22 = uVar19 + 1;
        }
        UNLOCK();
        if (uVar19 != uVar1) goto code_r0x005e5244;
        cVar11 = *(arg3 + 0x18);
        uVar17 = uStack_a0;
    }
    else {
code_r0x005e5244:
        (**0xe381c8)(pppppppcVar22);
        cVar11 = *(arg3 + 0x18);
        uVar17 = uStack_a0;
    }
    uStack_a0 = uVar17;
    if (cVar11 != '\0') {
        pppppppcStack_2a8 = arg3 + 0x20;
        pppppppcStack_2a0 = pppppppcVar22;
        (**0xe37860)(0x379f97,0x2b,&pppppppcStack_2a8,0xdc7960,0xdc7470);
        goto code_r0x005e53a0;
    }
    uStack_a0._4_4_ = uVar17 >> 0x20;
    puStack_2c8 = arg3 + 0x20;
    auStack_2d9._1_8_ = pppppppcVar22;
    iStack_2d0 = arg2;
    puStack_2c0 = arg3;
    uVar9 = uStack_168;
    iVar10 = iStack_160;
    puStack_150 = arg1;
    iStack_148 = iVar2;
    if (*(arg3 + 0x38) != 0) {
        uVar15 = sym.core::hash::BuildHasher::hash_one::h030b13df3a9038cc(arg3 + 0x40,&pppppppcStack_138);
        pppppppcVar22 = *0xe37e50;
        iVar21 = *(arg3 + 0x20);
        uVar4 = *(arg3 + 0x28);
        auVar26 = pshufb(ZEXT416(uVar15 >> 0x39),0x0);
        iVar2 = iVar21 + -0x60;
        iVar20 = 0;
        while( true ) {
            uVar15 = uVar15 & uVar4;
            auVar27 = *(iVar21 + uVar15);
            auVar25[0] = -(auVar27[0] == auVar26[0]);
            auVar25[1] = -(auVar27[1] == auVar26[1]);
            auVar25[2] = -(auVar27[2] == auVar26[2]);
            auVar25[3] = -(auVar27[3] == auVar26[3]);
            auVar25[4] = -(auVar27[4] == auVar26[4]);
            auVar25[5] = -(auVar27[5] == auVar26[5]);
            auVar25[6] = -(auVar27[6] == auVar26[6]);
            auVar25[7] = -(auVar27[7] == auVar26[7]);
            auVar25[8] = -(auVar27[8] == auVar26[8]);
            auVar25[9] = -(auVar27[9] == auVar26[9]);
            auVar25[10] = -(auVar27[10] == auVar26[10]);
            auVar25[0xb] = -(auVar27[0xb] == auVar26[0xb]);
            auVar25[0xc] = -(auVar27[0xc] == auVar26[0xc]);
            auVar25[0xd] = -(auVar27[0xd] == auVar26[0xd]);
            auVar25[0xe] = -(auVar27[0xe] == auVar26[0xe]);
            auVar25[0xf] = -(auVar27[0xf] == auVar26[0xf]);
            uVar13 = SUB161(auVar25 >> 7,0) & 1 | (SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                     (SUB161(auVar25 >> 0x17,0) & 1) << 2 | (SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                     (SUB161(auVar25 >> 0x27,0) & 1) << 4 | (SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                     (SUB161(auVar25 >> 0x37,0) & 1) << 6 | (SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                     (SUB161(auVar25 >> 0x47,0) & 1) << 8 | (SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                     (SUB161(auVar25 >> 0x57,0) & 1) << 10 | (SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                     (SUB161(auVar25 >> 0x67,0) & 1) << 0xc | (SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                     (SUB161(auVar25 >> 0x77,0) & 1) << 0xe | (auVar25[0xf] >> 7) << 0xf;
            uVar19 = uVar13;
            uVar9 = uStack_168;
            iVar10 = iStack_160;
            auVar25 = auStack_f8;
            uVar17 = uStack_a0;
            while (iStack_160 = iVar20, auStack_f8 = auVar27, uStack_168 = uVar15, uStack_a0 = uVar17, uVar13 != 0)
            {
                uVar1 = 0;
                for (uVar6 = uVar19; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                    uVar1 = uVar1 + 1;
                }
                auStack_2b8 = auVar26;
                iStack_158 = iVar21;
                iVar14 = (*pppppppcVar22)(&pppppppcStack_138,(uVar1 + uStack_168 & uVar4) * -0x60 + iVar2,0x40);
                bVar7 = true;
                if (iVar14 == 0) goto code_r0x005e4ae5;
                uVar13 = uVar19 - 1 & uVar19;
                uVar19 = CONCAT22(uVar19 - 1 >> 0x10,uVar13);
                uVar15 = uStack_168;
                auVar27 = auStack_f8;
                iVar20 = iStack_160;
                iVar21 = iStack_158;
                auVar26 = auStack_2b8;
                uVar9 = uStack_168;
                iVar10 = iStack_160;
                auVar25 = auStack_f8;
                uVar17 = uStack_a0;
            }
            uStack_a0._4_4_ = uVar17 >> 0x20;
            auVar27[0] = -(auStack_f8[0] == -1);
            auVar27[1] = -(auStack_f8[1] == -1);
            auVar27[2] = -(auStack_f8[2] == -1);
            auVar27[3] = -(auStack_f8[3] == -1);
            auVar27[4] = -(auStack_f8[4] == -1);
            auVar27[5] = -(auStack_f8[5] == -1);
            auVar27[6] = -(auStack_f8[6] == -1);
            auVar27[7] = -(auStack_f8[7] == -1);
            auVar27[8] = -(auStack_f8[8] == -1);
            auVar27[9] = -(auStack_f8[9] == -1);
            auVar27[10] = -(auStack_f8[10] == -1);
            auVar27[0xb] = -(auStack_f8[0xb] == -1);
            auVar27[0xc] = -(auStack_f8[0xc] == -1);
            auVar27[0xd] = -(auStack_f8[0xd] == -1);
            auVar27[0xe] = -(auStack_f8[0xe] == -1);
            auVar27[0xf] = -(auStack_f8[0xf] == -1);
            auStack_f8 = auVar25;
            if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 || (SUB161(auVar27 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar27 >> 0x17,0) & 1) != 0) || (SUB161(auVar27 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar27 >> 0x27,0) & 1) != 0) || (SUB161(auVar27 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar27 >> 0x37,0) & 1) != 0) || (SUB161(auVar27 >> 0x3f,0) & 1) != 0) ||
                      (SUB161(auVar27 >> 0x47,0) & 1) != 0) || (SUB161(auVar27 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar27 >> 0x57,0) & 1) != 0) || (SUB161(auVar27 >> 0x5f,0) & 1) != 0) ||
                  (SUB161(auVar27 >> 0x67,0) & 1) != 0) || (SUB161(auVar27 >> 0x6f,0) & 1) != 0) ||
                (SUB161(auVar27 >> 0x77,0) & 1) != 0) || auVar27[0xf] < '\0') break;
            uVar15 = uStack_168 + iStack_160 + 0x10;
            iVar20 = iStack_160 + 0x10;
            uStack_168 = uVar9;
            iStack_160 = iVar10;
        }
    }
    iStack_160 = iVar10;
    uStack_168 = uVar9;
    bVar7 = false;
code_r0x005e4ae5:
    LOCK();
    uVar19 = *auStack_2d9._1_8_;
    *auStack_2d9._1_8_ = *auStack_2d9._1_8_ - 1;
    UNLOCK();
    iVar2 = iStack_2d0;
    if (SBORROW4(0,uVar19 - 1 & 0xbfffffff)) {
        (**0xe37d60)();
        iVar2 = iStack_2d0;
    }
    if (bVar7) {
        return;
    }
    iStack_2d0 = iVar2;
    auVar28 = (**0xe384c0)();
    ppppppcStack_a8 = auVar28._0_8_;
    uStack_a0 = CONCAT44(uStack_a0._4_4_,auVar28._8_4_);
    (**0xe384c8)(&pppppppcStack_2a8,&ppppppcStack_a8,0,0);
    if (pppppppcStack_2a8 == 1) {
        pppppppcStack_208 = pppppppcStack_2a0;
        pppppppcStack_200 = CONCAT44(pppppppcStack_200._4_4_,pppppppcStack_298._0_4_);
        pppppppcStack_2a8 = (**0xe37860)(0x379f97,0x2b,&pppppppcStack_208,0xdc79c0,0xdc7488);
code_r0x005e5307:
        pppppppcStack_2a0 = pppppppcStack_208;
        pppppppcStack_298 = pppppppcStack_200;
        (**0xe37860)(0x379f97,0x2b,&pppppppcStack_2a8,0xdc78e0,0xdc74a0);
    }
    else {
        ppppppcVar18 = pppppppcStack_2a0 * 1000000000 + (pppppppcStack_298 & 0xffffffff);
        ppppppcStack_140 = ppppppcVar18;
        sym.hkdf::Hkdf_H_I_::extract::h40df6c6395ece790
                  (&pppppppcStack_2a8,&ppppppcStack_140,8,&pppppppcStack_138,0x40);
        uStack_38 = uStack_218;
        uStack_48 = uStack_228;
        uStack_40 = uStack_220;
        uStack_58 = uStack_238;
        uStack_50 = uStack_230;
        uStack_68 = uStack_248;
        uStack_60 = uStack_240;
        uStack_78 = uStack_258;
        uStack_70 = uStack_250;
        uStack_88 = uStack_268;
        uStack_80 = uStack_260;
        uStack_98 = pppppppcStack_278;
        uStack_90 = pppppppcStack_270;
        ppppppcStack_a8 = pppppppcStack_288;
        uStack_a0 = pppppppcStack_280;
        (**0xe37508)();
        pppppppcVar16 = (**0xe37510)(0x48,1);
        puVar3 = puStack_2c0;
        if (pppppppcVar16 == NULL) {
            uVar17 = (**0xe37788)(1,0x48);
            sym.__std::sync::poison::rwlock::RwLockWriteGuard_T__as_core::ops::drop::Drop_::drop::h1d4f2651198db5f8
                      (&pppppppcStack_188);
            (**0xe37488)(pppppppcVar22,0x48,1);
            uVar17 = sym.imp._Unwind_Resume(uVar17);
            LOCK();
            uVar19 = *pppppppcStack_2a0;
            *pppppppcStack_2a0 = *pppppppcStack_2a0 - 1;
            UNLOCK();
            if (SBORROW4(0,uVar19 - 1 & 0xbfffffff)) goto code_r0x005e54eb;
            do {
                sym.imp._Unwind_Resume(uVar17);
code_r0x005e54eb:
                (**0xe37d60)();
            } while( true );
        }
        *pppppppcVar16 = ppppppcVar18;
        pppppppcVar16[1] = pppppppcStack_138;
        pppppppcVar16[2] = pppppppcStack_130;
        pppppppcVar16[3] = pppppppcStack_128;
        pppppppcVar16[4] = pppppppcStack_120;
        pppppppcVar16[5] = pppppppcStack_118;
        pppppppcVar16[6] = pppppppcStack_110;
        pppppppcVar16[7] = pppppppcStack_108;
        pppppppcVar16[8] = pppppppcStack_100;
        auStack_d8 = 0x0;
        auStack_e8 = 0x0;
        pppppppcStack_2a0 = 0x48;
        pppppppcStack_2a8 = pppppppcVar16;
        cVar11 = sym.hkdf::Hkdf_H_I_::expand_multi_info::h69898e404d357314
                           (&ppppppcStack_a8,&pppppppcStack_2a8,1,auStack_e8,0x20);
        if (cVar11 != '\0') {
            pppppppcStack_208 = auStack_2d9;
            pppppppcStack_200 = sym.__hkdf::errors::InvalidLength_as_core::fmt::Debug_::fmt::h5fa846588ece3298;
            (**0xe37780)(&pppppppcStack_2a8,0x36c4f6,&pppppppcStack_208);
            pppppppcStack_208 = pppppppcStack_2a0;
            pppppppcStack_200 = pppppppcStack_298;
            if (pppppppcStack_2a8 != 0x8000000000000000) goto code_r0x005e5307;
        }
        (**0xe384d0)(&uStack_c8,auStack_e8,0x20);
        LOCK();
        uVar19 = *auStack_2d9._1_8_;
        if (uVar19 == 0) {
            *auStack_2d9._1_8_ = 0x3fffffff;
        }
        UNLOCK();
        if (uVar19 != 0) {
            (**0xe38220)(auStack_2d9._1_8_);
        }
        puVar8 = *0xe37c38;
        if ((**0xe37c38 & 0x7fffffffffffffff) == 0) {
            uVar12 = 0;
            cVar11 = *(puVar3 + 0x18);
            pppppppcStack_290 = pppppppcStack_120;
            pppppppcStack_288 = pppppppcStack_118;
            pppppppcStack_280 = pppppppcStack_110;
            pppppppcStack_278 = pppppppcStack_108;
            pppppppcStack_270 = pppppppcStack_100;
        }
        else {
            uVar12 = (**0xe37c48)();
            uVar12 = uVar12 ^ 1;
            cVar11 = *(puVar3 + 0x18);
            pppppppcStack_290 = pppppppcStack_120;
            pppppppcStack_288 = pppppppcStack_118;
            pppppppcStack_280 = pppppppcStack_110;
            pppppppcStack_278 = pppppppcStack_108;
            pppppppcStack_270 = pppppppcStack_100;
        }
        pppppppcStack_120 = pppppppcStack_290;
        pppppppcStack_118 = pppppppcStack_288;
        pppppppcStack_110 = pppppppcStack_280;
        pppppppcStack_108 = pppppppcStack_278;
        pppppppcStack_100 = pppppppcStack_270;
        if (cVar11 == '\0') {
            uVar9 = pppppppcStack_180 >> 8;
            pppppppcStack_180 = CONCAT71(uVar9,uVar12);
            pppppppcStack_2a8 = pppppppcStack_138;
            pppppppcStack_2a0 = pppppppcStack_130;
            pppppppcStack_298 = pppppppcStack_128;
            pppppppcStack_188 = auStack_2d9._1_8_;
            sym.hashbrown::map::HashMap_K_V_S_A_::insert::hf1d51d2b0998bf6b
                      (&pppppppcStack_208,puStack_2c8,&pppppppcStack_2a8,&uStack_c8);
            if (((uVar12 == 0) && ((*puVar8 & 0x7fffffffffffffff) != 0)) && (cVar11 = (**0xe37c48)(), cVar11 == '\0'))
            {
                *(puVar3 + 0x18) = 1;
            }
            LOCK();
            uVar19 = *auStack_2d9._1_8_;
            *auStack_2d9._1_8_ = *auStack_2d9._1_8_ + 0xc0000001;
            UNLOCK();
            if (0x3fffffff < uVar19 + 0xc0000001) {
                (**0xe37d60)(auStack_2d9._1_8_);
            }
            auStack_2b8._0_8_ = pppppppcVar16;
            pauVar24 = *puStack_150;
            auVar26 = *pauVar24;
            uVar19 = ~(SUB161(auVar26 >> 7,0) & 1 | (SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                       (SUB161(auVar26 >> 0x17,0) & 1) << 2 | (SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                       (SUB161(auVar26 >> 0x27,0) & 1) << 4 | (SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                       (SUB161(auVar26 >> 0x37,0) & 1) << 6 | (SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                       (SUB161(auVar26 >> 0x47,0) & 1) << 8 | (SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                       (SUB161(auVar26 >> 0x57,0) & 1) << 10 | (SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                       (SUB161(auVar26 >> 0x67,0) & 1) << 0xc | (SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                       (SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (auVar26[0xf] >> 7) << 0xf);
            pauVar23 = pauVar24 + 1;
            auStack_2d9._1_8_ = iVar2 + 0xd0;
            puStack_2c0 = iVar2 + 0xe0;
            puStack_2c8 = iVar2 + 0xf6;
            do {
                if (uVar19 == 0) {
                    do {
                        auVar26 = *pauVar23;
                        pauVar24 = pauVar24 + -0x38;
                        pauVar23 = pauVar23 + 1;
                        uVar19 = SUB161(auVar26 >> 7,0) & 1 | (SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                                 (SUB161(auVar26 >> 0x17,0) & 1) << 2 | (SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                                 (SUB161(auVar26 >> 0x27,0) & 1) << 4 | (SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                                 (SUB161(auVar26 >> 0x37,0) & 1) << 6 | (SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                                 (SUB161(auVar26 >> 0x47,0) & 1) << 8 | (SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                                 (SUB161(auVar26 >> 0x57,0) & 1) << 10 | (SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                                 (SUB161(auVar26 >> 0x67,0) & 1) << 0xc | (SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                                 (SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (auVar26[0xf] >> 7) << 0xf;
                    } while (uVar19 == 0xffff);
                    uVar19 = ~uVar19;
                }
                (***(iStack_2d0 + 0xb8))
                          (&pppppppcStack_188,auStack_2d9._1_8_,*(iStack_2d0 + 0xc0),*(iStack_2d0 + 200));
                uStack_1cb = *(iStack_2d0 + 0xf5) == '\x01';
                if (uStack_1cb) {
                    pppppppcStack_2a8 = *puStack_2c8;
                    pppppppcStack_2a0 = puStack_2c8[1];
                    pppppppcStack_298 = puStack_2c8[2];
                    pppppppcStack_290 = puStack_2c8[3];
                }
                uVar1 = 0;
                for (uVar6 = uVar19; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                    uVar1 = uVar1 + 1;
                }
                pppppppcStack_1e8 = *(iStack_2d0 + 0xd8);
                uStack_1ce = *(iStack_2d0 + 0xf2);
                uStack_1cc = *(iStack_2d0 + 0xf4);
                uStack_1d0 = *(puStack_2c0 + 2);
                pppppppcStack_1e0 = *puStack_2c0;
                pppppppcStack_1d8 = puStack_2c0[1];
                uStack_1ba = SUB82(pppppppcStack_298,0);
                Stack_1b8 = pppppppcStack_298 >> 0x10;
                uStack_1b2 = SUB82(pppppppcStack_290,0);
                Stack_1b0 = pppppppcStack_290 >> 0x10;
                uStack_1ca = SUB82(pppppppcStack_2a8,0);
                Stack_1c8 = pppppppcStack_2a8 >> 0x10;
                uStack_1c2 = SUB82(pppppppcStack_2a0,0);
                Stack_1c0 = pppppppcStack_2a0 >> 0x10;
                pppppppcStack_208 = pppppppcStack_188;
                pppppppcStack_200 = pppppppcStack_180;
                pppppppcStack_1f8 = pppppppcStack_178;
                pppppppcStack_1f0 = pppppppcStack_170;
                uStack_198 = uStack_b8;
                uStack_190 = uStack_b0;
                uStack_1a8 = uStack_c8;
                uStack_1a0 = uStack_c0;
                iVar2 = *(pauVar24 + uVar1 * -0x38 + -8);
                uVar12 = (**0xe384d8)(iVar2 + 0x1c0,1);
                if (uVar12 == 2) {
                    uStack_238 = uStack_198;
                    uStack_230 = uStack_190;
                    uStack_248 = uStack_1a8;
                    uStack_240 = uStack_1a0;
                    uStack_258 = CONCAT26(uStack_1b2,Stack_1b8);
                    uStack_250 = CONCAT26(uStack_1aa,Stack_1b0);
                    uStack_268 = CONCAT26(uStack_1c2,Stack_1c8);
                    uStack_260 = CONCAT26(uStack_1ba,Stack_1c0);
                    pppppppcStack_270 =
                         CONCAT26(uStack_1ca,
                                  CONCAT15(uStack_1cb,
                                           CONCAT14(uStack_1cc,CONCAT22(uStack_1ce,CONCAT11(uStack_1cf,uStack_1d0))))
                                 );
                    pppppppcStack_278 = pppppppcStack_1d8;
                    pppppppcStack_288 = pppppppcStack_1e8;
                    pppppppcStack_280 = pppppppcStack_1e0;
                    pppppppcStack_298 = pppppppcStack_1f8;
                    pppppppcStack_290 = pppppppcStack_1f0;
                    pppppppcStack_2a8 = pppppppcStack_208;
                    pppppppcStack_2a0 = pppppppcStack_200;
                    sym.tokio::sync::mpsc::list::Tx_T_::push::hc59065a037824ce1(iVar2 + 0x80,&pppppppcStack_2a8);
                    (**0xe37808)(iVar2 + 0x100);
                }
                else {
                    uStack_230 = uStack_198;
                    uStack_228 = uStack_190;
                    uStack_240 = uStack_1a8;
                    uStack_238 = uStack_1a0;
                    uStack_250 = CONCAT26(uStack_1b2,Stack_1b8);
                    uStack_248 = CONCAT26(uStack_1aa,Stack_1b0);
                    uStack_260 = CONCAT26(uStack_1c2,Stack_1c8);
                    uStack_258 = CONCAT26(uStack_1ba,Stack_1c0);
                    pppppppcStack_2a0 = pppppppcStack_208;
                    pppppppcStack_298 = pppppppcStack_200;
                    pppppppcStack_290 = pppppppcStack_1f8;
                    pppppppcStack_288 = pppppppcStack_1f0;
                    pppppppcStack_280 = pppppppcStack_1e8;
                    pppppppcStack_278 = pppppppcStack_1e0;
                    pppppppcStack_270 = pppppppcStack_1d8;
                    uStack_268 = CONCAT26(uStack_1ca,
                                          CONCAT15(uStack_1cb,
                                                   CONCAT14(uStack_1cc,
                                                            CONCAT22(uStack_1ce,CONCAT11(uStack_1cf,uStack_1d0)))));
                    pppppppcStack_2a8 = uVar12 ^ 1;
                    if (1 < **0xe37408) {
                        pppppppcStack_188 = pauVar24 + uVar1 * -0x38 + -0x20;
                        pppppppcStack_180 = sym.__alloc::string::String_as_core::fmt::Display_::fmt::h9d11f1d81b352ac8;
                        pppppppcStack_178 = &pppppppcStack_2a8;
                        pppppppcStack_170 =
                             sym.__tokio::sync::mpsc::error::TrySendError_T__as_core::fmt::Display_::fmt::h97f37eca17b6b471
                        ;
                        pppppppcStack_1d8 = 0x2;
                        uStack_1d0 = 0x6a;
                        uStack_1cf = 0x9c;
                        uStack_1ce = 0x37;
                        uStack_1cc = 0;
                        uStack_1cb = 0;
                        uStack_1ca = 0;
                        Stack_1c8 = 0x2c;
                        uStack_1c2 = 0;
                        Stack_1b8 = 0x368c3d;
                        uStack_1b2 = 0;
                        Stack_1b0 = SUB86(&pppppppcStack_188,0);
                        uStack_1aa = &pppppppcStack_188 >> 0x30;
                        pppppppcStack_208 = NULL;
                        pppppppcStack_200 = 0x379c6a;
                        pppppppcStack_1f8 = 0x2c;
                        pppppppcStack_1f0 = NULL;
                        pppppppcStack_1e8 = 0x36c4ac;
                        pppppppcStack_1e0 = 0x49;
                        Stack_1c0 = 0x19d00000001;
                        uStack_1ba = 0;
                        (**0xe37468)(auStack_2d9,&pppppppcStack_208);
                    }
                    (*pppppppcStack_2a0[4])(&pppppppcStack_288,pppppppcStack_298,pppppppcStack_290);
                }
                uVar19 = uVar19 - 1 & uVar19;
                iStack_148 = iStack_148 + -1;
            } while (iStack_148 != 0);
            (**0xe37488)(auStack_2b8._0_8_,0x48,1);
            return;
        }
        uVar9 = pppppppcStack_2a0 >> 8;
        pppppppcStack_2a0 = CONCAT71(uVar9,uVar12);
        pppppppcStack_2a8 = auStack_2d9._1_8_;
        (**0xe37860)(0x379f97,0x2b,&pppppppcStack_2a8,0xdc7900,0xdc74b8);
    }
code_r0x005e53a0:
    //WARNING: Does not return
    pcVar5 = invalidInstructionException();
    (*pcVar5)();
}

