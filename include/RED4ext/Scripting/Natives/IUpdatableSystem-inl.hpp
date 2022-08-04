#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Scripting/Natives/IUpdatableSystem.hpp>
#endif

namespace RED4ext
{

RED4EXT_INLINE CClass* IUpdatableSystem::GetNativeType()
{
    RelocVirtualFunc<decltype(&IUpdatableSystem::GetNativeType)> call(VFT_RVA, 0x000);
    return (this->*call)();
}

} // namespace RED4ext
