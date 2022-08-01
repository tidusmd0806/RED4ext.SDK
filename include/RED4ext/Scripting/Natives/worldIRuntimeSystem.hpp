#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace world { 
struct IRuntimeSystem : IUpdatableSystem
{
    static constexpr const char* NAME = "worldIRuntimeSystem";
    static constexpr const char* ALIAS = NAME;
    static constexpr const uintptr_t VFT_RVA = 0x31CA950;

    virtual void ~IRuntimeSystem(char);

    virtual void sub_118(uint64_t, uint64_t*);
    virtual void sub_120();
    virtual void sub_128();
    // returns 6
    virtual void sub_130();
    virtual void sub_138();
    virtual void sub_140();
    virtual void sub_148();
    virtual uint64_t sub_150(uint64_t);
    virtual void sub_158();
    virtual void sub_160();
    virtual void sub_168();
    virtual uint64_t sub_170(uint64_t, byte*);
    virtual uint64_t sub_178();
    virtual uint64_t sub_180();
    virtual void sub_188(uint64_t);
    virtual uint64_t sub_190(uint64_t);
    virtual uint64_t sub_198();

    GameInstance* gameInstance; // 40
};
RED4EXT_ASSERT_SIZE(IRuntimeSystem, 0x48);
} // namespace world
} // namespace RED4ext
