#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IFxSystem.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }
namespace game
{

struct FxInstance;

enum class FxEventType : unsigned char {
    Create = 0,
    Kill = 1,
    BreakLoop = 2,
    UpdateTransform = 3,
    UpdateTargetPosition = 4,
    SetBlackboardValue = 5,
    AttachToSlot = 6,
    AttachToComponent = 7
};

struct FxEvent
{
  FxEventType type;
  Handle<FxInstance> fxInstance;
  uint64_t unk18;
  Transform localTransform;
  uint8_t unk40;
  CName parameterName;
  union {
    uint32_t targetType;
    float parameterValue;
  };
  uint32_t unk54;
  WeakHandle<ent::Entity> entity;
  uint64_t unk68;
};

struct Mutexable {

    /// @pattern 48 89 5C 24 10 55 56 57 41 56 41 57 48 8D 6C 24 C9 48 81 EC C0 00 00 00 33 F6 4C 8B FA 48 8B F9
    void __fastcall Update(__int64 a2);

    uint32_t mutex;
};

struct FxEventInterface {

    /// @pattern 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 30 44 8B 41 0C 33 FF 44 8B 49 08 48 8B D9 48 8B F2 41
    void __fastcall Add(FxEvent *event);

    DynArray<FxEvent> events; // 4C
    uint32_t unk5C;
    uint32_t unk60;
};


#pragma pack(push, 4)
struct FxSystem : game::IFxSystem, Mutexable, FxEventInterface
{
    static constexpr const char* NAME = "gameFxSystem";
    static constexpr const char* ALIAS = "FxSystem";

    uint32_t unk64;
    uint64_t runtimeSystemEffects;
    // set to -1 on detach
    uint32_t unk70;
    uint32_t unk74;
    // related to physx - ref?
    // Terrain & Static cnames passed to on world attach
    uint64_t unk78;
    uint64_t unk80;
};
#pragma pack(pop)
RED4EXT_ASSERT_SIZE(FxSystem, 0x88);
} // namespace game
using gameFxSystem = game::FxSystem;
using FxSystem = game::FxSystem;
} // namespace RED4ext

// clang-format on
