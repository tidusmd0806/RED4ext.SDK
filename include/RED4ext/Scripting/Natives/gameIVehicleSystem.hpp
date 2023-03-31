#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game { 

struct VehicleInterface1 {
    virtual ~VehicleInterface1();
    // something with unk188
    virtual void VI1_sub_08();
    // something with PopulationSysem
    virtual void VI1_sub_10();
    // all three set & return 0s
    virtual void VI1_sub_18();
    virtual void VI1_sub_20();
    virtual void VI1_sub_28();
};

struct IVehicleSystem : IGameSystem, VehicleInterface1
{
    static constexpr const char* NAME = "gameIVehicleSystem";
    static constexpr const char* ALIAS = "IVehicleSystem";

    virtual void __fastcall sub_1A8() = 0;
    virtual void __fastcall sub_1B0() = 0;
    virtual void __fastcall sub_1B8() = 0;
    virtual void __fastcall sub_1C0() = 0;
    virtual void __fastcall sub_1C8() = 0;
    virtual void __fastcall sub_1D0() = 0;
    virtual void __fastcall sub_1D8() = 0;
    virtual void __fastcall sub_1E0() = 0;
    virtual void __fastcall sub_1E8() = 0;
    virtual void __fastcall sub_1F0() = 0;
    virtual void __fastcall sub_1F8() = 0;
    virtual void __fastcall sub_200() = 0;
    virtual void __fastcall sub_208() = 0;
    virtual void __fastcall sub_210() = 0;
    virtual void __fastcall sub_218() = 0;
    virtual void __fastcall sub_220() = 0;
    virtual void __fastcall sub_228() = 0;
    virtual void __fastcall sub_230() = 0;
    virtual void __fastcall sub_238() = 0;
    virtual void __fastcall sub_240() = 0;
    virtual void __fastcall sub_248() = 0;
    virtual void __fastcall sub_250() = 0;
    virtual void __fastcall sub_258() = 0;
    virtual void __fastcall sub_260() = 0;
    virtual void __fastcall sub_268() = 0;
    virtual void __fastcall sub_270() = 0;
    virtual void __fastcall sub_278() = 0;
    virtual void __fastcall sub_280() = 0;
    virtual void __fastcall sub_288() = 0;
    virtual void __fastcall sub_290() = 0;
    virtual void __fastcall sub_298() = 0;
    virtual void __fastcall sub_2A0() = 0;
    virtual void __fastcall sub_2A8() = 0;
    virtual void __fastcall sub_2B0() = 0;
    virtual void __fastcall sub_2B8() = 0;
    virtual void __fastcall sub_2C0() = 0;
    virtual void __fastcall sub_2C8() = 0;
    virtual void __fastcall sub_2D0() = 0;
    virtual void __fastcall sub_2D8() = 0;
    virtual void __fastcall sub_2E0() = 0;
    virtual void __fastcall sub_2E8() = 0;
    virtual void __fastcall sub_2F0() = 0;
    virtual void __fastcall sub_2F8() = 0;
    virtual void __fastcall sub_300() = 0;
    virtual void __fastcall sub_308() = 0;
    virtual void __fastcall sub_310() = 0;
    virtual void __fastcall sub_318() = 0;
    virtual void __fastcall sub_320() = 0;
    virtual void __fastcall sub_328() = 0;
    virtual void *__fastcall sub_330() = 0;
    virtual void __fastcall sub_338() = 0;
    virtual void __fastcall sub_340() = 0;
    virtual void __fastcall sub_348() = 0;
    virtual void __fastcall sub_350() = 0;
    virtual void __fastcall sub_358() = 0;
    virtual void __fastcall sub_360() = 0;
    virtual void __fastcall sub_368() = 0;
    virtual void __fastcall sub_370() = 0;
    virtual void __fastcall sub_378() = 0;
    virtual uint64_t ** __fastcall sub_380() = 0;

};
RED4EXT_ASSERT_SIZE(IVehicleSystem, 0x50);
} // namespace game
using IVehicleSystem = game::IVehicleSystem;
} // namespace RED4ext
