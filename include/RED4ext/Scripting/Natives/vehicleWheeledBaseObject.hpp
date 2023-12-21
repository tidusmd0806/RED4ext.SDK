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

    virtual void sub_268() override;                        // 268 
    virtual void sub_270() override;                        // 270 
    virtual double sub_278() override;                      // 278 
    virtual int32_t sub_280(WorldTransform*) override;      // 280
    virtual uint64_t sub_288() override;                    // 288

    virtual float sub_2A0() override;                       // 2A0 

    virtual void sub_2B0(uint64_t, uint64_t) override;      // 2B0
    virtual void sub_2B8() override;                        // 2B8
    virtual void sub_2C0(void *, void *) override;          // 2C0 
    virtual void sub_2C8() override;                        // 2C8

    virtual void * sub_2D8() override;                      // 2D8 
    virtual void sub_2E0() override;                        // 2E0
    virtual void sub_2E8() override;                        // 2E8
    virtual void sub_2F0() override;                        // 2F0
    virtual void * sub_2F8() override;                      // 2F8

    virtual uint64_t sub_308(bool) override;                // 308 calls sub_328

    virtual void sub_328(bool) override;                    // 328
    virtual uint8_t sub_330() override;                     // 330

    virtual uint64_t sub_348() override;                    // 348
    virtual void sub_350() override;                        // 350
    virtual void sub_358() override;                        // 358

    virtual void sub_370() override;                        // 370
    virtual void sub_378() override;                        // 378

    void * interactionsMaybe;
    void * transmissionData;
    void * engineData;
    void * burnoutData;
    uint8_t unkBB0[0x30];
};
RED4EXT_ASSERT_SIZE(WheeledBaseObject, 0xBE0);
} // namespace vehicle
using WheeledObject = vehicle::WheeledBaseObject;
} // namespace RED4ext
