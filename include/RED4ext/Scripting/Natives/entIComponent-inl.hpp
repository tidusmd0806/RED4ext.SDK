#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Scripting/Natives/entIComponent.hpp>
#endif

namespace RED4ext
{
namespace ent
{

RED4EXT_INLINE void IComponent::sub_110() {
    RelocVirtualFunc<decltype(&IComponent::sub_110)> call(VFT_RVA, 0x110);
    return (this->*call)();
}

RED4EXT_INLINE bool IComponent::sub_118(CName a1, void* a2) {
    RelocVirtualFunc<decltype(&IComponent::sub_118)> call(VFT_RVA, 0x118);
    return (this->*call)(a1, a2);
}

RED4EXT_INLINE bool IComponent::sub_120(CName a1, void* a2) {
    RelocVirtualFunc<decltype(&IComponent::sub_120)> call(VFT_RVA, 0x120);
    return (this->*call)(a1, a2);
}

RED4EXT_INLINE void IComponent::sub_128() {
    RelocVirtualFunc<decltype(&IComponent::sub_128)> call(VFT_RVA, 0x128);
    return (this->*call)();
}

RED4EXT_INLINE void IComponent::sub_130() {
    RelocVirtualFunc<decltype(&IComponent::sub_130)> call(VFT_RVA, 0x130);
    return (this->*call)();
}

RED4EXT_INLINE void IComponent::sub_138() {
    RelocVirtualFunc<decltype(&IComponent::sub_138)> call(VFT_RVA, 0x138);
    return (this->*call)();
}

RED4EXT_INLINE void IComponent::sub_140() {
    RelocVirtualFunc<decltype(&IComponent::sub_140)> call(VFT_RVA, 0x140);
    return (this->*call)();
}

RED4EXT_INLINE void IComponent::sub_148() {
    RelocVirtualFunc<decltype(&IComponent::sub_148)> call(VFT_RVA, 0x148);
    return (this->*call)();
}

RED4EXT_INLINE void IComponent::sub_150() {
    RelocVirtualFunc<decltype(&IComponent::sub_150)> call(VFT_RVA, 0x150);
    return (this->*call)();
}

RED4EXT_INLINE Handle<game::PersistentState>* IComponent::sub_158(Handle<game::PersistentState>* a1) {
    RelocVirtualFunc<decltype(&IComponent::sub_158)> call(VFT_RVA, 0x158);
    return (this->*call)(a1);
}

RED4EXT_INLINE bool IComponent::sub_160() {
    RelocVirtualFunc<decltype(&IComponent::sub_160)> call(VFT_RVA, 0x160);
    return (this->*call)();
}

RED4EXT_INLINE void IComponent::sub_168() {
    RelocVirtualFunc<decltype(&IComponent::sub_168)> call(VFT_RVA, 0x168);
    return (this->*call)();
}

RED4EXT_INLINE void IComponent::sub_170() {
    RelocVirtualFunc<decltype(&IComponent::sub_170)> call(VFT_RVA, 0x170);
    return (this->*call)();
}

RED4EXT_INLINE uint64_t IComponent::sub_178(uint64_t a1) {
    RelocVirtualFunc<decltype(&IComponent::sub_178)> call(VFT_RVA, 0x178);
    return (this->*call)(a1);
}

RED4EXT_INLINE void IComponent::sub_180() {
    RelocVirtualFunc<decltype(&IComponent::sub_180)> call(VFT_RVA, 0x180);
    return (this->*call)();
}

RED4EXT_INLINE void IComponent::OnRequestComponents(void* a1) {
    RelocVirtualFunc<decltype(&IComponent::OnRequestComponents)> call(VFT_RVA, 0x188);
    return (this->*call)(a1);
}

RED4EXT_INLINE void IComponent::sub_190() {
    RelocVirtualFunc<decltype(&IComponent::sub_190)> call(VFT_RVA, 0x190);
    return (this->*call)();
}

RED4EXT_INLINE void IComponent::sub_198() {
    RelocVirtualFunc<decltype(&IComponent::sub_198)> call(VFT_RVA, 0x198);
    return (this->*call)();
}

RED4EXT_INLINE void IComponent::sub_1A0() {
    RelocVirtualFunc<decltype(&IComponent::sub_1A0)> call(VFT_RVA, 0x1A0);
    return (this->*call)();
}

RED4EXT_INLINE void IComponent::sub_1A8() {
    RelocVirtualFunc<decltype(&IComponent::sub_1A8)> call(VFT_RVA, 0x1A8);
    return (this->*call)();
}

RED4EXT_INLINE void IComponent::sub_1B0() {
    RelocVirtualFunc<decltype(&IComponent::sub_1B0)> call(VFT_RVA, 0x1B0);
    return (this->*call)();
}

RED4EXT_INLINE void IComponent::sub_1B8() {
    RelocVirtualFunc<decltype(&IComponent::sub_1B8)> call(VFT_RVA, 0x1B8);
    return (this->*call)();
}

RED4EXT_INLINE void IComponent::sub_1C0() {
    RelocVirtualFunc<decltype(&IComponent::sub_1C0)> call(VFT_RVA, 0x1C0);
    return (this->*call)();
}

RED4EXT_INLINE void IComponent::sub_1C8() {
    RelocVirtualFunc<decltype(&IComponent::sub_1C8)> call(VFT_RVA, 0x1C8);
    return (this->*call)();
}

RED4EXT_INLINE void IComponent::sub_1D0() {
    RelocVirtualFunc<decltype(&IComponent::sub_1D0)> call(VFT_RVA, 0x1D0);
    return (this->*call)();
}

RED4EXT_INLINE void IComponent::sub_1D8() {
    RelocVirtualFunc<decltype(&IComponent::sub_1D8)> call(VFT_RVA, 0x1D8);
    return (this->*call)();
}

RED4EXT_INLINE void IComponent::sub_1E0() {
    RelocVirtualFunc<decltype(&IComponent::sub_1E0)> call(VFT_RVA, 0x1E0);
    return (this->*call)();
}

RED4EXT_INLINE void IComponent::sub_1E8() {
    RelocVirtualFunc<decltype(&IComponent::sub_1E8)> call(VFT_RVA, 0x1E8);
    return (this->*call)();
}

RED4EXT_INLINE uint64_t IComponent::sub_1F0(Handle<CallbackManager>* a1) {
    RelocVirtualFunc<decltype(&IComponent::sub_1F0)> call(VFT_RVA, 0x1F0);
    return (this->*call)(a1);
}

RED4EXT_INLINE void IComponent::sub_1F8() {
    RelocVirtualFunc<decltype(&IComponent::sub_1F8)> call(VFT_RVA, 0x1F8);
    return (this->*call)();
}

RED4EXT_INLINE void IComponent::sub_200() {
    RelocVirtualFunc<decltype(&IComponent::sub_200)> call(VFT_RVA, 0x200);
    return (this->*call)();
}

RED4EXT_INLINE void IComponent::sub_208() {
    RelocVirtualFunc<decltype(&IComponent::sub_208)> call(VFT_RVA, 0x208);
    return (this->*call)();
}

RED4EXT_INLINE uint64_t IComponent::Initialize() {
    RelocVirtualFunc<decltype(&IComponent::Initialize)> call(VFT_RVA, 0x210);
    return (this->*call)();
}

RED4EXT_INLINE void IComponent::sub_218() {
    RelocVirtualFunc<decltype(&IComponent::sub_218)> call(VFT_RVA, 0x218);
    return (this->*call)();
}

RED4EXT_INLINE void IComponent::sub_220(void* a1) {
    RelocVirtualFunc<decltype(&IComponent::sub_220)> call(VFT_RVA, 0x220);
    return (this->*call)(a1);
}

RED4EXT_INLINE void IComponent::sub_228() {
    RelocVirtualFunc<decltype(&IComponent::sub_228)> call(VFT_RVA, 0x228);
    return (this->*call)();
}

RED4EXT_INLINE uint32_t IComponent::sub_230() {
    RelocVirtualFunc<decltype(&IComponent::sub_230)> call(VFT_RVA, 0x230);
    return (this->*call)();
}

} // namespace ent
} // namespace RED4ext
