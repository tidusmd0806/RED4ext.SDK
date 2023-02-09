#pragma once

// This file is generated by Jack

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/entEntity.hpp>
#include <RED4ext/Scripting/Natives/Callbacks.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PersistentState.hpp>

namespace RED4ext
{
struct WorldTransform;
namespace ent {
struct Entity;
struct IComponent : IScriptable
{
    static constexpr const char* NAME = "entIComponent";
    static constexpr const char* ALIAS = "IComponent";

    // a little after "entIComponent" string
    // 1.6  RVA: 0x33045E0
    // 1.61 RVA: 0x33097A0
    // 1.62 RVA: 0x330C8E0
    static constexpr const uintptr_t VFT_RVA = 0x330C8E0;

    //virtual CClass* GetNativeType() override
    //{

    //}

    inline virtual bool sub_58() override
    {
        RelocFunc<decltype(&IComponent::sub_58)> call(VFT_RVA, 0x58);
        return call(this);
    }

    inline virtual void* sub_C0(void* a1) override
    {
        RelocFunc<decltype(&IComponent::sub_C0)> call(VFT_RVA, 0xC0);
        return call(this, a1);
    }


     virtual void sub_110();
     virtual bool sub_118(CName, void*);
     virtual bool sub_120(CName, void*);
     virtual void sub_128();
     virtual bool sub_130();
     virtual bool sub_138();
     virtual void sub_140();
     // after callback is registered
     virtual void sub_148();
     virtual void sub_150();
     // Get persistent state
     virtual Handle<game::PersistentState>* sub_158(Handle<game::PersistentState>*);
     // called on initialize components
     // isReplicable?
     virtual bool sub_160();
     virtual void sub_168();
     // OnMeshesLoaded
     virtual void sub_170();
     // called on initialize components
     // unk88 |= 1
     // Internal_LoadResources?
     virtual uint64_t sub_178(WorldTransform*);
     // unk88 &= -2u
     virtual void sub_180();
     // this, 160, 1A8, then 190 called when initializing
     // struct of entity, scriptGameIntance, runtimeScene
     // on game editor attach?
     // unk88 |= 2
     virtual void sub_188(void*);
     virtual void sub_190();
     // on game editor detach
     //   unk88 &= ~2u;
     //   unk88 |= 8u;
     virtual bool sub_198(void*);
     virtual void sub_1A0();
     virtual void sub_1A8();
     // OnPostSnapshotApplied
     virtual void sub_1B0();
     virtual void sub_1B8();
     virtual void sub_1C0();
     virtual void sub_1C8();
     virtual void sub_1D0();
     virtual void sub_1D8();
     virtual bool sub_1E0();
     virtual void sub_1E8();
     // called on gather event listeners, after registered
     virtual uint64_t sub_1F0(Handle<CallbackManager>*);
     virtual void sub_1F8();
     // OnRenderSelection
     virtual uint64_t sub_200(uint64_t);
     virtual void sub_208();
     virtual uint64_t Initialize();
     virtual void sub_218();
     virtual void sub_220(void*);
     virtual const char * sub_228();
     // called on initialize components
     // Get Replicated State Class
     virtual CClass* sub_230();

    // 1.52 RVA: 0x103E040 / 17031232
    /// @pattern 48 89 51 50 C3
    void __fastcall SetEntity(Entity *);

    CName name; // 40
    CName appearanceName; // 48 "player"
    Entity* entity; // 50
    uint64_t unk58;
    CRUID id; // 60
    ResourcePath appearancePath;
    DynArray<Handle<void>> unk70;
    uint64_t unk80;
    uint8_t unk88;
    uint8_t unk89;
    uint8_t unk8A;
    bool isEnabled; // 8B
    bool isReplicable; // 8C
    uint8_t unk8D[0x90 - 0x8D]; // 8D
};
 //char (*__kaboom)[sizeof(IComponent)] = 1;
} // namespace ent
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Scripting/Natives/entIComponent-inl.hpp>
#endif
