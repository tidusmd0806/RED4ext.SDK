#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/scn/NodeId.hpp>

namespace RED4ext
{
namespace scn { 
struct ExitPoint
{
    static constexpr const char* NAME = "scnExitPoint";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    scn::NodeId nodeId; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
};
RED4EXT_ASSERT_SIZE(ExitPoint, 0x10);
} // namespace scn
} // namespace RED4ext
