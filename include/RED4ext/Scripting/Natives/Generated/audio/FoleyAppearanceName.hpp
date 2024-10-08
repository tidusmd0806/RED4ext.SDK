#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct FoleyAppearanceName : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioFoleyAppearanceName";
    static constexpr const char* ALIAS = NAME;

    bool void_; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(FoleyAppearanceName, 0x40);
} // namespace audio
using audioFoleyAppearanceName = audio::FoleyAppearanceName;
} // namespace RED4ext

// clang-format on
