#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
struct ScriptGameInstance;
namespace ent { struct Entity; }

struct WidgetBaseComponent_Helper
{
    // static constexpr const uintptr_t VFT_RVA = 0x33029D8;

    virtual ~WidgetBaseComponent_Helper() = default;
    virtual void WBCI_sub_08();
    virtual void WBCI_sub_10();
    virtual void WBCI_sub_18();
    virtual void WBCI_sub_20();
    virtual void WBCI_sub_28();
    virtual void WBCI_sub_30();
    virtual void WBCI_sub_38();

    ScriptGameInstance * unk178; // 08
    // something with runtime
    uint64_t unk180; // 10
    Handle<ent::Entity> unk188; // 18
};

struct WidgetBaseComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "WidgetBaseComponent";
    static constexpr const char* ALIAS = NAME;
    static constexpr const uintptr_t VFT_RVA = WidgetBaseComponent_VFT_RVA;

    virtual void * sub_258(void *);
    virtual bool sub_260();

    uint8_t unk120[0x170 - 0x120]; // 120

    WidgetBaseComponent_Helper helper; // 170
    uint64_t unk198; // 198
};
RED4EXT_ASSERT_SIZE(WidgetBaseComponent, 0x1A0);
} // namespace RED4ext

// clang-format on
