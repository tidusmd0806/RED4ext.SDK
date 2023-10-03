#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ComponentPS.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/AudioPSData.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/DestructionPSData.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/WheelRuntimePSData.hpp>

namespace RED4ext
{
namespace vehicle
{
struct PersistentDataPS : game::ComponentPS
{
    static constexpr const char* NAME = "vehiclePersistentDataPS";
    static constexpr const char* ALIAS = NAME;

    // 1.52 RVA: 0x1CA5F70 / 30039920
    /// @pattern 48 89 5C 24 08 57 48 83 EC 30 0F B6 DA 48 8B F9 48 8B D1 45 33 C0 48 8D 4C 24 20 E8 C0 B2 53 FE
    // void __fastcall ToggleQuestForceBraking(bool on) {
    //     RelocFunc<decltype(&PersistentDataPS::ToggleQuestForceBraking)> call(0x1CA5F70);
    //     call(this, on);
    // }

    // 1.6  RVA: 0x1CD26F0 / 30222064
    /// @pattern 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 30 8B DA 49 8B F0 48 8B D1 48 8B F9 48 8D 4C 24 20 45
    void __fastcall UpdateWheelRuntime(unsigned int wheelIndex, RED4ext::vehicle::WheelRuntimePSData *a3);

    // 1.6  RVA: 0x1CD1150 / 30216528
    // 1.61hf1 RVA: 0x1CD1A10 / 30218768
    /// @pattern 40 53 48 83 EC 30 48 8B D9 48 8B D1 48 8D 4C 24 20 45 33 C0 E8 ? ? 51 FE 0F 28 1D ? ? 40 01
    void __fastcall ResetQuestEnforceTransform();

    enum class Flags : uint32_t {
        Awake = 0x2,
        QuestBraking = 0x4,
        PlayerControlled = 0x2000,
        InAir = 0x4000,
        PlayerControlledMaybe = 0x20000,
    } flags; // 68
    float autopilotPos; // 6C
    float autopilotCurrentSpeed; // 70
    uint8_t unk74[0x78 - 0x74]; // 74
#pragma warning(suppress : 4324)
    alignas(8) StaticArray<vehicle::WheelRuntimePSData, 4> wheelRuntimeData; // 78
    Transform questEnforcedTransform; // E0
    vehicle::DestructionPSData destruction; // 100
    vehicle::AudioPSData audio; // 1A8
    uint8_t unk1F8[0x220 - 0x1F8]; // 1F8
};
RED4EXT_ASSERT_SIZE(PersistentDataPS, 0x220);
} // namespace vehicle
using vehiclePersistentDataPS = vehicle::PersistentDataPS;
} // namespace RED4ext

// clang-format on
