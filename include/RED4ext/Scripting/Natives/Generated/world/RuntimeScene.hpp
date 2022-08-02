#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace world { 
struct RuntimeScene
{
    static constexpr const char* NAME = "worldRuntimeScene";
    static constexpr const char* ALIAS = NAME;

    struct Flags {
        bool inPreview;
        bool inSingleplayer;
        bool onClientWithVisuals;
        bool onClientWithoutVisuals;
        bool onHeadlessServerWithoutVisuals;
        bool onServer;
        bool RenderDebugInProfiling;
    }

    // 1.52 RVA: 0xB7BE60 / 12041824
    // calls SetupRuntimeSystems with new unkThing & a2
    /// @pattern 40 53 48 83 EC 60 41 8B 01 49 8B D8 85 C0 74 46 4C 8B C2 48 8D 94 24 88 00 00 00 E8 A0 FB FF FF
    uint32_t __fastcall SetupWithLogging(char *a2, __int64 a3, uint32_t *a4);

    // 1.52 RVA: 0xB7BA20 / 12040736
    // creates isystems from children of world::IRuntimeSystem, calls systems->sub_128, which returns an index for storage
    // looks at engine\systems\runtime_systems_startup.csv for the flags for each system
    // has a maximum 0x41/65 systems (58 exist in the .csv)
    // Loads all worldNode types, cnames & strings at the end
    /// @pattern 48 89 5C 24 18 48 89 54 24 10 55 56 57 41 54 41 55 41 56 41 57 48 8D 6C 24 D9 48 81 EC C0 00 00
    void **__fastcall SetupRuntimeSystems(void **unkThing, char *a3);

    Handle<IRuntimeSystem> systems[0x41];
    // 0x410: set to 0x41 when loaded. potential interface
    uint32_t numOfSystems;
    uint32_t unk414;
    uint64_t unk418;
    uint64_t unk420;
    RuntimeInfo runtimeInfo;
    uint64_t unk4A8;
};
RED4EXT_ASSERT_SIZE(RuntimeScene, 0x4B0);
} // namespace world
} // namespace RED4ext
