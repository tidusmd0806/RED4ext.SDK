#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/SWeaponPlaneParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldTransform.hpp>

namespace RED4ext
{
namespace ent { 
struct __declspec(align(0x10)) TargetedCameraInterface
{
    static constexpr const char* NAME = "entCameraInterface";
    static constexpr const char* ALIAS = NAME;
    // static constexpr const uintptr_t VFT = 0x3297558;

    virtual void sub_00();// = 0;
    virtual void sub_08();// = 0;
    virtual void sub_10();// = 0;
    virtual void sub_18();// = 0;
    virtual void CopyParameters(void *);// = 0;
    virtual Vector3* GetInitialPosition(Vector3 *);// = 0;
    virtual Quaternion* GetInitialOrientation(Quaternion*);// = 0;
    virtual void sub_38();// = 0;

    // Some transform math
    virtual void Update();// = 0;
    virtual const char* GetTypeName();// = 0;
    virtual float GetIntrefaceZoom();// = 0;
    // called in main update
    virtual void sub_58();// = 0;
    virtual void sub_60();// = 0;
    virtual void sub_68();// = 0;
    virtual void sub_70();// = 0;
    virtual void sub_78();// = 0;

    // Apply something maybe
    virtual void sub_80();// = 0;
    virtual void sub_88();// = 0;
    virtual void sub_90();// = 0;
    virtual void sub_98();// = 0;
    
    // from ent/BaseCameraComponent.hpp - offsets are +120
    float fov; // 128
    // WorldTransform someTransform; // 12C
    uint8_t unk12C[0x15C - 0x12C]; // 12C
    float zoom; // 15C
    uint8_t unk160[0x168 - 0x160]; // 160
    float nearPlaneOverride; // 168
    float farPlaneOverride; // 16C
    float motionBlurScale; // 170
    uint8_t unk174[0x178 - 0x174]; // 174
    SWeaponPlaneParams weaponPlane; // 178
    uint8_t unk194[0x1E0 - 0x194]; // 194
};

RED4EXT_ASSERT_SIZE(TargetedCameraInterface, 0xC0);

} // namespace ent
} // namespace RED4ext
