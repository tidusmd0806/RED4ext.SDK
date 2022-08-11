#pragma once

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game {
struct PersistentState;
struct PSInterface
{
    virtual uint64_t __fastcall PS_Destruct(char a1); // 00
    virtual uint64_t __fastcall PS_sub_08();          // 08

    Handle<PersistentState> persistentState;
};
}
}