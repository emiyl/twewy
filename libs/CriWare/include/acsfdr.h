#ifndef ACSFDR_H
#define ACSFDR_H

#include "types.h"

typedef struct {
    /* 0x00 */ s8 unk_00;
    /* 0x01 */ char unk_01[0x1B];
    /* 0x1C */ s32 unk_1C;
    /* 0x20 */ char unk_20[0xC];
    /* 0x2C */ s32 unk_2C;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ s32 unk_38;
    /* 0x3C */ s32 unk_3C;
    /* 0x40 */ s32 unk_40;
} ACSFDR; // Size: 0x44

#endif // ACSFDR_H