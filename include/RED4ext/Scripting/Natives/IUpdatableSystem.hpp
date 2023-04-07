#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
struct UpdateManagerHolder;

struct IUpdatableSystem : IScriptable
{
    static constexpr const char* NAME = "IUpdatableSystem";
    static constexpr const char* ALIAS = NAME;

    // vft is before "CVariableStoragePtr" string, or after IUpdatableSystem
    // 1.6  RVA: 0x3205788
    // 1.61 RVA: 0x320A8A8
    // 1.61hf1 RVA: 0x320D998
    /// @pattern 49 55 70 64 61 74 61 62 6C 65 53 79 73 74 65 6D 00
    /// @offset -264
    static constexpr const uintptr_t VFT = IUpdatableSystem_VFT_Addr;


    // 1.52 RVA: 0xA779C0 / 10975680
    /// @pattern 40 53 48 83 EC 20 48 8B D9 E8 82 7F 76 FF 48 8D 05 9B EA 72 02 48 89 03 48 8B C3 48 83 C4 20 5B
    //IUpdatableSystem();
    
    virtual CClass* GetNativeType() override;
    virtual ~IUpdatableSystem() override = default;

    // 1.52 RVA: 0xA86060 / 11034720
    /// @pattern 0F B6 C1 83 F8 0C 77 7B 48 8D 15 91 9F 57 FF 8B 8C 82 EC 60 A8 00 48 03 CA FF E1 48 8D 05 46 18
    // static const char *__fastcall GetStringForUnk0(Unk0);

    // sub_110 - adds callbacks to the lookup - there are at least 10 dynarrays
    virtual void RegisterUpdates(UpdateManagerHolder* holder) { }; 
};
RED4EXT_ASSERT_SIZE(IUpdatableSystem, 0x40);

} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Scripting/Natives/IUpdatableSystem-inl.hpp>
#endif
