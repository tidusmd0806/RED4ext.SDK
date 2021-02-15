#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct Cooldown_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataCooldown_Record";
    static constexpr const char* ALIAS = "Cooldown_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(Cooldown_Record, 0x58);
} // namespace game::data
using Cooldown_Record = game::data::Cooldown_Record;
} // namespace RED4ext
