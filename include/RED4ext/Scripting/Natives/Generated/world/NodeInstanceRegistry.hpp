#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include "RED4ext/Handle.hpp"
#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/INodeInstanceRegistry.hpp>

namespace RED4ext
{
namespace world { 
struct NodeInstanceRegistry : INodeInstanceRegistry
{
    static constexpr const char* NAME = "worldNodeInstanceRegistry";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x50 - 0x48];
    uint64_t unk50;
    uint32_t unk58;
    uint32_t unk5C;
    // int8_t unk60[0x20058 - 0x60];
    
    #pragma pack(push, 1)
    struct NodeInstanceRegistryItem
    {
      ResourceAsyncReference<CResource> unk00;
      uint64_t unk08;
      uint64_t unk10;
      uint32_t unk18;
    } items[0x2000];
    #pragma pack(pop)

    // RED4ext::ResourceAsyncReference unk60[0x4000-1];
    uint64_t unk20058;
    int64_t unk20060;
    int64_t unk20068;
    int8_t unk20070[393472 - 229496];
};
RED4EXT_ASSERT_SIZE(NodeInstanceRegistry, 0x60100);
// char (*__kaboom)[sizeof(NodeInstanceRegistry)] = 1;
} // namespace world
using worldNodeInstanceRegistry = world::NodeInstanceRegistry;
} // namespace RED4ext

// clang-format on
