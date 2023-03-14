#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/worldRuntimeScene.hpp>

namespace RED4ext
{
namespace world { 
struct IRuntimeSystem : IUpdatableSystem
{
    static constexpr const char* NAME = "worldIRuntimeSystem";
    static constexpr const char* ALIAS = NAME;
    // static constexpr const uintptr_t VFT_RVA = 0x31CA950;

    // 1.52 RVA: 0xB7C220 / 12042784
    /// @pattern 40 53 48 83 EC 20 48 8B D9 E8 92 B7 EF FF 48 8D 05 1B E7 64 02 66 C7 43 40 00 00 48 89 03 48 8B
    // IRuntimeSystem();

    virtual RED4ext::CClass* GetNativeType() override;
    virtual ~IRuntimeSystem() override;

    virtual void sub_118(uint64_t, uint64_t*);
    virtual void sub_120();
    // get index for runtimeScene
    virtual uint32_t sub_128();
    virtual void sub_130(RuntimeScene*);
    virtual void sub_138();
    virtual void sub_140();
    virtual void sub_148();
    virtual uint64_t sub_150(uint64_t);
    virtual void sub_158();
    virtual void sub_160();
    // create callbacks?
    virtual void sub_168(RuntimeScene*, uint64_t _a3, void** unkThing);
    virtual uint64_t sub_170(uint64_t, uint8_t*);
    virtual uint64_t sub_178(uint64_t, uint64_t);
    virtual uint64_t sub_180();
    virtual void sub_188(uint64_t);
    virtual uint64_t sub_190(uint64_t);

    // 1.52 RVA: 0xB7C480 / 12043392
    // might create jobs for callbacks - returns unkThing**
    /// @pattern 48 89 5C 24 10 48 89 6C 24 18 48 89 74 24 20 57 48 83 EC 20 48 8B EA 66 C7 44 24 30 00 00 0F B7
    // void ** __fastcall Setup_sub_168(void **unkThing, RuntimeScene *runtimeScene, void *a3, RuntimeScene::Flags *a5);

    RuntimeScene::Flags flags; // 40
};
RED4EXT_ASSERT_SIZE(IRuntimeSystem, 0x48);
} // namespace world
} // namespace RED4ext
