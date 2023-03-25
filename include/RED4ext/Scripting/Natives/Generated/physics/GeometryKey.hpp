#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace physics { 

enum class StaticCollisionShapeCategory : uint32_t {
    Interior = 0,
    Exterior = 1,
    Architecture = 2,
    Decoration = 3,
    Other = 4
};

enum class QueryUseCase : uint16_t {
    Default = 0,
    ActionAnimation = 1,
    AI = 2,
    AnimationComponent = 3,
    Audio = 4,
    AudioHedgehog = 5,
    Components = 6,
    Debug = 7,
    Gameplay = 8,
    GeomDescription = 9,
    LineOfSightTests = 10,
    Navigation = 11,
    Nodes = 12,
    Ragdoll = 13,
    Scripts = 14,
    VehicleAI = 15,
    Vehicles = 16,
    VehicleChassis = 17,
    VehiclesCrowd = 18,
    VehicleWheel = 19,
    VehicleStreamingHack = 20,
    VehicleWater = 21,
    WorldUI = 22,
    GameEffects = 23,
    GameProjectiles = 24
};

struct GeometryKey
{
    static constexpr const char* NAME = "physicsGeometryKey";
    static constexpr const char* ALIAS = NAME;

    NativeArray<uint8_t, 12> ta; // 00
    // ShapeType maybe?
    // 3
    // 4 does something with PxTriangleMesh
    // 5
    uint8_t pe;
    uint8_t unk0D[0x10 - 0xD]; // D
};
RED4EXT_ASSERT_SIZE(GeometryKey, 0x10);
} // namespace physics
} // namespace RED4ext

// clang-format on
