#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameAudioSystem.hpp>

namespace RED4ext
{
namespace game { 
struct GameAudioSystem : game::IGameAudioSystem
{
    static constexpr const char* NAME = "gameGameAudioSystem";
    static constexpr const char* ALIAS = "AudioSystem";
    static constexpr const uintptr_t VFT_RVA = 0x33596B8;

    virtual void sub_1A8();
    virtual void sub_1B0();
    virtual void sub_1B8();
    virtual void sub_1C0();
    virtual void sub_1C8();
    // switch to TPP maybe, calls C8
    virtual void sub_1D0();
    virtual void sub_1D8();
    // switch to FPP maybe
    virtual void sub_1E0();
    virtual void sub_1E8();
    virtual void sub_1F0();
    virtual void sub_1F8();
    virtual void sub_200();
    virtual void sub_208();
    virtual void sub_210();
    virtual void sub_218();
    virtual void sub_220();
    virtual void sub_228();

    uint8_t unk48[0x3E0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(GameAudioSystem, 0x3E0);
} // namespace game
using AudioSystem = game::GameAudioSystem;
} // namespace RED4ext

// clang-format on
