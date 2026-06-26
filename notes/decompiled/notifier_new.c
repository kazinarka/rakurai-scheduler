
int64_t sym.rakurai_scheduler::scheduler_update_notifier::SchedulerUpdateNotifier_Tx_::new::hcb33cdfa60eaf694
                  (int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg5,int64_t arg6)

{
    code *pcVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    ulong uVar5;
    ulong in_stack_00000008;
    ulong in_stack_00000010;
    ulong in_stack_00000018;
    ulong in_stack_00000020;
    ulong in_stack_00000028;
    ulong in_stack_00000030;
    ulong uStack_48;
    uint *puStack_40;
    ulong uStack_38;
    
    //rakurai_scheduler::scheduler_update_notifier::SchedulerUpdateNotifier<Tx>::new::hcb33cdfa60eaf694
    pcVar1 = *0xe37508;
    (**0xe37508)();
    (*pcVar1)();
    puStack_40 = (**0xe37510)(0x24,1);
    uVar5 = *0x379d00;
    if (puStack_40 != NULL) {
        *(puStack_40 + 4) = *0x379cf8;
        *(puStack_40 + 6) = uVar5;
        uVar4 = *0x379cf4;
        uVar3 = *0x379cf0;
        uVar2 = *0x379cec;
        *puStack_40 = *0x379ce8;
        puStack_40[1] = uVar2;
        puStack_40[2] = uVar3;
        puStack_40[3] = uVar4;
        puStack_40[8] = 0x64657a69;
        uStack_48 = 0x24;
        uStack_38 = 0x24;
        (**0xe384e0)(&uStack_48);
        *(arg1 + 0x10) = arg2;
        *(arg1 + 0x18) = arg3;
        *(arg1 + 0x20) = arg4;
        *(arg1 + 0x50) = arg5;
        *(arg1 + 0x28) = arg6;
        *(arg1 + 0x30) = in_stack_00000008;
        *(arg1 + 0x38) = in_stack_00000010;
        *(arg1 + 0x40) = in_stack_00000018;
        *arg1 = in_stack_00000020;
        *(arg1 + 8) = in_stack_00000028;
        *(arg1 + 0x48) = in_stack_00000030;
        return arg1;
    }
    (**0xe37788)(1,0x24);
    //WARNING: Does not return
    pcVar1 = invalidInstructionException();
    (*pcVar1)();
}

