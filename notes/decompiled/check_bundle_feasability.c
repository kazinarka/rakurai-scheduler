
ulong sym.check_bundle_feasability(int64_t arg1)

{
    int64_t *piVar1;
    
    piVar1 = *0xe37378;
    if ((*0xe37378)[4] != 2) {
        (**0xe38330)(*0xe37378 + 4,0);
    }
    return CONCAT71(*(*piVar1 + 0x10) >> 8,
                    *(piVar1[2] + 0x10) < arg1 && (*(piVar1[1] + 0x10) < arg1 && *(*piVar1 + 0x10) < arg1));
}

