#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Types/generated/Color.hpp>

namespace RED4ext
{
namespace rend { 
struct HairProfileGradientEntry : ISerializable
{
    static constexpr const char* NAME = "rendHairProfileGradientEntry";
    static constexpr const char* ALIAS = NAME;

    float value; // 30
    Color color; // 34
};
RED4EXT_ASSERT_SIZE(HairProfileGradientEntry, 0x38);
} // namespace rend
} // namespace RED4ext
