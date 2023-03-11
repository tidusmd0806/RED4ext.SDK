#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/CustomEmitterMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VehicleEmitterPositionData.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VehicleGeneralData.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VehicleMechanicalData.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VehicleWheelData.hpp>

namespace RED4ext
{
namespace audio { 
struct VehicleMetadata : audio::CustomEmitterMetadata
{
    static constexpr const char* NAME = "audioVehicleMetadata";
    static constexpr const char* ALIAS = NAME;

    // 1.6  RVA: 0x3630F0 / 3551472
    /// @pattern 41 FF C8 41 83 F8 25 0F 87 7A 01 00 00 49 63 C0 4C 8D 0D F9 CE C9 FF 45 8B 84 81 80 32 36 00 4D
    CName *__fastcall GetEventData(CName *a2, int type);

    CName vehicleCollisionSettings; // 38
    CName vehicleGridDestructionSettings; // 40
    CName vehiclePartSettings; // 48
    float collisionCooldown; // 50
    float minRpm; // 54
    float maxRpm; // 58
    float maxPlayingDistance; // 5C
    float dopplerFactor; // 60
    float suspensionSqueekTimeout; // 64
    float exitDelay; // 68
    bool testWheelMaterial; // 6C
    bool hasRadioReceiver; // 6D
    bool usesPoliceRadioStation; // 6E
    uint8_t unk6F[0x70 - 0x6F]; // 6F
    float acousticIsolationFactor; // 70
    uint8_t unk74[0x78 - 0x74]; // 74
    CName trafficEmitterMetadata; // 78
    CName radioReceiverType; // 80
    DynArray<CName> matchingStartupRadioStations; // 88
    float radioPlaysWhenEngineStartsProbability; // 98
    uint8_t unk9C[0xA0 - 0x9C]; // 9C
    audio::VehicleGeneralData generalData; // A0
    audio::VehicleMechanicalData mechanicalData; // 1D8
    audio::VehicleWheelData wheelData; // 268
    audio::VehicleEmitterPositionData emitterPositionData; // 2C0
    uint8_t unk32C[0x330 - 0x32C]; // 32C
    DynArray<CName> gearSweeteners; // 330
    uint8_t unk340[0x350 - 0x340]; // 340
};
RED4EXT_ASSERT_SIZE(VehicleMetadata, 0x350);
} // namespace audio
} // namespace RED4ext

// clang-format on
