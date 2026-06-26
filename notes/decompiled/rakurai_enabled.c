
bool sym.rakurai_enabled(void)

{
    int64_t *piVar1;
    
    piVar1 = *0xe37398;
    if (**0xe37398 != 2) {
        (**0xe38330)(*0xe37398,0);
    }
    return piVar1[0x15] != '\0';
}

