#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/world/TriggerAreaNode.hpp>

namespace RED4ext
{
namespace world { 
struct VehicleForbiddenAreaNode : world::TriggerAreaNode
{
    static constexpr const char* NAME = "worldVehicleForbiddenAreaNode";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(VehicleForbiddenAreaNode, 0x70);
} // namespace world
} // namespace RED4ext
