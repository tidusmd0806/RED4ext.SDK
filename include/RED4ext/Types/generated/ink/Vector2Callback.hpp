#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ink/CallbackBase.hpp>

namespace RED4ext
{
namespace ink { 
struct Vector2Callback : ink::CallbackBase
{
    static constexpr const char* NAME = "inkVector2Callback";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk28[0x38 - 0x28]; // 28
};
RED4EXT_ASSERT_SIZE(Vector2Callback, 0x38);
} // namespace ink
} // namespace RED4ext
