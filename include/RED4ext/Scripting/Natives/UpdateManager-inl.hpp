#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Scripting/Natives/UpdateManager.hpp>
#endif

namespace RED4ext
{
RED4EXT_INLINE void UpdateManagerHolder::RegisterBucketUpdate(
        Unk2 unk02, 
        Unk1 unk01, 
        IUpdatableSystem *system,
        const char *nameStr, 
        const FixedCallback<void (*)(Unk2* unk2, float* deltaTime, void* unkStruct)> &callback)
{
    RelocFunc<decltype(&UpdateManagerHolder::RegisterBucketUpdate)> call(0xB17640);
    return call(this, unk02, unk01, system, nameStr, callback);
}
}
