#pragma once

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Relocation.hpp>

namespace RED4ext {

struct GameOption {
  virtual ~GameOption() = default;                                // 00
  virtual bool __fastcall Print(CString*) = 0;                    // 08
  virtual bool __fastcall GetValue(void*, char) = 0;              // 10
  virtual bool __fastcall Parse(CString *) = 0;                   // 18
  virtual void __fastcall Set(void*, char) = 0;                   // 20
  virtual bool __fastcall PrintDefault(CString *) = 0;            // 28
  virtual void __fastcall GetDefaultValue(void*, char) = 0;       // 30
  virtual bool __fastcall GetUnk1(void*, char) = 0;               // 38
  virtual bool __fastcall GetUnk2(void*, char) = 0;               // 40
  virtual bool __fastcall GetUnk3() = 0;                          // 48
  virtual bool __fastcall sub_50() = 0;
  virtual bool __fastcall sub_58() = 0;
  virtual bool __fastcall RestoreDefault() = 0;

  const char *variableName;
  const char *categoryName;
  uint64_t unk18;
  uint64_t unk20;
  uint8_t flag;
};

struct GameOptionBool : GameOption {
  bool value;
  bool unk1;
  bool unk2;
  bool defaultValue;
  bool unk3;
};

struct GameOptionFloat : GameOption {
  float value;
  float unk1;
  float unk2;
  float defaultValue;
  bool unk3;
};

struct __declspec(align(8)) GameOptionManager {
    // 1.52 RVA: 0x2B9DC60 / 45735008
    /// @pattern 48 83 EC 58 48 8B 05 DD 7A 03 02 48 85 C0 0F 85 58 01 00 00 E8 87 09 00 00 48 8D 48 08 FF 15 4D
    inline static GameOptionManager* __fastcall Get() {
        RelocFunc<decltype(&GameOptionManager::Get)> call(0x2B9DC60);
        return call();
    }

    // 1.52 RVA: 0x2B9DE90 / 45735568
    /// @pattern 48 89 5C 24 08 48 89 74 24 10 48 89 7C 24 18 41 56 48 83 EC 20 4C 8B F1 49 8B D9 48 8B 49 10 49
    inline bool __fastcall GetGameOption(const char *category, const char *prop, CString &value) {
        RelocFunc<decltype(&GameOptionManager::GetGameOption)> call(0x2B9DE90);
        return call(this, category, prop, value);
    }
  
    // 1.52 RVA: 0x2B9E570 / 45737328
    /// @pattern 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 20 48 8B E9 49 8B D9 48 8B 49 10 49 8B
    inline bool __fastcall SetGameOption(const char *category, const char *prop, CString *value) {
        RelocFunc<decltype(&GameOptionManager::SetGameOption)> call(0x2B9E570);
        return call(this, category, prop, value);
    }

    struct Unk00 {
        struct Entry {
            CString unk00;
            Map<CString, CString> unk20;
        };

        Map<CName, Entry> unk00;
        uint8_t unk28;
    };

    struct Unk28 {
        HashMap<uint64_t, uint64_t> unk00;
        uint64_t unk30;
    };

    GameOptionManager::Unk00 **unk00;
    GameOptionManager::Unk00 *unk08;
    GameOptionManager::Unk28 *runtime;
    GameOptionManager::Unk00 *baseSettings;
    uint32_t unk20;
    uint32_t unk24;
    GameOptionManager::Unk28 *userSettings;
    DynArray<void*> unk30;
    CString unk40;
    uint64_t unk60_Critical[2];
    uint8_t unk70;
    uint64_t unk78;
    uint64_t unk80;
    uint8_t unk88;
};

}
