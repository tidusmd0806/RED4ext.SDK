#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace ink { 
struct UserData : IScriptable
{
    static constexpr const char* NAME = "inkUserData";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(UserData, 0x40);
} // namespace ink
} // namespace RED4ext
