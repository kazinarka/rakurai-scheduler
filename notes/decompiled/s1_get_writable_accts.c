
void sym.rakurai_scheduler::scheduler_1::rakurai_scheduler::get_writable_accts::h3d7a4096e22d7ac1(int64_t arg1)

{
    uchar (*pauVar1) [16];
    int64_t *piVar2;
    uint uStack_1a8;
    uint uStack_1a4;
    uint uStack_1a0;
    uint uStack_19c;
    ulong uStack_198;
    ulong uStack_190;
    uchar auStack_188 [16];
    int64_t iStack_170;
    ulong uStack_168;
    ulong uStack_158;
    int64_t iStack_150;
    int64_t iStack_148;
    int64_t iStack_140;
    int64_t iStack_138;
    ulong uStack_130;
    int64_t iStack_128;
    int64_t iStack_120;
    int64_t *piStack_118;
    
    //rakurai_scheduler::scheduler_1::rakurai_scheduler::get_writable_accts::h3d7a4096e22d7ac1
    sym.solana_runtime_transaction::runtime_transaction::transaction_view::__impl_solana_runtime_transaction::transaction_with_meta::TransactionWithMeta_for_solana_runtime_transaction::runtime_transaction::RuntimeTransaction_agave_transaction_view::resolved_transaction_view::ResolvedTransactionView_D___::as_sanitized_transaction::h3a6715656fe93e2f
              (&iStack_120);
    piVar2 = &iStack_120;
    if (SBORROW8(0,iStack_120)) {
        piVar2 = piStack_118;
    }
    (**0xe38420)(&iStack_170,piVar2);
    pauVar1 = sym.imp.__tls_get_addr(0xe38278);
    if (pauVar1[1][0] == '\x01') {
        auStack_188 = *pauVar1;
    }
    else {
        auStack_188 = (**0xe37558)();
        *pauVar1 = auStack_188;
        pauVar1[1][0] = 1;
    }
    iStack_128 = iStack_150 + iStack_148 * 8;
    **pauVar1 = auStack_188._0_8_ + 1;
    uStack_198 = *0xdc9d40;
    uStack_190 = *0xdc9d48;
    uStack_1a8 = *0xdc9d30;
    uStack_1a4 = *0xdc9d34;
    uStack_1a0 = *0xdc9d38;
    uStack_19c = *0xdc9d3c;
    iStack_140 = iStack_150;
    iStack_138 = iStack_150;
    uStack_130 = uStack_158;
    sym.__hashbrown::map::HashMap_K_V_S_A__as_core::iter::traits::collect::Extend__K_V___::extend::hd474c3bdc457a6c8
              (&uStack_1a8,&iStack_140);
    *(arg1 + 0x20) = auStack_188._0_4_;
    *(arg1 + 0x24) = auStack_188._4_4_;
    *(arg1 + 0x28) = auStack_188._8_4_;
    *(arg1 + 0x2c) = auStack_188._12_4_;
    *(arg1 + 0x10) = uStack_198;
    *(arg1 + 0x14) = uStack_198._4_4_;
    *(arg1 + 0x18) = uStack_190;
    *(arg1 + 0x1c) = uStack_190._4_4_;
    *arg1 = uStack_1a8;
    *(arg1 + 4) = uStack_1a4;
    *(arg1 + 8) = uStack_1a0;
    *(arg1 + 0xc) = uStack_19c;
    if (iStack_170 != 0) {
        (**0xe37488)(uStack_168,iStack_170 << 3,8);
    }
    sym.core::ptr::drop_in_place_alloc::borrow::Cow_solana_transaction::sanitized::SanitizedTransaction__::h6b2139767e38e2d3
              (&iStack_120);
    return;
}

