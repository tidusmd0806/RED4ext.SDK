#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data
{
struct VehicleFxWheelsDecalsMaterial_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleFxWheelsDecalsMaterial_Record";
    static constexpr const char* ALIAS = "VehicleFxWheelsDecalsMaterial_Record";

    uint8_t material[3]; // 48
    uint8_t skid_marks_decal[3]; 
    uint8_t tire_tracks_decal[3];
};
RED4EXT_ASSERT_SIZE(VehicleFxWheelsDecalsMaterial_Record, 0x70);
} // namespace game::data
using gamedataVehicleFxWheelsDecalsMaterial_Record = game::data::VehicleFxWheelsDecalsMaterial_Record;
using VehicleFxWheelsDecalsMaterial_Record = game::data::VehicleFxWheelsDecalsMaterial_Record;
} // namespace RED4ext

// clang-format on
