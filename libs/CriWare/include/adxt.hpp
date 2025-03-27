#ifndef ADXT_H
#define ADXT_H

#include "types.h"

class ADXT {
private:
    /* 0x00 */ s8  unk_00;
    /* 0x01 */ s8  stat;
    /* 0x02 */ s8  unk_02;
    /* 0x03 */ s8  unk_03;
    /* 0x04 */ s32 numChan;
    /* 0x08 */ s32 unk_08;
    /* 0x0C */ u8  unk_0C[0x34];
    /* 0x40 */ s16 outVol;
    /* 0x42 */ s16 unk_42;
    /* 0x44 */ s16 unk_44;
    /* 0x46 */ s16 unk_46;
    /* 0x48 */ u8  unk_48[0xc];
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ s32 unk_58;
    /* 0x5C */ s32 unk_5C;
    /* 0x60 */ s16 unk_60;
    /* 0x62 */ u8  unk_62[0x2];
    /* 0x64 */ s32 unk_64;
    /* 0x68 */ s16 unk_68;
    /* 0x6A */ s16 unk_6A;
    /* 0x6C */ s8  unk_6C;
    /* 0x6D */ s8  unk_6D;
    /* 0x72 */ s8  statPause;
    /* 0x73 */ u8  unk_73[0x21];
    /* 0x88 */ s32 unk_88;
    /* 0x94 */ s32 unk_94;
    /* 0x98 */ u8  unk_98[0x28];
    /* 0xC0 */ s32 unk_C0;

    ADXT* adxt_Create(int, int);
    void  adxt_Destroy();
    void  adxt_Stop();
    void  adxt_StartAfs(int param_1, int param_2);
    void  adxt_StartMem2(int param_1, int param_2);
    void  adxt_StartMemIdx(int param_1, int param_2);
    void  adxt_SetOutVol(s16 vol);
    s16   adxt_GetOutVol();
    s8    adxt_GetStatPause();

    void func_02016e8c();

public:
    ADXT* func_0201690c(int param_1, int param_2);

    ADXT* func_02016c64(int param_1);

    ADXT* func_02016c90(int param_1);

    void Destroy();

    void func_02016e78();

    void Stop();

    s32 GetStatPause();

    void func_02017788();

    void func_020177a4();

    void func_02017d80(int param_1);

    void func_02017da4(int param_1);

    void StartAfs(int param_1, int param_2);

    void StartMem2(int param_1, int param_2);

    void StartMemIdx(int param_1, int param_2);

    void SetOutVol(s16 vol);

    s16 GetOutVol();

    void adxt_ExecHndl();

}; // Size: 0xC4

// void func_020168f4(void);

// void func_02016900(void);

// ADXT* func_0201690c(int param_1, int param_2, int param_3);

// ADXT* func_02016c64(int param_1, int param_2);

// ADXT* func_02016c90(int param_1, int param_2);

// void func_02016cb0(void);

// void func_02016cd0(ADXT* adxt);

// void func_020170c0(ADXT* adxt);

// s8 func_02017140(ADXT* adxt);

// s8 adxt_GetStat(ADXT* adxt);

// int func_020174a4(int param_1);

// s32 func_02017518(ADXT* adxt);

// int adxt_GetNumChan(ADXT* adxt);

// void func_02017578(int param_1, u32 param_2, int param_3);

// void func_020176c4(ADXT* adxt, s16 vol);

// int func_02017738(ADXT* adxt);

// s16 adxt_GetOutVol(ADXT* adxt);

// void func_02017788(int param_1);

// void func_020178b4(ADXT* adxt, s32 param_1);

// void func_020179b4(ADXT* adxt);

// int func_02017ad8(ADXT* adxt);

// s8 adxt_GetStatPause(ADXT* adxt);

// void func_02017b20(int param_1, int param_2, int param_3);

// void func_02017b4c(int param_1, int param_2, int param_3);

// void func_02017b78(int param_1, int param_2, int param_3);

// void func_02017b7c(int param_1, int param_2, int param_3);

// void func_02017b80(int param_1, int param_2);

// void func_02017bc0(ADXT* adxt, int param_2, int param_3);

// void func_02017cd8(ADXT* adxt, int param_2);

// void func_02017d80(ADXT* adxt, int param_2);

// void func_02017dbc(ADXT* adxt, int param_2, int param_3);

// void func_02017e6c(ADXT* adxt, int param_2, int param_3);

// void func_02018b74(void);

// void func_02018b78(ADXT* adxt);

// void func_02018bd4(ADXT* adxt);

// void adxt_ExecHndl(ADXT* adxt);

#endif // ADXT_H