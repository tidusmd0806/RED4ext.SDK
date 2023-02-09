#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Scripting/Natives/UpdateManager.hpp>
#endif

namespace RED4ext
{
// should be updated to new RED4ext.SDK stuff
// 1.6  RVA: 0xB214C0 / 11670720
// 1.61 RVA: 0xB21890
// 1.62 RVA: 0xB21E30
/// @pattern 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 48 89 7C 24 20 41 56 48 83 EC 70 48 8B 9C 24 A8 00
/// nth 0/2
RED4EXT_INLINE void UpdateManagerHolder::RegisterBucketUpdate(
        Unk2 unk02, 
        Unk1 unk01, 
        IUpdatableSystem *system,
        const char *nameStr, 
        const Callback<void (*)(Unk2* unk2, float* deltaTime, void* unkStruct)> &callback)
{
    RelocFunc<decltype(&UpdateManagerHolder::RegisterBucketUpdate)> call(0xB21E30);
    return call(this, unk02, unk01, system, nameStr, callback);
}
}
