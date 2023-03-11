#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace audio { 
struct VehicleWheelData
{
    static constexpr const char* NAME = "audioVehicleWheelData";
    static constexpr const char* ALIAS = NAME;

    float suspensionPressureMultiplier; // 00
    float landingSuspensionPressureMultiplier; // 04
    float suspensionPressureLimit; // 08
    float minSuspensionPressureThreshold; // 0C
    float suspensionImpactCooldown; // 10
    float minWheelTimeInAirBeforeLanding; // 14
    // 18
    // v_car_global_medium_tyre_start_fl
    // v_car_global_medium_tyre_traffic_start
    DynArray<CName> wheelStartEvents;
    // 28
    // v_car_global_medium_tyre_stop_fl
    // v_car_global_medium_tyre_traffic_stop
    DynArray<CName> wheelStopEvents;
    // 38
    // v_car_global_susp_rollover_common
    DynArray<CName> wheelRegularSuspensionImpacts;
    // 48
    // v_car_global_susp_landing_common
    DynArray<CName> wheelLandingSuspensionImpacts;
};
RED4EXT_ASSERT_SIZE(VehicleWheelData, 0x58);
} // namespace audio
} // namespace RED4ext

// clang-format on
