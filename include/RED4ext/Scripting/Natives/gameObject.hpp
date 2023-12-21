#pragma once

// This file is generated from the Game's Reflection data & Jack

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/GameEntity.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PlayerSocket.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TagList.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PersistentState.hpp>
#include <RED4ext/Scripting/Natives/gamePSInterface.hpp>

namespace RED4ext
{
namespace ent { struct SlotComponent; }

namespace game {

struct IComponentHelper {
    // static constexpr const uintptr_t VFT = 0x30DF830;

    virtual void * Destruct(uint8_t);
    virtual bool HasComponent(uint64_t name);
    virtual Handle<IComponent> * GetComponent(Handle<IComponent> * componentHandle, uint64_t name);
};

// struct ComponentLookup {
//     RED4ext::DynArray<uint64_t> names;
//     RED4ext::DynArray<Handle<IComponent>> handles;
//     uint32_t unk28;
//     uint32_t unk2C;
// };

struct ComponentHelper : IComponentHelper
{
    // static constexpr const uintptr_t VFT = 0x32CED50;

    virtual void * Destruct(uint8_t) override;
    virtual bool HasComponent(uint64_t name) override;
    virtual Handle<IComponent> * GetComponent(Handle<IComponent> * componentHandle, uint64_t name) override;

    Map<CName, Handle<IComponent>> components;
    DynArray<Handle<IComponent>> handles2;
};

struct EntityComponentHelper : IComponentHelper
{
    // static constexpr const uintptr_t VFT = 0x329FDF8;

    virtual void * Destruct(uint8_t) override;
    virtual bool HasComponent(uint64_t name) override;
    virtual Handle<IComponent> * GetComponent(Handle<IComponent> * componentHandle, uint64_t name) override;

    Map<CName, Handle<IComponent>> components;
    DynArray<Handle<IComponent>> handles2;
};

struct Object : ent::GameEntity, PSInterface
{
    static constexpr const char* NAME = "gameObject";
    static constexpr const char* ALIAS = "GameObject";
    static constexpr const uintptr_t VFT = gameObject_VFT_Addr;
    
// overridden virtuals

    virtual CClass* GetNativeType() override;                       // 00
    virtual Memory::IAllocator* GetAllocator() override;            // 10
    virtual ~Object() = default;                                    // 18
    virtual void sub_108() override;                                // 108
    virtual void sub_148(uintptr_t a1, uintptr_t a2) override;      // 148 calls OnTakeControl
    virtual void sub_150() override;                                // 150 calls OnReleaseControl
    virtual void Attach(void *) override;                           // 158
    virtual uintptr_t Detach() override;                            // 160

// new virtuals

    virtual void sub_1C8() { };                                     // 1C8
    virtual RED4ext::CName* GetAudioResourceName(RED4ext::CName*);  // 1D0
    virtual bool OnControlTaken();                                  // 1D8
    virtual bool OnControlReleased();                               // 1E0
    virtual void OnTransformUpdated();                              // 1E8
    virtual void sub_1F0() { };                                     // 1F0
    virtual uint64_t OnTakeControl(ComponentHelper *);              // 1F8
    virtual uint64_t OnReleaseControl();                            // 200
    virtual void sub_208() { };                                     // 208
    virtual void sub_210() { };                                     // 210
    virtual uint64_t sub_218(WorldTransform*);                      // 218
    virtual uint64_t sub_220(void*);                                // 220
    virtual uint64_t sub_228();                                     // 228 Updates audio emittor position with placeholder - called by other member functions
    virtual void sub_230(Handle<IScriptable>* obj,                  // 230 Called by ReplicateAnimFeature
        CName inputName, Handle<IScriptable> value) { }; 
    virtual void sub_238(Handle<IScriptable> * obj,                 // 238 Called by ReplicateAnimEvent
        CName eventName) { }; 
    virtual void sub_240(Handle<IScriptable>* event) { };           // 240 Called by QueueReplicatedEvent
    virtual void sub_248(Handle<IScriptable>* obj, CName inputName, // 248 Called by ReplicateInputFloat
        float value) { }; 
    virtual void sub_250(Handle<IScriptable>* obj, CName inputName, // 250 Called by ReplicateInputBool
        bool value) { }; 
    virtual void sub_258(Handle<IScriptable>* obj, CName inputName, // 258 Called by ReplicateInputInt
        int value) { }; 
    virtual void sub_260(Handle<IScriptable>* obj, CName inputName, // 260 Called by ReplicateInputVector
        Vector4 value) { }; 

// methods

    // 1.52 RVA: 0x13ECC30 / 20892720
    /// @pattern 48 89 4C 24 08 55 56 57 48 81 EC 90 00 00 00 48 8D 6C 24 30 41 83 78 08 01 48 8D 8D 80 00 00 00
    bool CallScriptFunction(void * a1, uintptr_t a2, uint8_t a3);

    struct Flags
    {
        uint8_t IsAttached : 1;
        uint8_t Unk2 : 1;
        uint8_t IsPlayerController : 1;
        uint8_t EnabledTransformUpdates : 1;
    };

    //Interface gameObjectInterface; // 160
    //Handle<game::PersistentState> persistentState; // 168
    LocalizationString displayName; // 178
    LocalizationString displayDescription; // 1A0
    CName audioResourceName; // 1C8
    game::PlayerSocket playerSocket; // 1D0
    float visibilityCheckDistance; // 1F8
    Flags flags;
    uint8_t unk1FD[3];
    Handle<ISerializable> owner;
    uint64_t unk210; // 210
    Handle<ent::SlotComponent> uiSlotComponent; // 218
    IGameInstance * gameInstance2; // 228
    red::TagList gameObjectTags; // 230
};
RED4EXT_ASSERT_SIZE(Object, 0x240);
//RED4EXT_ASSERT_OFFSET(Object, persistentState, 0x168);
 } // namespace game
using GameObject = game::Object;
} // namespace RED4ext
