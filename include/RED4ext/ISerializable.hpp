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

    // after "ISerializable" string
    // 1.6  RVA: 0x30D70A8
    // 1.61 RVA: 0x30DC038
    // 1.61hf1 RVA: 0x30DF0B8
    /// @pattern 00 49 53 65 72 69 61 6C 69 7A 61 62 6C 65 00 00 00
    /// @offset -257

    /// @pattern 48 8B 05 79 DB AF 01 C3 CC CC CC CC CC CC CC CC
    void getNativeType();

    /// @pattern 48 89 5C 24 08 57 48 83 EC 20 8B DA 48 8B F9 E8 38 4C 18 FE F6 C3 01 74 0D BA 30 00 00 00 48 8B
    void dstr(char a2);

    /// @pattern                                  // ISerializable VFT
    /// (ISerializable_getNativeType:ref)         // sub_00
    /// (GetType:call)                            // sub_08
    /// (GetAllocator:call)                       // sub_10
    /// (ISerializable_dstr:ref)                  // sub_18
    /// 60 AF 13 40 01 00 00 00                   // sub_20
    /// 60 AF 13 40 01 00 00 00                   // sub_28
    /// (sub_30:call)                             // sub_30
    /// 60 AF 13 40 01 00 00 00                   // sub_38
    /// (ISerializable_OnSerialize:ref)           // sub_40
    /// (ISerializable_OnSerializeToText:ref)     // sub_48
    /// (ISerializable_OnSerializeFromText:ref)   // sub_50
    /// 70 1D 38 40 01 00 00 00                   // sub_58
    /// 70 1D 38 40 01 00 00 00                   // sub_60
    /// 70 1D 38 40 01 00 00 00                   // sub_68
    static constexpr const uintptr_t VFT = ISerializable_VFT_Addr;

    // 1.52 RVA: 0x1AB240 / 1749568
    /// @pattern 40 53 48 83 EC 20 48 8D 05 7B DA EC 02 48 8B D9 48 89 01 33 C0 48 89 41 08 48 89 41 10 48 89 41
    //ISerializable() = default;

    // 1.6  RVA: 0x1AFD70 / 1768816
    /// @pattern 40 53 48 83 EC 50 4C 8B C2 48 8B D9 48 85 D2 0F 84 C5 00 00 00 48 8B 42 10 0F 57 C0 66 0F 7F 44
    void __fastcall SetOwner(ISerializable *owner);

    virtual CClass* GetNativeType() = 0;                                          // 00
    virtual CClass* GetType();                                                          // 08
    virtual Memory::IAllocator* GetAllocator();                                         // 10
    virtual ~ISerializable() = default;                                                 // 18
    virtual void sub_20(Handle<ISerializable>* a1);                                     // 20
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

    bool IsOfClass(const CClass* cls);
    operator const WeakHandle<ISerializable>&() const noexcept;
    operator Handle<ISerializable>() noexcept;

    [[nodiscard]] const char* ToString();

    WeakHandle<ISerializable> ref;   // 00 - Initialized in Handle ctor
    WeakHandle<ISerializable> unk18; // 18 - Owner/parent
    uint64_t unk28;                  // 28 - Incremental ID set in ISerializable ctor, can be zero
};
RED4EXT_ASSERT_SIZE(ISerializable, 0x30);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/ISerializable-inl.hpp>
#endif
