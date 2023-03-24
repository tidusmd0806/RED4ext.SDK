#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/QueryFilter.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/SimulationFilter.hpp>
#include <RED4ext/Addresses-Found.hpp>

namespace RED4ext
{
namespace physics { struct CustomFilterData; }

namespace physics { 
struct FilterData : ISerializable
{
    static constexpr const char* NAME = "physicsFilterData";
    static constexpr const char* ALIAS = NAME;

    /// @pattern 72 65 67 69 73 74 65 72 46 6F 72 50 65 72 73 69 73 74 65 6E 74 43 6F 6E 74 61 63 74 73 00 00 00
    /// @offset -32
    static constexpr const uintptr_t VFT = physicsFilterData_VFT_Addr;

    // 1.6  RVA: 0x43C990 / 4442512
    /// @pattern 48 89 5C 24 10 57 48 83 EC 20 48 8B DA 48 8B F9 E8 CB 2F 02 00 4C 8B C3 48 8D 54 24 30 48 8B C8
    inline void __fastcall LoadPreset( CName name) {
        RelocFunc<decltype(&FilterData::LoadPreset)> call(physicsFilterData_LoadPreset_Addr);
        return call(this, name);
    }

    physics::QueryFilter queryFilter; // 30
    physics::SimulationFilter simulationFilter; // 40
    CName preset; // 50
    Handle<physics::CustomFilterData> customFilterData; // 58
};
RED4EXT_ASSERT_SIZE(FilterData, 0x68);
} // namespace physics
} // namespace RED4ext

// clang-format on
