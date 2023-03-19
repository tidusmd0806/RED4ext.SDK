#pragma once

// This file is generated by Jack

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/actionDrive.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext {
namespace action {
    
struct DriveChaseTarget : Drive
{
    // static constexpr const uintptr_t VFT = 0x35FEE40;
    
    float unk118;
    float unk11C;
    uint32_t chaseState;
    float unk124;
    Handle<game::Object> target;
    float unk138;
    float unk13C;
    Vector4 unk140;
    Vector4 unk150;
    float distanceFromTarget;
    float unk164;
    Vector3 unk168;
    float unk174;
    float unk178;
    float unk180;
    float unk184;
    DynArray<void*> unk188;
    float distanceMin;
    float distanceMax;
    float unk1A0;
    float unk1A4;
    float unk1A8;
    float unk1AC;
    Vector4 unk1B0;
    float unk1C0;
    float unk1C4;
    float unk1C8;
    float unk1CC;
    DynArray<void*> unk1D0;
    uint64_t unk1E0;
};

}
}
