#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/IGameRulesSystem.hpp>

namespace RED4ext
{
namespace game { 
struct GameRulesSystem : game::IGameRulesSystem
{
    static constexpr const char* NAME = "gameGameRulesSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x68 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(GameRulesSystem, 0x68);
} // namespace game
} // namespace RED4ext
