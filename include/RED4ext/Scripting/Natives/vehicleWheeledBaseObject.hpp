#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/BaseObject.hpp>

namespace RED4ext
{
namespace vehicle { 
struct WheeledBaseObject : vehicle::BaseObject
{
    static constexpr const char* NAME = "vehicleWheeledBaseObject";
    static constexpr const char* ALIAS = "WheeledObject";
    static constexpr const uintptr_t VFT = vehicleWheeledBaseObject_VFT_Addr;

// overrides

    // get gear info
    virtual float __fastcall sub_298() override;

    // engine, transmission, update blackboard stuff
    virtual uint64_t __fastcall sub_2A8() override;

    // updates some struct
    virtual uint64_t __fastcall sub_2B0(uint64_t, uint64_t) override;

    // inserts, is touching ground
    virtual void __fastcall sub_2B8(uint64_t, uint64_t) override;

    // engine, transmission
    virtual void __fastcall sub_2C0(float) override;

    // sets isOnGround
    virtual void __fastcall sub_2C8() override;

    // update engine data
    virtual uint64_t __fastcall sub_310() override;

    // engineData
    virtual bool __fastcall sub_318() override;

    // Get energy maybe
    virtual float __fastcall sub_320() override;
    
    virtual uint64_t __fastcall sub_328(Handle<ISerializable>*) override;
    virtual uint64_t __fastcall sub_330(Handle<ISerializable>*) override;

    virtual uint64_t __fastcall sub_350() override;

    // unk580 stuff, audio related
    virtual uint64_t __fastcall sub_358() override;

// new virtuals

    // something with wheels & physics
    virtual void * __fastcall sub_388();

    void * interactionsMaybe;
    void * transmissionData;
    void * engineData;
    void * burnoutData;
};
RED4EXT_ASSERT_SIZE(WheeledBaseObject, 0x9A0);
} // namespace vehicle
using WheeledObject = vehicle::WheeledBaseObject;
} // namespace RED4ext
