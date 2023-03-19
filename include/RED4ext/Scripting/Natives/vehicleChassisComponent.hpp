#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/SimulationType.hpp>
// #include <RED4ext/Scripting/Natives/gameVehicleSystem.hpp>

namespace RED4ext
{
namespace physics { struct SystemResource; }
namespace game { struct VehicleSystem; }

namespace vehicle { 
struct ChassisComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "vehicleChassisComponent";
    static constexpr const char* ALIAS = NAME;

    // virtual sub_178(uint64_t);

    // 1.52 RVA: 0x1C6FCA0 / 29818016
    /// @pattern 4C 8B DC 53 48 83 EC 70 8B 81 60 01 00 00 48 8B D9 49 8D 4B 08 41 89 43 08 E8 82 60 7D FE 84 C0
    __int64 __fastcall Unknown1();

    // 1.52 RVA: 0x1C71CB0 / 29826224
    /// @pattern 40 53 48 83 EC 20 80 B9 8B 00 00 00 00 48 8B D9 74 2F 8B 81 60 01 00 00 48 8D 4C 24 30 89 44 24
    void __fastcall SomethingIfEnabled();

    uint64_t unk120;
    Ref<physics::SystemResource> collisionResource; // 128
    Ref<physics::SystemResource> optionalPlayerOnlyCollisionResource; // 140
    uint64_t unk158;
    uint32_t geoCacheRelated;
    uint32_t geoCacheRelated_PlayerOnly;
    uint64_t unk168[3];
    uint64_t unk180;
    game::VehicleSystem* vehicleSystem;
};
RED4EXT_ASSERT_SIZE(ChassisComponent, 0x190);

enum class SystemType : char {
    PhysicalSystemDesc = 0x1,
    CharacterControllerDesc = 0x2,
    DestructionDesc = 0x3,
    ParticleSystemDesc = 0x4,
    TriggerDesc = 0x5,
    ClothDesc = 0x6,
    WorldCollisionDesc = 0x7,
    TerrainDesc = 0x8,
    SimpleColliderDesc = 0x9,
    AggregateSystemDesc = 0xA,
    CharacterObstacleDesc = 0xB,
    Ragdoll = 0xC,
    FoliageDestructionDesc = 0xD
};

struct BaseSystemDesc
{
    // after "physicsGeometryKey" vft
    // 1.6  RVA: 0x313B3D0
    static constexpr const uintptr_t VFT = 0x313B3D0;

    // checks multiple things
    virtual bool IsEnabled();
    virtual CString* GetName();
    virtual uint32_t GetMaxEntries();
    virtual uint8_t GetType();

    Handle<ent::Entity> entity;
    Handle<ent::IComponent> component;
    // num of handles used
    uint32_t numHandles;
    uint32_t unk2C;
    uint64_t unk30[6];
    uint64_t unk60[7];
    uint8_t unk98;
    uint64_t unkA0;
    uint64_t unkA8;
    uint64_t unkB0;
    uint8_t unkB8;
    uint64_t unkC0[1];
    uint8_t isStatic;
    uint64_t unkD0[5];
    SystemType type;
    Handle<physics::SystemResource> resource;
};
RED4EXT_ASSERT_OFFSET(BaseSystemDesc, resource, 0x100);

struct PhysicalSystemDesc : BaseSystemDesc
{
    // after BaseSystemDesc's
    // 1.6  RVA: 0x313B3F0
    static constexpr const uintptr_t VFT = 0x313B3F0;
    uint64_t unk110;
    uint64_t unk118;
    WorldTransform unk120;
    WorldPosition unk140;
    physics::SimulationType fallbackSimulationType;
    uint8_t unk14D;
    uint8_t unk14E;
    uint8_t unk14F;
    uint8_t enableSelfCollision;
    uint8_t hasSystemBodyParams;
};

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
    virtual void sub_10();
    virtual void sub_18();
    virtual void sub_20();
    virtual void sub_28();
    virtual void sub_30();
    virtual void sub_38();
    virtual void sub_40();
    virtual void sub_48() = 0;
    virtual void sub_50();
    virtual void sub_58();
    virtual void sub_60();
    virtual void sub_68();
    virtual void sub_70();

    Handle<ent::Entity> entity;
    Handle<ent::IComponent> component;
    // num of handles used
    uint32_t numHandles;
    uint32_t unk2C;
    uint8_t geoCacheThing;
    uint8_t unk31;
    uint8_t unk32;
    uint8_t unk33;
    // some index in a global array/storage of refCounts (inc on creation, dec on deletion)
    SystemType type;
    uint8_t unk35;
    uint8_t unk36;
    uint8_t unk37;
    uint64_t unk38;
};

struct PhysicalSystemKey : BaseSystemKey
{
    // just after 3BC43730h & 3F266666h
    // 1.6  RVA: 0x313D790
    // 1.62 RVA: 0x314592C
    static constexpr const uintptr_t VFT = 0x314592C;

    // PhysX D6Joints
    DynArray<void*> joints;
    // PxRigidBody*
    DynArray<void*> bodies;
    // PxAggregate*
    void * aggregate;
    uint8_t unk68;
};

// calls PhysicalSystemKey->Process
// 1.6 RVA: 0x448DF0 / 4492784
/// @pattern 40 55 53 41 54 41 57 48 8B EC 48 83 EC 68 48 8B 02 4C 8B E1 48 8B CA 4C 8B FA FF 10 84 C0 0F 84
uint32_t *__fastcall ProcessPhysicalSystem(uint32_t *a1, PhysicalSystemDesc *desc);


} // namespace vehicle
} // namespace RED4ext
