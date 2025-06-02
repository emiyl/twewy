#include "main_21.h"

extern u32 data_02072cf0;

#define DATA_UPPER_LIMIT 0xCDFE600

// This occurs at the end of a loop in main()
// Instructions match, but registers don't

void increment_main_loop_tick() {
    u8 *base = &data_02072cf0;
    u32 *target = base + 0xDB4;

    u32 value = *target;
    if (value < DATA_UPPER_LIMIT) {
        *target = value + 1;
    }
}