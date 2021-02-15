#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/ent/ISkinTargetComponent.hpp>
#include <RED4ext/Types/generated/ent/MeshComponentLODMode.hpp>

namespace RED4ext
{
struct CMesh;

namespace ent { 
struct SkinnedMeshComponent : ent::ISkinTargetComponent
{
    static constexpr const char* NAME = "entSkinnedMeshComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk1E0[0x228 - 0x1E0]; // 1E0
    RaRef<CMesh> mesh; // 228
    CName meshAppearance; // 230
    CName renderingPlaneAnimationParam; // 238
    CName visibilityAnimationParam; // 240
    uint64_t chunkMask; // 248
    ent::MeshComponentLODMode LODMode; // 250
    uint8_t unk251[0x253 - 0x251]; // 251
    bool useProxyMeshAsShadowMesh; // 253
    bool castShadows; // 254
    bool castLocalShadows; // 255
    bool acceptDismemberment; // 256
    uint8_t unk257[0x260 - 0x257]; // 257
};
RED4EXT_ASSERT_SIZE(SkinnedMeshComponent, 0x260);
} // namespace ent
} // namespace RED4ext
