#pragma once

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game {
struct PersistentState;
struct PSInterface
{
    virtual uint64_t __fastcall Destruct(char a1); // 00
    virtual uint64_t __fastcall sub_08();          // 08

    Handle<PersistentState> persistentState;
};
}
}