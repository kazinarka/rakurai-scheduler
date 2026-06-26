
uint64_t sym.rakurai_scheduler::scheduler_receiver::rakurai_tip_amount_from_transaction::h5b9a5428b2abe422
                   (int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    float8 fVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    uint16_t uVar5;
    uint16_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    code *pcVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    int64_t iVar16;
    uint32_t uVar17;
    uint16_t uVar18;
    uint16_t uVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    int64_t iVar22;
    int64_t iVar23;
    uint64_t uVar24;
    uint64_t uVar25;
    uchar (*pauVar26) [16];
    uchar (*pauVar27) [16];
    uchar (*pauVar28) [16];
    int64_t iVar29;
    bool bVar30;
    uchar auVar31 [16];
    uchar auVar32 [16];
    uchar auVar33 [16];
    float8 fVar34;
    uchar auVar35 [16];
    uchar auVar36 [16];
    
    //rakurai_scheduler::scheduler_receiver::rakurai_tip_amount_from_transaction::h5b9a5428b2abe422
    if ((*(arg2 + 0x18) == 0) || (uVar3 = *(arg1 + 0x14), uVar3 == 0)) {
        return 0;
    }
    iVar7 = *arg1;
    uVar5 = *(arg1 + 0x12);
    pauVar26 = *(iVar7 + 0x18) + uVar5;
    iVar8 = *arg2;
    uVar15 = *(arg2 + 8);
    pauVar27 = pauVar26;
code_r0x005db75a:
    pauVar28 = pauVar27 + 2;
    uVar13 = sym.core::hash::BuildHasher::hash_one::h46c1cdae8af607b0(arg2 + 0x20,pauVar27);
    auVar31 = pshufb(ZEXT416(uVar13 >> 0x39),0x0);
    iVar16 = 0;
code_r0x005db78e:
    uVar13 = uVar13 & uVar15;
    pcVar1 = iVar8 + uVar13;
    auVar35[0] = -(*pcVar1 == auVar31[0]);
    auVar35[1] = -(pcVar1[1] == auVar31[1]);
    auVar35[2] = -(pcVar1[2] == auVar31[2]);
    auVar35[3] = -(pcVar1[3] == auVar31[3]);
    auVar35[4] = -(pcVar1[4] == auVar31[4]);
    auVar35[5] = -(pcVar1[5] == auVar31[5]);
    auVar35[6] = -(pcVar1[6] == auVar31[6]);
    auVar35[7] = -(pcVar1[7] == auVar31[7]);
    auVar35[8] = -(pcVar1[8] == auVar31[8]);
    auVar35[9] = -(pcVar1[9] == auVar31[9]);
    auVar35[10] = -(pcVar1[10] == auVar31[10]);
    auVar35[0xb] = -(pcVar1[0xb] == auVar31[0xb]);
    auVar35[0xc] = -(pcVar1[0xc] == auVar31[0xc]);
    auVar35[0xd] = -(pcVar1[0xd] == auVar31[0xd]);
    auVar35[0xe] = -(pcVar1[0xe] == auVar31[0xe]);
    auVar35[0xf] = -(pcVar1[0xf] == auVar31[0xf]);
    uVar18 = SUB161(auVar35 >> 7,0) & 1 | (SUB161(auVar35 >> 0xf,0) & 1) << 1 | (SUB161(auVar35 >> 0x17,0) & 1) << 2
             | (SUB161(auVar35 >> 0x1f,0) & 1) << 3 | (SUB161(auVar35 >> 0x27,0) & 1) << 4 |
             (SUB161(auVar35 >> 0x2f,0) & 1) << 5 | (SUB161(auVar35 >> 0x37,0) & 1) << 6 |
             (SUB161(auVar35 >> 0x3f,0) & 1) << 7 | (SUB161(auVar35 >> 0x47,0) & 1) << 8 |
             (SUB161(auVar35 >> 0x4f,0) & 1) << 9 | (SUB161(auVar35 >> 0x57,0) & 1) << 10 |
             (SUB161(auVar35 >> 0x5f,0) & 1) << 0xb | (SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
             (SUB161(auVar35 >> 0x6f,0) & 1) << 0xd | (SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
             (auVar35[0xf] >> 7) << 0xf;
    uVar17 = uVar18;
    while( true ) {
        if (uVar18 == 0) goto code_r0x005db800;
        uVar11 = 0;
        for (uVar12 = uVar17; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
            uVar11 = uVar11 + 1;
        }
        uVar20 = uVar11 + uVar13 & uVar15;
        if (*(iVar8 + -0x18 + uVar20 * -0x28) == pauVar27[1] && *(iVar8 + -0x28 + uVar20 * -0x28) == *pauVar27) break;
        uVar18 = uVar17 - 1 & uVar17;
        uVar17 = CONCAT22(uVar17 - 1 >> 0x10,uVar18);
    }
    uVar18 = *(arg1 + 0x30);
    if (uVar18 == 0) {
        return 0;
    }
    iVar16 = *(iVar7 + 0x18);
    iVar9 = *(arg1 + 0x20);
    uVar13 = *(arg1 + 0x28);
    uVar24 = *(arg1 + 0x32);
    uVar20 = 0;
    uVar25 = 0;
code_r0x005dbab2:
    uVar25 = uVar25 & 0xffff;
    uVar14 = uVar24;
    do {
        if (uVar13 <= uVar25) {
code_r0x005dbae8:
            (**0xe37e58)(uVar25,uVar13,0xdc7180);
            pcVar10 = swi(3);
            uVar15 = (*pcVar10)();
            return uVar15;
        }
        uVar4 = *(iVar16 + uVar14);
        if (uVar3 <= uVar4) {
            (**0xe37e58)(uVar4,uVar3,0xdc7758);
            goto code_r0x005dbae8;
        }
        uVar19 = *(iVar9 + uVar25 * 6);
        uVar21 = *(iVar9 + 4 + uVar25 * 6);
        uVar6 = *(iVar9 + 2 + uVar25 * 6);
        iVar29 = uVar25 * 6;
        uVar25 = uVar25 + 1;
        iVar29 = uVar19 + uVar14 + uVar21 + 1 + *(iVar9 + 5 + iVar29);
        uVar24 = uVar6 + iVar29;
        if (0xb < uVar6) {
            iVar22 = *(iVar7 + 0x18) + uVar5;
            iVar23 = uVar4 * 0x20;
            if (((((*(iVar23 + iVar22) == 0 && *(iVar23 + 0x10 + iVar22) == 0) &&
                   (*(iVar23 + 8 + iVar22) == 0 && *(iVar23 + 0x18 + iVar22) == 0)) && (1 < uVar19)) &&
                (*(iVar16 + iVar29) == 2)) && (uVar4 = *(iVar16 + uVar14 + uVar21 + 2), uVar4 < uVar3)) {
                pauVar27 = pauVar26 + uVar4 * 2;
                uVar14 = sym.core::hash::BuildHasher::hash_one::h46c1cdae8af607b0(arg2 + 0x20,pauVar27);
                auVar31 = pshufb(ZEXT416(uVar14 >> 0x39),0x0);
                iVar22 = 0;
                while( true ) {
                    uVar14 = uVar14 & uVar15;
                    pcVar1 = iVar8 + uVar14;
                    auVar36[0] = -(*pcVar1 == auVar31[0]);
                    auVar36[1] = -(pcVar1[1] == auVar31[1]);
                    auVar36[2] = -(pcVar1[2] == auVar31[2]);
                    auVar36[3] = -(pcVar1[3] == auVar31[3]);
                    auVar36[4] = -(pcVar1[4] == auVar31[4]);
                    auVar36[5] = -(pcVar1[5] == auVar31[5]);
                    auVar36[6] = -(pcVar1[6] == auVar31[6]);
                    auVar36[7] = -(pcVar1[7] == auVar31[7]);
                    auVar36[8] = -(pcVar1[8] == auVar31[8]);
                    auVar36[9] = -(pcVar1[9] == auVar31[9]);
                    auVar36[10] = -(pcVar1[10] == auVar31[10]);
                    auVar36[0xb] = -(pcVar1[0xb] == auVar31[0xb]);
                    auVar36[0xc] = -(pcVar1[0xc] == auVar31[0xc]);
                    auVar36[0xd] = -(pcVar1[0xd] == auVar31[0xd]);
                    auVar36[0xe] = -(pcVar1[0xe] == auVar31[0xe]);
                    auVar36[0xf] = -(pcVar1[0xf] == auVar31[0xf]);
                    uVar19 = SUB161(auVar36 >> 7,0) & 1 | (SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                             (SUB161(auVar36 >> 0x17,0) & 1) << 2 | (SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                             (SUB161(auVar36 >> 0x27,0) & 1) << 4 | (SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                             (SUB161(auVar36 >> 0x37,0) & 1) << 6 | (SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                             (SUB161(auVar36 >> 0x47,0) & 1) << 8 | (SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                             (SUB161(auVar36 >> 0x57,0) & 1) << 10 | (SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                             (SUB161(auVar36 >> 0x67,0) & 1) << 0xc | (SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                             (SUB161(auVar36 >> 0x77,0) & 1) << 0xe | (auVar36[0xf] >> 7) << 0xf;
                    uVar17 = uVar19;
                    while (uVar19 != 0) {
                        uVar11 = 0;
                        for (uVar12 = uVar17; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
                            uVar11 = uVar11 + 1;
                        }
                        uVar21 = uVar11 + uVar14 & uVar15;
                        if (*(iVar8 + -0x18 + uVar21 * -0x28) == pauVar27[1] &&
                            *(iVar8 + -0x28 + uVar21 * -0x28) == *pauVar27) {
                            fVar2 = *(iVar8 + -8 + uVar21 * -0x28);
                            uVar14 = *(iVar16 + 4 + iVar29);
                            auVar31._8_4_ = uVar14 >> 0x20;
                            auVar31._0_8_ = uVar14;
                            auVar31._12_4_ = *0x358784;
                            fVar34 = ((auVar31._8_8_ - *0x358028) + (CONCAT44(*0x358780,uVar14) - *0x358020)) * fVar2;
                            uVar21 = 0;
                            if (0.0 <= fVar34) {
                                uVar21 = fVar34 - *0x378548 & fVar34 >> 0x3f | fVar34;
                            }
                            if (*0x378000 < fVar34) {
                                uVar21 = 0xffffffffffffffff;
                            }
                            if (fVar2 != *0x3784c8) {
                                uVar14 = uVar21;
                            }
                            if (NAN(fVar2) || NAN(*0x3784c8)) {
                                uVar14 = uVar21;
                            }
                            bVar30 = CARRY8(uVar20,uVar14);
                            uVar20 = uVar20 + uVar14;
                            if (bVar30) {
                                uVar20 = 0xffffffffffffffff;
                            }
                            if (uVar18 <= uVar25) {
                                return uVar20;
                            }
                            goto code_r0x005dbab2;
                        }
                        uVar19 = uVar17 - 1 & uVar17;
                        uVar17 = CONCAT22(uVar17 - 1 >> 0x10,uVar19);
                    }
                    auVar33[0] = -(*pcVar1 == -1);
                    auVar33[1] = -(pcVar1[1] == -1);
                    auVar33[2] = -(pcVar1[2] == -1);
                    auVar33[3] = -(pcVar1[3] == -1);
                    auVar33[4] = -(pcVar1[4] == -1);
                    auVar33[5] = -(pcVar1[5] == -1);
                    auVar33[6] = -(pcVar1[6] == -1);
                    auVar33[7] = -(pcVar1[7] == -1);
                    auVar33[8] = -(pcVar1[8] == -1);
                    auVar33[9] = -(pcVar1[9] == -1);
                    auVar33[10] = -(pcVar1[10] == -1);
                    auVar33[0xb] = -(pcVar1[0xb] == -1);
                    auVar33[0xc] = -(pcVar1[0xc] == -1);
                    auVar33[0xd] = -(pcVar1[0xd] == -1);
                    auVar33[0xe] = -(pcVar1[0xe] == -1);
                    auVar33[0xf] = -(pcVar1[0xf] == -1);
                    if ((((((((((((((((SUB161(auVar33 >> 7,0) & 1) != 0 || (SUB161(auVar33 >> 0xf,0) & 1) != 0) ||
                                    (SUB161(auVar33 >> 0x17,0) & 1) != 0) || (SUB161(auVar33 >> 0x1f,0) & 1) != 0) ||
                                  (SUB161(auVar33 >> 0x27,0) & 1) != 0) || (SUB161(auVar33 >> 0x2f,0) & 1) != 0) ||
                                (SUB161(auVar33 >> 0x37,0) & 1) != 0) || (SUB161(auVar33 >> 0x3f,0) & 1) != 0) ||
                              (SUB161(auVar33 >> 0x47,0) & 1) != 0) || (SUB161(auVar33 >> 0x4f,0) & 1) != 0) ||
                            (SUB161(auVar33 >> 0x57,0) & 1) != 0) || (SUB161(auVar33 >> 0x5f,0) & 1) != 0) ||
                          (SUB161(auVar33 >> 0x67,0) & 1) != 0) || (SUB161(auVar33 >> 0x6f,0) & 1) != 0) ||
                        (SUB161(auVar33 >> 0x77,0) & 1) != 0) || auVar33[0xf] < '\0') break;
                    uVar14 = uVar14 + iVar22 + 0x10;
                    iVar22 = iVar22 + 0x10;
                }
            }
        }
        uVar14 = uVar24;
        if (uVar18 <= uVar25) {
            return uVar20;
        }
    } while( true );
code_r0x005db800:
    auVar32[0] = -(*pcVar1 == -1);
    auVar32[1] = -(pcVar1[1] == -1);
    auVar32[2] = -(pcVar1[2] == -1);
    auVar32[3] = -(pcVar1[3] == -1);
    auVar32[4] = -(pcVar1[4] == -1);
    auVar32[5] = -(pcVar1[5] == -1);
    auVar32[6] = -(pcVar1[6] == -1);
    auVar32[7] = -(pcVar1[7] == -1);
    auVar32[8] = -(pcVar1[8] == -1);
    auVar32[9] = -(pcVar1[9] == -1);
    auVar32[10] = -(pcVar1[10] == -1);
    auVar32[0xb] = -(pcVar1[0xb] == -1);
    auVar32[0xc] = -(pcVar1[0xc] == -1);
    auVar32[0xd] = -(pcVar1[0xd] == -1);
    auVar32[0xe] = -(pcVar1[0xe] == -1);
    auVar32[0xf] = -(pcVar1[0xf] == -1);
    if ((((((((((((((((SUB161(auVar32 >> 7,0) & 1) != 0 || (SUB161(auVar32 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar32 >> 0x17,0) & 1) != 0) || (SUB161(auVar32 >> 0x1f,0) & 1) != 0) ||
                  (SUB161(auVar32 >> 0x27,0) & 1) != 0) || (SUB161(auVar32 >> 0x2f,0) & 1) != 0) ||
                (SUB161(auVar32 >> 0x37,0) & 1) != 0) || (SUB161(auVar32 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar32 >> 0x47,0) & 1) != 0) || (SUB161(auVar32 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar32 >> 0x57,0) & 1) != 0) || (SUB161(auVar32 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar32 >> 0x67,0) & 1) != 0) || (SUB161(auVar32 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar32 >> 0x77,0) & 1) != 0) || auVar32[0xf] < '\0') goto code_r0x005db820;
    uVar13 = uVar13 + iVar16 + 0x10;
    iVar16 = iVar16 + 0x10;
    goto code_r0x005db78e;
code_r0x005db820:
    pauVar27 = pauVar28;
    if (pauVar28 == pauVar26 + uVar3 * 2) {
        return 0;
    }
    goto code_r0x005db75a;
}

