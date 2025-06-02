#ifndef MAIN_16_H
#define MAIN_16_H

#include <types.h>

#define DISPCNT_ADDR  0x4000000
#define IME_OFFSET   0x208
#define VCOUNT_OFFSET   0x6

typedef struct {
    int field0;
    int field1;
    int field2;
} struct_0207df5c;

void wait_for_vblank_start();
void func_020398d0(void);
int func_02039918(void);
int func_02039a1c();
int read_int_from_table1(int index);
int read_int_from_table2(int index);
int func_02039ab0(int param1);

#endif // MAIN_16_H