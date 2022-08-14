#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Scripting/Natives/gameIGameSystem.hpp>
#endif

namespace RED4ext
{
namespace game
{

RED4EXT_INLINE CClass* IGameSystem::GetNativeType()
{
    RelocFunc<decltype(&IGameSystem::GetNativeType)> call(VFT_RVA, 0x000);
    return call(this);
}

RED4EXT_INLINE bool IGameSystem::sub_118(world::RuntimeScene * a1)
{
    RelocFunc<decltype(&IGameSystem::sub_118)> call(VFT_RVA, 0x118);
    return call(this, a1);
}

RED4EXT_INLINE void IGameSystem::sub_120(world::RuntimeScene * runtimeScene)
{
    RelocFunc<decltype(&IGameSystem::sub_120)> call(VFT_RVA, 0x120);
    return call(this, runtimeScene);
}

RED4EXT_INLINE void IGameSystem::sub_128(world::RuntimeScene * runtimeScene)
{
    RelocFunc<decltype(&IGameSystem::sub_128)> call(VFT_RVA, 0x128);
    return call(this, runtimeScene);
}

RED4EXT_INLINE void IGameSystem::sub_130()
{
    RelocFunc<decltype(&IGameSystem::sub_130)> call(VFT_RVA, 0x130);
    return call(this);
}

RED4EXT_INLINE bool IGameSystem::sub_138()
{
    RelocFunc<decltype(&IGameSystem::sub_138)> call(VFT_RVA, 0x138);
    return call(this);
}

RED4EXT_INLINE void IGameSystem::sub_140()
{
    RelocFunc<decltype(&IGameSystem::sub_140)> call(VFT_RVA, 0x140);
    return call(this);
}

RED4EXT_INLINE void IGameSystem::sub_148()
{
    RelocFunc<decltype(&IGameSystem::sub_148)> call(VFT_RVA, 0x148);
    return call(this);
}

RED4EXT_INLINE void IGameSystem::sub_150(void * a1, uint64_t a2, uint64_t a3)
{
    RelocFunc<decltype(&IGameSystem::sub_150)> call(VFT_RVA, 0x150);
    return call(this, a1, a2, a3);
}

RED4EXT_INLINE bool IGameSystem::sub_158()
{
    RelocFunc<decltype(&IGameSystem::sub_158)> call(VFT_RVA, 0x158);
    return call(this);
}

RED4EXT_INLINE void IGameSystem::sub_160()
{
    RelocFunc<decltype(&IGameSystem::sub_160)> call(VFT_RVA, 0x160);
    return call(this);
}

RED4EXT_INLINE void IGameSystem::sub_168()
{
    RelocFunc<decltype(&IGameSystem::sub_168)> call(VFT_RVA, 0x168);
    return call(this);
}

RED4EXT_INLINE void IGameSystem::sub_170()
{
    RelocFunc<decltype(&IGameSystem::sub_170)> call(VFT_RVA, 0x170);
    return call(this);
}

RED4EXT_INLINE void IGameSystem::sub_178(uintptr_t a1, bool a2)
{
    RelocFunc<decltype(&IGameSystem::sub_178)> call(VFT_RVA, 0x178);
    return call(this, a1, a2);
}

RED4EXT_INLINE void IGameSystem::sub_180(uint64_t a1, bool isGameLoaded, uint64_t a3)
{
    RelocFunc<decltype(&IGameSystem::sub_180)> call(VFT_RVA, 0x180);
    return call(this, a1, isGameLoaded, a3);
}

RED4EXT_INLINE void IGameSystem::sub_188()
{
    RelocFunc<decltype(&IGameSystem::sub_188)> call(VFT_RVA, 0x188);
    return call(this);
}

RED4EXT_INLINE void IGameSystem::sub_190(IGameSystem::HighLow * hl)
{
    RelocFunc<decltype(&IGameSystem::sub_190)> call(VFT_RVA, 0x190);
    return call(this, hl);
}

RED4EXT_INLINE void ** IGameSystem::sub_198(void ** unkThing)
{
    RelocFunc<decltype(&IGameSystem::sub_198)> call(VFT_RVA, 0x198);
    return call(this, unkThing);
}

RED4EXT_INLINE void IGameSystem::sub_1A0()
{
    RelocFunc<decltype(&IGameSystem::sub_1A0)> call(VFT_RVA, 0x1A0);
    return call(this);
}

} // namespace game
} // namespace RED4ext
