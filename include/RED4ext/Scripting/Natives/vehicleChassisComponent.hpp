#pragma once

// This file is generated from the Game's Reflection data

#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/SimulationType.hpp>
#include <RED4ext/Scripting/Natives/entITransformAttachable.hpp>
#include <RED4ext/Scripting/Natives/physicsGeoCacheStorage.hpp>
#include <RED4ext/Scripting/Natives/physicsStateValue.hpp>
#include <cstdint>

namespace RED4ext
{
namespace physics
{
struct SystemResource;
struct ICollider;
struct FilterData;
} // namespace physics
namespace game
{
struct VehicleSystem;
}

namespace vehicle
{

struct ChassisComponent
    : ent::IPlacedComponent
    , ent::ITransformAttachable
{
    static constexpr const char* NAME = "vehicleChassisComponent";
    static constexpr const char* ALIAS = NAME;

    /// @pattern 20 8A 67 5B F7 7F 00 00 6D 5F 63 6F 6C 6C 69 73 69 6F 6E 52 65 73 6F 75 72 63 65 00 00 00 00 00
    /// @offset 24
    // static constexpr const uintptr_t ITransformAttachable::VFT = 0;

    // virtuals

    // creates collider & geoCacheIDs
    // virtual sub_178(uint64_t);

    // references geoCacheIDs and unk180
    // virtual sub_180();

    // turns on/off collision based on a1
    virtual void sub_1E8(bool a1);

    // something with playerOnly geoCacheID
    virtual void ITransformAttachable_08(WorldTransform*, bool);

    // non-virtual methods

    // 1.52 RVA: 0x1C6FCA0 / 29818016
    /// @pattern 4C 8B DC 53 48 83 EC 70 8B 81 60 01 00 00 48 8B D9 49 8D 4B 08 41 89 43 08 E8 82 60 7D FE 84 C0
    __int64 __fastcall Unknown1();

    // 1.52 RVA: 0x1C71CB0 / 29826224
    /// @pattern 40 53 48 83 EC 20 80 B9 8B 00 00 00 00 48 8B D9 74 2F 8B 81 60 01 00 00 48 8D 4C 24 30 89 44 24
    void __fastcall SomethingIfEnabled();

    // 1.6 RVA: 0x1C9E610 / 30008848
    /// @pattern 40 55 41 55 48 8D AC 24 78 F9 FF FF 48 81 EC 88 07 00 00 8B 81 60 01 00 00 4C 8B E9 48 8D 8D B0
    char __fastcall BigUpdate();

    // may set CCD based on the Z component of vehicle->unk568->linearVelocity (unk48) abs(Z) <= 13.0
    // 1.6 RVA: 0x1C9FE40 / 30015040
    /// @pattern 40 53 48 83 EC 40 48 89 74 24 60 48 8B D9 8B B1 70 01 00 00 48 89 7C 24 68 48 8B 79 50 48 85 FF
    void __fastcall Update();

    // 1.6  RVA: 0x1C9CBD0 / 30002128
    /// @pattern 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 30 48 8B DA 48 8B F9 45 84 C0 74 1C 48 8D B1 40 01 00
    Handle<RED4ext::physics::ICollider>** __fastcall GetCollisionShapes(Handle<RED4ext::physics::ICollider>** start_end,
                                                                        char playerOnly);

    // 1.6  RVA: 0x1C9BED0 / 29998800
    /// @pattern 48 83 EC 48 41 0F 10 60 10 4D 8B C8 0F 29 74 24 30 0F 28 DC 0F 59 DC C7 44 24 0C 00 00 80 3F 0F
    WorldTransform* __fastcall TransformWorldTransform(WorldTransform* a2, WorldTransform* a3);

    // 1.6  RVA: 0x1C9C840 / 30001216
    /// @pattern 40 53 48 83 EC 20 8B 81 60 01 00 00 4C 8D 81 6C 01 00 00 48 8B DA 89 44 24 30 48 8B CB 48 8D 54
    inline physics::GeoThing* __fastcall GetGeoThingAndLock(physics::GeoThing* geoThing)
    {
        RelocFunc<decltype(&ChassisComponent::GetGeoThingAndLock)> call(
            vehicleChassisComponent_GetGeoThingAndLock_Addr);
        return call(this, geoThing);
    }

    // 1.6  RVA: 0x1C9C110 / 29999376
    /// @pattern 40 53 48 83 EC 40 8B 81 60 01 00 00 48 8B D9 48 8D 4C 24 50 89 44 24 50 E8 33 F1 7A FE 84 C0 74
    char __fastcall SetDampingToPoint4();

    // does some bit testing on unk174 & shapeIndex for setting with filterDataBottom
    // 1.6  RVA: 0x1C9C300 / 29999872
    /// @pattern 48 89 5C 24 10 48 89 74 24 18 57 48 83 EC 40 8B 81 60 01 00 00 49 8B F0 4C 8D 81 6C 01 00 00 89
    __int64 __fastcall SetFilterData(physics::FilterData* filterData, physics::FilterData* filterDataBottom);

    // 1.6 RVA: 0x1C9DF40 / 30007104
    /// @pattern 48 89 5C 24 18 55 56 57 48 83 EC 60 48 8B 79 50 41 0F B6 E8 8B F2 48 8B D9 48 85 FF 0F 84 9F 01
    inline void __fastcall UpdatePhysicsState(uint32_t a2, bool unset)
    {
        RelocFunc<decltype(&ChassisComponent::UpdatePhysicsState)> call(
            vehicleChassisComponent_UpdatePhysicsState_Addr);
        return call(this, a2, unset);
    }

    // data

    Ref<physics::SystemResource> collisionResource;                   // 128
    Ref<physics::SystemResource> optionalPlayerOnlyCollisionResource; // 140
    uint64_t unk158;
    physics::GeoCacheID geoCacheID;
    physics::GeoCacheID geoCacheID_PlayerOnly;
    physics::GeoStuffID geoStuffID;
    SharedMutex sharedMutex;
    uint32_t unk170;
    // colliders that have chassis_bottom tag - seems to extend past 32bits
    // 1 << shape_index
    uint32_t chassisBottomMask;
    uint64_t unk178;
    NativeArray<physics::InitialState, 16> * initialStates;
    game::VehicleSystem* vehicleSystem;
};
RED4EXT_ASSERT_SIZE(ChassisComponent, 0x190);


struct BaseSystemKey
{
    // just after "TimeDeltaOverride"
    // 1.6  RVA: 0x313A550
    // 1.62 RVA: 0x3142700
    static constexpr const uintptr_t VFT = 0x3142700;

    virtual void sub_00();
    // iterates through physicsSystemResource->bodies
    // creates rigid bodies through physx, sets them up
    virtual void Process(PhysicalSystemDesc*);
    virtual void sub_10(RED4ext::physics::GeoStuffID*);
    // does something with aggregate/bodies
    virtual void sub_18(RED4ext::physics::GeoStuffID*);
    virtual void sub_20(RED4ext::physics::GeoStuffID*);
    virtual void sub_28();
    virtual void sub_30();
    virtual void sub_38();
    virtual void sub_40();
    // number of rigidBodies
    virtual uint32_t sub_48() = 0;
    // similar to sub_58, but seems to be mostly reads/gets
    // gets rigidFlag & 4 != 1
    virtual bool sub_50(uint32_t bodyIndex, uint32_t shapeIndex, physics::StateValue updateType, void* data,
                        size_t dataSize);
    // does different things based on updateType
    // calls pxRigidBody_Update & returns 1 if successful/handled
    // if bodyIndex belongs to a PxRigidBody, the processing continues
    // 12: PxRigidBodyExt::addForce
    // 15: setLinearVelocity & setAngularVelocity
    // 73: setRigidBodyFlag(4, data), setRigidBodyFlag(64, data)
    virtual bool sub_58(uint32_t bodyIndex, uint32_t shapeIndex, physics::StateValue updateType, void* data,
                        size_t dataSize, bool wakeOption);
    virtual void sub_60();
    virtual void sub_68();
    virtual void sub_70();

    Handle<ent::Entity> entity;
    Handle<ent::IComponent> component;
    // num of handles used
    uint32_t numHandles;
    uint32_t unk2C;
    physics::GeoCacheID geoCacheID;
    // some index in a global array/storage of refCounts (inc on creation, dec on deletion)
    ProxyType type;
    // set from desc.unkB8 (0x17 for chassis)
    uint8_t unk35;
    uint8_t unk36;
    enum class Flags : uint8_t {
        // checked when enabling/disabling collision
        unk40 = 0x40,
    } flags;
    // 
    uint64_t unk38;

//    void DisableCollision() {
//        if (flags.unk40) {
//            if (unk38 == 0) {
//                // add to unk948.systemKeys
//            }
//            unk38 = 2;
//        } else {
//            if (unk38 != 0) {
//                // remove from unk948.systemKeys
//                // set unk2A2054[geoCacheID.id] to -1
//            }
//            unk38 = 0;
//        }
//    }
//
//    void EnableCollision() {
//        if (flags.unk40) {
//            if (unk38 != 0) {
//                // remove from unk948.systemKeys
//            }
//            unk38 = 0;
//        } else {
//            if (unk38 == 0) {
//                // add to unk948.systemKeys
//                // set unk2A2054 to unk948.unk00
//            }
//            unk38 = 1;
//        }
//    }
};

struct PhysicalSystemKey : BaseSystemKey
{
    // just after 3BC43730h & 3F266666h
    // 1.6  RVA: 0x313D790
    // 1.62 RVA: 0x314592C
    static constexpr const uintptr_t VFT = 0x314592C;

    // offsets bodies from unk948.offset
    // runs aggregate->sub_60 or sub_78
    // put bodies to sleep if they're not kinematic
    // set flags to 0x40
    virtual void sub_10(RED4ext::physics::GeoStuffID *);

    // unsets flags 0x40
    // runs aggregate->sub_80 or sub_70
    //
    virtual void sub_18(RED4ext::physics::GeoStuffID *);

    virtual uint32_t sub_48() = 0;
    // handles stateValue.unk18 as well
    virtual bool sub_50(uint32_t bodyIndex, uint32_t shapeIndex, physics::StateValue updateType, void* data, size_t dataSize);
    virtual bool sub_58(uint32_t bodyIndex, uint32_t shapeIndex, physics::StateValue updateType, void* data, size_t dataSize, bool wakeOption);
    // PhysX D6Joints
    DynArray<void*> joints;
    // PxRigidBody*
    DynArray<void*> bodies;
    // PxAggregate*
    void* aggregate;
    uint8_t unk68;
};
} // namespace vehicle
} // namespace RED4ext

// 1.6 RVA: 0x4B8750 / 4949840
/// @pattern 48 8B C4 48 89 58 10 55 56 57 41 54 41 56 48 8D 68 A9 48 81 EC F0 00 00 00 44 0F 29 50 88 49 8B
char __fastcall pxRigidBody_Get(void* data, __int64 a2, RED4ext::physics::StateValue updateType,
                                void* rigidBody, uint32_t shapeIndex);

// does different things based on updateType:
// 1:  setKinematicTarget(a3)
// 2:  setGlobalPose(a3) don't wake
// 3:  setGlobalPose(a3)
// 4:  setLinearVelocity(a3)
// 5:  setAngularVelocity(a3)
// 7:  setLinearDamping(a3)
// 8:  setAngularDamping(a3)
// 13: if a3 putToSleep() else wakeUp()
// 16: PxRigidBodyExt::setMassAndUpdateInertia
// 17: setMassSpaceInertiaTensor(a3)
// 21: setRigidBodyFlag(1, a3)
// 22: setActorFlag(2, a3 == 0)
// 32: shapes[shapeIndex]->setSimulationFilterData(a3), sets all if shapeIndex == -1
// 33: shapes[shapeIndex]->setQueryFilterData(a3), sets all if shapeIndex == -1
// 34: shapes[shapeIndex]->setLocalPose(a3), sets all if shapeIndex == -1
// 38: setCMassLocalPose(a3)
// 41: shapes[shapeIndex]->setFlag(2, a3), sets all if shapeIndex == -1
// 42: shapes[shapeIndex]->setFlag(1, a3), sets all if shapeIndex == -1
// 1.6 RVA: 0x4B9570 / 4953456
/// @pattern 48 8B C4 55 56 57 41 56 48 8D 68 B1 48 81 EC D8 00 00 00 44 0F 29 48 98 49 8B F0 44 0F 29 50 88
char __fastcall pxRigidBody_Update(void* pxRigidBody, RED4ext::physics::StateValue updateType, void* a3,
                                   __int64 a4, unsigned int shapeIndex, char isAsleep);

// 1.6 RVA: 0x44AF80 / 4501376
/// @pattern 48 89 5C 24 18 48 89 74 24 20 57 48 83 EC 60 8B 1A 0F 57 C0 0F 29 44 24 40 48 8D 54 24 70 0F 28
RED4ext::Transform* __fastcall GeoCacheID_GetGlobalPose(RED4ext::Transform* a1, int* p_geoCacheID,
                                                        unsigned int bodyIndex);

// 1.6  RVA: 0x44A800 / 4499456
/// @pattern 48 89 5C 24 08 48 89 74 24 18 57 48 83 EC 50 8B 02 48 8B D9 41 8B D0 89 44 24 68 48 8D 4C 24 68
RED4ext::Transform* __fastcall GetShapeLocalPos(RED4ext::Transform*, RED4ext::physics::GeoCacheID* p_geoCacheID,
                                                unsigned int bodyIndex, uint32_t shapeIndex);