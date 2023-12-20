#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/ICollider.hpp>

namespace RED4ext
{
namespace physics
{
struct __declspec(align(0x10)) ColliderSphere : physics::ICollider
{
    static constexpr const char* NAME = "physicsColliderSphere";
    static constexpr const char* ALIAS = NAME;
    static constexpr const uintptr_t VFT = physicsColliderSphere_VFT_Addr;

    virtual void * CreatePxShape(Vector3 * descUnk140, void * descUnkB0, bool one, void * descUnkC0);

    // 1.6  RVA: 0x42D0F0 / 4378864
    // @pattern 40 57 48 83 EC 40 0F 29 7C 24 30 0F 57 C0 0F 28 F9 48 8B F9 0F 2F F8 73 17 33 C0 48 89 01 48 89

    // 2.1
    /// @pattern 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 30 48 8B FA 48 8B F1 BA A0 00 00 00 48 8D 4C 24 20 41
    /// @nth 1/3
    static Handle<ColliderSphere> *__fastcall createHandleWithRadius(Handle<ICollider> *, float radius);

    float radius; // 90
    uint8_t unk94[0xA0 - 0x94]; // 94
};
RED4EXT_ASSERT_SIZE(ColliderSphere, 0xA0);
} // namespace physics
using physicsColliderSphere = physics::ColliderSphere;
} // namespace RED4ext

// clang-format on
