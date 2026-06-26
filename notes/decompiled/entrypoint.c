
ulong sym.entrypoint(int64_t arg1)

{
    ulong uVar1;
    ulong uVar2;
    uint uStack_78;
    uint uStack_74;
    uint uStack_70;
    uint uStack_6c;
    ulong uStack_68;
    uint uStack_58;
    uint uStack_54;
    uint uStack_50;
    uint uStack_4c;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    uint uStack_28;
    uint uStack_24;
    uint uStack_20;
    uint uStack_1c;
    ulong uStack_18;
    
    (**0xe3a260)(&uStack_58,arg1);
    uStack_68 = uStack_48;
    uStack_78 = uStack_58;
    uStack_74 = uStack_54;
    uStack_70 = uStack_50;
    uStack_6c = uStack_4c;
    uVar1 = CONCAT44(uStack_4c,uStack_50);
    (**0xe3a190)(&uStack_58,uStack_40,uVar1,uStack_48,uStack_38,uStack_30);
    if (CONCAT44(uStack_54,uStack_58) == -0x7fffffffffffffe6) {
        uVar2 = 0;
    }
    else {
        uStack_18 = uStack_48;
        uStack_28 = uStack_58;
        uStack_24 = uStack_54;
        uStack_20 = uStack_50;
        uStack_1c = uStack_4c;
        uVar2 = (**0xe3a268)(&uStack_28);
    }
    sym.__alloc::vec::Vec_T_A__as_core::ops::drop::Drop_::drop::h447ba8b9b1e5cd89(&uStack_78);
    if (CONCAT44(uStack_74,uStack_78) != 0) {
        (**0xe37488)(uVar1,CONCAT44(uStack_74,uStack_78) * 0x30,8);
    }
    return uVar2;
}

