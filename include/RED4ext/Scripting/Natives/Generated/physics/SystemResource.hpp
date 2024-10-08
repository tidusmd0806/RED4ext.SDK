#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
struct CMesh;
namespace physics { struct SystemBody; }
namespace physics { struct SystemJoint; }

namespace physics
{
struct SystemResource : CResource
{
    static constexpr const char* NAME = "physicsSystemResource";
    static constexpr const char* ALIAS = NAME;

    // 1.6  RVA: 0xA34580 / 10700160
    /// @pattern 48 89 5C 24 08 48 89 74 24 10 48 89 7C 24 20 41 56 48 83 EC 40 48 8B DA 48 8B F9 E8 80 64 FF FF
    static Handle<SystemResource> *__fastcall GetFromCMesh(Handle<SystemResource> *systemResource, CMesh *cmesh);

    DynArray<Handle<physics::SystemBody>> bodies; // 40
    DynArray<Handle<physics::SystemJoint>> joints; // 50
};
RED4EXT_ASSERT_SIZE(SystemResource, 0x60);
} // namespace physics
using physicsSystemResource = physics::SystemResource;
} // namespace RED4ext

// clang-format on
