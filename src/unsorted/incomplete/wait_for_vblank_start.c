#include "unsorted/incomplete/wait_for_vblank_start.h"

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