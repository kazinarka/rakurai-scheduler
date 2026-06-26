
void sym.check_state(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg5)

{
    int64_t *piVar1;
    
    piVar1 = *0xe37398;
    if (**0xe37398 != 2) {
        (**0xe38330)(*0xe37398,0);
    }
    sym.rakurai_scheduler::switching_controller::SwitchingController::wait_or_proceed::hc3a5dece5ff52606__clone_llvm8668054646338321894_
              (piVar1 + 1,0,arg4,*arg2,*(arg2 + 8),arg3 & 0xff,arg1 & 0xff,2,arg5 & 0xff);
    return;
}

