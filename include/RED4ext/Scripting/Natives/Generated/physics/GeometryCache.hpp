#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/GeometryKey.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/SectorCacheEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/SectorEntry.hpp>

namespace RED4ext
{
namespace physics { 
struct GeometryCache : CResource
{
    static constexpr const char* NAME = "physicsGeometryCache";
    static constexpr const char* ALIAS = NAME;

    // 1.6 RVA: 0x442D50 / 4468048
    /// @pattern 40 55 53 56 57 41 56 48 8D 6C 24 C9 48 81 EC C0 00 00 00 44 8B 99 08 01 00 00 48 8B D9 66 FF 81
    __int64 __fastcall LoadAlwaysloadedSectorGeometriesSetup(__int64 a2);

    // 1.6 RVA: 0x4430B0 / 4468912
    /// @pattern 48 8B C4 55 41 56 41 57 48 8D 68 98 48 81 EC 50 01 00 00 4C 8B F1 44 8B FA 3B 51 5C 0F 87 30 03
    __int64 __fastcall LoadSectorGeometriesSetup(uint32_t);

    DynArray<DeferredDataBuffer> bufferTableSectors; // 40
    DynArray<physics::SectorEntry> sectorEntries; // 50
    DynArray<physics::GeometryKey> sectorGeometries; // 60
    DynArray<physics::SectorCacheEntry> sectorCacheEntries; // 70
    DeferredDataBuffer alwaysLoadedSectorDDB; // 80
    uint8_t unkD8[0xE0 - 0xD8]; // D8
    physics::SectorEntry alwaysLoadedSector; // E0
    HashMap<uint64_t, uint64_t> unk120; // 120
    uint8_t unk150[0x190 - 0x150]; // 150
};
RED4EXT_ASSERT_SIZE(GeometryCache, 0x190);
} // namespace physics
} // namespace RED4ext

// clang-format on
