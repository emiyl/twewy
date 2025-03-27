#include "acsfdr.h"

ACSFDR* ACSFDR_Create(ACSFDR* fdr, u16 workSize) {
    if (fdr == NULL) {
        func_0201f55c("E2003052803 ACSFDR_Create : Work pointor is NULL.");
        return NULL;
    }
    if (workSize < sizeof(ACSFDR)) {
        func_0201f55c("E2003091202 ACSFDR_Create : Work size is too small.");
        return NULL;
    }
    func_020209a8(fdr);
    return fdr;
}

void func_0202079c(ACSFDR* fdr) {
    if (fdr != NULL) {
        func_020209a8(fdr);
    }
}

s8 func_020207b0(ACSFDR* fdr) {
    return fdr->unk_00;
}

s32 func_020207b8(ACSFDR* fdr) {
    return fdr->unk_1C;
}

void func_02020988(ACSFDR* fdr, s32 param_2, s32 param_3, s32 param_4) {
    fdr->unk_2C = param_2;
    fdr->unk_30 = param_3;
    fdr->unk_34 = param_4;
}

void func_02020998(ACSFDR* fdr, s32 param_2, s32 param_3, s32 param_4) {
    fdr->unk_38 = param_2;
    fdr->unk_3C = param_3;
    fdr->unk_40 = param_4;
}
