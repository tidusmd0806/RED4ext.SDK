#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ERenderObjectType.hpp>
#include <RED4ext/Scripting/Natives/Generated/ERenderingPlane.hpp>
#include <RED4ext/Scripting/Natives/Generated/NavGenNavigationSetting.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ForcedLodDistance.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IVisualComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/MeshComponentLODMode.hpp>

namespace RED4ext
{
struct CMesh;

namespace ent { 
struct MeshComponent : ent::IVisualComponent
{
    static constexpr const char* NAME = "entMeshComponent";
    static constexpr const char* ALIAS = "MeshComponent";
    static constexpr const uintptr_t VFT = entMeshComponent_VFT_Addr;

    // gets unk140
    virtual bool sub_258(Handle<void*> unk);

    // get LOD level?
    virtual uint8_t sub_290();

    // 1.52 RVA: 0x1092580 / 17376640
    /// @pattern 48 89 5C 24 18 57 48 81 EC A0 01 00 00 48 83 B9 58 01 00 00 00 0F B6 FA 48 8B D9 0F 84 C2 01 00
    void __fastcall Load(bool a2);

    Handle<void*> unk140;
    RaRef<CMesh> mesh; // 150
    Handle<CMesh> meshHandle;
    uint64_t unk168;
    uint64_t unk170;
    Vector3 visualScale; // 178
    ERenderingPlane renderingPlane; // 184
    ERenderObjectType objectTypeID; // 188
    uint8_t unk189[0x190 - 0x189]; // 189
    CName meshAppearance; // 190
    uint64_t chunkMask; // 198
    uint32_t numInstances; // 1A0
    float motionBlurScale; // 1A4
    ent::MeshComponentLODMode LODMode; // 1A8
    uint8_t unk1A9[0x1AB - 0x1A9]; // 1A9
    uint8_t order; // 1AB
    bool castShadows; // 1AC
    bool castLocalShadows; // 1AD
    uint8_t unk1AE[0x1B0 - 0x1AE]; // 1AE
    ent::ForcedLodDistance forcedLodDistance; // 1B0
    uint8_t unk1B1[0x1D1 - 0x1B1]; // 1B1
    bool overrideMeshNavigationImpact; // 1D1
    NavGenNavigationSetting navigationImpact; // 1D2
    uint8_t unk1D4[0x1E0 - 0x1D4]; // 1D4
};
RED4EXT_ASSERT_SIZE(MeshComponent, 0x1E0);
} // namespace ent
using MeshComponent = ent::MeshComponent;
} // namespace RED4ext

// clang-format on
