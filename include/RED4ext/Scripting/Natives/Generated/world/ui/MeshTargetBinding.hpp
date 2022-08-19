#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ISourceBinding.hpp>

namespace RED4ext
{
namespace world::ui { 
struct MeshTargetBinding : ent::ISourceBinding
{
    static constexpr const char* NAME = "worlduiMeshTargetBinding";
    static constexpr const char* ALIAS = NAME;

    // creates thing
    // sub_E0(Handle*, Handle* meshComp, Handle* widgetComp)
    // tests if mesh & widget comp are valid
    // sub_E8(Handle* meshComp, Handle* widgetComp)

};
RED4EXT_ASSERT_SIZE(MeshTargetBinding, 0x70);
} // namespace world::ui
} // namespace RED4ext
