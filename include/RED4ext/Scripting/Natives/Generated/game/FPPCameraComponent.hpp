#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CameraComponent.hpp>

namespace RED4ext
{
    namespace anim {
        struct AnimFeature_FPPCamera;
    }
namespace game {
// #pragma pack(push, 1)
struct __declspec(align(0x10)) FPPCameraComponent : game::CameraComponent
{
    static constexpr const char* NAME = "gameFPPCameraComponent";
    static constexpr const char* ALIAS = "FPPCameraComponent";

    uint8_t unk320[64];
    Handle<anim::AnimFeature_FPPCamera> animFeature;
    Handle<void> unk370;
    Handle<void> entityHandle;
    DynArray<void*> unk390;
    DynArray<void*> paramSets;
    Quaternion heading;
    CName currentParamSet;
    float pitchMin_related;
    float pitchMax_related;
    float yawMaxLeft_related;
    float yawMaxRight_related;
    float yawMaxLeft_tweak;
    float yawMaxRight_tweak;
    float pitchMin;
    float pitchMax;
    float yawMaxLeft;
    float yawMaxRight;
    uint8_t unk3F0[6];
    bool headingLocked;
    uint8_t unk3F7[5];
    float headingResetTimeout;
    uint8_t headingResetOnlyWhenMoving;
    uint8_t unk401[8];
    uint8_t maintainWorldSpaceHeading;
    uint8_t needsUpdate;
    uint8_t normalizeYaw;
    uint8_t unk40C[4];
    float fov2;
    uint8_t fov_related_calc[4];
    uint8_t overrideFovSetting;
    uint8_t unk419;
    uint8_t unk41A;
    uint8_t unk41B;
    float fov3;
    float fov_related;
    float fov_related2;
    uint8_t unk428[4];
    float yawOffset;
    float pitchOffset;
    uint8_t unk434[16];
    float yawRubberBandLimit;
    float yawRubberBandOnStretchSlowdown;
    float yawRubberBandLReturnMultipler;
    float yawRubberBandInputDamping;
    float pitchRubberBandLimit;
    float pitchRubberBandOnStretchSlowdown;
    float pitchRubberBandLReturnMultipler;
    float pitchRubberBandInputDamping;
    uint8_t unk464[32];
    uint32_t unk484;
    uint8_t unk490[12];
    float unk494;
    float sensitivityMultX;
    float sensitivityMultY;
    uint8_t unk4A0[16];
    RED4ext::CName timeDilationCurveName;
    uint8_t unk4B8[56];
    uint64_t accessibility_difficulty;
    uint64_t graphics_basic;
    uint8_t unk500[16];

    // uint8_t unk320[0x3E0 - 0x320]; // 320
    // float pitchMin; // 3E0
    // float pitchMax; // 3E4
    // float yawMaxLeft; // 3E8
    // float yawMaxRight; // 3EC
    // uint8_t unk3F0[0x3F6 - 0x3F0]; // 3F0
    // bool headingLocked; // 3F6
    // uint8_t unk3F7[0x498 - 0x3F7]; // 3F7
    // float sensitivityMultX; // 498
    // float sensitivityMultY; // 49C
    // uint8_t unk4A0[0x4B0 - 0x4A0]; // 4A0
    // CName timeDilationCurveName; // 4B0
    // uint8_t unk4B8[0x510 - 0x4B8]; // 4B8
};
RED4EXT_ASSERT_SIZE(FPPCameraComponent, 0x510);
} // namespace game
using gameFPPCameraComponent = game::FPPCameraComponent;
using FPPCameraComponent = game::FPPCameraComponent;
} // namespace RED4ext

// clang-format on
