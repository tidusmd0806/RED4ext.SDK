#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/ChassisComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/OccupantSlotComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Vehicle_Record.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/Controller.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/CameraManager.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/Component.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CAgent.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/Component.hpp>

#include <RED4ext/Scripting/Natives/vehicleBaseObject.hpp>

namespace RED4ext
{
namespace vehicle
{

// struct BaseObject : game::Object
// {
//     static constexpr const char* NAME = "vehicleBaseObject";
//     static constexpr const char* ALIAS = "VehicleObject";

//     uint8_t unk240[0x3B0 - 0x240]; // 240
//     Ref<AI::Archetype> archetype; // 3B0
//     uint8_t unk3C8[0x6E2 - 0x3C8]; // 3C8
//     bool isVehicleOnStateLocked; // 6E2
//     uint8_t unk6E3[0xBA0 - 0x6E3]; // 6E3
// };
RED4EXT_ASSERT_SIZE(BaseObject, 0xBA0);
} // namespace vehicle
using vehicleBaseObject = vehicle::BaseObject;
using VehicleObject = vehicle::BaseObject;
} // namespace RED4ext

// clang-format on
