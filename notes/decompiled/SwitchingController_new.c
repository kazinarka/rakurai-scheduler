
int64_t sym.rakurai_scheduler::switching_controller::SwitchingController::new::h0a0c261202843d74
                  (int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg5,int64_t arg6)

{
    ulong uVar1;
    int iVar2;
    ulong *puVar3;
    int64_t iVar4;
    code *pcVar5;
    ulong uVar6;
    code *pcVar7;
    ulong uVar8;
    uchar uVar9;
    bool bVar10;
    ulong in_stack_00000008;
    uchar uStack_50;
    unkbyte7 Stack_4f;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    
    //rakurai_scheduler::switching_controller::SwitchingController::new::h0a0c261202843d74
    (**0xe37508)();
    puVar3 = (**0xe37510)(0x18,8);
    if (puVar3 == NULL) {
        (**0xe37518)(8,0x18);
        goto code_r0x006c228a;
    }
    *puVar3 = 1;
    puVar3[1] = 1;
    *(puVar3 + 2) = 1;
    uVar9 = 1;
    LOCK();
    bVar10 = *(*0xe37390 + 0x20) == '\0';
    if (bVar10) {
        *(*0xe37390 + 0x20) = '\x01';
    }
    iVar4 = *0xe37390;
    UNLOCK();
    if (bVar10) {
        uVar9 = 0;
        iVar2 = (**0xe38a30)(*0xe37390,0,0);
        if (iVar2 != 0) goto code_r0x006c223f;
        *(iVar4 + 0x20) = 2;
        iVar4 = (**0xe38ff8)(iVar4);
        if (iVar4 != 0) {
            (**0xe39000)(&uStack_50,0x37dc5f,0x2c);
            *(arg1 + 0x28) = puVar3;
            *arg1 = 0;
            *(arg1 + 8) = iVar4;
            *(arg1 + 0x50) = 0;
            *(arg1 + 0x58) = 0;
            *(arg1 + 0x30) = arg2;
            *(arg1 + 0x20) = *(arg3 + 0x10);
            uVar6 = *(arg3 + 8);
            *(arg1 + 0x10) = *arg3;
            *(arg1 + 0x18) = uVar6;
            *(arg1 + 0x60) = CONCAT71(Stack_4f,uStack_50);
            *(arg1 + 0x68) = uStack_48;
            *(arg1 + 0x70) = uStack_40;
            *(arg1 + 0x78) = uStack_38;
            uVar6 = *arg4;
            uVar8 = *(arg4 + 8);
            uVar1 = *(arg4 + 0x18);
            *(arg1 + 0x90) = *(arg4 + 0x10);
            *(arg1 + 0x98) = uVar1;
            *(arg1 + 0x80) = uVar6;
            *(arg1 + 0x88) = uVar8;
            *(arg1 + 0xa0) = 0;
            *(arg1 + 0xa2) = 0;
            *(arg1 + 0x38) = arg5;
            *(arg1 + 0x40) = arg6;
            *(arg1 + 0x48) = in_stack_00000008;
            return arg1;
        }
        uVar8 = 0xdcc2f8;
        pcVar5 = obj.anon.6416ad03d2dfdff0085698d53c36cecb.150.llvm.8668054646338321894;
        uVar6 = 0x18;
        pcVar7 = 0x37e0cb;
    }
    else {
code_r0x006c223f:
        uVar8 = 0xdcb478;
        pcVar5 = 0xdcbc60;
        uVar6 = 0x2b;
        pcVar7 = obj.anon.6416ad03d2dfdff0085698d53c36cecb.152.llvm.8668054646338321894;
        uStack_50 = uVar9;
    }
    (**0xe37860)(pcVar7,uVar6,&uStack_50,pcVar5,uVar8);
code_r0x006c228a:
    //WARNING: Does not return
    pcVar5 = invalidInstructionException();
    (*pcVar5)();
}

