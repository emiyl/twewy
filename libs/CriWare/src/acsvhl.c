#include "acsvhl.h"

ACSVHL* ACSVHL_Create(ACSVHL* vhl, u16 workSize) {
    if (vhl == NULL) {
        func_0201f55c("E2003091209 ACSVHL_Create : Work pointor is NULL.");
        return NULL;
    }
    if (workSize < sizeof(ACSVHL)) {
        func_0201f55c("E2003091210 ACSVHL_Create : Work size is too small.");
        return NULL;
    }
    func_02021488(vhl);
    return vhl;
}

void func_020211cc(ACSVHL* vhl) {
    if (vhl != NULL) {
        func_02021488(vhl);
    }
}

BOOL ACSVHL_Init(ACSVHL* vhl) {
    ACSFDR* fdr;

    if (vhl->unk_04 != NULL) {
        func_0201f55c("E2003091600 ACSVHL_Init : Already initialized.");
        return FALSE;
    }
    vhl->unk_04 = ACSFDR_Create(&vhl->fdr, 0x44);
    if (vhl->unk_04 == NULL) {
        func_0201f55c("E2003091601 ACSVHL_Init : Failed to initialize ACSFDR.");
        return FALSE;
    }
    func_020207d8(vhl->unk_04, 0, 0, 0, 0);
    return TRUE;
}

void func_02021260(ACSVHL* vhl) {
    if (vhl->unk_04 != NULL) {
        func_0202079c(vhl->unk_04);
        vhl->unk_04 = NULL;
    }
}

void func_02021284(ACSVHL* vhl) {
    vhl->unk_4C = 0;
}

s32 func_02021290(ACSVHL* vhl) {
    return vhl->unk_4C;
}

s8 func_02021298(ACSVHL* vhl) {
    return vhl->unk_50;
}

void func_020212b0(ACSVHL* vhl, s32 param_2) {
    vhl->unk_00 = param_2;
}

void func_02021488(ACSVHL* vhl) {
    vhl->unk_00 = 0;
    vhl->unk_04 = NULL;
    func_02049118(&vhl->fdr, 0, 0x44);
    vhl->unk_4C = 0;
    vhl->unk_50 = 0;
    vhl->unk_54 = 30;
    vhl->unk_58 = 60;
    vhl->unk_5C = 120;
}