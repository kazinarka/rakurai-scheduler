
void sym.rakurai_scheduler::switching_controller::SwitchingController::create_message::h80d6e7cc60b99772
               (int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    uint32_t uVar4;
    int64_t iVar5;
    code *pcVar6;
    ulong uStack_78;
    int64_t iStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    uint32_t *puStack_50;
    uint uStack_48;
    uint uStack_44;
    uint uStack_40;
    uint uStack_3c;
    int64_t iStack_38;
    uchar uStack_30;
    
    //rakurai_scheduler::switching_controller::SwitchingController::create_message::h80d6e7cc60b99772
    iVar5 = *(arg2 + 0x30);
    puVar1 = iVar5 + 0x10;
    uVar4 = *(iVar5 + 0x10);
    if (uVar4 < 0x3ffffffe) {
        LOCK();
        uVar2 = *puVar1;
        if (uVar4 == uVar2) {
            *puVar1 = uVar4 + 1;
        }
        UNLOCK();
        if (uVar4 == uVar2) {
            cVar3 = *(iVar5 + 0x18);
            goto joined_r0x006c175e;
        }
    }
    (**0xe381c8)(puVar1);
    cVar3 = *(iVar5 + 0x18);
joined_r0x006c175e:
    if (cVar3 == '\0') {
        iStack_58 = *(iVar5 + 0x20);
        puStack_50 = *(iVar5 + 0x28);
        uStack_48 = *(iVar5 + 0x30);
        uStack_44 = *(iVar5 + 0x34);
        uStack_40 = *(iVar5 + 0x38);
        uStack_3c = *(iVar5 + 0x3c);
        uStack_30 = 1;
        LOCK();
        uVar4 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        iStack_38 = arg3;
        if (SBORROW4(0,uVar4 - 1 & 0xbfffffff)) {
            (**0xe37d60)(puVar1);
        }
        sym.bincode::internal::serialize::h8b51634864b5845e(&iStack_70,&iStack_58);
        if (!SBORROW8(0,iStack_70)) {
            (**0xe38fd0)(arg1,uStack_68,uStack_60);
            if (iStack_70 != 0) {
                (**0xe37488)(uStack_68,iStack_70,1);
            }
            return;
        }
        uStack_78 = uStack_68;
        (**0xe37860)(obj.anon.6416ad03d2dfdff0085698d53c36cecb.152.llvm.8668054646338321894,0x2b,&uStack_78,0xdcbcc0
                     ,0xdcb3d0);
    }
    else {
        iStack_58 = iVar5 + 0x20;
        puStack_50 = puVar1;
        (**0xe37860)(obj.anon.6416ad03d2dfdff0085698d53c36cecb.152.llvm.8668054646338321894,0x2b,&iStack_58,0xdcbd00
                     ,0xdcb3b8);
    }
    //WARNING: Does not return
    pcVar6 = invalidInstructionException();
    (*pcVar6)();
}

