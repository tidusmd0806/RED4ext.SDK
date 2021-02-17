#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/EComparisonType.hpp>
#include <RED4ext/Types/generated/quest/IDistanceConditionType.hpp>

namespace RED4ext
{
namespace quest { struct ObjectDistance; }

namespace quest { 
struct DistanceVsDistanceComparison_ConditionType : quest::IDistanceConditionType
{
    static constexpr const char* NAME = "questDistanceVsDistanceComparison_ConditionType";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::ObjectDistance> distanceDefinition1; // 38
    Handle<quest::ObjectDistance> distanceDefinition2; // 48
    EComparisonType comparisonType; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(DistanceVsDistanceComparison_ConditionType, 0x60);
} // namespace quest
} // namespace RED4ext
