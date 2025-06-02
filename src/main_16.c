#include "main_16.h"

extern struct_0207df5c data_0207df5c;

// This function saves IME and sets IME to the address of DISPCNT
// It then waits for VCOUNT to be 0, before restoring the IME
// Instructions match, but the registers don't

// Why does IME store the address of DISPCNT?
// I thought it was just a 0 or 1 to disable/enable interrupts?

void wait_for_vblank_start() {
    // These three lines shouldn't be necessary :(
    // I'd prefer it if they were all macro'd for the code below
    u32 *dispcnt = DISPCNT_ADDR;
    u32 *ime = dispcnt + (IME_OFFSET / sizeof(u32));
    volatile u16 *vcount = (u8 *)dispcnt + VCOUNT_OFFSET;
    
    u32 saved_ime = *ime;
    *ime = DISPCNT_ADDR;

    while (*vcount);

    *ime = saved_ime;
}

void func_020398d0(void) {
    func_02039918();
    func_0203cc10();
    func_02038664();
    func_02039a1c();
    func_020383bc();
    func_02038630();
    func_0203a114();
    func_0203babc();
    func_0203a5e4();
    func_0203aa14();
    func_02038cb4();
    func_0203a7fc();
    func_0204799c();
    func_02043134();
    func_02040ac0();
    wait_for_vblank_start();
    return;
}

int func_02039918(void) {
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

int func_02039a1c() {
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

#define ADDRESS_1 0x27ffdc4
#define ADDRESS_2 0x27ffda0

int read_int_from_table1(int index) {
    int *ptr = ADDRESS_1 + (index << 2);
    return *ptr;
}

int read_int_from_table2(int index) {
    int *ptr = ADDRESS_2 + (index << 2);
    return *ptr;
}

#define data_02039b78 data_0207df5c
int data_02039b7c = 0x27e0000;
int data_02039b80 = 0x3000;
void* data_02039b84 = 0x800;
int data_02039b88 = 0x27e0080;
int data_02039b8c = 0x27ff680;
int data_02039b90 = 0x37f8000;

int func_02039ab0(int param1) {
    switch(param1) {
        case 0:
            return 0x23e0000;
        case 2:
            int varA = data_02039b78.field1;
            if (varA) {
                func_02039380();
                varA = varA & 3;
                if (varA == 1) {
                    return 0;
                }
            } else {
                return 0x270000;
            }
        case 3:
            return 0x2000000;
        case 4:
            unsigned int r0 = data_02039b7c;
            int r1 = data_02039b80;
            int r2 = data_02039b84;
            int r3 = r0 + 0x3f80;
            r2 = r3 - r2;
            if (r1 == 0) {
                r1 = data_02039b88;
                if (r0 < r1) {
                    return r1;
                } else {
                    return r0;
                }
            } else {
                if (r1 < 0) {
                    r0 = data_02039b88;
                    r0 = r0 - r1;
                } else {
                    r0 = r2 - r1;
                }
                return r0;
            }
        case 5:
            return data_02039b8c;
        case 6:
            return data_02039b90;
        default:
            return 0;
    }
}