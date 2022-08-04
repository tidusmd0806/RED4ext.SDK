#pragma once

#include <RED4ext/IDynamicStorage.hpp>
#include <RED4ext/Scripting/Natives/UpdateManager.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/RuntimeScene.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/RuntimeInfo.hpp>
// #include <RED4ext/Scripting/Natives/Generated/game/GameFeatureManager.hpp>
 #include <RED4ext/Scripting/Natives/IGameInstance.hpp>

namespace RED4ext {

namespace game { struct IGameSystem; struct GameFeatureManager; }

struct UpdatableSystems {
    DynArray<Handle<IScriptable>> * gameSystems;
    world::RuntimeScene* runtimeSystems;
    Handle<game::GameFeatureManager> featureManager;
    uint8_t unk20;
    uint8_t unk21;
    uint8_t unk22;
    uint8_t unk23;
    uint8_t unk24;
    uint8_t unk25;
    uint8_t unk26;
    uint8_t unk27;
    // retrieved from userSettings
    uint64_t gameplay_perfomance;
    uint64_t graphics_raytracing;
};

struct GameInstance : IGameInstance
{
    static constexpr const uintptr_t VFT_RVA = 0x35FC738;

    virtual ~GameInstance() override;                                      // 00
    // creates some systems, calls systems' sub_190, sub198
    virtual void sub_20(uint8_t*, uint64_t, uint32_t*) override;           // 20
    // calls parent func, then sets gameInstance & runtimeScene
    virtual bool RegisterUpdates(CGameFramework*) override;                // 28
    virtual void* GetRuntimeScene() override;                               // 30
    virtual void* GetGameInstance() override;                               // 38
    virtual void SaveGame(uint64_t, uint64_t, uint64_t) override;          // 40
    virtual void SomethingAutoSave_sub_1B8(uint64_t) override;             // 48
    virtual void SomethingAutoSave_sub_1C0() override;                     // 50
    // no longer exists
    // virtual void Unk_68() = 0;                                     // 68

    // 1.52 RVA: 0x2D494B0 / 47486128
    /// @pattern 40 53 48 83 EC 20 48 8B D9 E8 42 5B FB FF 48 8D 05 73 32 8B 00 48 89 03 33 C0 48 89 83 30 01 00
    GameInstance();

    /**
     * @brief Calls sub_60 on each class in a list, creates them, calls their sub_190 & sub_198
     * @address 0x2CFF600
     * @param unkThing is some sort of logging struct
     * @param a3 is a flag that gets passed to sub_60
     * @pattern 4C 89 44 24 18 48 89 54 24 10 48 89 4C 24 08 55 53 56 57 41 54 41 55 41 56 41 57 48 8D 6C 24 E1
    */
    __int64 *__fastcall Setup(void **unkThing, uint8_t *a3);
    
    HashMap<CBaseRTTIType*, Handle<game::IGameSystem>> systemInstances; // 08
    DynArray<Handle<IScriptable>> gameSystems;                // 38
    // 48: contains the ISystem to System mapping, System is listed twice if no interface
    HashMap<CBaseRTTIType*, CBaseRTTIType*> interfaceMapping;
    world::RuntimeScene * runtimeScene; // 78
    world::RuntimeInfo runtimeInfo; // 80
    // 0x100: 0x415643FF7B
    int64_t unk100;
    IGameInstance* self; // 108
    UpdatableSystems* updatableSystems; // 110
    Handle<game::GameFeatureManager> gameFeatureManager; // 118
    bool gameIsLoading; // 128
    uint8_t unk129;
    uint8_t unk12A[6];


    int64_t gameInstance; // 130
    int64_t runtimeScene; // 138

    //world::RuntimeSystemHandles * runtimeSystemHandles; // 78
    //world::RuntimeInfo runtimeInfo; // 80
    //int64_t unk100; // 100
    //GameInstance* gameInstancePtr; // 108
    //DynArray<Handle<IScriptable>>* gameSystemsPtr; // 110
    //Handle<game::GameFeatureManager> gameFeatureManager; // 118
    //int64_t unk128; // 128
    //int64_t unk130; // 130
    //int64_t unk138; // 138
};
RED4EXT_ASSERT_SIZE(GameInstance, 0x140);
}
