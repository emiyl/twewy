#include "020398b0_to_02039a9c.h"

s32 *data_0207df5c;

#define REG16(addr) *(vu16 *)(addr)
#define REG32(addr) *(vu32 *)(addr)

#define DISPCNT_A_ADDR  0x4000000U
#define IME_A7_OFFSET   0x208U
#define VCOUNT_OFFSET   0x6U

#define DISPCNT_A REG32(DISPCNT_A_ADDR)
#define IME_A7 REG32(DISPCNT_A_ADDR + IME_A7_OFFSET)
#define VCOUNT REG16((u8 *)DISPCNT_A_ADDR + VCOUNT_OFFSET)

void wait_for_vblank_start() {
    u32 *dispcnt = DISPCNT_A_ADDR;
    u32 *ime_a7 = dispcnt + (IME_A7_OFFSET / sizeof(u32));
    volatile u16 *vcount = (u8 *)dispcnt + VCOUNT_OFFSET;
    
    u32 saved_ime = *ime_a7;
    *ime_a7 = DISPCNT_A_ADDR;

    while (*vcount);

    *ime_a7 = saved_ime;
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

void* func_02039918(void) {
    u32 result = data_0207df5c;

    if (result != 0)
        return result;

    data_0207df5c = 1;
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
    return;
}

s32 func_02039a1c() {
    u32 uVar1;
    u16 uVar2;

    uVar1 = func_02039ab0(2);
    func_02039c3c(2, uVar1);

    uVar1 = func_02039b94(2);
    func_02039c50(2, uVar1);
    
    if (
        (&data_0207df5c[1] != 0) &&
        (uVar2 = func_02039380(), (uVar2 & 3) != 1)
    ) {
        func_02039380();
    }

    func_0203a104(0x200002b);
    func_0203a10c(0x23e0021);

    return 0x23e0021;
}

s32 func_02039a88(int index) {
    return *((s32 *)((index << 2) + 0x27ffdc4));
}


s32 func_02039a9c(int index) {
    return *((s32 *)((index << 2) + 0x27ffda0));
}