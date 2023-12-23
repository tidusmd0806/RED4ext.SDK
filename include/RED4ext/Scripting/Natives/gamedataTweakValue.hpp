#pragma once

#include <cstdint>

#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game::data
{
#pragma pack(push, 1)
struct TweakValue
{
  uint32_t unk00;
  uint8_t unk04;
  uint8_t unk05;
  uint32_t unk06;
  uint16_t unk0A;
};
#pragma pack(pop)

RED4EXT_ASSERT_SIZE(TweakValue, 0xC);
} // namespace game::data
} // namespace RED4ext
