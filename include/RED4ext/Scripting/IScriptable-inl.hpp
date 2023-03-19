#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Scripting/IScriptable.hpp>
#endif

#include <RED4ext/Addresses.hpp>
#include <RED4ext/Relocation.hpp>

RED4EXT_INLINE RED4ext::CClass* RED4ext::IScriptable::GetNativeType()
{
    RelocFunc<decltype(&RED4ext::IScriptable::GetNativeType)> call(VFT, 0x00);
    return call(this);
}

RED4EXT_INLINE RED4ext::IScriptable::IScriptable()
    : valueHolder(nullptr)
    , unk30(nullptr)
{
}

RED4EXT_INLINE RED4ext::IScriptable::~IScriptable()
{
    DestructValueHolder();
}

RED4EXT_INLINE RED4ext::CClass* RED4ext::IScriptable::GetType()
{
    if (unk30)
    {
        return unk30;
    }

    return GetNativeType();
}

RED4EXT_INLINE void RED4ext::IScriptable::sub_D8(int64_t a1, int64_t a2)
{
    RelocFunc<decltype(&RED4ext::IScriptable::sub_D8)> call(VFT, 0xD8);
    call(this, a1, a2);
}

RED4EXT_INLINE void RED4ext::IScriptable::sub_E0()
{
}

RED4EXT_INLINE void RED4ext::IScriptable::sub_E8()
{
}

RED4EXT_INLINE void RED4ext::IScriptable::sub_F0()
{
}

RED4EXT_INLINE void RED4ext::IScriptable::sub_F8()
{
}

RED4EXT_INLINE void RED4ext::IScriptable::sub_100()
{
}

RED4EXT_INLINE void RED4ext::IScriptable::sub_108()
{
}

RED4EXT_INLINE void* RED4ext::IScriptable::GetValueHolder()
{
    using func_t = void* (*)(IScriptable*);
    RelocFunc<func_t> func(Addresses::IScriptable_GetValueHolder);
    return func(this);
}

RED4EXT_INLINE void RED4ext::IScriptable::DestructValueHolder()
{
    using func_t = void* (*)(IScriptable*);
    RelocFunc<func_t> func(Addresses::IScriptable_DestructValueHolder);
    func(this);
}
