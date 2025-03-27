#ifndef ACSSBADX_H
#define ACSSBADX_H

#include <adxt.hpp>
#include <types.h>

class ACSSBADX {
private:
    // vtable
    ADXT* adxt;
    s32   unk_8;

public:
    ACSSBADX* ACSSBADX_Create(u16 workSize);

    void func_02020f64();

    virtual BOOL ACSSBADX_CreateHndl(s32* param_1, s32 param_2, s32 param_3);

    virtual void DestroyAdxt();

    virtual void func_02021004(s32 param_1);

    virtual void func_02021014(int param_1);

    virtual void StartAfs(int param_1, int param_2);

    virtual void StartMem2(int param_1, int param_2);

    virtual void StartMemIdx(int param_1, int param_2);

    virtual void Stop();

    virtual void Pause();

    virtual s32 GetStatPause();

    virtual s32 func_02021084();

    virtual void SetOutVol(s16 param_1);

    virtual s32 GetOutVol();

    virtual void func_02021118(s32 param_1, s16 param_2);

    virtual void func_02021134(s32 param_1);

    virtual void SetLpFlg(s32 param_1);

    virtual ADXT* GetAdxt();

    ACSSBADX();
}; // Size: 0xC

#endif // ACSSBADX_H
