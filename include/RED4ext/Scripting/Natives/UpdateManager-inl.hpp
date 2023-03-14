#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Scripting/Natives/UpdateManager.hpp>
#endif

#include <RED4ext/Relocation.hpp>

RED4EXT_INLINE void RED4ext::UpdateManagerHolder::RegisterBucketUpdate(
        Unk2 unk02, 
        Unk1 unk01, 
        IUpdatableSystem *system,
        const char *nameStr, 
        const Callback<void (*)(Unk2* unk2, float* deltaTime, void* unkStruct)> &callback)
{
    RelocFunc<decltype(&UpdateManagerHolder::RegisterBucketUpdate)> call(0xB21E30);
    return call(this, unk02, unk01, system, nameStr, callback);
}
