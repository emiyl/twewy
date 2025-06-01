#ifndef WAIT_FOR_VBLANK_START_H
#define WAIT_FOR_VBLANK_START_H

#include <types.h>

#define REG16(addr) *(vu16 *)(addr)
#define REG32(addr) *(vu32 *)(addr)

#define DISPCNT_ADDR  0x4000000U
#define IME_OFFSET   0x208U
#define VCOUNT_OFFSET   0x6U

#define DISPCNT REG32(DISPCNT_ADDR)
#define IME REG32(DISPCNT_ADDR + IME_OFFSET)
#define VCOUNT REG16((u8 *)DISPCNT_ADDR + VCOUNT_OFFSET)

void wait_for_vblank_start();

#endif // WAIT_FOR_VBLANK_START_H