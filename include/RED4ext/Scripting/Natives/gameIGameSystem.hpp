#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/JobQueue.hpp>
#include <RED4ext/Scripting/Natives/IUpdatableSystem.hpp>

namespace RED4ext
{
struct GameInstance;

namespace world
{
struct RuntimeScene;
}

namespace game
{
struct SaveLock;

struct IGameSystem : IUpdatableSystem
{
    static constexpr const char* NAME = "gameIGameSystem";
    static constexpr const char* ALIAS = "IGameSystem";

    // after "gameIGameSystem" string
    // 1.6  RVA: 0x3214700
    // 1.61 RVA: 0x3219820
    // 1.61hf1 RVA: 0x321C920
    /// @pattern 67 61 6D 65 49 47 61 6D  65 53 79 73 74 65 6D 00
    /// @offset -16
    static constexpr const uintptr_t VFT = gameIGameSystem_VFT_Addr;

    struct HighLow
    {
        void* unk00;
        void* performance;
        uint8_t crowdDensity;
    };

    // 1.52 RVA: 0xAEC190 / 11452816
    /// @pattern 40 53 48 83 EC 20 48 8B D9 E8 22 B8 F8 FF 48 8D 05 4B 92 6C 02 48 C7 43 40 00 00 00 00 48 89 03
    //IGameSystem();

    virtual CClass* GetNativeType() override;     
    virtual ~IGameSystem() override = default;

    virtual void OnWorldAttached(world::RuntimeScene* aScene);                                                // 118
    virtual void OnBeforeWorldDetach(world::RuntimeScene* aScene);                                            // 120
    virtual void OnWorldDetached(world::RuntimeScene* aScene);                                                // 128
    virtual void OnAfterWorldDetach();                                                                        // 130
    virtual uint32_t OnBeforeGameSave(const JobGroup& aJobGroup, void* a2);                                   // 138
    virtual void OnGameSave(void* aStream);                                                                   // 140
    virtual void OnAfterGameSave();                                                                           // 148
    virtual void OnGameLoad(const JobGroup& aJobGroup, bool& aSuccess, void* aStream);                        // 150
    // 158 ReturnOne, something WaitingForEntities, "Saved"
    // right before player attach
    virtual bool OnGameRestored();                                                                            // 158
    virtual void OnGamePrepared();                                                                            // 160
    virtual void OnGamePaused();                                                                              // 168
    virtual void OnGameResumed();                                                                             // 170
    // 178, 138, 148 fire when going out-of-bounds
    // something with a CString @ 0x08 - PointOfNoReturnSave?    
    virtual void* IsSavingLocked(SaveLock* aLock, bool a2);                                                   // 178
    virtual void OnStreamingWorldLoaded(world::RuntimeScene* aScene, uint64_t a2, const JobGroup& aJobGroup); // 180
    virtual void sub_188();                                                                                   // 188
    // called from GameInstance->sub_20, recieves some struct based on game performance setting & crowd density
    virtual void sub_190(HighLow* a1);                                                                        // 190
    // called after created & gameInstance is set
    // OnInitialize called
    // Tweaks loaded
    virtual void OnInitialize(const JobHandle& aJob);                                                         // 198
    virtual void OnUninitialize();                                                                            // 1A0

    // 1.52 RVA: 0xAEC8E0 / 11454688
    // Sets gameInstance, creates unkThing, calls sub_198
    // Called from GameInstance->sub_20
    /// @pattern 48 89 5C 24 10 57 48 83 EC 20 48 8B FA 66 C7 44 24 30 00 00 0F B7 44 24 30 48 8D 54 24 30 4C 89
    void ** __fastcall SetGameInstance(void ** unkThing, GameInstance * gameInstance);

    // 1.52 RVA: 0xAEC970 / 11454832
    // Unsets unk40, calls sub_1A0
    /// @pattern 40 53 48 83 EC 20 48 8B 01 48 8B D9 FF 90 A0 01 00 00 48 C7 43 40 00 00 00 00 48 83 C4 20 5B C3
    __int64 __fastcall Unset();

    GameInstance* gameInstance; // 40
};
RED4EXT_ASSERT_SIZE(IGameSystem, 0x48);
} // namespace game
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Scripting/Natives/gameIGameSystem-inl.hpp>
#endif
