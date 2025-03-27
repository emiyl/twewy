#include "acssbadx.hpp"

void func_0201f55c(const char*);

ACSSBADX* ACSSBADX::ACSSBADX_Create(u16 workSize) {
    if (this == NULL) {
        func_0201f55c("E2003052800 ACSSBADX_Create : Work pointor is NULL.");
        return NULL;
    }
    if (workSize < sizeof(ACSSBADX)) {
        func_0201f55c("E2003091200 ACSSBADX_Create : Work size is too small.");
        return NULL;
    }
    ACSSBADX();
    return this;
}

void ACSSBADX::func_02020f64() {
    if (this) {
        ACSSBADX();
    }
}

BOOL ACSSBADX::ACSSBADX_CreateHndl(s32* param_1, s32 param_2, s32 param_3) {
    /* not yet implemented */
}

void ACSSBADX::DestroyAdxt() {
    if (adxt != NULL) {
        adxt->Destroy();
        adxt = NULL;
    }
}

void ACSSBADX::func_02021004(s32 param_1) {
    adxt->func_02017d80(param_1);
}

void ACSSBADX::func_02021014(int param_1) {
    func_02017cd8(adxt, param_1);
}

void ACSSBADX::StartAfs(int param_1, int param_2) {
    adxt->StartAfs(param_1, param_2);
}

void ACSSBADX::StartMem2(int param_1, int param_2) {
    adxt->StartMem2(param_1, param_2);
}

void ACSSBADX::StartMemIdx(int param_1, int param_2) {
    adxt->StartMemIdx(param_1, param_2);
}

void ACSSBADX::Stop() {
    adxt->Stop();
}

void ACSSBADX::Pause() {
    func_020179b4(adxt);
}

s32 ACSSBADX::GetStatPause() {
    return adxt->GetStatPause();
}

s32 ACSSBADX::func_02021084() {
    switch (func_02017140(adxt)) {
        case 0:
            return 0;
        case 1:
        case 2:
            return 1;
        case 3:
        case 4:
            return 2;
        case 5:
            return 3;
        case 6:
            return 4;
        default:
            return 4;
    }
}

void ACSSBADX::SetOutVol(s16 vol) {
    if (vol < -960) {
        vol = -960;
    }
    adxt->SetOutVol(vol);
}

s32 ACSSBADX::GetOutVol() {
    return adxt->GetOutVol();
}

void ACSSBADX::func_02021118(s32 param_1, s16 vol) {
    if (param_1 == 0) {
        adxt->SetOutVol(vol);
    }
}

void ACSSBADX::func_02021134(s32 param_1) {
    if (param_1 == 0) {
        adxt->GetOutVol();
    }
}

void ACSSBADX::SetLpFlg(s32 param_1) {
    func_020178b4(adxt, param_1);
}

ADXT* ACSSBADX::GetAdxt() {
    return adxt;
}

ACSSBADX::ACSSBADX() {
    adxt  = NULL;
    unk_8 = 0;
}
