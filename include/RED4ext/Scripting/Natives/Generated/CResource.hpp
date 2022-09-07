#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/ECookingPlatform.hpp>

namespace RED4ext
{
struct CResource : ISerializable
{
    static constexpr const char* NAME = "CResource";
    static constexpr const char* ALIAS = NAME;
    // static constexpr const uintptr_t VFT_RVA = 0x307E448;

    uint8_t unk30[0x38 - 0x30]; // 30
    ECookingPlatform cookingPlatform; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(CResource, 0x40);
} // namespace RED4ext

// clang-format on
