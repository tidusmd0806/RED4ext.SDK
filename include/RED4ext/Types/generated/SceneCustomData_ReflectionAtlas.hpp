#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ISceneStorageCustomData.hpp>

namespace RED4ext
{
struct SceneCustomData_ReflectionAtlas : ISceneStorageCustomData
{
    static constexpr const char* NAME = "SceneCustomData_ReflectionAtlas";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk18[0x68 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(SceneCustomData_ReflectionAtlas, 0x68);
} // namespace RED4ext
