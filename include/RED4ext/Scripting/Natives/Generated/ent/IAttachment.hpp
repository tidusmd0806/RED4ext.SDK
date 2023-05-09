#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace ent { struct IComponent; }

namespace ent
{
struct IAttachment : ISerializable
{
    static constexpr const char* NAME = "entIAttachment";
    static constexpr const char* ALIAS = NAME;

    // 1.6  RVA: 0x1052070 / 17113200
    /// @pattern 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 20 49 8B F8 48 8B DA 48 8B F1 E8 63 D3 15 FF 48 8D 4E
    IAttachment(WeakHandle<ent::IComponent> *aSource, WeakHandle<ent::IComponent> *aDestination) 
        : source(*aSource), destination(*aDestination) {

    }

    WeakHandle<ent::IComponent> source; // 30
    WeakHandle<ent::IComponent> destination; // 40
};
RED4EXT_ASSERT_SIZE(IAttachment, 0x50);
} // namespace ent
using entIAttachment = ent::IAttachment;
} // namespace RED4ext

// clang-format on
