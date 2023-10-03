#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/CameraManager.hpp>

namespace RED4ext
{
namespace vehicle { 
struct CameraManagerFT : CameraManager
{
    static constexpr const char* NAME = "vehicleCameraManagerFT";
    static constexpr const char* ALIAS = "VehicleCameraManagerFT";

};
RED4EXT_ASSERT_SIZE(CameraManagerFT, 0x390);
} // namespace vehicle
using vehicleCameraManagerFT = vehicle::CameraManagerFT;
using VehicleCameraManagerFT = vehicle::CameraManagerFT;
} // namespace RED4ext

// clang-format on
