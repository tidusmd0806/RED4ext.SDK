#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IVisualComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Effect.hpp>

namespace RED4ext
{
namespace ent { struct EffectDesc; }

namespace ent { 
struct EffectSpawnerComponent : IVisualComponent
{
    static constexpr const char* NAME = "entEffectSpawnerComponent";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<EffectDesc>> effectDescs; // 140
    DynArray<void *> activeEffects; // 150
    DynArray<RaRef<RED4ext::world::Effect>> resources; // 160
    uint8_t unk150[0x230 - 0x170]; // 170
};
RED4EXT_ASSERT_SIZE(EffectSpawnerComponent, 0x230);
} // namespace ent
} // namespace RED4ext
