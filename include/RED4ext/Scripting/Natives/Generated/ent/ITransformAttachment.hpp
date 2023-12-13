#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IAttachment.hpp>

namespace RED4ext
{
namespace ent
{
struct ITransformAttachment : ent::IAttachment
{
    static constexpr const char* NAME = "entITransformAttachment";
    static constexpr const char* ALIAS = NAME;

    // 1.6  RVA: 0x117D460 / 18338912
    // /// @pattern 40 53 48 83 EC 20 48 8B D9 E8 02 4C ED FF 80 63 50 F8 48 8D 05 F7 DD 18 02 80 4B 50 08 48 89 03
    // ITransformAttachment(WeakHandle<ent::IComponent> *aSource, WeakHandle<ent::IComponent> *aDestination)
    //     : IAttachment(aSource, aDestination), flags(8) {
    //     *(uintptr_t*)this = entITransformAttachable_VFT_Addr;
    // }

    // initially &= 0xF8, |= 0x8
    uint8_t flags;
    uint8_t unk50[0x58 - 0x51] = {0}; // 51
};
RED4EXT_ASSERT_SIZE(ITransformAttachment, 0x58);
} // namespace ent
using entITransformAttachment = ent::ITransformAttachment;
} // namespace RED4ext

// clang-format on
