#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

#include <RED4ext/Scripting/Natives/userSettingsVar.hpp>

namespace RED4ext
{
namespace user { 
// struct SettingsVar : IScriptable
// {
//     static constexpr const char* NAME = "userSettingsVar";
//     static constexpr const char* ALIAS = "ConfigVar";

//     void * runtimeVar; // 40
// };
RED4EXT_ASSERT_SIZE(SettingsVar, 0x48);

} // namespace user
using userSettingsVar = user::SettingsVar;
using ConfigVar = user::SettingsVar;
} // namespace RED4ext

// clang-format on
