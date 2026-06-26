
ulong sym.fetch_bundle_tip(int64_t arg1)

{
    uint32_t *puVar1;
    ulong *puVar2;
    uchar auVar3 [16];
    uchar (*pauVar4) [16];
    uint64_t uVar5;
    code *pcVar6;
    uint16_t uVar7;
    ulong uVar8;
    int64_t iVar9;
    uint8_t uVar10;
    uint8_t uVar11;
    uint32_t uVar12;
    uint64_t uVar13;
    uint32_t uVar14;
    uint64_t uVar15;
    int64_t iVar16;
    uint32_t uVar17;
    uchar (*pauVar18) [16];
    uchar (*pauVar19) [16];
    ulong *puStack_d8;
    uint32_t *puStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_88;
    int64_t iStack_80;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    
    iVar16 = *0xe37378;
    if (*(*0xe37378 + 0x20) != 2) {
        (**0xe38330)(*0xe37378 + 0x20,0);
    }
    (**0xe38ef0)(&iStack_88);
    iVar16 = *(iVar16 + 0x18);
    puVar1 = iVar16 + 0x10;
    uVar17 = *(iVar16 + 0x10);
    if (uVar17 < 0x3ffffffe) {
        LOCK();
        uVar14 = *puVar1;
        if (uVar17 == uVar14) {
            *puVar1 = uVar17 + 1;
        }
        UNLOCK();
        if (uVar17 == uVar14) goto code_r0x006bc358;
    }
    (**0xe381c8)(puVar1);
code_r0x006bc358:
    if (*(iVar16 + 0x18) != '\0') {
        puStack_d8 = iVar16 + 0x20;
        puStack_d0 = puVar1;
        (**0xe37860)(0x37d4ea,0x2b,&puStack_d8,0xdcb180,0xdcb218);
    //WARNING: Does not return
        pcVar6 = invalidInstructionException();
        (*pcVar6)();
    }
    iVar9 = *(iVar16 + 0x38);
    if (iVar9 != 0) {
        pauVar18 = *(iVar16 + 0x20);
        pauVar19 = pauVar18 + 1;
        auVar3 = *pauVar18;
        uVar17 = ~(SUB161(auVar3 >> 7,0) & 1 | (SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                   (SUB161(auVar3 >> 0x17,0) & 1) << 2 | (SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                   (SUB161(auVar3 >> 0x27,0) & 1) << 4 | (SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                   (SUB161(auVar3 >> 0x37,0) & 1) << 6 | (SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                   (SUB161(auVar3 >> 0x47,0) & 1) << 8 | (SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                   (SUB161(auVar3 >> 0x57,0) & 1) << 10 | (SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                   (SUB161(auVar3 >> 0x67,0) & 1) << 0xc | (SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                   (SUB161(auVar3 >> 0x77,0) & 1) << 0xe | (auVar3[0xf] >> 7) << 0xf);
        do {
            if (uVar17 == 0) {
                do {
                    auVar3 = *pauVar19;
                    pauVar18 = pauVar18 + -0x28;
                    pauVar19 = pauVar19 + 1;
                    uVar17 = SUB161(auVar3 >> 7,0) & 1 | (SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                             (SUB161(auVar3 >> 0x17,0) & 1) << 2 | (SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                             (SUB161(auVar3 >> 0x27,0) & 1) << 4 | (SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                             (SUB161(auVar3 >> 0x37,0) & 1) << 6 | (SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                             (SUB161(auVar3 >> 0x47,0) & 1) << 8 | (SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                             (SUB161(auVar3 >> 0x57,0) & 1) << 10 | (SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                             (SUB161(auVar3 >> 0x67,0) & 1) << 0xc | (SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                             (SUB161(auVar3 >> 0x77,0) & 1) << 0xe | (auVar3[0xf] >> 7) << 0xf;
                } while (uVar17 == 0xffff);
                uVar17 = ~uVar17;
            }
            uVar14 = 0;
            for (uVar12 = uVar17; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
                uVar14 = uVar14 + 1;
            }
            uVar15 = uVar14;
            puVar2 = pauVar18 + uVar15 * -0x28 + -0x28;
            uStack_58 = *puVar2;
            uStack_50 = puVar2[1];
            puVar2 = pauVar18 + uVar15 * -0x28 + -0x18;
            uStack_48 = *puVar2;
            uStack_40 = puVar2[1];
            sym.hashbrown::rustc_entry::__impl_hashbrown::map::HashMap_K_V_S_A__::rustc_entry::h6c1094f044b99344
                      (&puStack_d8,&iStack_88,&uStack_58);
            if (puStack_d8 != NULL) {
                pauVar4 = *puStack_d8;
                uVar5 = puStack_d8[1];
                uVar13 = uVar5 & puStack_d0;
                auVar3 = *(*pauVar4 + uVar13);
                uVar14 = SUB161(auVar3 >> 7,0) & 1 | (SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                         (SUB161(auVar3 >> 0x17,0) & 1) << 2 | (SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                         (SUB161(auVar3 >> 0x27,0) & 1) << 4 | (SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                         (SUB161(auVar3 >> 0x37,0) & 1) << 6 | (SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                         (SUB161(auVar3 >> 0x47,0) & 1) << 8 | (SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                         (SUB161(auVar3 >> 0x57,0) & 1) << 10 | (SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                         (SUB161(auVar3 >> 0x67,0) & 1) << 0xc | (SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                         (SUB161(auVar3 >> 0x77,0) & 1) << 0xe | (auVar3[0xf] >> 7) << 0xf;
                if (uVar14 == 0) {
                    iVar16 = 0x10;
                    do {
                        uVar13 = uVar13 + iVar16 & uVar5;
                        auVar3 = *(*pauVar4 + uVar13);
                        uVar7 = SUB161(auVar3 >> 7,0) & 1 | (SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                                (SUB161(auVar3 >> 0x17,0) & 1) << 2 | (SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                                (SUB161(auVar3 >> 0x27,0) & 1) << 4 | (SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                                (SUB161(auVar3 >> 0x37,0) & 1) << 6 | (SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                                (SUB161(auVar3 >> 0x47,0) & 1) << 8 | (SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                                (SUB161(auVar3 >> 0x57,0) & 1) << 10 | (SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                                (SUB161(auVar3 >> 0x67,0) & 1) << 0xc | (SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                                (SUB161(auVar3 >> 0x77,0) & 1) << 0xe | (auVar3[0xf] >> 7) << 0xf;
                        uVar14 = uVar7;
                        iVar16 = iVar16 + 0x10;
                    } while (uVar7 == 0);
                }
                uVar8 = *(pauVar18 + uVar15 * -0x28 + -8);
                uVar12 = 0;
                for (; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
                    uVar12 = uVar12 + 1;
                }
                uVar15 = uVar12 + uVar13 & uVar5;
                uVar11 = (*pauVar4)[uVar15];
                if (-1 < uVar11) {
                    auVar3 = *pauVar4;
                    uVar14 = 0;
                    for (uVar12 = SUB161(auVar3 >> 7,0) & 1 | (SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                                  (SUB161(auVar3 >> 0x17,0) & 1) << 2 | (SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                                  (SUB161(auVar3 >> 0x27,0) & 1) << 4 | (SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                                  (SUB161(auVar3 >> 0x37,0) & 1) << 6 | (SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                                  (SUB161(auVar3 >> 0x47,0) & 1) << 8 | (SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                                  (SUB161(auVar3 >> 0x57,0) & 1) << 10 | (SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                                  (SUB161(auVar3 >> 0x67,0) & 1) << 0xc | (SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                                  (SUB161(auVar3 >> 0x77,0) & 1) << 0xe | (auVar3[0xf] >> 7) << 0xf; (uVar12 & 1) == 0;
                        uVar12 = uVar12 >> 1 | 0x80000000) {
                        uVar14 = uVar14 + 1;
                    }
                    uVar15 = uVar14;
                    uVar11 = (*pauVar4)[uVar15];
                }
                uVar10 = puStack_d0 >> 0x39;
                (*pauVar4)[uVar15] = uVar10;
                pauVar4[1][uVar15 - 0x10 & uVar5] = uVar10;
                *(pauVar4 + uVar15 * -0x28 + -0x28) = uStack_c8;
                puVar2 = pauVar4 + uVar15 * -0x28 + -0x20;
                *puVar2 = uStack_c0;
                puVar2[1] = uStack_b8;
                *(pauVar4 + uVar15 * -0x28 + -0x10) = uStack_b0;
                *(pauVar4 + uVar15 * -0x28 + -8) = uVar8;
                iVar16 = puStack_d8[3] - *0x358358;
                puStack_d8[2] = puStack_d8[2] - (uVar11 & 1);
                puStack_d8[3] = iVar16;
            }
            uVar17 = uVar17 - 1 & uVar17;
            iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
    }
    LOCK();
    uVar17 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (SBORROW4(0,uVar17 - 1 & 0xbfffffff)) {
        (**0xe37d60)();
    }
    uVar8 = sym.rakurai_scheduler::scheduler_receiver::rakurai_tip_amount_from_transaction::h5b9a5428b2abe422
                      (arg1,&iStack_88);
    if (iStack_80 != 0) {
        uVar15 = iStack_80 * 0x28 + 0x37U & 0xfffffffffffffff0;
        iVar16 = iStack_80 + uVar15 + 0x11;
        if (iVar16 != 0) {
            (**0xe37488)(iStack_88 - uVar15,iVar16,0x10);
        }
    }
    return uVar8;
}

