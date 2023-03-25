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
    // static constexpr const uintptr_t VFT = 0x;

    virtual void sub_238();
    virtual void sub_240();
    // get bounding box maybe?
    virtual void sub_248(Box* boundingBox);
    virtual void GetFlags();

    Handle<ITransformBinding> parentTransform; // 90
    // reated to Transform Attachements - double Handle struct
    DynArray<uint64_t[4]> unkA0;
    uint8_t unkB0;
    // set based on arg passed to UpdateBindings
    uint8_t unkB1;
    // related to unkA0 updates?
    // hasUpdate?
    uint8_t unkB2;
    uint8_t unkB3[5];
    uint64_t unkB8;
    WorldTransform localTransform; // C0
    WorldTransform worldTransform; // E0
    Box bounds; // 100
};
RED4EXT_ASSERT_SIZE(IPlacedComponent, 0x120);
RED4EXT_ASSERT_OFFSET(IPlacedComponent, unkB0, 0xB0);
} // namespace ent
using IPlacedComponent = ent::IPlacedComponent;
} // namespace RED4ext

// clang-format on
