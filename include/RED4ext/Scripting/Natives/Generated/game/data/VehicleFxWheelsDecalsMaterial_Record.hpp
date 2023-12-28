#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>
#include <RED4ext/Scripting/Natives/gamedataTweakValue.hpp>

namespace RED4ext
{
namespace game::data
{
struct VehicleFxWheelsDecalsMaterial_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleFxWheelsDecalsMaterial_Record";
    static constexpr const char* ALIAS = "VehicleFxWheelsDecalsMaterial_Record";

    TweakValue material; // 48
    TweakValue skid_marks_decal; 
    TweakValue tire_tracks_decal;
};
RED4EXT_ASSERT_SIZE(VehicleFxWheelsDecalsMaterial_Record, 0x70);
} // namespace game::data
using gamedataVehicleFxWheelsDecalsMaterial_Record = game::data::VehicleFxWheelsDecalsMaterial_Record;
using VehicleFxWheelsDecalsMaterial_Record = game::data::VehicleFxWheelsDecalsMaterial_Record;
} // namespace RED4ext

// clang-format on
