#pragma once

// This file is generated by Jack

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/actionActionBase.hpp>

namespace RED4ext {
namespace action {

struct Drive : ActionBase
{
    // static constexpr const uintptr_t VFT = 0x35FFC18;
    
    // removes chase state, adds parked
    virtual void sub_28() override;

    // a setup maybe
    inline virtual bool sub_88(move::Component* moveComponent, vehicle::AutonomousData* autonomousData);/* {
        RelocFunc<decltype(&Drive::sub_88)> call(VFT, 0x88);
        return call(this, moveComponent, autonomousData);
    }*/
    virtual void sub_90(uint64_t, uint64_t);
    // update - if true, action ends
    virtual bool sub_98();

    WorldTransform unk50;
    uint32_t unk70;
    uint32_t unk74;
    uint64_t unk78;
    uint64_t unk80;
    float unk88;
    float unk8C;
    Handle<vehicle::BaseObject> vehicle;
    Handle<ISerializable> unkA0;
    uint64_t unkB0;
    uint32_t unkB8;
    uint32_t unkBC;
    // 0x130 big
    void *unkC0;
    void *trafficSystem;
    void *moveComponent;
    void *unkD8;
    vehicle::AutonomousData *vehicleAutonomousData;
    uint32_t unkE8;
    uint32_t unkEC;
    int8_t unkF0;
    int8_t unkF1;
    int8_t unkF2;
    int8_t unkF3;
    uint16_t unkF4;
    uint8_t unkF6;
    uint8_t unkF7;
    DynArray<Vector3> unkF8;
    uint32_t someID;
    uint8_t unk10C;
    uint8_t unk10D;
    uint8_t unk10E;
    uint8_t unk10F;
    uint32_t unk110;
    uint32_t unk114;
};

struct DriveFollowSlot : Drive
{
  uint64_t unk118;
  uint32_t unk120;
  uint8_t unk124;
  uint8_t unk125;
  uint8_t unk126;
  uint8_t unk127;
};

} // namespace action
} // namespace RED4ext

