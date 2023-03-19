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
    RelocFunc<decltype(&IGameSystem::GetNativeType)> call(VFT, 0x000);
    return call(this);
}

RED4EXT_INLINE bool IGameSystem::WorldAttached(world::RuntimeScene * a1)
{
    RelocFunc<decltype(&IGameSystem::WorldAttached)> call(VFT, 0x118);
    return call(this, a1);
}

RED4EXT_INLINE void IGameSystem::WorldPendingDetach(world::RuntimeScene * runtimeScene)
{
    RelocFunc<decltype(&IGameSystem::WorldPendingDetach)> call(VFT, 0x120);
    return call(this, runtimeScene);
}

RED4EXT_INLINE void IGameSystem::WorldDetached(world::RuntimeScene * runtimeScene)
{
    RelocFunc<decltype(&IGameSystem::WorldDetached)> call(VFT, 0x128);
    return call(this, runtimeScene);
}

RED4EXT_INLINE void IGameSystem::sub_130()
{
    RelocFunc<decltype(&IGameSystem::sub_130)> call(VFT, 0x130);
    return call(this);
}

RED4EXT_INLINE uint32_t IGameSystem::sub_138(uint64_t a1, uint64_t a2)
{
    RelocFunc<decltype(&IGameSystem::sub_138)> call(VFT, 0x138);
    return call(this, a1, a2);
}

RED4EXT_INLINE void IGameSystem::sub_140(uint64_t a1)
{
    RelocFunc<decltype(&IGameSystem::sub_140)> call(VFT, 0x140);
    return call(this, a1);
}

RED4EXT_INLINE void IGameSystem::sub_148()
{
    RelocFunc<decltype(&IGameSystem::sub_148)> call(VFT, 0x148);
    return call(this);
}

RED4EXT_INLINE void IGameSystem::OnGameLoad(void * a1, uint64_t a2, uint64_t a3)
{
    RelocFunc<decltype(&IGameSystem::OnGameLoad)> call(VFT, 0x150);
    return call(this, a1, a2, a3);
}

RED4EXT_INLINE bool IGameSystem::sub_158()
{
    RelocFunc<decltype(&IGameSystem::sub_158)> call(VFT, 0x158);
    return call(this);
}

RED4EXT_INLINE void IGameSystem::OnGamePrepared()
{
    RelocFunc<decltype(&IGameSystem::OnGamePrepared)> call(VFT, 0x160);
    return call(this);
}

RED4EXT_INLINE void IGameSystem::sub_168()
{
    RelocFunc<decltype(&IGameSystem::sub_168)> call(VFT, 0x168);
    return call(this);
}

RED4EXT_INLINE void IGameSystem::sub_170()
{
    RelocFunc<decltype(&IGameSystem::sub_170)> call(VFT, 0x170);
    return call(this);
}

RED4EXT_INLINE void IGameSystem::sub_178(uintptr_t a1, bool a2)
{
    RelocFunc<decltype(&IGameSystem::sub_178)> call(VFT, 0x178);
    return call(this, a1, a2);
}

RED4EXT_INLINE void IGameSystem::OnStreamingWorldLoaded(uint64_t a1, bool isGameLoaded, uint64_t a3)
{
    RelocFunc<decltype(&IGameSystem::OnStreamingWorldLoaded)> call(VFT, 0x180);
    return call(this, a1, isGameLoaded, a3);
}

RED4EXT_INLINE void IGameSystem::sub_188()
{
    RelocFunc<decltype(&IGameSystem::sub_188)> call(VFT, 0x188);
    return call(this);
}

RED4EXT_INLINE void IGameSystem::sub_190(IGameSystem::HighLow * hl)
{
    RelocFunc<decltype(&IGameSystem::sub_190)> call(VFT, 0x190);
    return call(this, hl);
}

RED4EXT_INLINE void IGameSystem::Initialize(void ** unkThing)
{
    RelocFunc<decltype(&IGameSystem::Initialize)> call(VFT, 0x198);
    return call(this, unkThing);
}

RED4EXT_INLINE void IGameSystem::sub_1A0()
{
    RelocFunc<decltype(&IGameSystem::sub_1A0)> call(VFT, 0x1A0);
    return call(this);
}

} // namespace game
} // namespace RED4ext
