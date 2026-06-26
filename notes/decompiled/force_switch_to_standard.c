
void sym.rakurai_scheduler::entrypoint::force_switch_to_standard::hde311e7df8b39b60
               (int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    code *pcVar3;
    int64_t iVar4;
    int64_t *piVar5;
    code *pcVar6;
    code *pcVar7;
    uint32_t uVar8;
    int iVar9;
    int64_t *piVar10;
    int64_t *piStack_118;
    int64_t *piStack_110;
    int64_t iStack_108;
    int64_t *piStack_100;
    int64_t *piStack_f8;
    uint32_t *puStack_f0;
    
    //rakurai_scheduler::entrypoint::force_switch_to_standard::hde311e7df8b39b60
    **0xe37380 = 1;
    pcVar7 = *0xe38678;
    pcVar6 = *0xe381c8;
    pcVar3 = *0xe37d60;
    piStack_118 = arg1;
    piStack_110 = arg2;
    iStack_108 = arg3;
    piStack_100 = arg4;
    do {
        piVar5 = piStack_118;
        puVar1 = piStack_118 + 2;
        uVar8 = *(piStack_118 + 2);
        if (uVar8 < 0x3ffffffe) {
            LOCK();
            uVar2 = *puVar1;
            if (uVar8 == uVar2) {
                *puVar1 = uVar8 + 1;
            }
            UNLOCK();
            if (uVar8 != uVar2) goto code_r0x006aba76;
        }
        else {
code_r0x006aba76:
            (*pcVar6)(puVar1);
        }
        piVar10 = piVar5 + 4;
        if (piVar5[3] != '\0') {
            piStack_f8 = piVar10;
            puStack_f0 = puVar1;
            (**0xe37860)(0x37d4ea,0x2b,&piStack_f8,0xdcb120,0xdcadd8);
            goto code_r0x006abc22;
        }
        iVar4 = *piVar10;
        LOCK();
        uVar8 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        uVar8 = uVar8 - 1 & 0xbfffffff;
        if (iVar4 == 1) {
            if (SBORROW4(0,uVar8)) {
                (**0xe37d60)(puVar1);
            }
            (**0xe38678)(0,200000000);
            while( true ) {
                sym.crossbeam_channel::channel::Receiver_T_::try_recv::h38c65973ee66732c(&piStack_f8,&iStack_108);
                if (piStack_f8 == 2) break;
                sym.core::ptr::drop_in_place_core::result::Result_solana_core::banking_stage::scheduler_messages::FinishedConsumeWork_solana_runtime_transaction::runtime_transaction::RuntimeTransaction_agave_transaction_view::resolved_transaction_view::ResolvedTransactionView_alloc::sync::Arc_alloc::vec::Vec_u8______crossbeam_channel::err::TryRecvError__::hd9e27cdbed71b31a
                          (&piStack_f8);
            }
            sym.core::ptr::drop_in_place_core::result::Result_solana_core::banking_stage::scheduler_messages::FinishedConsumeWork_solana_runtime_transaction::runtime_transaction::RuntimeTransaction_agave_transaction_view::resolved_transaction_view::ResolvedTransactionView_alloc::sync::Arc_alloc::vec::Vec_u8______crossbeam_channel::err::TryRecvError__::hd9e27cdbed71b31a
                      (&piStack_f8);
            piVar5 = *0xe37398;
            if (**0xe37398 != 2) {
                (**0xe38330)(*0xe37398,0);
            }
            *(piVar5 + 0x15) = 0;
            iVar9 = (**0xe38e78)(piVar5[2]);
            pcVar3 = *0xe38e80;
            if (iVar9 == 0) {
                do {
                    piStack_f8 = CONCAT44(piStack_f8._4_4_,0x80000000);
                    (*pcVar3)(piVar5[2],&piStack_f8);
                } while (piStack_f8 != 0);
                sym.__crossbeam_channel::channel::Receiver_T__as_core::ops::drop::Drop_::drop::hdccf6130e4ad359b
                          (&iStack_108);
                if (iStack_108 == 4) {
                    LOCK();
                    *piStack_100 = *piStack_100 + -1;
                    UNLOCK();
                    if (*piStack_100 == 0) {
                        (**0xe385b8)(&piStack_100);
                    }
                }
                else if (iStack_108 == 3) {
                    LOCK();
                    *piStack_100 = *piStack_100 + -1;
                    UNLOCK();
                    if (*piStack_100 == 0) {
                        (**0xe385b0)(&piStack_100);
                    }
                }
                LOCK();
                *piStack_118 = *piStack_118 + -1;
                UNLOCK();
                if (*piStack_118 == 0) {
                    (**0xe385c0)(&piStack_118);
                }
                LOCK();
                *piStack_110 = *piStack_110 + -1;
                UNLOCK();
                if (*piStack_110 == 0) {
                    (**0xe37748)(&piStack_110);
                }
                return;
            }
            (**0xe37860)(obj.anon.6416ad03d2dfdff0085698d53c36cecb.152.llvm.8668054646338321894,0x2b,&piStack_f8,
                         obj.anon.6416ad03d2dfdff0085698d53c36cecb.150.llvm.8668054646338321894,
                         obj.anon.6416ad03d2dfdff0085698d53c36cecb.21.llvm.8668054646338321894);
code_r0x006abc22:
    //WARNING: Does not return
            pcVar3 = invalidInstructionException();
            (*pcVar3)();
        }
        if (SBORROW4(0,uVar8)) {
            (*pcVar3)();
        }
        (*pcVar7)(0,100000000);
    } while( true );
}

