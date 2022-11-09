#pragma once

#include <cstdint>

#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace Memory
{
struct IAllocator;
}

struct CClass;
struct BaseStream;
struct CString;

struct ISerializable
{
    //static constexpr const char* NAME = "ISerializable";
    //static constexpr const char* ALIAS = NAME;
    static constexpr const uintptr_t VFT_RVA = 0x30D70A8;

    // 1.52 RVA: 0x1AB240 / 1749568
    /// @pattern 40 53 48 83 EC 20 48 8D 05 7B DA EC 02 48 8B D9 48 89 01 33 C0 48 89 41 08 48 89 41 10 48 89 41
    //ISerializable() = default;

    virtual CClass* GetNativeType() = 0;                                                // 00
    virtual CClass* GetType();                                                          // 08
    virtual Memory::IAllocator* GetAllocator();                                         // 10
    virtual ~ISerializable() = default;                                                 // 18
    virtual void sub_20(Handle<ISerializable>*);                                        // 20
    virtual void sub_28();                                                              // 28
    virtual bool sub_30();                                                              // 30
    virtual void sub_38();                                                              // 38
    virtual bool sub_40(BaseStream* aStream);                                           // 40
    virtual bool sub_48(int64_t a1);                                                    // 48
    virtual bool sub_50(int64_t a1);                                                    // 50
    virtual bool sub_58();                                                              // 58
    virtual bool sub_60();                                                              // 60
    virtual bool sub_68();                                                              // 68
    virtual bool sub_70();                                                              // 70
    virtual int64_t sub_78(int64_t a1, int64_t a2, uint8_t a3, int64_t a4, int64_t a5); // 78
    virtual bool sub_80();                                                              // 80
    virtual void sub_88();                                                              // 88
    virtual bool sub_90();                                                              // 90
    virtual bool sub_98();                                                              // 98
    virtual void* sub_A0();                                                             // A0
    virtual CClass* sub_A8();                                                           // A8
    virtual void sub_B0(void* a1);                                                      // B0
    virtual CString sub_B8();                                                           // B8
    virtual void* sub_C0(void* a1);                                                     // C0
    virtual void* sub_C8(void* a1);                                                     // C8
    virtual bool CanBeDestructed();                                                     // D0

    WeakHandle<ISerializable> ref;   // 00 - Initialized in Handle ctor
    WeakHandle<ISerializable> unk18; // 18
    uint64_t unk28;                  // 28 - Incremental ID set in ISerializable ctor, can be zero
};
RED4EXT_ASSERT_SIZE(ISerializable, 0x30);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/ISerializable-inl.hpp>
#endif
