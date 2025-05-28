/**
 * This file is intended to define and declare components related to a
 * large monolithic structure. The exact purpose and composition of
 * this structure have not yet been identified or documented.
 * Initial suspicion suggests that this structure may be used for
 * managing an overall "game state" functionality.
 *
 * Further analysis and decompilation efforts are required to determine
 * the functionality and details of the elements that will reside here.
 */
#ifndef GAME_H
#define GAME_H

#include "BinMgr.h"
#include <types.h>

typedef struct {
    /* 0x00000 */ BinMgr binMgr;
    /* 0x0004C */ char   unk_0004C[0x11534];
    /* 0x11580 */ s32    unk_11580;
    /* 0x11584 */ s32    unk_11584;
    /* 0x11588 */ char   unk_11588[0x1000C];
    /* 0x21594 */ s32    unk_21594;
    /* 0x21598 */ s32    unk_21598;
    /* 0x2159C */ s32    unk_2159C;
    /* 0x215A0 */ s32    unk_215A0;
    /* 0x215A4 */ char   unk_215A4[0x40C];
    /* 0x219B0 */ s32    unk_219B0;
    /* 0x219B4 */ s32    unk_219B4;
    /* 0x219B8 */ s32    unk_219B8;

    struct SoundTest {
        /* 0x219BC */ s32  adxIdx;
        /* 0x219C0 */ s32  seqArc;
        /* 0x219C4 */ s32  se;
        /* 0x219C8 */ s32  seIdx;
        /* 0x219CC */ s32  unk_219CC;
        /* 0x219D0 */ s32  unk_219D0;
        /* 0x219D4 */ s32  seIdxVolume;
        /* 0x219D8 */ s32  adxVolume;
        /* 0x219DC */ s32  sePan;
        /* 0x219E0 */ s32  sePitch;
        /* 0x219E4 */ BOOL adxLoopEnabled;
        /* 0x219E8 */ s32  unk_219E8;
        /* 0x219EC */ BOOL noiseNoWaveLoad;
    } sndTest;

    /* 0x219F0 */ char unk_219F0[0x470];
    /* 0x21E60 */ s32  unk_21E60;
    /* 0x21E64 */ s32  unk_21E64;
    /* 0x21E68 */ s32  unk_21E68;
    /* 0x21E6C */ s32  unk_21E6C;
    /* 0x21E68 */ char unk_21E70[0xBC];
    /* 0x21F2C */ s32  unk_21F2C;
    /* 0x21F30 */ s16  unk_21F30;
    /* 0x21F32 */ s16  unk_21F32;
    /* 0x21F34 */ s16  unk_21F34;
    /* 0x21F36 */ s16  unk_21F36;
    /* 0x21F38 */ s32  unk_21F38;
    /* 0x21F3C */ s32  unk_21F3C;
    /* 0x21F40 */ s32  unk_21F40;
    /* 0x21F44 */ s32  unk_21F44;
    /* 0x21F48 */ s32  unk_21F48;
    /* 0x21F4C */ s32  unk_21F4C;
    /* 0x21F50 */ char unk_21F50[0x32];
    /* 0x21F82 */ s8   unk_21F82[0x100];

    /* 0x22084 */ s32 unk_22084;
    /* 0x22088 */ s32 unk_22088;
    /* 0x2208C */ s32 unk_2208C;

} GameState;

#endif // GAME_H