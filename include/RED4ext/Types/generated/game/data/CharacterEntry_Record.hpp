#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct CharacterEntry_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataCharacterEntry_Record";
    static constexpr const char* ALIAS = "CharacterEntry_Record";

    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(CharacterEntry_Record, 0x50);
} // namespace game::data
using CharacterEntry_Record = game::data::CharacterEntry_Record;
} // namespace RED4ext
