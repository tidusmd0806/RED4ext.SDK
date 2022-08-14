#pragma once

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game {
struct PersistentState;
struct PSInterface
{
    virtual ~PSInterface() = default; // 00
    virtual CClass* __fastcall GetPSClass() = 0;          // 08

    Handle<PersistentState> persistentState;
};
}
}
