#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PersistentID.hpp>

namespace RED4ext
{
namespace game { 
struct Component;
struct PersistencySystem;
struct PersistentState : IScriptable
{
    static constexpr const char* NAME = "gamePersistentState";
    static constexpr const char* ALIAS = "PersistentState";
    // static constexpr const uintptr_t VFT_RVA = 0x;

    // checks with persistencySystem to see if this class is destructible
    inline virtual bool CanBeDestructed() override
    {
        RelocFunc<decltype(&PersistentState::CanBeDestructed)> call(VFT_RVA, 0xD0);
        return call(this);
    };

    // increment some count, sets currentThreadId
    inline virtual void sub_F8() override
    {
        RelocFunc<decltype(&PersistentState::sub_F8)> call(VFT_RVA, 0xF8);
        return call(this);
    };

    // decrement some count
    inline virtual void sub_100() override
    {
        RelocFunc<decltype(&PersistentState::sub_100)> call(VFT_RVA, 0x100);
        return call(this);
    };

    inline virtual void sub_110() { };
    inline virtual void sub_118() { };
    inline virtual void * sub_120(void *) { return NULL; };
    inline virtual void sub_128() { };

    uint32_t currentThreadId;
    uint16_t unk44;
    uint8_t someCount;
    SharedMutex unk47;
    PersistencySystem* persistencySystem;
    PersistentID id;
    uint64_t unk60;
};
RED4EXT_ASSERT_SIZE(PersistentState, 0x68);
} // namespace game
using PersistentState = game::PersistentState;
} // namespace RED4ext

// clang-format on
