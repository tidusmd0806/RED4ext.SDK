#pragma once

#include <cstddef>
#include <stdint.h>

namespace RED4ext {

// commonly used functions in vfts or commented out code

// Return 2 byte values
// ret
#pragma region ret

// nullsub - lots of these
/// @pattern C2 00 00 CC CC CC CC CC CC CC CC CC CC CC CC CC
/// @nth 0/0
/// @noimpl 1
uint16_t Return0u16(void *a1...);

#pragma endregion

/// @pattern 32 C0 C3 CC CC CC CC CC CC CC CC CC CC CC CC CC
/// @nth 1/0
/// @noimpl 1
uint8_t ReturnZero8(void *a1...);

/// @pattern 33 C0 C3 CC CC CC CC CC CC CC CC CC CC CC CC CC
/// @nth 0/0
/// @noimpl 1
uint64_t ReturnZero64(void *a1...);

// Return 4 byte values
// mov eax, *
#pragma region mov_eax

/// @pattern B8 01 00 00 00 C3 CC CC CC CC CC CC CC CC CC CC
/// @nth 0/0
/// @noimpl 1
uint32_t Return1u32(void *a1...);

/// @pattern B8 04 00 00 00 C3 CC CC CC CC CC CC CC CC CC CC
/// @nth 0/0
/// @noimpl 1
uint32_t Return4u32(void *a1...);

/// @pattern B8 10 00 00 00 C3 CC CC CC CC CC CC CC CC CC CC
/// @nth 0/0
/// @noimpl 1
uint32_t Return16u32(void *a1...);

/// @pattern B8 18 00 00 00 C3 CC CC CC CC CC CC CC CC CC CC
/// @nth 0/0
/// @noimpl 1
uint32_t Return24u32(void *a1...);

/// @pattern B8 20 00 00 00 C3 CC CC CC CC CC CC CC CC CC CC
/// @nth 0/0
/// @noimpl 1
uint32_t Return32u32(void *a1...);

/// @pattern B8 28 00 00 00 C3 CC CC CC CC CC CC CC CC CC CC
/// @nth 0/0
/// @noimpl 1
uint32_t Return40u32(void *a1...);

/// @pattern B8 58 00 00 00 C3 CC CC CC CC CC CC CC CC CC CC
/// @nth 0/0
/// @noimpl 1
uint32_t Return88u32(void *a1...);

/// @pattern B8 FF FF FF FF C3 CC CC CC CC CC CC CC CC CC CC
/// @nth 0/0
/// @noimpl 1
int32_t ReturnN1i32(void *a1...);

#pragma endregion

// Return one byte values
// mov al, *
#pragma region mov_al

/// @pattern B0 01 C3 CC CC CC CC CC CC CC CC CC CC CC CC CC
/// @nth 0/0
/// @noimpl 1
uint8_t Return1(void *a1...);

/// @pattern B0 02 C3 CC CC CC CC CC CC CC CC CC CC CC CC CC
/// @nth 0/0
/// @noimpl 1
uint8_t Return2(void *a1...);

/// @pattern B0 03 C3 CC CC CC CC CC CC CC CC CC CC CC CC CC
/// @nth 0/0
/// @noimpl 1
uint8_t Return3(void *a1...);

/// @pattern B0 04 C3 CC CC CC CC CC CC CC CC CC CC CC CC CC
/// @nth 0/0
/// @noimpl 1
uint8_t Return4(void *a1...);

/// @pattern B0 05 C3 CC CC CC CC CC CC CC CC CC CC CC CC CC
/// @nth 0/0
/// @noimpl 1
uint8_t Return5(void *a1...);

/// @pattern B0 06 C3 CC CC CC CC CC CC CC CC CC CC CC CC CC
/// @nth 0/0
/// @noimpl 1
uint8_t Return6(void *a1...);

/// @pattern B0 07 C3 CC CC CC CC CC CC CC CC CC CC CC CC CC
/// @nth 0/0
/// @noimpl 1
uint8_t Return7(void *a1...);

/// @pattern B0 08 C3 CC CC CC CC CC CC CC CC CC CC CC CC CC
/// @nth 0/0
/// @noimpl 1
uint8_t Return8(void *a1...);

/// @pattern B0 09 C3 CC CC CC CC CC CC CC CC CC CC CC CC CC
/// @nth 0/0
/// @noimpl 1
uint8_t Return9(void *a1...);

/// @pattern B0 0A C3 CC CC CC CC CC CC CC CC CC CC CC CC CC
/// @nth 0/0
/// @noimpl 1
uint8_t Return10(void *a1...);

/// @pattern B0 0B C3 CC CC CC CC CC CC CC CC CC CC CC CC CC
/// @nth 0/0
/// @noimpl 1
uint8_t Return11(void *a1...);

/// @pattern B0 0C C3 CC CC CC CC CC CC CC CC CC CC CC CC CC
/// @nth 0/0
/// @noimpl 1
uint8_t Return12(void *a1...);

/// @pattern B0 0D C3 CC CC CC CC CC CC CC CC CC CC CC CC CC
/// @nth 0/0
/// @noimpl 1
uint8_t Return13(void *a1...);

/// @pattern B0 0E C3 CC CC CC CC CC CC CC CC CC CC CC CC CC
/// @nth 0/0
/// @noimpl 1
uint8_t Return14(void *a1...);

/// @pattern B0 0F C3 CC CC CC CC CC CC CC CC CC CC CC CC CC
/// @nth 0/0
/// @noimpl 1
uint8_t Return15(void *a1...);

#pragma endregion

/// @pattern 48 83 EC 28 E8 EF FF FF FF 48 85 C0 74 06 FF 15
/// @noimpl 1
void PureCall(void *...);


}