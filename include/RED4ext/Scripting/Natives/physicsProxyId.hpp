#pragma once

// clang-format off

// This file is generated by Jack

#include <cstdint>
#include <RED4ext/Common.hpp>
// #include <RED4ext/Scripting/Natives/physicsBaseProxyDesc.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/FilterData.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/SimulationType.hpp>
#include <RED4ext/Scripting/Natives/physicsStateValue.hpp>
// #include <RED4ext/Scripting/Natives/physicsProxyManager.hpp>

namespace RED4ext {
namespace physics {
struct BaseProxy;
struct BaseProxyDesc;
struct ProxyCacheEntry;
struct ProxyManager;
struct ProxyID 
{
    // 1.6 RVA: 0x448BD0 / 4492240
    /// @pattern 4C 8B DC 53 56 48 83 EC 68 8B 01 48 8B D9 49 8D 4B 08 41 89 43 08 48 8B F2 E8 52 25 02 00 48 85
    bool __fastcall Unk(void* a2);

    // 1.6 RVA: 0x46AC90 / 4631696
    /// @pattern 48 89 5C 24 10 57 48 83 EC 20 8B 01 48 8B FA 48 8B D9 89 44 24 30 48 8B 0D FB 4D D1 03 48 8D 54
    bool __fastcall Something2(__int64 a2);

    // 1.6  RVA: 0x44B2B0 / 4502192
    /// @pattern 40 53 48 83 EC 30 8B 01 4C 8D 44 24 40 48 8B 0D E4 47 D3 03 48 8D 54 24 20 89 44 24 40 E8 3E F1
    bool __fastcall GetKeyUnk37_0x40();

    // 1.6 RVA: 0x449F60 / 4497248
    /// @pattern 48 89 5C 24 10 57 48 83 EC 40 8B 19 8B FA 48 8B 0D 33 5B D3 03 48 8D 54 24 60 C7 44 24 50 00 00
    __int64 __fastcall GetNbShapes(unsigned int bodyIndex);

    // calls PhysicalSystemKey->Process
    // 1.6 RVA: 0x448DF0 / 4492784
    /// @pattern 40 55 53 41 54 41 57 48 8B EC 48 83 EC 68 48 8B 02 4C 8B E1 48 8B CA 4C 8B FA FF 10 84 C0 0F 84
    uint32_t* __fastcall ProcessProxyDesc(BaseProxyDesc* desc);

    // only used by types 2, 3, 5, 6, 10, 12, 13
    // 1.6  RVA: 0x46B140 / 4632896
    // 1.62 RVA: 0x46BA70 / 4635248
    /// @pattern 40 53 48 83 EC 30 8B 01 4C 8D 44 24 40 48 8B 0D ? ? ? ? 48 8D 54 24 20 89 44 24 40 E8 AE F2
    // 2.0  RVA: 0x2BACA4
    /// @pattern 40 53 48 83 EC 30 44 8B C1 48 8D 54 24 20 48 8B 0D ? ? ? ? E8 ? ? ? ? 48 8B 5C 24 20 48 8D 4C 24 20 E8 6F 9D E6 FF 48 8B C3
    BaseProxy * __fastcall GetProxy();

    // 2.0  RVA: 0x93CBF4
    /// @pattern 40 53 48 83 EC 30 44 8B C1 48 8D 54 24 20 48 8B 0D ? ? ? ? E8 ? ? ? ? 48 8B 5C 24 20 48 85 DB 74 04 48 83 C3 08
    ent::Entity *__fastcall GetEntity();

    // 1.6  RVA: 0x46AC90 / 4631696
    /// @pattern 48 89 5C 24 10 57 48 83 EC 20 8B 01 48 8B FA 48 8B D9 89 44 24 30 48 8B 0D FB 4D D1 03 48 8D 54
    void __fastcall UpdateProxyCacheEntry(ProxyCacheEntry *entry);

    int16_t index;
    uint8_t unk02;
    uint8_t unk03;
};
RED4EXT_ASSERT_SIZE(ProxyID, 0x4);

template<typename T>
T * GetValueFromProxyCache(T* value, ProxyID proxyID, int bodyIndex, int shapeIndex, StateValue stateValue, T* initial) {
    *value = *initial;
    ProxyManager::Get()->GetProxyCache(proxyID)->GetValue(proxyID, bodyIndex, 0, stateValue, value, sizeof(T));
    return value;
}

template<typename T, StateValue S>
T * GetValueFromProxyCache(T * value, ProxyID proxyID, int bodyIndex) {
    T initial, result;
    *value = *GetValueFromProxyCache(&result, proxyID, bodyIndex, 0, S, &initial);
    return value;
}

} // namespace physics
} // namespace RED4ext