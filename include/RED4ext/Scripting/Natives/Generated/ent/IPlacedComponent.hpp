#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ITransformBinding.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>

namespace RED4ext
{

namespace ent {
struct ITransformBinding;
struct IPlacedComponent : IComponent
{
    static constexpr const char* NAME = "entIPlacedComponent";
    static constexpr const char* ALIAS = "IPlacedComponent";
    static constexpr const uintptr_t VFT_RVA = entIPlacedComponent_VFT_RVA;

    virtual void sub_238();
    virtual void sub_240();
    virtual void sub_248();
    virtual void GetFlags();

    Handle<ITransformBinding> parentTransform; // 90
    DynArray<uint64_t[4]> unkA0;
    uint8_t unkB0[0xC0 - 0xB0]; // B0
    WorldTransform worldTransform;
    WorldTransform localTransform;// E0
    Box bounds; // 100
};
RED4EXT_ASSERT_SIZE(IPlacedComponent, 0x120);
} // namespace ent
using IPlacedComponent = ent::IPlacedComponent;
} // namespace RED4ext

// clang-format on
