#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Scripting/Natives/Generated/ent/Entity.hpp>
#endif

namespace RED4ext
{
namespace ent
{

RED4EXT_INLINE uintptr_t Entity::CopyComponentsToStorage(EntityDefinition* definition, void* a2)
{
    RelocFunc<decltype(&Entity::CopyComponentsToStorage)> call(VFT_RVA, 0x1A8);
    return call(this, definition, a2);
}

RED4EXT_INLINE Vector2 * __fastcall Entity::sub_120(Vector2 * a1, Vector2 * a2) {
    a1->X = a2->Y;
    a1->Y = a2->X * a2->Y;
    return a1;
}

RED4EXT_INLINE bool __fastcall Entity::sub_130() {
    RelocFunc<decltype(&Entity::sub_130)> call(VFT_RVA, 0x130);
    return call(this);
}

RED4EXT_INLINE void Entity::sub_138()
{
    RelocFunc<decltype(&Entity::sub_138)> call(VFT_RVA, 0x138);
    return call(this);
}


// 1.61 RVA: 0x1046140
// 1.62 RVA: 0x1046F30
RED4EXT_INLINE uint64_t Entity::SetupEntityAndComponents(EntityDefinition* definition)
{
    RelocFunc<decltype(&Entity::SetupEntityAndComponents)> call(0x1046F30);
    return call(this, definition);
}

} // namespace ent
} // namespace RED4ext
