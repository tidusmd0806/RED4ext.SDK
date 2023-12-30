#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace game
{
struct PlayerSocket
{
    static constexpr const char* NAME = "gamePlayerSocket";
    static constexpr const char* ALIAS = NAME;

    virtual bool sub_00() {
        return unk20 != 0;
    }                                   // 00
    virtual ~PlayerSocket() = default;  // 08

  DynArray<uint8_t> unk08;
  int32_t unk18;
  uint8_t unk1C[4];
  uint64_t unk20;
};
RED4EXT_ASSERT_SIZE(PlayerSocket, 0x28);
} // namespace game
using gamePlayerSocket = game::PlayerSocket;
} // namespace RED4ext

// clang-format on
