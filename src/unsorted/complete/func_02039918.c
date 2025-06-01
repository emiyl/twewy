typedef struct {
    int field0;
    int field1;
    int field2;
} DataStruct;

extern DataStruct data_0207df5c;

void* func_02039918(void) {
    int result = data_0207df5c.field0;

    if (result)
        return result;

    data_0207df5c.field0 = 1;
    func_02039c3c(0, func_02039ab0(0));
    func_02039c50(0, func_02039b94(0));
    func_02039c50(2,0);
    func_02039c3c(2,0);
    func_02039c3c(3, func_02039ab0(3));
    func_02039c50(3, func_02039b94(3));
    func_02039c3c(4, func_02039ab0(4));
    func_02039c50(4, func_02039b94(4));
    func_02039c3c(5, func_02039ab0(5));
    func_02039c50(5, func_02039b94(5));
    func_02039c3c(6, func_02039ab0(6));
    func_02039c50(6, func_02039b94(6));
}

void func_02039a1c() {
    func_02039c3c(2, func_02039ab0(2));
    func_02039c50(2, func_02039b94(2));

    int value = data_0207df5c.field1;

    if (value) {
        value = func_02039380() & 3;
        if (value != 1) {
            return;
        }
    }

    func_0203a104(0x200002b);
    func_0203a10c(0x23e0021);
}