#pragma once

// clang-format off

// This file is generated from the Game's Reflection data & Jack

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/WidgetGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{

struct Interface {
    virtual void sub_00();
    virtual void sub_08();
};

struct GenericNotificationGameController : game::ui::WidgetGameController, Interface
{
    static constexpr const char* NAME = "gameuiGenericNotificationGameController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkE0[0xF0 - 0xE8]; // E8
    ink::CompoundWidgetReference notificationsRoot; // F0
    uint8_t unk108[0x1A2 - 0x108]; // 108
    bool exclusiveProcessing; // 1A2
    uint8_t unk1A3[0x1A8 - 0x1A3]; // 1A3
};
RED4EXT_ASSERT_SIZE(GenericNotificationGameController, 0x1A8);
} // namespace game::ui
} // namespace RED4ext

// clang-format on
