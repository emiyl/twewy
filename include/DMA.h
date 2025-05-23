#ifndef DMA_H
#define DMA_H

#include <types.h>

typedef struct {
    /* 0x00 */ u32   unk_00;
    /* 0x04 */ void* addr;
    /* 0x08 */ s32   size;
    /* 0x0C */ u32   unk_0C;
} DMAStruct;

typedef struct {
    /* 0x00 */ DMAStruct data;
    /* 0x10 */ s32       unk_10[0x10];
} UnkStruct_02066a5c;
extern UnkStruct_02066a5c data_02066a5c;

void func_02001810(void);
void func_02001848(DMAStruct* data);
void func_02001874(DMAStruct* data);
void func_020018a0(DMAStruct* data);
void func_020018d8(DMAStruct* data);
void func_02001910(DMAStruct* data);
void func_02001948(DMAStruct* data);
void func_02001980(DMAStruct* data);
void func_020019ac(void);

typedef void (*DMAFunc)();

#endif // DMA_H