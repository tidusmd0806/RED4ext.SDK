#pragma once

#include <cstddef>
#include <stdint.h>

namespace RED4ext {

// commonly used functions in vfts or commented out code

/// @pattern C2 00 00 CC CC CC CC CC CC CC CC CC CC CC CC CC
/// @nth 0/0
/// @noimpl 1
uint64_t REUSED_ReturnZero(void *a1...);

/// @pattern 32 C0 C3 CC CC CC CC CC CC CC CC CC CC CC CC CC
/// @nth 1/0
/// @noimpl 1
uint8_t REUSED_ReturnZero8(void *a1...);

/// @pattern 33 C0 C3 CC CC CC CC CC CC CC CC CC CC CC CC CC
/// @nth 0/0
/// @noimpl 1
uint64_t REUSED_ReturnZero64(void *a1...);

/// @pattern B0 01 C3 CC CC CC CC CC CC CC CC CC CC CC CC CC
/// @nth 0/0
/// @noimpl 1
uint64_t REUSED_ReturnOne(void *a1...);

/// @pattern B8 01 00 00 00 C3 CC CC CC CC CC CC CC CC CC CC
/// @nth 0/0
/// @noimpl 1
uint64_t REUSED_ReturnOne64(void *a1...);

/// @pattern 48 83 EC 28 E8 EF FF FF FF 48 85 C0 74 06 FF 15
/// @noimpl 1
void REUSED_Break(void *...);

}