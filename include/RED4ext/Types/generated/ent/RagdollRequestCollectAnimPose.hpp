#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/red/Event.hpp>

namespace RED4ext
{
namespace ent { 
struct RagdollRequestCollectAnimPose : red::Event
{
    static constexpr const char* NAME = "entRagdollRequestCollectAnimPose";
    static constexpr const char* ALIAS = "RagdollRequestCollectAnimPoseEvent";

};
RED4EXT_ASSERT_SIZE(RagdollRequestCollectAnimPose, 0x40);
} // namespace ent
using RagdollRequestCollectAnimPoseEvent = ent::RagdollRequestCollectAnimPose;
} // namespace RED4ext
