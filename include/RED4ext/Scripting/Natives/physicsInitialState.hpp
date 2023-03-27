#pragma once

// This file is generated by Jack

#include <RED4ext/Common.hpp>
#include <cstdint>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>

namespace RED4ext::physics
{
struct InitialState {
    WorldTransform worldTransform;
    Vector4 linearVelocity;
    Vector4 angularVelocity;
};
}