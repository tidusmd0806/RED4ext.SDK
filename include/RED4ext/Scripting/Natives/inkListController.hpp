#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ListControllerCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ListItemController.hpp>

namespace RED4ext
{
namespace ink
{
struct ListController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkListController";
    static constexpr const char* ALIAS = "ListController";

    virtual void sub_120(int oldIndex, int newIndex); // select Index
    virtual void sub_128(int oldIndex, int newIndex); // activate index
    virtual void sub_130() { };

    ink::ListControllerCallback ItemSelected; // 78
    ink::ListControllerCallback ItemActivated; // B0
    DynArray<IScriptable> data; // E8
    DynArray<ListItemController> listItems; // F8
    uint8_t unk108[0x110 - 0x108]; // 108
    uint64_t needsRefresh; // 110
    CName itemLibraryID; // 118
    bool cycledNavigation; // 120
    bool beginToggled; // 121
    uint8_t unk122[0x128 - 0x122]; // 122
};
RED4EXT_ASSERT_SIZE(ListController, 0x128);
} // namespace ink
using inkListController = ink::ListController;
using ListController = ink::ListController;
} // namespace RED4ext

// clang-format on
