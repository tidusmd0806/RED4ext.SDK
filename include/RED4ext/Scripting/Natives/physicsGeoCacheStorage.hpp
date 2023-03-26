#pragma once

// This file is generated by Jack

#include <RED4ext/Common.hpp>
#include <cstdint>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>

namespace RED4ext::physics
{

struct BaseProxy;

// actually PhysicalBodyInterface runtime
// or just Proxy??
struct GeoThing
{
    // 1.6  RVA: 0x44C410 / 4506640
    /// @pattern 48 89 5C 24 18 48 89 74 24 20 88 54 24 10 57 48 83 EC 50 8B 41 10 48 8B D9 48 8B 09 41 8B F9 41
    /// @nth 1/2
    inline GeoThing *__fastcall SetSimulationShape(bool enabled, uint32_t bodyIndex, unsigned int shapeIndex)
    {
        RelocFunc<decltype(&GeoThing::SetSimulationShape)> call(physicsGeoThing_SetSimulationShape_Addr);
        return call(this, enabled, bodyIndex, shapeIndex);
    }
    
    // 1.6  RVA: 0x44DB40 / 4512576
    /// @pattern 48 89 5C 24 18 88 54 24 10 57 48 83 EC 50 8B 41 10 48 8B D9 48 8B 09 41 8B F8 48 85 C9 0F 85 9D
    /// @nth 6/7
    inline GeoThing *__fastcall SetCCD(bool enabled, int bodyIndex)
    {
        RelocFunc<decltype(&GeoThing::SetCCD)> call(physicsGeoThing_SetCCD_Addr);
        return call(this, enabled, bodyIndex);
    }

    // 1.6  RVA: 0x44D480 / 4510848
    /// @pattern 48 89 5C 24 10 48 89 6C 24 18 48 89 74 24 20 57 48 83 EC 50 8B 41 10 48 8B D9 48 8B 09 41 8B F9
    /// @nth 3/4
    inline GeoThing* __fastcall SetSimulationFilterData(void* simulationFilter, int bodyIndex, int shapeIndex)
    {
        RelocFunc<decltype(&GeoThing::SetSimulationFilterData)> call(physicsGeoThing_SetSimulationFilterData_Addr);
        return call(this, simulationFilter, bodyIndex, shapeIndex);
    }

    // 1.6  RVA: 0x44D080 / 4509824
    /// @pattern 48 89 5C 24 10 48 89 6C 24 18 48 89 74 24 20 57 48 83 EC 50 8B 41 10 48 8B D9 48 8B 09 41 8B F9
    /// @nth 1/4
    inline GeoThing* __fastcall SetQueryFilterData(void* queryFilter, uint32_t bodyIndex, unsigned int shapeIndex)
    {
        RelocFunc<decltype(&GeoThing::SetQueryFilterData)> call(physicsGeoThing_SetQueryFilterData_Addr);
        return call(this, queryFilter, bodyIndex, shapeIndex);
    }

    // 1.6  RVA: 0x44C300 / 4506368
    /// @pattern 48 89 5C 24 18 48 89 74 24 20 88 54 24 10 57 48 83 EC 50 8B 41 10 48 8B D9 48 8B 09 41 8B F9 41
    /// @nth 0/2
    inline GeoThing* __fastcall SetIsQueryable(bool enabled, uint32_t bodyIndex, unsigned int shapeIndex) 
    {
        RelocFunc<decltype(&GeoThing::SetIsQueryable)> call(physicsGeoThing_SetIsQueryable_Addr);
        return call(this, enabled, bodyIndex, shapeIndex);
    }

    // 1.6  RVA: 0x44C620 / 4507168
    /// @pattern 48 89 5C 24 10 48 89 74 24 18 57 48 83 EC 50 8B 41 10 48 8B D9 48 8B 09 41 8B F8 48 8B F2 48 85
    /// @nth 3/10
    GeoThing* __fastcall SetLinearDamping(float* linearDamping, uint32_t bodyIndex);

    // 1.6  RVA: 0x44B7D0 / 4503504
    /// @pattern 48 89 5C 24 10 48 89 74 24 18 57 48 83 EC 50 8B 41 10 48 8B D9 48 8B 09 41 8B F8 48 8B F2 48 85
    /// @nth 0/10
    inline GeoThing* __fastcall SetAngularDamping(float* angularDamp, uint32_t bodyIndex)
    {
        RelocFunc<decltype(&GeoThing::SetAngularDamping)> call(physicsGeoThing_SetAngularDamping_Addr);
        return call(this, angularDamp, bodyIndex);
    }

    // 1.6  RVA: 0x44C100 / 4505856
    /// @pattern 48 89 5C 24 18 88 54 24 10 57 48 83 EC 50 8B 41 10 48 8B D9 48 8B 09 41 8B F8 48 85 C9 0F 85 9D
    /// @nth 1/7
    GeoThing* __fastcall SetGravity(char flag, uint32_t bodyIndex);

    // 1.6  RVA: 0x44C820 / 4507680
    /// @pattern 48 89 5C 24 10 48 89 74 24 18 57 48 83 EC 50 8B 41 10 48 8B D9 48 8B 09 41 8B F8 48 8B F2 48 85
    GeoThing* __fastcall SetCMassLocalPose(Transform* transform, uint32_t bodyIndex);

    // 1.6  RVA: 0x446C80 / 4484224
    /// @pattern 48 89 5C 24 10 57 48 83 EC 20 8B 02 49 8B D8 48 8D 54 24 30 89 44 24 30 48 8B F9 E8 70 00 00 00
    GeoThing* __fastcall GetThingWithLock(ProxyId* proxyId, SharedMutex* a3);

    // 1.6  RVA: 0x44CA20 / 4508192
    /// @pattern 48 89 5C 24 08 48 89 74 24 18 F3 0F 11 4C 24 10 57 48 83 EC 50 8B 41 10 41 0F B6 F9 40 80 F7 01
    GeoThing* __fastcall SetMassAndUpdateInertia(float chassisMass, uint32_t bodyIndex, char shouldWake);

    // 1.6  RVA: 0x44D980 / 4512128
    /// @pattern 4C 8B DC 49 89 5B 08 49 89 73 10 57 48 83 EC 70 F3 0F 10 05 08 E5 C8 02 41 0F B6 F9 66 0F 6E 12
    GeoThing* __fastcall UpdateGlobalPose(WorldTransform* a2, int bodyIndex, bool shouldWake);

    // 1.6  RVA: 0x447AF0 / 4487920
    /// @pattern 40 53 48 83 EC 20 48 8B 51 08 48 8B D9 48 85 D2 74 18 8B 02 48 8D 4C 24 30 89 44 24 30 E8 7E 31
    inline char __fastcall CleanUp()
    {
        RelocFunc<decltype(&GeoThing::CleanUp)> call(physicsGeoThing_CleanUp_Addr);
        return call(this);
    }

    // 1.6  RVA: 0x446D90 / 4484496
    /// @pattern 48 8B 51 18 48 85 D2 74 04 33 C0 86 02 C3
    inline __int64 __fastcall Unlock()
    {
        RelocFunc<decltype(&GeoThing::Unlock)> call(physicsGeoThing_Unlock_Addr);
        return call(this);
    }

    uint64_t gcs_unk140;
    void* gks_unk122018;
    ProxyId proxyId;
    uint32_t unk14;
    RED4ext::SharedMutex* unk18;
};

struct GeoStuffID {
    uint16_t id;
    uint16_t unk38_match;
};

struct GeoStuff
{
    SharedMutex unk00;
    Handle<void*> unk08;
    Handle<void*> unk18;
    uint32_t unk28;
    uint32_t unk2C;
    uint64_t unk30;
    uint8_t unk38[256];
    uint32_t unk138;
    uint32_t unk13C;
        // index'd by unk2A2054
    uint64_t unk140[256];
    uint32_t unk940;
    uint32_t unk944;
    // index'd by GeoStuffID.id
    struct Unk948 {
        // 1.6  RVA: 0x497F50 / 4816720
        /// @pattern 40 55 53 56 57 41 54 41 55 41 56 41 57 48 8D AC 24 F8 FE FF FF 48 81 EC 08 02 00 00 4C 8B F1 0F
        __int64 __fastcall Kick(float a2);

        // stored in unk2A2054 upon enable collision
        uint32_t unk00;
        uint32_t unk04;
        uint64_t unk08[2];
        void * aggregate;
        uint64_t unk20[4];
        uint8_t unk40[6];
        SharedMutex unk46;
        DynArray<Handle<BaseProxy>> systemKeys;
        uint8_t state;
        uint64_t unk60[26];
        uint32_t unk130;
        Vector3 offset;
    } * unk948[256];
    uint32_t unk1148;
    uint32_t unk114C;
};

struct InitialState {
    WorldTransform worldTransform;
    Vector4 linearVelocity;
    Vector4 angularVelocity;
};

struct GeoKeyStorage
{
    // 1.6 RVA: 0x46A7E0 / 4630496
    /// @pattern 48 89 74 24 10 57 48 83 EC 20 44 8B 02 48 8B F2 48 8B F9 41 83 F8 FF 74 67 B8 FF FF 00 00 66 44
    bool __fastcall TestUnk2E2068(ProxyId* proxyId);

    SharedMutex unk0000;
    uint64_t unk0008[1023];
    uint32_t unk2000;
    uint32_t unk2004;
    uint32_t unk2008;
    uint32_t unk200C;
    uint32_t unk2010;
    // index'd by ProxyId - Handle to physics::PhysicalSystemKey
    StaticArray<Handle<BaseProxy>, 65535> systemKeys;
    uint32_t unk10200C;
    // index'd by ProxyId
    uint16_t unk102010[65536];
    uint16_t unk122010;
    uint16_t unk122012;
    uint16_t unk122014;
    uint16_t unk122016;
    // index'd by ProxyId
    StaticArray<uint64_t, 65535> unk122018;
    // index'd by ProxyId - phyicsSystemDesc->unkA0, worldTransforms?
    StaticArray<NativeArray<InitialState>*, 65535> unk1A2018;
    // index'd by ProxyId
    StaticArray<ent::ITransformAttachable, 65535> interfaces;
    uint32_t unk2A2014;
    // physicsSystemDesc types
    uint32_t refCounts_2A2018[15];
    // index'd by ProxyId
    // Unk948.unk00 assign here when collision is enabled
    // -1 assigned when disabled
    uint32_t unk2A2054[32753];
    uint64_t unk2C2018[16384];
    uint32_t unk2E2018[14];
    uint32_t unk2E2050;
    // mutex for unk2E2058
    SharedMutex unk2E2054;
    // ProxyId storage? size 4 bytes
    DynArray<ProxyId> unk2E2058;
    // index'd by ProxyId >> 5
    // used to track if geometry has been setup?
    int unk2E2068[1024];
};
// RED4EXT_ASSERT_SIZE(GeoKeyStorage, 0x2E3068);
} // namespace RED4ext::physics