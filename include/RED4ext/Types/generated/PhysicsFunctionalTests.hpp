#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
struct PhysicsFunctionalTests : IScriptable
{
    static constexpr const char* NAME = "PhysicsFunctionalTests";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x60 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(PhysicsFunctionalTests, 0x60);
} // namespace RED4ext
