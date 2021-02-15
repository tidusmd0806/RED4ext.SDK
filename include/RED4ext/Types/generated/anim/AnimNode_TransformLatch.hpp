#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/anim/AnimNode_TransformValue.hpp>
#include <RED4ext/Types/generated/anim/TransformLink.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNode_TransformLatch : anim::AnimNode_TransformValue
{
    static constexpr const char* NAME = "animAnimNode_TransformLatch";
    static constexpr const char* ALIAS = NAME;

    anim::TransformLink input; // 48
    uint8_t unk68[0x78 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(AnimNode_TransformLatch, 0x78);
} // namespace anim
} // namespace RED4ext
