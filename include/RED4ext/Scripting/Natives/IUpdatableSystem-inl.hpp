#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Scripting/Natives/IUpdatableSystem.hpp>
#endif

namespace RED4ext
{

RED4EXT_INLINE CClass* IUpdatableSystem::GetNativeType()
{
    RelocFunc<decltype(&IUpdatableSystem::GetNativeType)> call(VFT, 0x000);
    return call(this);
}

} // namespace RED4ext
