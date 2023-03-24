#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace physics { 

// enum class CollisionGroups : uint64_t {
// Player = (1<<0),
// AI = (1<<1),
// Static = (1<<2),
// Dynamic = (1<<3),
// Vehicle = (1<<4),
// Tank = (1<<5),
// Destructible = (1<<6),
// Terrain = (1<<7),
// Collider = (1<<8),
// Particle = (1<<9),
// Ragdoll = (1<<10),
// RagdollInner = (1<<11),
// Debris = (1<<12),
// Cloth = (1<<13),
// PlayerBlocker = (1<<14),
// VehicleBlocker = (1<<15),
// TankBlocker = (1<<16),
// DestructibleCluster = (1<<17),
// NPCBlocker = (1<<18)
// };

struct SimulationFilter
{
    static constexpr const char* NAME = "physicsSimulationFilter";
    static constexpr const char* ALIAS = "SimulationFilter";

    uint64_t mask1; // 00
    uint64_t mask2; // 08
};
RED4EXT_ASSERT_SIZE(SimulationFilter, 0x10);
} // namespace physics
using SimulationFilter = physics::SimulationFilter;
} // namespace RED4ext

// clang-format on
