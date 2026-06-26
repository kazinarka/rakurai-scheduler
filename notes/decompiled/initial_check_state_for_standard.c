
void sym.initial_check_state_for_standard(void)

{
    int64_t *piVar1;
    char cVar2;
    
    piVar1 = *0xe37398;
    if (**0xe37398 != 2) {
        (**0xe38330)(*0xe37398,0);
    }
    cVar2 = sym.rakurai_scheduler::switching_controller::SwitchingController::is_rakurai_enabled::h8ce83f041a57fb76__clone_llvm8668054646338321894_
                      (piVar1 + 1);
    (**0xe38d28)(piVar1 + 0xb,cVar2);
    if (cVar2 != '\0') {
        *(piVar1 + 0x15) = 1;
        sym.rakurai_scheduler::switching_controller::SwitchingController::wait::hb0cff1635435b9d3__clone_llvm8668054646338321894_
                  (piVar1 + 1);
    }
    return;
}

