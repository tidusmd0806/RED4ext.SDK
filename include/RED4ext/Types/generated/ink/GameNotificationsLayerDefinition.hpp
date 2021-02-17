#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/ink/LayerDefinition.hpp>

namespace RED4ext
{
namespace ink { struct WidgetLibraryResource; }

namespace ink { 
struct GameNotificationsLayerDefinition : ink::LayerDefinition
{
    static constexpr const char* NAME = "inkGameNotificationsLayerDefinition";
    static constexpr const char* ALIAS = NAME;

    Ref<ink::WidgetLibraryResource> cursorResource; // 38
};
RED4EXT_ASSERT_SIZE(GameNotificationsLayerDefinition, 0x50);
} // namespace ink
} // namespace RED4ext
