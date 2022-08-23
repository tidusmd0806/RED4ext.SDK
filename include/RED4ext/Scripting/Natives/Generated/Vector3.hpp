#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct alignas(0x4) Vector3
{
    static constexpr const char* NAME = "Vector3";
    static constexpr const char* ALIAS = NAME;

    float X; // 00
    float Y; // 04
    float Z; // 08

    Vector3& operator+=(const Vector3& rhs) {
        this->X += rhs.X;
        this->Y += rhs.Y;
        this->Z += rhs.Z;
        return *this;
    } 
};
RED4EXT_ASSERT_SIZE(Vector3, 0xC);
} // namespace RED4ext
