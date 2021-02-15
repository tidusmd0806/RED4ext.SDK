#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/quest/DisableableNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { struct IRewardManagerNodeType; }

namespace quest { 
struct RewardManagerNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questRewardManagerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::IRewardManagerNodeType> type; // 48
};
RED4EXT_ASSERT_SIZE(RewardManagerNodeDefinition, 0x58);
} // namespace quest
} // namespace RED4ext
