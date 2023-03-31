#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/IRuntimeSystem.hpp>

namespace RED4ext::world { 

struct RenderingInterface1 {
    // removes a1 from unk60
    virtual void sub_00(uint64_t a1);
};

// same as VehicleInterface3 i think
struct RenderingInterface2 {
    virtual ~RenderingInterface2();
    virtual void sub_08();
};

struct RuntimeSystemRendering : world::IRuntimeSystem, RenderingInterface1, RenderingInterface2
{
    static constexpr const char* NAME = "worldRuntimeSystemRendering";
    static constexpr const char* ALIAS = NAME;

    uint64_t unk48[25];
};
RED4EXT_ASSERT_SIZE(RuntimeSystemRendering, 0x120);
} // namespace RED4ext

// clang-format on
