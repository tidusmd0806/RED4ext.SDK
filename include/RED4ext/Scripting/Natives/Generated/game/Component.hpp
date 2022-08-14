#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>
#include <RED4ext/Scripting/Natives/gamePSInterface.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PersistentState.hpp>

namespace RED4ext
{
namespace game { 
struct Component : ent::IComponent, PSInterface
{
    static constexpr const char* NAME = "gameComponent";
    static constexpr const char* ALIAS = "GameComponent";
    static constexpr const uintptr_t VFT_RVA = 0x330D588;

    inline virtual void SetPersistentState(Handle<game::PersistentState>* a1) {
        RelocVirtualFunc<decltype(&Component::SetPersistentState)> call(VFT_RVA, 0x238);
        return (this->*call)(a1);
    }
    inline virtual void* sub_240() {
        RelocVirtualFunc<decltype(&Component::sub_240)> call(VFT_RVA, 0x240);
        return (this->*call)();
    }
    inline virtual void sub_248() {
        RelocVirtualFunc<decltype(&Component::sub_248)> call(VFT_RVA, 0x248);
        return (this->*call)();
    }
    inline virtual void sub_250() {
        RelocVirtualFunc<decltype(&Component::sub_250)> call(VFT_RVA, 0x250);
        return (this->*call)();
    }
    inline virtual void sub_258() {
        RelocVirtualFunc<decltype(&Component::sub_258)> call(VFT_RVA, 0x258);
        return (this->*call)();
    }
    inline virtual void sub_260() {
        RelocVirtualFunc<decltype(&Component::sub_260)> call(VFT_RVA, 0x260);
        return (this->*call)();
    }

    // uint8_t unk90[0x98 - 0x90]; // 90
    // Handle<game::PersistentState> persistentState; // 98
};
RED4EXT_ASSERT_SIZE(Component, 0xA8);
} // namespace game
using GameComponent = game::Component;
} // namespace RED4ext
