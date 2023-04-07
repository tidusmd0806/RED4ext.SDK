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
    static constexpr const uintptr_t VFT = gameGameAudioSystem_VFT_Addr;

    // EnableAdaptiveTriggerEffects
    virtual void sub_1A0();
    // PlayImpact()
    // calls sub_1B8()
    virtual void sub_1A8();
    // TriggerFlyby
    virtual void sub_1B0();
    virtual void sub_1B8();
    virtual void sub_1C0();
    // calsls sub_1C0()
    virtual void sub_1C8();
    // switch to TPP maybe, calls sub_1C8()
    virtual void sub_1D0();
    // calls sub_1E0();
    virtual void sub_1D8();
    // switch to FPP maybe
    virtual void sub_1E0();
    virtual void sub_1E8();
    virtual void sub_1F0();
    virtual void sub_1F8();
    virtual void sub_200(uint64_t, uint64_t, uint64_t, uint64_t);
    virtual void sub_208(uint64_t);
    virtual void sub_210(uint64_t);
    virtual void sub_218(uint64_t, uint64_t);
    virtual void sub_220(uint64_t);
    virtual void sub_228();

    // call with entity->unk48/audioReference
    // 1.6 RVA: 0x7323E0 / 7545824
    // 1.61hf1 RVA: 0x732D10 / 7548176
    /// @pattern 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 40 48 8B F1 0F 29 74 24 30 48 8B 0D ? ? B0 03 49 8B
    static void __fastcall UpdateParameter(int *audioReference, CName parameterName, float parameterValue);

    // 1.6  RVA: 0x72DBC0 / 7527360
    /// @pattern 48 89 5C 24 08 57 48 83 EC 30 48 8B F9 0F 29 74 24 20 48 8B 89 60 01 00 00 0F 28 F2 48 8B DA 48
    void __fastcall SetGlobalParameter(CName parameterName, float parameterValue);

    uint8_t unk48[0x3E0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(GameAudioSystem, 0x3E0);
} // namespace game
using AudioSystem = game::GameAudioSystem;
} // namespace RED4ext

// clang-format on
