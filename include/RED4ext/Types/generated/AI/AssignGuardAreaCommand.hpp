#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/AI/Command.hpp>

namespace RED4ext
{
namespace AI { 
struct AssignGuardAreaCommand : AI::Command
{
    static constexpr const char* NAME = "AIAssignGuardAreaCommand";
    static constexpr const char* ALIAS = "AIAssignRestrictMovementAreaCommand";

    NodeRef restrictMovementAreaRef; // 60
};
RED4EXT_ASSERT_SIZE(AssignGuardAreaCommand, 0x68);
} // namespace AI
using AIAssignRestrictMovementAreaCommand = AI::AssignGuardAreaCommand;
} // namespace RED4ext
