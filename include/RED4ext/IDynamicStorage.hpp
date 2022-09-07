#pragma once

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/RTTITypes.hpp>
#include <RED4ext/Scripting/worldRuntimeInfo.hpp>

namespace RED4ext {

struct IDynamicStorage {
    // static constexpr const uintptr_t VFT_RVA = 0x30DF830;

    virtual ~IDynamicStorage();                                     // 00
    virtual void* GetInstance(const CClass* aType);                 // 08
    virtual world::RuntimeInfo* GetRuntimeInfo();                   // 10

    // 1.52 RVA: 0x299D7C0 / 43636672
    /// @pattern 48 8D 05 69 20 74 00 48 89 01 48 8B C1 C3
    IDynamicStorage();
};

}
