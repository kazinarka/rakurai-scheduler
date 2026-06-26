
void sym.rakurai_scheduler::switching_controller::SwitchingController::initial_check_state_for_rakurai::h8c14ed1accf25b1a
               (void)

{
    code *pcVar1;
    int64_t *piVar2;
    char cVar3;
    int iVar4;
    ulong uStack_20;
    
    //rakurai_scheduler::switching_controller::SwitchingController::initial_check_state_for_rakurai::h8c14ed1accf25b1a
    piVar2 = *0xe37398;
    if (**0xe37398 != 2) {
        uStack_20 = 0x6c209c;
        (**0xe38330)(*0xe37398,0);
    }
    uStack_20 = 0x6c2060;
    cVar3 = sym.rakurai_scheduler::switching_controller::SwitchingController::is_rakurai_enabled::h8ce83f041a57fb76__clone_llvm8668054646338321894_
                      (piVar2 + 1);
    uStack_20._0_4_ = 0x6c206f;
    uStack_20._4_4_ = 0;
    (**0xe38d28)(piVar2 + 0xb,cVar3);
    if (cVar3 != '\0') {
        return;
    }
    *(piVar2 + 0x15) = 0;
    if (*(piVar2[6] + 0x10) != '\0') {
        *(piVar2[6] + 0x10) = 0;
        iVar4 = (**0xe38d68)(piVar2[2]);
        if (iVar4 == 0) {
            return;
        }
        (**0xe37860)(obj.anon.6416ad03d2dfdff0085698d53c36cecb.152.llvm.8668054646338321894,0x2b,
                     &stack0xffffffffffffffe3,obj.anon.6416ad03d2dfdff0085698d53c36cecb.150.llvm.8668054646338321894,
                     obj.anon.6416ad03d2dfdff0085698d53c36cecb.27.llvm.8668054646338321894);
    }
    iVar4 = (**0xe38e78)(piVar2[2]);
    pcVar1 = *0xe38e80;
    if (iVar4 == 0) {
        do {
            uStack_20._4_4_ = -0x80000000;
            (*pcVar1)(piVar2[2],&stack0xffffffffffffffe4);
        } while (uStack_20._4_4_ != 0);
        iVar4 = (**0xe38d68)(piVar2[2]);
        if (iVar4 == 0) {
            return;
        }
    }
    else {
        (**0xe37860)(obj.anon.6416ad03d2dfdff0085698d53c36cecb.152.llvm.8668054646338321894,0x2b,
                     &stack0xffffffffffffffe3,obj.anon.6416ad03d2dfdff0085698d53c36cecb.150.llvm.8668054646338321894,
                     obj.anon.6416ad03d2dfdff0085698d53c36cecb.25.llvm.8668054646338321894);
    }
    (**0xe37860)(obj.anon.6416ad03d2dfdff0085698d53c36cecb.152.llvm.8668054646338321894,0x2b,&stack0xffffffffffffffe3
                 ,obj.anon.6416ad03d2dfdff0085698d53c36cecb.150.llvm.8668054646338321894,
                 obj.anon.6416ad03d2dfdff0085698d53c36cecb.26.llvm.8668054646338321894);
    pcVar1 = swi(3);
    (*pcVar1)();
    return;
}

