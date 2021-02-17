#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Types/generated/anim/PoseLink.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNode_CurvePathSlot : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_CurvePathSlot";
    static constexpr const char* ALIAS = NAME;

    anim::PoseLink input; // 48
};
RED4EXT_ASSERT_SIZE(AnimNode_CurvePathSlot, 0x60);
} // namespace anim
} // namespace RED4ext
