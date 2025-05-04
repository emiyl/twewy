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

#include <types.h>

typedef struct {
    /* 0x00000 */ char unk_00000[0x11580];
    /* 0x11580 */ s32  unk_11580;
    /* 0x11584 */ s32  unk_11584;
    /* 0x11588 */ char unk_11588[0x1000C];
    /* 0x21594 */ s32  unk_21594;
    /* 0x21598 */ s32  unk_21598;
    /* 0x2159C */ s32  unk_2159C;
    /* 0x215A0 */ s32  unk_215A0;
    /* 0x215A4 */ char unk_215A4[0x40C];
    /* 0x219B0 */ s32  unk_219B0;
    /* 0x219B4 */ s32  unk_219B4;
    /* 0x219B8 */ s32  unk_219B8;

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
    } st;

} GameState;

#endif // GAME_H