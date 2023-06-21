#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/CName.hpp>
#endif

#include <RED4ext/CNamePool.hpp>

RED4EXT_INLINE const char* RED4ext::CName::ToString() const
{
    return CNamePool::Get(*this);
}

RED4EXT_INLINE constexpr RED4ext::CName::CName(const std::string aStr) noexcept
{
    constexpr CName None = FNV1a64("None");

    hash = CNamePool::Add(aStr.c_str());
    if (hash == None)
    {
        hash = 0;
    }
}
