#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/BaseGameSession.hpp>

namespace RED4ext
{
namespace game { 
struct GameSession : game::BaseGameSession
{
    static constexpr const char* NAME = "gameGameSession";
    static constexpr const char* ALIAS = NAME;    
    static constexpr const uintptr_t VFT = gameGameSession_VFT_Addr;

    virtual ~GameSession() override;
    // registers BaseGameSession/Initialize, SetGameStatus callbacks
    virtual void Initialize(void*, char*, void*, void*, void*, void*, void*) override;
    // something with playerManager, calls BaseGameSession->sub_10()
    virtual void * sub_10() override;

};
RED4EXT_ASSERT_SIZE(GameSession, 0x30);
} // namespace game
} // namespace RED4ext

// clang-format on
