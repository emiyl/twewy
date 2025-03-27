#include <adxt.hpp>

ADXT data_0206bd94[4];
void (*data_0206c7c8)(void);

extern "C" {
void func_02012f88();
void func_02012f8c();
void func_0201433c(const char*);
void func_02049118(void*, int, int);
}

void func_020168f4(void) {
    func_02012f88();
}

void func_02016900(void) {
    func_02012f8c();
}

ADXT* ADXT::func_0201690c(int param_1, int param_2) {
    ADXT* adxt;

    func_02012f88();
    adxt = adxt_Create(param_1, param_2);
    func_02012f8c();
    return adxt;
}

ADXT* ADXT::adxt_Create(int param_1, int param_2) {
    /* NYI */
}

ADXT* ADXT::func_02016c64(int param_1) {
    ADXT* puVar1;

    func_02012f88();
    puVar1 = func_02016c90(param_1);
    func_02012f8c();
    return puVar1;
}

ADXT* ADXT::func_02016c90(int param_1) {
    ADXT* adxt = adxt_Create(1, param_1);
    if (adxt == NULL) {
        adxt = NULL;
    }
    return adxt;
}

void func_02016cb0(void) {
    if (data_0206c7c8 != NULL) {
        data_0206c7c8();
    }
}

void ADXT::Destroy() {
    func_02012f88();
    adxt_Destroy();
    func_02012f8c();
}

void ADXT::adxt_Destroy() {
    /* NYI */
}

void ADXT::func_02016e78() {
    func_02012f88();
    func_02016e8c();
    func_02012f8c();
}

void ADXT::func_02016e8c(void) {
    for (s32 idx = 0; idx < 4; idx++) {
        if (data_0206bd94[idx].unk_00 == 1) {
            data_0206bd94[idx].adxt_Destroy();
        }
    }
}

void ADXT::Stop() {
    func_02012f88();
    adxt_Stop();
    func_02012f8c();
}

// s8 func_02017140(ADXT* adxt) {
//     s8 stat;

// func_02012f88();
// stat = adxt_GetStat(adxt);
// func_02012f8c();
// return stat;
// }

// s8 adxt_GetStat(ADXT* adxt) {
//     if (adxt == NULL) {
//         func_0201433c("E02080814 adxt_GetStat: parameter error");
//         return -1;
//     }
//     return adxt->stat;
// }

// int func_020174a4(int param_1) {
//     func_02012f88();
//     func_020174c8(param_1);
//     func_02012f8c();
//     return param_1;
// }

// s32 func_02017518(ADXT* adxt) {
//     s32 numChan;

// func_02012f88();
// numChan = adxt_GetNumChan(adxt);
// func_02012f8c();
// return numChan;
// }

// int adxt_GetNumChan(ADXT* adxt) {
//     if (adxt == NULL) {
//         func_0201433c("E02080820 adxt_GetNumChan: parameter error");
//         return -1;
//     }
//     if (adxt->stat >= 2) {
//         return func_02015948(adxt->numChan);
//     }
//     return 0;
// }

// void func_02017578(int param_1, u32 param_2, int param_3) {
//     func_02012f88();
//     adxt_SetOutPan(param_1, param_2, param_3);
//     func_02012f8c();
// }

void ADXT::SetOutVol(s16 vol) {
    func_02012f88();
    adxt_SetOutVol(vol);
    func_02012f8c();
}

s16 ADXT::GetOutVol() {
    s16 outVol;

    func_02012f88();
    outVol = adxt_GetOutVol();
    func_02012f8c();
    return outVol;
}

s16 ADXT::adxt_GetOutVol() {
    if (this == NULL) {
        func_0201433c("E02080824 adxt_GetOutVol: parameter error");
        return 0;
    }
    return outVol;
}

void ADXT::func_02017788() {
    func_02012f88();
    func_020177a4();
    func_02012f8c();
}

s32 ADXT::GetStatPause() {
    func_02012f88();
    s32 iVar1 = adxt_GetStatPause();
    func_02012f8c();
    return iVar1;
}

s8 ADXT::adxt_GetStatPause() {
    if (this == NULL) {
        func_0201433c("E02080847 adxt_GetStatPause: parameter error");
        return 0;
    }
    return statPause;
}

// void func_02017b20(int param_1, int param_2, int param_3) {
//     func_02012f88();
//     func_02017b78(param_1, param_2, param_3);
//     func_02012f8c();
// }

// void func_02017b4c(int param_1, int param_2, int param_3) {
//     func_02012f88();
//     func_02017b7c(param_1, param_2, param_3);
//     func_02012f8c();
// }

// void func_02017b78(int param_1, int param_2, int param_3) {
//     return;
// }

// void func_02017b7c(int param_1, int param_2, int param_3) {
//     return;
// }

// void func_02017b80(int param_1, int param_2) {
//     func_02012f88();
//     func_02017ba4(param_1, param_2);
//     func_02012f8c();
// }

void ADXT::StartAfs(int param_1, int param_2) {
    func_02012f88();
    adxt_StartAfs(param_1, param_2);
    func_02012f8c();
}

// // void func_02017cd8(int param_1, int param_2, int param_3, int param_4) {
// //     func_02012f88();
// //     adxt_StartFnameRange(param_1, param_2, param_3, param_4);
// //     func_02012f8c();
// // }

void ADXT::func_02017d80(int param_1) {
    func_02012f88();
    func_02017da4(param_1);
    func_02012f8c();
}

void ADXT::StartMem2(int param_1, int param_2) {
    func_02012f88();
    adxt_StartMem2(param_1, param_2);
    func_02012f8c();
}

void ADXT::StartMemIdx(int param_1, int param_2) {
    func_02012f88();
    adxt_StartMemIdx(param_1, param_2);
    func_02012f8c();
}

// void func_02018b74(void) {
//     return;
// }

// void func_02018b78(ADXT* adxt) {
//     if (adxt->unk_08 != 0 && func_02015f5c(adxt->unk_08) == 4) {
//         adxt->unk_60 = -1;
//         adxt->stat   = 6;
//     }
//     if (adxt->unk_94 == 0) {
//         return;
//     }
//     if (func_020215ec() != 3) {
//         return;
//     }
//     adxt->unk_60 = -1;
//     adxt->stat   = 6;
// }

// void func_02018bd4(ADXT* adxt) {
//     if (adxt->unk_08 == 0) {
//         return;
//     }
//     if (func_02017140(adxt) != 0) {
//         switch (adxt->unk_02) {
//             case 0:
//             case 1:
//                 if (func_02015f5c(adxt->unk_08) == 3) {
//                     func_02014b50(adxt->numChan);
//                 }
//                 break;
//             case 2:
//                 func_02014b50(adxt->numChan);
//                 break;
//             case 3:
//             case 4:
//             default:
//                 break;
//         }
//     }
// }

void ADXT::adxt_ExecHndl() {
    // if (adxt == NULL) {
    //     func_0201433c("E02080842 adxt_ExecHndl: parameter error");
    // }

    // if (adxt->stat == 3) {
    //     func_02018a64(adxt);
    // } else if (adxt->stat == 1) {
    //     func_0201854c(adxt);
    // } else if (adxt->stat == 2) {
    //     func_02018910(adxt);
    // } else if (adxt->stat == 4) {
    //     func_02018b30(adxt);
    // } else if (adxt->stat == 5) {
    //     func_02018b74();
    // }
    // func_02018bd4(adxt);
    // func_02018b78(adxt);
}
