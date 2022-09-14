#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/IRuntimeSystem.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/GeometryCache.hpp>

namespace RED4ext
{
namespace world { 
struct RuntimeSystemPhysics : world::IRuntimeSystem
{
    static constexpr const char* NAME = "worldRuntimeSystemPhysics";
    static constexpr const char* ALIAS = NAME;
    
    static constexpr const uintptr_t VFT_RVA = worldRuntimeSystemPhysics_VFT_RVA;

    uint8_t unk48[0x1B0 - 0x48]; // 48
    Handle<physics::GeometryCache> geoCache; // 1B0
    uint8_t unk1C0[0x1F8 - 0x1C0]; // 1C0
};
RED4EXT_ASSERT_SIZE(RuntimeSystemPhysics, 0x1F8);
} // namespace world
} // namespace RED4ext

// clang-format on
