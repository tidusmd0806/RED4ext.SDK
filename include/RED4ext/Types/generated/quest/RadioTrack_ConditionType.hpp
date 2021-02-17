#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/quest/ISystemConditionType.hpp>

namespace RED4ext
{
namespace quest { 
struct RadioTrack_ConditionType : quest::ISystemConditionType
{
    static constexpr const char* NAME = "questRadioTrack_ConditionType";
    static constexpr const char* ALIAS = NAME;

    CName radioTrack; // 38
    bool inverted; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(RadioTrack_ConditionType, 0x48);
} // namespace quest
} // namespace RED4ext
