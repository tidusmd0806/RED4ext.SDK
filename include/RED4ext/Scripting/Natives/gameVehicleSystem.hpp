#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IVehicleSystem.hpp>

namespace RED4ext
{
namespace game { 

// AIbehaviorEventHandler maybe? could be optimization artifact
struct VehicleInterface2 {
    virtual void sub_00();
    virtual void sub_08();
}

// dynamic array of some sort? used elsewhere
struct VehicleInterface3 {
    virtual void sub_00();
    virtual void sub_08();
}

struct VehicleSystem : game::IVehicleSystem, VehicleInterface2, VehicleInterface3
{
    static constexpr const char* NAME = "gameVehicleSystem";
    static constexpr const char* ALIAS = "VehicleSystem";

    uint8_t unk50[0x208C0 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(VehicleSystem, 0x208C0);
} // namespace game
using VehicleSystem = game::VehicleSystem;
} // namespace RED4ext
