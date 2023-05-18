#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EffectType.hpp>

namespace RED4ext
{
namespace ink
{
struct IEffect : ISerializable
{
    static constexpr const char* NAME = "inkIEffect";
    static constexpr const char* ALIAS = NAME;

    // BoxBlur returns 4 - type?
    virtual EffectType GetEffectType() = 0;
    virtual void* sub_E0(void*) = 0;
    virtual void* sub_E8(void*) = 0;
    virtual CName& GetName(CName& name);
    virtual bool IsEnablde();

    uint8_t unk30[0x48 - 0x30]; // 30
    bool isEnabled; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
    CName effectName; // 50
    uint8_t unk58[0x68 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(IEffect, 0x68);
} // namespace ink
using inkIEffect = ink::IEffect;
} // namespace RED4ext

// clang-format on
