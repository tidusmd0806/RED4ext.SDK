#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldPosition.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }
namespace game
{
struct FxSystem;
struct FxInstance : IScriptable
{
    static constexpr const char* NAME = "gameFxInstance";
    static constexpr const char* ALIAS = "FxInstance";

    struct Unk40
    {
        virtual ~Unk40();
        struct {
            uint64_t unk08;
            uint64_t unk10;
            uint64_t unk18;
            uint64_t unk20;
            uint64_t unk28;
            uint32_t unk30;
            uint32_t unk34;
            uint64_t unk38[8];
            uint64_t effectBlackboard; // 78
            uint8_t unk80;
            // incremented on BreakLoop
            uint32_t breakLoopCount;  // 84
            uint8_t shouldDie;        // 88
            uint8_t alive;            // 89
            uint64_t unk90[4];
            Transform localTransform; // B0
        } instance;
    };

    // 1
    /// @pattern 48 89 5C 24 10 48 89 74 24 18 55 57 41 56 48 8D 6C 24 B9 48 81 EC C0 00 00 00 48 8B F9 45 33 F6
    void __fastcall QueueKill();

    // 2
    /// @pattern 48 89 5C 24 10 48 89 74 24 18 55 57 41 56 48 8D 6C 24 B9 48 81 EC C0 00 00 00 48 8B F9 45 33 F6
    void __fastcall QueueBreakLoop();

    // 3
    /// @pattern 48 89 5C 24 10 48 89 74 24 18 55 57 41 56 48 8D 6C 24 B9 48 81 EC C0 00 00 00 48 8B F9 45 33 F6
    void __fastcall QueueUpdateTransform(Transform *localTransform);

    // 4
    /// @pattern 48 89 5C 24 10 48 89 74 24 18 55 57 41 56 48 8D 6C 24 B9 48 81 EC E0 00 00 00 48 8B F9 45 33 F6
    void __fastcall QueueUpdateTargetPosition(WorldPosition *position);

    // 5
    /// @pattern 48 8B C4 48 89 58 08 48 89 70 10 55 57 41 56 48 8D 68 A1 48 81 EC D0 00 00 00 48 8B F9 0F 29 70
    void __fastcall QueueSetBlackboardValue(CName parameterName, float clampedValue);

    // 6
    /// @pattern 48 89 5C 24 08 48 89 74 24 10 55 57 41 54 41 56 41 57 48 8D 6C 24 D1 48 81 EC D0 00 00 00 48 8B
    void __fastcall QueueAttachToSlot(WeakHandle<ent::Entity> *entity, uint32_t targetType, CName slotName, Transform* localTransform);

    // 7
    /// @pattern 48 89 5C 24 08 48 89 74 24 10 55 57 41 54 41 56 41 57 48 8D 6C 24 D1 48 81 EC D0 00 00 00 48 8B
    void __fastcall QueueAttachToComponent(WeakHandle<ent::Entity> *entity, int targetType, CName componentName, Transform* localTransform);

    // checks unk40
    /// @pattern 40 53 48 83 EC 20 48 FF 02 48 83 C1 40 49 8B D8 E8 CB 33 A8 FF 48 85 DB 74 02 88 03 48 83 C4 20
    bool __fastcall IsValid(void* frameStack, bool* isValid) const;

    // handle to actual fx instance
    WeakHandle<Unk40> runtimeFx;
    // IBlackboard handle
    Handle<void *> blackboard;
    FxSystem * fxSystem;
};
RED4EXT_ASSERT_SIZE(FxInstance, 0x68);
} // namespace game
using gameFxInstance = game::FxInstance;
using FxInstance = game::FxInstance;
} // namespace RED4ext

// clang-format on
