#pragma once

#include <cstdint>

namespace Zoltan
{
#pragma region CBaseFunction
/// @pattern 40 55 48 81 EC ? ? ? ? 48 8D 6C 24 ? 8B 81 ? ? ? ?
/// @nth 0/1
constexpr uintptr_t CBaseFunction_ExecuteScripted = 0;
/// @pattern 48 89 5C 24 ? 57 48 81 EC ? ? ? ? 48 8B 02
/// @nth 1/10
constexpr uintptr_t CBaseFunction_ExecuteNative = 0;
/// @pattern 40 55 41 54 41 55 41 56 41 57 48 81 EC C0 01 00 00 48 8D 6C 24 40 F6
/// @nth 0/1
constexpr uintptr_t CBaseFunction_InternalExecute = 0;
/// @pattern 48 89 5C 24 08 57 48 83 EC 20 49 8B C1 4D 8B D0 44 8B 4C 24 58 48 8B DA 41 83 C9 01
/// @nth 0/1
constexpr uintptr_t CBaseFunction_Register = 0;
#pragma endregion

#pragma region CBaseRTTIType
/// @pattern 40 53 55 57 41 55 41 56 48 83 EC 20 8B 41 70
/// @nth 0/1
constexpr uintptr_t CBaseRTTIType_sub_80 = 0;
/// @pattern 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 40 48 8B F9
/// @nth 0/25
constexpr uintptr_t CBaseRTTIType_sub_88 = 0;
/// @pattern 48 89 5C 24 08 48 89 74 24 10 57 48 81 EC ?
/// @nth 1/297
constexpr uintptr_t CBaseRTTIType_sub_90 = 0;
/// @pattern 40 53 55 57 48 83 EC 50 48 8B D9
/// @nth 0/2
constexpr uintptr_t CBaseRTTIType_sub_98 = 0;
/// @pattern 48 8B 02 4C 8D 05 ? ? ? ? 4C 8B CA 48 8B D1
/// @nth 0/1
constexpr uintptr_t CBaseRTTIType_sub_A0 = 0;
#pragma endregion

#pragma region CBitfield
/// @pattern 48 89 5C 24 08 48 89 6C 24 18 56 57 41 55
/// @nth 0/2
constexpr uintptr_t CBitfield_Unserialize = 0;
/// @pattern 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 41 56 41 57 48 83 EC 30 0F B6 41 20
/// @nth 0/1
constexpr uintptr_t CBitfield_ToString = 0;
/// @pattern 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 41 56 41 57 48 83 EC 40
/// @nth 3/78
constexpr uintptr_t CBitfield_FromString = 0;
#pragma endregion

#pragma region CClass
/// @pattern 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 30 49 8B F9
/// @nth 0/2
constexpr uintptr_t CClass_Unserialize = 0;
/// @pattern 48 8B C4 55 48 8D 68 ? 48 81 EC ? ? ? ?
/// @nth 1/71
constexpr uintptr_t CClass_ToString = 0;
/// @pattern 40 53 55 57 41 55 41 56
/// @nth 0/15
constexpr uintptr_t CClass_sub_80 = 0;
/// @pattern 48 89 5C 24 08 48 89 6C 24 18 56 57 41 56
/// @nth 8/208
constexpr uintptr_t CClass_sub_88 = 0;
/// @pattern 48 89 5C 24 10 55 57 41 56 48 81 EC 80 00 00 00
/// @nth 0/3
constexpr uintptr_t CClass_sub_90 = 0;
/// @pattern 48 89 5C 24 10 55 57 41 56 48 81 EC 80 00 00 00
/// @nth 1/3
constexpr uintptr_t CClass_sub_98 = 0;
/// @pattern 48 89 5C 24 08 48 89 74 24 10 48 89 7C 24 20
/// @nth 0/104
constexpr uintptr_t CClass_sub_A0 = 0;
/// @pattern 48 89 5C 24 ? 55 57 41 57 48 83 EC ?
/// @nth 0/10
constexpr uintptr_t CClass_sub_B0 = 0;
/// @pattern 48 83 EC ? 48 89 5C 24 78 48 89 7C 24 60
/// @nth 0/1
constexpr uintptr_t CClass_sub_C0 = 0;
/// @pattern 48 89 5C 24 10 57 48 83 EC 30 F6 41 70 0C 48 8B F9
/// @nth 0/1
constexpr uintptr_t CClass_GetMaxAlignment = 0;
/// @pattern 48 89 4C 24 08 53 56 48 83 EC 58
/// @nth 0/1
constexpr uintptr_t CClass_sub_D0 = 0;
/// @pattern 40 56 41 56 48 83 EC ? 41 0F B6 F0
/// @nth 0/1
constexpr uintptr_t CClass_CreateInstance = 0;
/// @pattern 48 89 5C 24 18 56 48 83 EC 20 83 B9 F0 00 00 00 00
/// @nth 0/1
constexpr uintptr_t CClass_GetProperty = 0;
/// @pattern 48 89 5C 24 10 48 89 74 24 18 48 89 7C 24 20 41 56 48 83 EC 30 4C 8B F1 48 8B FA
/// @nth 0/1
constexpr uintptr_t CClass_GetProperties = 0;
/// @pattern 48 89 5C 24 18 56 57 41 57 48 83 EC 40 80 A1 C9 02 00 00 EF
/// @nth 0/1
constexpr uintptr_t CClass_ClearScriptedData = 0;
#pragma endregion

#pragma region CClassFunction
/// @pattern 48 89 5C 24 08 57 48 83 EC 20 49 8B C1 4D 8B D0
/// @nth 1/3
constexpr uintptr_t CClassFunction_ctor = 0;
#pragma endregion

#pragma region CClassStaticFunction
/// @pattern 48 89 5C 24 08 57 48 83 EC 20 49 8B C1 4D 8B D0
/// @nth 0/3
constexpr uintptr_t CClassStaticFunction_ctor = 0;
#pragma endregion

#pragma region CEnum
/// @pattern 48 89 5C 24 08 48 89 74 24 18 57 48 83 EC ? 8B 42 ?
/// @nth 0/1
constexpr uintptr_t CEnum_Unserialize = 0;
/// @pattern 40 ? 48 83 EC ? 44 0F B6 49 20 33 C0
/// @nth 0/1
constexpr uintptr_t CEnum_ToString = 0;
/// @pattern 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 30 48 8B F9 49 8B D8
/// @nth 0/1
constexpr uintptr_t CEnum_FromString = 0;
#pragma endregion

#pragma region CGameEngine
/// @pattern 48 89 05 ? ? ? ? ? 8D ? 30 01 00 00
/// @nth 0/1
/// @offset 3
constexpr uintptr_t CGameEngine = 0;
#pragma endregion

#pragma region CGlobalFunction
/// @pattern 48 89 5C 24 08 57 48 83 EC 20 49 8B D9
/// @nth 0/6
constexpr uintptr_t CGlobalFunction_ctor = 0;
#pragma endregion

#pragma region CNamePool
/// @pattern 48 89 5C 24 08 57 48 83 EC 30 45 33 C0 48 8B F9
/// @nth 0/1
constexpr uintptr_t CNamePool_AddCstr = 0;
/// @pattern 48 89 5C 24 08 48 89 74  24 10 57 48 83 EC 20 48 8B F1 48 8B DA 48 8B CA E8 ? ? ? ? 48 8B CB 48 8B F8 E8
/// @nth 0/1
constexpr uintptr_t CNamePool_AddCString = 0;
/// @pattern 48 83 EC 38 33 C0 48 89 54 24 20 48 85 D2
/// @nth 0/1
constexpr uintptr_t CNamePool_AddPair = 0;
/// @pattern 48 83 EC 38 48 8B 11 48 8D 4C 24 20 E8
/// @nth 0/1
constexpr uintptr_t CNamePool_Get = 0;
#pragma endregion

#pragma region CRTTIRegistrator
/// @pattern B8 01 00 00 00 F0 0F C1 05 ? ? ? ? FF C0 C3
/// @nth 0/1
/// @offset 9
constexpr uintptr_t CRTTIRegistrator_RTTIAsyncId = 0;
/// @pattern 48 89 5C 24 08 48 89 74 24 20 4C 89 44 24 18 48 89 54 24 10 57 48 83 EC 50 48 8B F1
/// @nth 0/1
constexpr uintptr_t CRTTIRegistrator_Add = 0;
#pragma endregion

#pragma region CRTTIScriptReferenceType
/// @pattern 48 89 5C 24 18 57 48 83 EC 20 48 8B FA 48 8B D9 E8 ? ? ? ? 48 8D 05 
/// @nth 0/1
constexpr uintptr_t CRTTIScriptReferenceType_ctor = 0;
/// @pattern 48 89 5C 24 20 57 48 83  EC 20 4C 89 41 18 48 8B
/// @nth 0/1
constexpr uintptr_t CRTTIScriptReferenceType_Set = 0;
#pragma endregion

#pragma region CRTTISystem
/// @pattern 40 53 48 83 EC 20 65 48 8B 04 25 58 00 00 00 48 8D 1D ? ? ? ?
/// @nth 0/1
constexpr uintptr_t CRTTISystem_Get = 0;
#pragma endregion

#pragma region CStack
/// @pattern 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 20 48 8D 05 ? ? ? ? 48 C7 41 08 00 00 00 00
/// @nth 1/3
constexpr uintptr_t CStack_ctor = 0;
#pragma endregion

#pragma region CString
/// @pattern 48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 33 FF
/// @nth 0/20
constexpr uintptr_t CString_ctor = 0;
/// @pattern 40 53 48 83 EC 20 48 8B D9 48 3B CA
/// @nth 0/7
constexpr uintptr_t CString_copy = 0;
/// @pattern 40 53 48 83 EC 20 48 8B D9 8B 49 14 8B C1 C1 E8
/// @nth 0/1
constexpr uintptr_t CString_dtor = 0;
#pragma endregion

#pragma region DynArray
/// @pattern 48 89 6C 24 20 57 41 54 41 56 48 83 EC ?
/// @nth 0/2
constexpr uintptr_t DynArray_Realloc = 0;
#pragma endregion

#pragma region Handle
/// @pattern 48 89 5C 24 ? 57 48 83 EC ? 48 89 11
/// @nth 0/20
constexpr uintptr_t Handle_ctor = 0;
/// @pattern 40 53 48 83 EC ? 48 8B D9 48 8B 49 08 48 85 C9 74 ? B8 FF FF FF FF
/// @nth 1/85
constexpr uintptr_t Handle_DecWeakRef = 0;
#pragma endregion

#pragma region IScriptable
/// @pattern 40 53 48 83 EC ? 48 8B 01 49 8B D8
/// @nth 0/4
constexpr uintptr_t IScriptable_sub_D8 = 0;
/// @pattern 40 53 48 83 EC 20 48 83 79 38 00 48 8B D9 75
/// @nth 1/2
constexpr uintptr_t IScriptable_GetValueHolder = 0;
/// @pattern 40 56 48 83 EC 30 48 83 79 38 00 48 8B F1 0F 84
/// @nth 0/1
constexpr uintptr_t IScriptable_DestructValueHolder = 0;
#pragma endregion

#pragma region ISerializable
/// @pattern 48 83 EC ? E8 ? ? ? ? 48 85 C0
/// @nth 1/32
constexpr uintptr_t ISerializable_sub_30 = 0;
/// @pattern 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC ? 48 8B F2
/// @nth 0/72
constexpr uintptr_t ISerializable_sub_40 = 0;
/// @pattern 48 89 5C 24 08 48 89 74 24 10 48 89 7C 24 18 44 88 4C 24 20 55 41 54
/// @nth 0/3
constexpr uintptr_t ISerializable_sub_78 = 0;
/// @pattern 48 83 EC ? 48 8B 01 FF 50 08
/// @nth 1/7
constexpr uintptr_t ISerializable_sub_A0 = 0;
/// @pattern 40 53 48 83 EC ? 48 8B DA E8 ? ? ? ?
/// @nth 1/115
constexpr uintptr_t ISerializable_sub_C0 = 0;
#pragma endregion

#pragma region JobHandle
/// @pattern 40 53 48 83 EC 20 0F B7 02 48 8B D9 48 8B 0D ? ? ? ? 4D 8B C8 66 89 44 24 30 4C 8D 44 24 30
/// @nth 0/1
constexpr uintptr_t JobHandle_ctor = 0;
/// @pattern 40 53 48 83 EC 20 48 8B 11 48 8B D9 48 85 D2 74 13 48 8B 0D ? ? ? ? E8 ? ? ? ?
/// @nth 0/1
constexpr uintptr_t JobHandle_dtor = 0;
/// @pattern 48 89 5C 24 08 57 48 83 EC 40 48 8B FA 48 8B D9 48 8B 12 48 8B 0D ? ? ? ? E8 ? ? ? ?
/// @nth 0/1
constexpr uintptr_t JobHandle_Join = 0;
#pragma endregion

#pragma region JobInternals
/// @pattern 8B 15 ? ? ? ? 65 48 8B 04 25 58 00 00 00 41 B8 ? ? ? ? 48 8B 04 D0 41 88 0C 00 C3
/// @nth 2/4
constexpr uintptr_t JobInternals_SetLocalThreadParam = 0;
/// @pattern 4D 8B 08 4C 8B 02 48 8B D1 48 8B 0D ? ? ? ? E9 ? ? ? ?
/// @nth 0/2
constexpr uintptr_t JobInternals_DispatchJob = 0;
#pragma endregion

#pragma region JobQueue
/// @pattern 48 89 5C 24 10 48 89 6C 24 18 56 57 41 54 41 56 41 57 48 83 EC 20 0F B7 7A 30 4C 8B F1
/// @nth 0/1
constexpr uintptr_t JobQueue_ctor_FromGroup = 0;
/// @pattern 48 89 5C 24 10 48 89 6C 24 18 56 57 41 56 48 83 EC 20 48 8D 05 ? ? ? ? 49 8B D8 48 89 01
/// @nth 0/1
constexpr uintptr_t JobQueue_ctor_FromParams = 0;
/// @pattern 40 53 48 83 EC 20 80 79 30 00 48 8B D9 75 ? E8 ? ? ? ? 48 8D 4B 18 E8 ? ? ? ? 48 8D 4B 10
/// @nth 0/1
constexpr uintptr_t JobQueue_dtor = 0;
/// @pattern 48 89 5C 24 18 57 48 83  EC 20 48 8B FA 48 8B D9 E8 ? ? ? ? 48 8D 53 10 48 8B CF E8
/// @nth 0/1
constexpr uintptr_t JobQueue_Capture = 0;
/// @pattern 48 89 5C 24 18 57 48 83 EC 20 48 8B D9 48 83 C1 18 E8 ? ? ? ? 84 C0 75 ? 48 8D 4B 10
/// @nth 0/1
constexpr uintptr_t JobQueue_SyncWait = 0;
#pragma endregion

#pragma region Memory
/// @pattern 48 8D 05 ? ? ? ? C3
/// @nth 0/1372
constexpr uintptr_t Memory_Vault_Get = 0;
/// @pattern 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 30
/// @nth 5/1984
constexpr uintptr_t Memory_Vault_Alloc = 0;
/// @pattern 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 30
/// @nth 0/450
constexpr uintptr_t Memory_Vault_AllocAligned = 0;
/// @pattern 48 89 5C 24 10 48 89 74 24 18 48 89 7C 24 20 41 56
/// @nth 0/298
constexpr uintptr_t Memory_Vault_Realloc = 0;
/// @pattern 48 89 5C 24 18 56 57 41 56 48 83 EC 40
/// @nth 0/16
constexpr uintptr_t Memory_Vault_ReallocAligned = 0;
/// @pattern 48 89 5C 24 10 57 48 83 EC 20 4C 8B 81 00 C9 00 00
/// @nth 0/1
constexpr uintptr_t Memory_Vault_Free = 0;
/// @pattern 48 89 5C 24 08 57 48 83 EC 20 4C 8B 81 00 C9 00 00
/// @nth 0/2
constexpr uintptr_t Memory_Vault_Unk1 = 0;
/// @pattern 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 48 89 7C 24 20 41 56
/// @nth 0/1335
constexpr uintptr_t Memory_PoolStorage_OOM = 0;
#pragma endregion

#pragma region OpcodeHandlers
/// @pattern 4C 8D 15 ? ? ? ? 33 C0 48 C7 44 24 20 00 00 00 00
/// @nth 0/14
constexpr uintptr_t OpcodeHandlers_Get = 0;
#pragma endregion

#pragma region ResourceDepot
/// @pattern 48 89 0D ? ? ? ? C3
/// @nth 2/26
/// @offset 3
constexpr uintptr_t ResourceDepot = 0;
#pragma endregion

#pragma region ResourceLoader
/// @pattern 48 8B 87 ? ? ? ? 48 8B 5C 24 ? 48 89 05 ? ? ? ? 48 83 C4 20 5F C3
/// @nth 0/1
/// @offset 15
constexpr uintptr_t ResourceLoader = 0;
/// @pattern 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 20 48 8B F1 49 8B D8 48 83 C1 40 48 8B EA E8
/// @nth 0/1
constexpr uintptr_t ResourceLoader_FindToken = 0;
/// @pattern 4C 8B DC 49 89 5B 10 49 89 6B 18 49 89 73 20 57 48 83 EC 50 48 8B 69 48 33 C0 49 C7 43 D8 00 00 00 00
/// @nth 0/1
constexpr uintptr_t ResourceLoader_LoadAsync = 0;
#pragma endregion

#pragma region ResourceReference
/// @pattern 48 89 5C 24 10 57 48 83 EC 30 48 8D 59 08 48 8B F9 48 8B 0B 48 85 C9
/// @nth 0/1
constexpr uintptr_t ResourceReference_Load = 0;
/// @pattern 40 53 48 83 EC 20 48 8B D9 E8 ? ? ? ? 48 8B 4B 08 48 85 C9 74 0A
/// @nth 0/1
constexpr uintptr_t ResourceReference_Fetch = 0;
/// @pattern 48 83 EC 38 45 33 C0 4C 89 01 48 8B 51 10 48 8B 41 08 48 89 54 24 28 4C 89 41 10 48 89 44 24 20
/// @nth 0/1
constexpr uintptr_t ResourceReference_Reset = 0;
#pragma endregion

#pragma region ResourceToken
/// @pattern 48 89 5C 24 10 57 48 83 EC 20 8B 41 58 48 8B D9 85 C0 74
/// @nth 0/1
constexpr uintptr_t ResourceToken_dtor = 0;
/// @pattern 40 53 48 83 EC 40 8B 41 58 48 8B D9 0F 29 74 24 30 0F 29 7C 24 20 85 C0 74 0A
/// @nth 0/1
constexpr uintptr_t ResourceToken_Fetch = 0;
/// @pattern 40 55 53 56 57 41 56 48 8D 6C 24 C9 48 81 EC F0 00 00 00 48 8B 41 08 0F 57 C0 49 8B F8 4C 8B F2
/// @nth 0/1
constexpr uintptr_t ResourceToken_OnLoaded = 0;
/// @pattern 40 53 48 83 EC 20 48 8B D9 B9 08 00 00 00 E8
/// @nth 0/1
constexpr uintptr_t ResourceToken_CancelUnk38 = 0;
/// @pattern 40 53 48 83 EC 20 48 8B D9 48 8B 49 08 48 85 C9 74 ? B8 FF FF FF FF F0 0F C1 01 83 F8 01 75
/// @nth 1/73
constexpr uintptr_t ResourceToken_DestructUnk38 = 0;
#pragma endregion

#pragma region Streams
/// @pattern 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 20 48 8B DA 49 8B E9
/// @nth 1/3
constexpr uintptr_t Streams_MemoryStream_ctor = 0;
#pragma endregion

#pragma region TTypedClass
/// @pattern 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 48 89 7C 24 20 41 54 41 56 41 57
/// @nth 5/426
constexpr uintptr_t TTypedClass_IsEqual = 0;
#pragma endregion

#pragma region TweakDB
/// @pattern 48 83 EC ? 48 8B 05 ? ? ? ? 48 85 C0 75 68
/// @nth 0/1
constexpr uintptr_t TweakDB_Get = 0;
/// @pattern 48 89 1D ? ? ? ? 48 C1 E7 04
/// @nth 0/1
constexpr uintptr_t TweakDB_StaticFlatDataBuffer = 0;
/// @pattern 48 89 5C 24 08 48 89 6C 24 18 48 89 74 24 20 57 41 56 41 57
/// @nth 13/51
constexpr uintptr_t TweakDB_InitFlatValue_ExceptInt32 = 0;
/// @pattern 48 8D ? ? ? ? ? 0F 1F 84 00 00 00 00 00 48 8B 4D E7
/// @nth 0/1
constexpr uintptr_t TweakDB_FlatInt32ValueVftable = 0;
/// @pattern 48 8D 05 ? ? ? ? 48 8D ? ? 48 89 06
/// @nth 10/49
constexpr uintptr_t TweakDB_FlatArrayInt32ValueVftable = 0;
/// @pattern 48 89 5C 24 08 ? 89 ? 24 18 57 48 83 EC 30 8B C2
/// @nth 0/1
constexpr uintptr_t TweakDB_CreateRecord = 0;
#pragma endregion
} // namespace RED4ext::Addresses
// clang-format on

