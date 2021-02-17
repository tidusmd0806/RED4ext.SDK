#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>

namespace RED4ext
{
namespace world { 
struct PrefabInstanceData : ISerializable
{
    static constexpr const char* NAME = "worldPrefabInstanceData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x40 - 0x30]; // 30
    DataBuffer buffer; // 40
};
RED4EXT_ASSERT_SIZE(PrefabInstanceData, 0x68);
} // namespace world
} // namespace RED4ext
