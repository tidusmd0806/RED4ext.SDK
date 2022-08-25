#pragma once

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
namespace vehicle { 
struct PersistentDataPS : game::ComponentPS
{
    static constexpr const char* NAME = "vehiclePersistentDataPS";
    static constexpr const char* ALIAS = NAME;

    // 1.52 RVA: 0x1CA5F70 / 30039920
    /// @pattern 48 89 5C 24 08 57 48 83 EC 30 0F B6 DA 48 8B F9 48 8B D1 45 33 C0 48 8D 4C 24 20 E8 C0 B2 53 FE
    void __fastcall ToggleQuestForceBraking(bool on) {
        RelocFunc<decltype(&PersistentDataPS::ToggleQuestForceBraking)> call(0x1CA5F70);
        call(this, on);
    }

    uint32_t flags; // 68
    float autopilotPos; // 6C
    float autopilotCurrentSpeed; // 70
    uint8_t unk74[0x78 - 0x74]; // 74
    alignas(8) StaticArray<vehicle::WheelRuntimePSData, 4> wheelRuntimeData; // 78
    Transform questEnforcedTransform; // E0
    vehicle::DestructionPSData destruction; // 100
    vehicle::AudioPSData audio; // 1A8
    uint8_t unk1B8[0x1C0 - 0x1B8]; // 1B8
};
RED4EXT_ASSERT_SIZE(PersistentDataPS, 0x1C0);
} // namespace vehicle
} // namespace RED4ext
