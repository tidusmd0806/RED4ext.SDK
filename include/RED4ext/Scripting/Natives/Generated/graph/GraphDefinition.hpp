#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/graph/IGraphObjectDefinition.hpp>
// #include <RED4ext/Scripting/Natives/Generated/graph/GraphNodeDefinition.hpp>

namespace RED4ext
{
// namespace graph { struct GraphNodeDefinition; }

namespace graph { 
struct GraphDefinition : IGraphObjectDefinition
{
    static constexpr const char* NAME = "graphGraphDefinition";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<IGraphObjectDefinition>> nodes; // 30
};
RED4EXT_ASSERT_SIZE(GraphDefinition, 0x40);
} // namespace graph
using graphGraphDefinition = graph::GraphDefinition;
} // namespace RED4ext

// clang-format on
