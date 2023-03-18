#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IVehicleSystem.hpp>

namespace RED4ext
{
namespace vehicle { struct BaseObject; }
namespace game { 

// AIbehaviorEventHandler maybe? could be optimization artifact
struct VehicleInterface2 {
    virtual void sub_00();
    virtual void sub_08();
};

// dynamic array of some sort? used elsewhere
struct VehicleInterface3 {
    virtual void sub_00();
    virtual void sub_08();
};

struct VehicleSystem : IVehicleSystem, VehicleInterface2, VehicleInterface3
{
    static constexpr const char* NAME = "gameVehicleSystem";
    static constexpr const char* ALIAS = "VehicleSystem";
    static constexpr const uintptr_t VFT_RVA = gameVehicleSystem_VFT_RVA;

// virtuals

    // gets unk179AB pointers 
    virtual uint64_t ** sub_380(void ** a2);

// methods

    // 1.6 RVA: 0x1CE65E0 / 30303712
    /// @pattern 40 53 56 41 56 48 83 EC 30 8B 81 A0 79 01 00 48 8D B1 00 ED 00 00 4C 8B F1 48 8D 14 40 48 8D 1C
    void __fastcall UpdateVehicleArrays();

// callbacks

    // 1.6 RVA: 0x1CECC60 / 30329952
    /// @pattern 48 89 5C 24 18 55 56 57 41 56 41 57 48 83 EC 70 4C 8B F9 4C 8B F2 0F B6 4A 32 E8 41 0E F2 00 49
    static void SingleFixedStep(RED4ext::game::VehicleSystem **vehicleSystem_p, void*);

    // 1.6 RVA: 0x1CECFE0 / 30330848
    /// @pattern 48 89 74 24 10 48 89 7C 24 18 41 56 48 83 EC 30 48 8B 44 24 60 4C 8B F1 41 8B F9 41 8B F0 0F B6
    static void __fastcall Interpolation(RED4ext::game::VehicleSystem **vehicleSystem_p, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5);

    // updates physics states of vehicles in unkED00
    // 1.6 RVA: 0x1CED150 / 30331216
    /// @pattern 48 89 74 24 10 48 89 7C 24 20 41 56 48 83 EC 30 48 8B 44 24 60 4C 8B F1 41 8B F9 41 8B F0 0F B6
    static void __fastcall PreUpdateAndPreMove(RED4ext::game::VehicleSystem **rcx0, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5);

    // 1.6 RVA: 0x1CE2DB0 / 30289328
    /// @pattern 48 89 5C 24 10 48 89 4C 24 08 55 56 57 41 54 41 55 41 56 41 57 48 83 EC 60 48 8B 39 4C 8B F1 0F
    static void __fastcall BeginUpdate(RED4ext::game::VehicleSystem **rcx0);

    // calls sub_380, updates physics states
    // 1.6 RVA: 0x1CED0A0 / 30331040
    /// @pattern 48 89 74 24 10 48 89 7C 24 18 41 56 48 83 EC 30 48 8B 44 24 60 4C 8B F1 41 8B F9 41 8B F0 0F B6
    static void __fastcall PostMove(RED4ext::game::VehicleSystem **vehicleSystem_p, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5);

    uint64_t unk50[3];
    uint64_t unk78;
    uint64_t unk80[4];
    uint64_t unkA0;
    uint64_t unkA8[43];
    uint64_t unk200;
    uint64_t unk208[7519];
    struct HandleStorage {
        uint32_t unk00;
        uint32_t unk04;
        Handle<vehicle::BaseObject> handle;
    } unkED00[1500];
    uint32_t unk179A0;
    uint32_t unk179A4;
    uint64_t unk179AB[1500];
    uint32_t unk1A888;
    uint32_t unk1A88C;
    uint64_t unk1A890;
    uint64_t unk1A898[3009];
    float unk206A0;
    uint32_t unk206A4;
    uint64_t unk206A8[28];
    uint8_t unk20788;
    SharedMutex unk20789;
    uint8_t unk2078A;
    uint8_t unk2078B;
    uint8_t unk2078C;
    uint8_t unk2078D;
    uint8_t unk2078E;
    uint8_t unk2078F;
    // Map<uint32_t, RED4ext::vehicle::Unk588> unk20790;
    Map<uint32_t, uint64_t> unk20790;
    uint64_t unk207B8[4];
    SharedMutex unk207D8;
    DynArray<uint64_t> unk207E0;
    uint64_t unk207F0[19];
    SharedMutex unk20888;
    uint64_t unk20890[6];
};
RED4EXT_ASSERT_SIZE(VehicleSystem, 0x208C0);
} // namespace game
using VehicleSystem = game::VehicleSystem;
} // namespace RED4ext
