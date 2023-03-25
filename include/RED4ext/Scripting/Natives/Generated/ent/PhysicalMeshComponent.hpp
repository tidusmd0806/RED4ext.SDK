#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/MeshComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/FilterDataSource.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/SimulationType.hpp>
#include <RED4ext/Scripting/Natives/entITransformAttachable.hpp>
#include <RED4ext/Scripting/Natives/physicsGeoCacheStorage.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }

namespace ent { 
struct PhysicalMeshComponent : ent::MeshComponent, ent::ITransformAttachable
{
    static constexpr const char* NAME = "entPhysicalMeshComponent";
    static constexpr const char* ALIAS = "PhysicalMeshComponent";

//    struct Sub_188 {
//        uint64_t unk00;
//        game::PersistencySystem * persistency;
//    };

    virtual void sub_148();

    // PhysicalMeshComponent_OnMeshLoaded
    virtual bool sub_178();

    // disable/cleanup something?
    virtual void sub_180();

    // sets geoStuffID, runs sub_2A0
    virtual void sub_188(void * a2);

    // geoCache & Stuff
    virtual bool sub_198(void *);

    // verify mesh collider stuff
    virtual void sub_220(void *);

    // calls sub_2B0 after sub_258
    virtual bool sub_278(bool a2, bool a3);

    // should enable collision
    virtual bool sub_2A0();
    virtual bool sub_2A8();

    // creates physicalResource & populates geoCacheID & geoStuffID
    virtual bool sub_2B0();

    // 1.6  RVA: 0x10C7C30 / 17595440
    /// @pattern 40 55 41 56 48 8D AC 24 88 FD FF FF 48 81 EC 78 03 00 00 48 8B 12 4C 8B F1 48 85 D2 0F 84 7F 08
    void __fastcall ProcessSystemResource(Handle<CMesh> *cmeshHandle);

    uint64_t unk1E8;
    Transform bodyTransform;
    Handle<physics::FilterData> filterData; // 210
    uint8_t unk220[0x228 - 0x220]; // 220
    CName visibilityAnimationParam; // 228
    physics::GeoCacheID geoCacheID;
    physics::GeoStuffID geoStuffID;
    physics::FilterDataSource filterDataSource; // 238
    physics::SimulationType simulationType; // 239
    bool startInactive; // 23A
    bool useResourceSimulationType; // 23B
    uint8_t unk23C[0x240 - 0x23C]; // 23C
};
RED4EXT_ASSERT_SIZE(PhysicalMeshComponent, 0x240);
} // namespace ent
using PhysicalMeshComponent = ent::PhysicalMeshComponent;
} // namespace RED4ext

// clang-format on
