#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/graph/GraphSocketDefinition.hpp>

namespace RED4ext
{
namespace game::state { 
struct MachineStateSocketDefinition : RED4ext::graph::GraphSocketDefinition
{
    static constexpr const char* NAME = "gamestateMachineStateSocketDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(MachineStateSocketDefinition, 0x58);
} // namespace game::state
using gamestateMachineStateSocketDefinition = game::state::MachineStateSocketDefinition;
} // namespace RED4ext

// clang-format on
