#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ITriggerAreaNotiferInstance.hpp>

namespace RED4ext
{
namespace quest
{
struct PhaseFreezingAreaNotifierInstance : world::ITriggerAreaNotiferInstance
{
    static constexpr const char* NAME = "questPhaseFreezingAreaNotifierInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk58[0x78 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(PhaseFreezingAreaNotifierInstance, 0x78);
} // namespace quest
using questPhaseFreezingAreaNotifierInstance = quest::PhaseFreezingAreaNotifierInstance;
} // namespace RED4ext

// clang-format on
