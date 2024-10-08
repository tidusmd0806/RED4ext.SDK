#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <RED4ext/Scripting/Natives/gamedataTweakDBRecord.hpp>

namespace RED4ext
{
RED4EXT_ASSERT_SIZE(game::data::TweakDBRecord, 0x48);
using gamedataTweakDBRecord = game::data::TweakDBRecord;
using TweakDBRecord = game::data::TweakDBRecord;
} // namespace RED4ext

/*
#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::data
{
struct TweakDBRecord : IScriptable
{

    virtual void sub_110();                      // 110
    virtual void GetTypeHash();                  // 118

    static constexpr const char* NAME = "gamedataTweakDBRecord";
    static constexpr const char* ALIAS = "TweakDBRecord";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(TweakDBRecord, 0x48);
} // namespace game::data
// using gamedataTweakDBRecord = game::data::TweakDBRecord;
using TweakDBRecord = game::data::TweakDBRecord;
} // namespace RED4ext
*/

// clang-format on
