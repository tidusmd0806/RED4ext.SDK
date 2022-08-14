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
struct GameInstance;
namespace game { 
struct Component : ent::IComponent, PSInterface
{
    static constexpr const char* NAME = "gameComponent";
    static constexpr const char* ALIAS = "GameComponent";
    static constexpr const uintptr_t VFT_RVA = 0x330D588;

// overridden virtuals

    inline virtual Memory::IAllocator* GetAllocator() override {
        RelocFunc<decltype(&Component::GetAllocator)> call(VFT_RVA, 0x10);
        return call(this);
    }

    inline virtual Handle<game::PersistentState>* sub_158(Handle<game::PersistentState>* a1) override {
        RelocFunc<decltype(&Component::sub_158)> call(VFT_RVA, 0x158);
        return call(this, a1);
    }

    inline virtual void sub_188(void* a1) override {
        RelocFunc<decltype(&Component::sub_188)> call(VFT_RVA, 0x188);
        return call(this, a1);
    }

    inline virtual bool sub_198(void* a1) override {
        RelocFunc<decltype(&Component::sub_198)> call(VFT_RVA, 0x198);
        return call(this, a1);
    }

    inline virtual void sub_220(void* a1) override {
        RelocFunc<decltype(&Component::sub_220)> call(VFT_RVA, 0x220);
        return call(this, a1);
    }

    // new virtuals

    // sets the persisent state
    inline virtual void sub_238(Handle<game::PersistentState>* a1) {
        RelocFunc<decltype(&Component::sub_238)> call(VFT_RVA, 0x238);
        return call(this, a1);
    }

    // is Scripted Class / has scripted callbacks?
    inline virtual bool sub_240() {
        RelocFunc<decltype(&Component::sub_240)> call(VFT_RVA, 0x240);
        return call(this);
    }

    // called from on game attach
    inline virtual void sub_248(GameInstance* a1) {
        RelocFunc<decltype(&Component::sub_248)> call(VFT_RVA, 0x248);
        return call(this, a1);
    }

    inline virtual void sub_250() {
        RelocFunc<decltype(&Component::sub_250)> call(VFT_RVA, 0x250);
        return call(this);
    }

    // called from on editor attach
    inline virtual void sub_258() {
        RelocFunc<decltype(&Component::sub_258)> call(VFT_RVA, 0x258);
        return call(this);
    }

    inline virtual void sub_260() {
        RelocFunc<decltype(&Component::sub_260)> call(VFT_RVA, 0x260);
        return call(this);
    }

    // uint8_t unk90[0x98 - 0x90]; // 90
    // Handle<game::PersistentState> persistentState; // 98
};
RED4EXT_ASSERT_SIZE(Component, 0xA8);
} // namespace game
using GameComponent = game::Component;
} // namespace RED4ext
