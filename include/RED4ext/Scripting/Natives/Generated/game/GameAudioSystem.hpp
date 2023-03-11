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
    static constexpr const uintptr_t VFT_RVA = gameGameAudioSystem_VFT_RVA;

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

    // call with entity->unk48/audioReference
    // 1.6 RVA: 0x7323E0 / 7545824
    // 1.62 RVA: 0x732D10 / 7548176
    /// @pattern 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 40 48 8B F1 0F 29 74 24 30 48 8B 0D ? ? B0 03 49 8B
    static void __fastcall UpdateParameter(int *audioReference, CName parameterName, float parameterValue);

    uint8_t unk48[0x3E0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(GameAudioSystem, 0x3E0);
} // namespace game
using AudioSystem = game::GameAudioSystem;
} // namespace RED4ext

// clang-format on
