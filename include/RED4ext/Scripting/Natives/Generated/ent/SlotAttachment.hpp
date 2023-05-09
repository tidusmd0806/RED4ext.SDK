#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ITransformAttachment.hpp>

namespace RED4ext
{
namespace ent
{
struct SlotAttachment : ent::ITransformAttachment
{
    static constexpr const char* NAME = "entSlotAttachment";
    static constexpr const char* ALIAS = NAME;

    // 1.6  RVA: 0x115ADC0 / 18197952
    // /// @pattern 48 89 5C 24 08 57 48 83 EC 20 49 8B C0 8B DA 48 8B D0 4D 8B C1 48 8B F9 E8 83 26 02 00 48 8D 05
    SlotAttachment(uint32_t aIndex, WeakHandle<ent::IComponent>* aSource, WeakHandle<ent::IComponent>* aDestination) 
        : ITransformAttachment(aSource, aDestination), index(aIndex) {
        *(uintptr_t*)this = entSlotAttachment_VFT_Addr;
    }

    uint32_t index;
    uint32_t unk5C = 0;
};
RED4EXT_ASSERT_SIZE(SlotAttachment, 0x60);
} // namespace ent
using entSlotAttachment = ent::SlotAttachment;
} // namespace RED4ext

// clang-format on
