#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/BaseObject.hpp>

namespace RED4ext
{
namespace vehicle { 
struct WheeledBaseObject : vehicle::BaseObject
{
    static constexpr const char* NAME = "vehicleWheeledBaseObject";
    static constexpr const char* ALIAS = "WheeledObject";

    struct Unk980
    {
        WheeledBaseObject * vehicle;
        float unk08;
        float timer;
        bool unk10;
        uint8_t unk11[233];
    } * unk980;

    void * transmissionData;
    void * engineData;
    void * burnoutData;
};
RED4EXT_ASSERT_SIZE(WheeledBaseObject, 0x9A0);
} // namespace vehicle
using WheeledObject = vehicle::WheeledBaseObject;
} // namespace RED4ext

// clang-format on
