
uint64_t sym.rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler_Tx_::select_thread::h220a9fc92ff688f3
                   (int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg5,int64_t arg6)

{
    code *pcVar1;
    uint64_t uVar2;
    bool bVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uchar auVar10 [16];
    uint64_t in_stack_00000008;
    int64_t in_stack_00000010;
    uint64_t in_stack_00000018;
    
    //rakurai_scheduler::scheduler_1::rakurai_scheduler::RakuraiScheduler<Tx>::select_thread::h220a9fc92ff688f3
    if (arg1 == 0) {
code_r0x00684f79:
        auVar10 = (**0xe37770)(obj.anon.a328758cb714e25685698593616e0e8b.48.llvm.10757968547084596467);
        arg3 = auVar10._8_8_;
        uVar4 = auVar10._0_8_;
code_r0x00684f86:
        uVar4 = (**0xe37e58)(uVar4,arg3,obj.anon.a328758cb714e25685698593616e0e8b.49.llvm.10757968547084596467);
code_r0x00684f9c:
        uVar4 = (**0xe37e58)(uVar4,arg5,obj.anon.a328758cb714e25685698593616e0e8b.50.llvm.10757968547084596467);
    }
    else {
        uVar4 = 0;
        for (uVar5 = arg1; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
            uVar4 = uVar4 + 1;
        }
        if (arg3 <= uVar4) goto code_r0x00684f86;
        if (arg5 <= uVar4) goto code_r0x00684f9c;
        if (uVar4 < in_stack_00000008) {
            if (uVar4 < in_stack_00000018) {
                uVar5 = arg1 - 1U & arg1;
                if (uVar5 != 0) {
                    uVar9 = uVar4 * 8;
                    uVar7 = *(arg6 + 0x10 + uVar4 * 0x18) + *(in_stack_00000010 + uVar4 * 8);
                    uVar9 = *(arg2 + uVar9) + *(arg4 + uVar9);
                    do {
                        uVar2 = 0;
                        for (uVar6 = uVar5; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x8000000000000000) {
                            uVar2 = uVar2 + 1;
                        }
                        if (arg3 <= uVar2) {
code_r0x00684f66:
                            (**0xe37e58)();
                            goto code_r0x00684f79;
                        }
                        if (arg5 <= uVar2) {
code_r0x00684f56:
                            (**0xe37e58)();
                            goto code_r0x00684f66;
                        }
                        if (in_stack_00000008 <= uVar2) {
code_r0x00684f44:
                            (**0xe37e58)();
                            goto code_r0x00684f56;
                        }
                        if (in_stack_00000018 <= uVar2) {
                            (**0xe37e58)(uVar2,in_stack_00000018,
                                         obj.anon.a328758cb714e25685698593616e0e8b.52.llvm.10757968547084596467);
                            goto code_r0x00684f44;
                        }
                        uVar6 = uVar2 * 8;
                        uVar8 = *(arg2 + uVar6) + *(arg4 + uVar6);
                        uVar6 = *(arg6 + 0x10 + uVar2 * 0x18) + *(in_stack_00000010 + uVar2 * 8);
                        bVar3 = uVar9 <= uVar8;
                        if (uVar9 == uVar8) {
                            bVar3 = uVar7 <= uVar6;
                        }
                        if (!bVar3) {
                            uVar4 = uVar2;
                            uVar7 = uVar6;
                            uVar9 = uVar8;
                        }
                        uVar5 = uVar5 & uVar5 - 1;
                    } while (uVar5 != 0);
                }
                return uVar4;
            }
            goto code_r0x00684fc4;
        }
    }
    uVar4 = (**0xe37e58)(uVar4,in_stack_00000008,
                         obj.anon.a328758cb714e25685698593616e0e8b.51.llvm.10757968547084596467);
code_r0x00684fc4:
    (**0xe37e58)(uVar4,in_stack_00000018,obj.anon.a328758cb714e25685698593616e0e8b.52.llvm.10757968547084596467);
    pcVar1 = swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
}

