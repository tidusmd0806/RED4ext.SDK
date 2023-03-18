#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game { 

struct VehicleInterface1 {
    virtual void sub_00();
    virtual void sub_08();
    virtual void sub_10();
    virtual void sub_18();
    virtual void sub_20();
    virtual void sub_28();
};

struct IVehicleSystem : IGameSystem, VehicleInterface1
{
    static constexpr const char* NAME = "gameIVehicleSystem";
    static constexpr const char* ALIAS = "IVehicleSystem";
};
RED4EXT_ASSERT_SIZE(IVehicleSystem, 0x50);
} // namespace game
using IVehicleSystem = game::IVehicleSystem;
} // namespace RED4ext
