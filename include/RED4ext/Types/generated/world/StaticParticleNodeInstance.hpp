#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/RenderSceneLayerMask.hpp>
#include <RED4ext/Types/generated/world/INodeInstance.hpp>

namespace RED4ext
{
namespace world { 
struct StaticParticleNodeInstance : world::INodeInstance
{
    static constexpr const char* NAME = "worldStaticParticleNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0xE4 - 0x90]; // 90
    RenderSceneLayerMask renderLayerMask; // E4
    uint8_t unkE5[0xF0 - 0xE5]; // E5
};
RED4EXT_ASSERT_SIZE(StaticParticleNodeInstance, 0xF0);
} // namespace world
} // namespace RED4ext
