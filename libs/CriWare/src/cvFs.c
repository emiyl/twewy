#include "types.h"

void (*data_020703e4)(s32, const char*);
s32 data_020703e8;
s8  data_02070768;

void func_0201b874();
void func_0201d540();
void func_0201bfa0();

void cvFsCallUsrErrFn(char* param_1, s32, s32) {
    if (data_020703e4 != NULL) {
        data_020703e4(data_020703e8, param_1);
    }
}

void cvFsError(char* param_1) {
    cvFsCallUsrErrFn(data_020703e8, param_1, 0);
}

void cvFsSetDefDev(char* devName) {
    int iVar1;
    int iVar2;

    if (devName == NULL) {
        cvFsError("cvFsSetDefDev #1:illegal device name");
        return;
    }
    iVar1 = func_0204c814(devName);
    if (iVar1 == 0) {
        data_02070768 = 0;
        return;
    }
    func_0201af08(devName);
    iVar2 = isExistDev(devName, iVar1);
    if (iVar2 == 1) {
        func_020490f8(&data_02070768, devName, iVar1 + 1);
    } else {
        cvFsError("cvFsSetDefDev #2:unknown device name");
    }
}

s8* cvFsGetDefDev(void) {
    return &data_02070768;
}

void func_0201b884(void) {
    func_0201bfac();
    func_0201b640(func_0201b874, 0);
    cvFsAddDev("MFS", func_0201d540, 0);
    cvFsAddDev("NITRO", func_0201bfa0, 0);
}
