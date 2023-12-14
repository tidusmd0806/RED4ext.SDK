// #pragma once

// #include <cstdint>
// #include <RED4ext/Addresses-Found.hpp>

// namespace RED4ext::Addresses
// {
// #pragma region CBaseFunction
// /// @pattern 40 55 48 81 EC ? ? ? ? 48 8D 6C 24 ? 8B 81 ? ? ? ?
// /// @nth 0/1
// constexpr uintptr_t CBaseFunction_ExecuteScripted = Addresses_CBaseFunction_ExecuteScripted_Addr;
// /// @pattern 48 89 5C 24 ? 48 89 7C 24 ? 55 48 8D AC 24 ? ? ? ? 48 81 EC ? ? ? ?
// /// @nth 45/67
// constexpr uintptr_t CBaseFunction_ExecuteNative = Addresses_CBaseFunction_ExecuteNative_Addr;
// /// @pattern 40 55 41 54 41 55 41 56 41 57 48 81 EC C0 01 00 00 48 8D 6C 24 40 F6
// /// @nth 0/1
// constexpr uintptr_t CBaseFunction_InternalExecute = Addresses_CBaseFunction_InternalExecute_Addr;
// /// @pattern 48 89 5C 24 08 57 48 83 EC 20 49 8B C1 4D 8B D0 44 8B 4C 24 58 48 8B DA 41 83 C9 01
// /// @nth 0/1
// // constexpr uintptr_t CBaseFunction_Register = Addresses_CBaseFunction_Register_Addr;
// /// @pattern 4C 8D 05 (fn:rel) 48 8D 0D ? ? ? ? 4C 89 9B ? ? ? ?
// /// @nth 1/2
// /// @eval fn
// constexpr uintptr_t CBaseFunction_Handlers = Addresses_CBaseFunction_Handlers_Addr;
// #pragma endregion

// #pragma region CBaseRTTIType
// /// @pattern 48 8B C4 48 89 58 ? 57 48 83 EC ? 33 DB 4D 8B C8
// /// @nth 0/1
// constexpr uintptr_t CBaseRTTIType_sub_80 = Addresses_CBaseRTTIType_sub_80_Addr;
// /// @pattern 48 8B C4 48 89 58 ? 48 89 70 10 57 48 83 EC ? 33 DB
// /// @nth 2/4
// constexpr uintptr_t CBaseRTTIType_sub_88 = Addresses_CBaseRTTIType_sub_88_Addr;
// /// @pattern 48 89 5C 24 ? 48 89 7C 24 ? 55 48 8B EC 48 83 EC ? 41 F7 41 ? ? ? ? ?
// /// @nth 1/13
// constexpr uintptr_t CBaseRTTIType_sub_90 = Addresses_CBaseRTTIType_sub_90_Addr;
// /// @pattern 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 41 F7 41 ? ? ? ? ?
// /// @nth 0/1
// constexpr uintptr_t CBaseRTTIType_sub_98 = Addresses_CBaseRTTIType_sub_98_Addr;
// /// @pattern 48 8B 02 4C 8D 05 ? ? ? ? 4C 8B CA
// /// @nth 0/1
// constexpr uintptr_t CBaseRTTIType_sub_A0 = Addresses_CBaseRTTIType_sub_A0_Addr;
// #pragma endregion

// #pragma region CBitfield
// /// @pattern 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? F6 42 ? 02
// /// @nth 0/1
// constexpr uintptr_t CBitfield_Unserialize = Addresses_CBitfield_Unserialize_Addr;
// /// @pattern 48 8B C4 48 89 58 ? 48 89 68 ? 56 57 41 56 48 83 EC ? 48 83 60 ? 00
// /// @nth 4/5
// constexpr uintptr_t CBitfield_ToString = Addresses_CBitfield_ToString_Addr;
// /// @pattern 48 8B C4 48 89 58 ? 48 89 70 ? 48 89 78 ? 4C 89 70 ? 55 48 8B EC 48 83 EC ? F2 41 0F 10 00
// /// @nth 0/2
// constexpr uintptr_t CBitfield_FromString = Addresses_CBitfield_FromString_Addr;
// #pragma endregion

// #pragma region CClass
// /// @pattern 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 4C 8B 15 ? ? ? ?
// /// @nth 0/1
// constexpr uintptr_t CClass_Unserialize = Addresses_CClass_Unserialize_Addr;
// /// @pattern 48 89 5C 24 ? 48 89 74 24 ? 55 57 41 56 48 8D 6C 24 ? 48 81 EC ? ? ? ?
// /// @nth 104/341
// constexpr uintptr_t CClass_ToString = Addresses_CClass_ToString_Addr;
// /// @pattern 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 41 54 41 55 41 56 41 57 48 83 EC ? F6 41 70 ?
// /// @nth 0/1
// constexpr uintptr_t CClass_sub_80 = Addresses_CClass_sub_80_Addr;
// /// @pattern 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8B 02
// /// @nth 34/65
// constexpr uintptr_t CClass_sub_88 = Addresses_CClass_sub_88_Addr;
// /// @pattern 48 89 5C 24 ? 48 89 74 24 ? 57 41 56 41 57 48 81 EC ? ? ? ?
// /// @nth 1/3
// constexpr uintptr_t CClass_sub_90 = Addresses_CClass_sub_90_Addr;
// /// @pattern 48 89 5C 24 ? 48 89 74 24 ? 57 41 56 41 57 48 81 EC ? ? ? ?
// /// @nth 2/3
// constexpr uintptr_t CClass_sub_98 = Addresses_CClass_sub_98_Addr;
// /// @pattern 48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 55 41 56 41 57 48 8B EC 48 83 EC 70 41 F7 40 14 FF FF FF 3F
// /// @nth 0/1
// constexpr uintptr_t CClass_sub_A0 = Addresses_CClass_sub_A0_Addr;
// /// @pattern 48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 56 48 83 EC ? 48 8B 05 ? ? ? ?
// /// @nth 0/1
// constexpr uintptr_t CClass_sub_B0 = Addresses_CClass_sub_B0_Addr;
// /// @pattern 48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 83 64 24 ? ?
// /// @nth 12/58
// constexpr uintptr_t CClass_sub_C0 = Addresses_CClass_sub_C0_Addr;
// /// @pattern 48 89 5C 24 ? 57 48 83 EC ? 8B 59 ? E8 ? ? ? ?
// /// @nth 0/1
// constexpr uintptr_t CClass_GetMaxAlignment = Addresses_CClass_GetMaxAlignment_Addr;
// /// @pattern 4C 8B DC 49 89 5B ? 49 89 6B ? 49 89 73 ? 57 41 54 41 55 41 56
// /// @nth 25/33
// constexpr uintptr_t CClass_sub_D0 = Addresses_CClass_sub_D0_Addr;
// /// @pattern 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 65 48 8B 04 25 ? ? ? ? 48 8B F1
// /// @nth 0/4
// constexpr uintptr_t CClass_CreateInstance = Addresses_CClass_CreateInstance_Addr;
// /// @pattern 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 33 FF 48 8B DA
// /// @nth 0/4
// constexpr uintptr_t CClass_GetProperty = Addresses_CClass_GetProperty_Addr;
// /// @pattern 48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 56 48 83 EC ? 48 8B D9
// /// @nth 5/31
// constexpr uintptr_t CClass_GetProperties = Addresses_CClass_GetProperties_Addr;
// /// @pattern 48 8B C4 48 89 58 ? 48 89 70 ? 48 89 78 ? 4C 89 60 ? 55 41 56 41 57 48 8B EC 48 83 EC ? 80 A1 ? ? ? ? ? 48 8D 99 ? ? ? ? 48 8B F9 48 8B CB E8
// constexpr uintptr_t CClass_ClearScriptedData = Addresses_CClass_ClearScriptedData_Addr;
// #pragma endregion
// /// @pattern 48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 56 48 83 EC ? F6 41 70 ?
// /// @nth 0/1
// constexpr uintptr_t CClass_InitializeProperties = Addresses_CClass_InitializeProperties_Addr;
// #pragma endregion
// /// @pattern 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 41 54 41 55 41 56 41 57 48 83 EC ? 48 8B F9 48 8B EA
// /// @nth 0/2
// constexpr uintptr_t CClass_AssignDefaultValuesToProperties = Addresses_CClass_AssignDefaultValuesToProperties_Addr;
// #pragma endregion

// #pragma region CClassFunction
// /// @pattern 40 53 48 83 EC ? 49 8B C1 4D 8B D0 44 8B 4C 24 ?
// /// @nth 1/2
// constexpr uintptr_t CClassFunction_ctor = Addresses_CClassFunction_ctor_Addr;
// #pragma endregion

// #pragma region CClassStaticFunction
// /// @pattern 40 53 48 83 EC ? 49 8B C1 4D 8B D0 44 8B 4C 24 ?
// /// @nth 0/2
// constexpr uintptr_t CClassStaticFunction_ctor = Addresses_CClassStaticFunction_ctor_Addr;
// #pragma endregion

// #pragma region CEnum
// /// @pattern 48 89 5C 24 ? 48 89 7C 24 ? 55 48 8B EC 48 83 EC ? F6 42 ? ?
// /// @nth 1/4
// constexpr uintptr_t CEnum_Unserialize = Addresses_CEnum_Unserialize_Addr;
// /// @pattern 48 8B C4 53 48 83 EC ? 48 83 60 ? 00 49 8B D8 4C 8D 40 ?
// /// @nth 0/1
// constexpr uintptr_t CEnum_ToString = Addresses_CEnum_ToString_Addr;
// /// @pattern 48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8B F2 48 8B F9
// /// @nth 40/188
// constexpr uintptr_t CEnum_FromString = Addresses_CEnum_FromString_Addr;
// #pragma endregion

// #pragma region CGameEngine
// /// @pattern 48 89 05 (fn:rel) ? 8B ? 48 8B 10 FF 92 ? ? ? ?
// /// @nth 0/1
// /// @eval fn
// constexpr uintptr_t CGameEngine = Addresses_CGameEngine_Addr;
// #pragma endregion

// #pragma region CGlobalFunction
// /// @pattern 48 83 EC ? 4D 8B D1 41 B9 ? ? ? ? E8 ? ? ? ?
// /// @nth 0/1
// constexpr uintptr_t CGlobalFunction_ctor = Addresses_CGlobalFunction_ctor_Addr;
// #pragma endregion

// #pragma region CNamePool
// /// @pattern 40 53 48 83 EC ? 48 8B D9 48 89 54 24 ? 48 8B CA
// /// @nth 0/2
// constexpr uintptr_t CNamePool_AddCstr = Addresses_CNamePool_AddCstr_Addr;
// /// @pattern 48 83 EC ? 48 8B 01 4C 8B D9 48 8D 4C 24 ?
// /// @nth 0/1
// constexpr uintptr_t CNamePool_AddCString = Addresses_CNamePool_AddCString_Addr;
// /// @pattern 48 83 EC ? 4C 8B C1 48 89 54 24 ? 48 8B CA E8 ? ? ? ?
// /// @nth 1/3
// constexpr uintptr_t CNamePool_AddPair = Addresses_CNamePool_AddPair_Addr;
// /// @pattern 48 83 EC 38 48 8B 11 48 8D 4C 24 20 E8
// /// @nth 0/1
// constexpr uintptr_t CNamePool_Get = Addresses_CNamePool_Get_Addr;
// #pragma endregion

// #pragma region CRTTIRegistrator
// /// @pattern F0 0F C1 05 (fn:rel) FF C0 48 8D 0D ? ? ? ? 89 05 ? ? ? ? E8 ? ? ? ?
// /// @nth 0/11822
// /// @eval fn
// constexpr uintptr_t CRTTIRegistrator_RTTIAsyncId = Addresses_CRTTIRegistrator_RTTIAsyncId_Addr;
// /// @pattern 48 8B C4 48 89 58 ? 48 89 70 ? 4C 89 40 ? 48 89 50 ? 57
// /// @nth 8/41
// constexpr uintptr_t CRTTIRegistrator_Add = Addresses_CRTTIRegistrator_Add_Addr;
// #pragma endregion

// #pragma region CRTTIScriptReferenceType
// /// @pattern 40 53 48 83 EC 20 48 8B D9 48 8D 05 ? ? ? ? 33 C9 4C 8B C2 48 89 4B 08 48 89 03
// /// @nth 0/1
// constexpr uintptr_t CRTTIScriptReferenceType_ctor = Addresses_CRTTIScriptReferenceType_ctor_Addr;
// /// @pattern 48 89 5C 24 20 57 48 83 EC 20 4C 89 41 18 48 8B DA 48 89 51 10 48 8B F9
// /// @nth 0/1
// constexpr uintptr_t CRTTIScriptReferenceType_Set = Addresses_CRTTIScriptReferenceType_Set_Addr;
// #pragma endregion

// #pragma region CRTTISystem
// /// @pattern 48 83 EC ? 65 48 8B 04 25 ? ? ? ? BA ? ? ? ? 48 8B 08 8B 04 0A 39 05 ? ? ? ? 0F 8F ? ? ? ?
// /// @nth 1/5
// constexpr uintptr_t CRTTISystem_Get = Addresses_CRTTISystem_Get_Addr;
// #pragma endregion

// #pragma region CStack
// /// @pattern 48 8D 05 (fn:rel) 48 89 45 ? 48 8D 45 ? 48 89 45 ? 66 0F 7F 45 ?
// /// @nth 0/1
// /// @eval fn
// constexpr uintptr_t CStack_vtbl = Addresses_CStack_vtbl_Addr;
// #pragma endregion

// #pragma region CString
// /// @pattern 48 85 D2 74 15 48 83 C8 FF 48 FF C0
// /// @nth 0/1
// constexpr uintptr_t CString_ctor_str = Addresses_CString_ctor_str_Addr;
// /// @pattern 40 53 48 83 EC ? 33 C0 48 8B D9 48 89 41 ?
// /// @nth 3/6
// constexpr uintptr_t CString_ctor_span = Addresses_CString_ctor_span_Addr;
// /// @pattern B8 ? ? ? ? 39 41 ? 73 19 39 42 ?
// /// @nth 0/1
// constexpr uintptr_t CString_copy = Addresses_CString_copy_Addr;
// /// @pattern 40 53 48 83 EC ? 8B 41 ? 48 8B D9 C1 E8 ?
// /// @nth 0/2
// constexpr uintptr_t CString_dtor = Addresses_CString_dtor_Addr;
// #pragma endregion

// #pragma region DynArray
// /// @pattern 48 89 5C 24 ? 44 89 4C 24 ? 55 56 57 41 54 41 55 41 56 41 57
// /// @nth 0/18
// constexpr uintptr_t DynArray_Realloc = Addresses_DynArray_Realloc_Addr;
// #pragma endregion

// #pragma region Handle
// /// @pattern 48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 55 48 8B EC 48 83 EC ? 48 83 61 ? ?
// /// @nth 0/1
// constexpr uintptr_t Handle_ctor = Addresses_Handle_ctor_Addr;
// /// @pattern 40 53 48 83 EC ? 48 8B D9 48 8B 49 ? 48 85 C9
// /// @nth 12/124
// constexpr uintptr_t Handle_DecWeakRef = Addresses_Handle_DecWeakRef_Addr;
// #pragma endregion

// #pragma region IScriptable
// /// @pattern 40 53 48 83 EC ? 48 8B 01 49 8B D8 FF 50 08
// /// @nth 0/1
// constexpr uintptr_t IScriptable_sub_D8 = Addresses_IScriptable_sub_D8_Addr;
// /// @pattern 48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 56 48 83 EC ? 48 83 79 ? ?
// /// @nth 0/3
// constexpr uintptr_t IScriptable_DestructValueHolder = Addresses_IScriptable_DestructValueHolder_Addr;
// #pragma endregion

// #pragma region ISerializable
// /// @pattern 48 83 EC ? E8 ? ? ? ? 48 85 C0 74 11
// /// @nth 2/3
// constexpr uintptr_t ISerializable_sub_30 = Addresses_ISerializable_sub_30_Addr;
// /// @pattern 48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 41 56 48 83 EC ? F6 42 ? ?
// /// @nth 0/1
// constexpr uintptr_t ISerializable_sub_40 = Addresses_ISerializable_sub_40_Addr;
// /// @pattern 48 89 74 24 ? 48 89 7C 24 ? 44 88 4C 24 ? 55 41 56 41 57
// /// @nth 0/1
// constexpr uintptr_t ISerializable_sub_78 = Addresses_ISerializable_sub_78_Addr;
// /// @pattern 48 83 EC ? 48 8B 01 FF 50 08 48 8B C8
// /// @nth 1/12
// constexpr uintptr_t ISerializable_sub_A0 = Addresses_ISerializable_sub_A0_Addr;
// /// @pattern 40 53 48 83 EC ? 48 8B DA E8 ? ? ? ? 48 85 C0
// /// @nth 0/17
// constexpr uintptr_t ISerializable_sub_C0 = Addresses_ISerializable_sub_C0_Addr;
// #pragma endregion

// #pragma region JobDispatcher
// /// @pattern 48 89 05 (fn:rel) 48 83 C4 ? 5F C3
// /// @nth 1/6
// /// @eval fn
// constexpr uintptr_t JobDispatcher = Addresses_JobDispatcher_Addr;
// /// @pattern 48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 44 88 40 ? 57 41 54 41 55
// /// @nth 0/2
// constexpr uintptr_t JobDispatcher_DispatchJob  = Addresses_JobDispatcher_DispatchJob_Addr;
// #pragma endregion

// #pragma region JobHandle
// /// @pattern 48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 41 54 48 83 EC ?
// /// @nth 0/1
// constexpr uintptr_t JobHandle_ctor = Addresses_JobHandle_ctor_Addr;
// /// @pattern 40 53 48 83 EC ? 48 8B 11 48 8B D9 48 85 D2
// /// @nth 0/6
// constexpr uintptr_t JobHandle_dtor = Addresses_JobHandle_dtor_Addr;
// /// @pattern 48 83 EC ? 48 8B 02 4C 8B C2 8B 40 ?
// /// @nth 0/1
// constexpr uintptr_t JobHandle_Join = Addresses_JobHandle_Join_Addr;
// #pragma endregion

// #pragma region JobQueue
// /// @pattern 48 89 5C 24 ? 57 48 83 EC ? 48 8B 42 ? 48 8B DA 8A 52 ?
// /// @nth 0/1
// constexpr uintptr_t JobQueue_ctor_FromGroup = Addresses_JobQueue_ctor_FromGroup_Addr;
// /// @pattern 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 49 8B D9
// /// @nth 0/65
// constexpr uintptr_t JobQueue_ctor_FromParams = Addresses_JobQueue_ctor_FromParams_Addr;
// /// @pattern 40 53 48 83 EC ? 80 79 ? ? 48 8B D9 75 05
// /// @nth 0/1
// constexpr uintptr_t JobQueue_dtor = Addresses_JobQueue_dtor_Addr;
// /// @pattern 48 89 5C 24 ? 57 48 83 EC ? 48 8B FA 48 8B D9 E8 ? ? ? ? 48 8B 43 ?
// /// @nth 0/6
// constexpr uintptr_t JobQueue_Capture = Addresses_JobQueue_Capture_Addr;
// /// @pattern 48 89 5C 24 ? 48 89 74 24 ? 55 57 41 56 48 8B EC 48 83 EC ? 48 8D 79 ? 48 8B F1
// /// @nth 0/1
// constexpr uintptr_t JobQueue_SyncWait = Addresses_JobQueue_SyncWait_Addr;
// #pragma endregion

// #pragma region Memory
// /// @pattern C6 04 0A 01 48 8D 0D (fn:rel) 8B 50 ? 48 8B C1
// /// @nth 0/2
// /// @eval fn
// constexpr uintptr_t Memory_Vault = Addresses_Memory_Vault_Addr;
// /// @pattern 48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 54 41 56 41 57
// /// @nth 9/876
// constexpr uintptr_t Memory_Vault_Alloc = Addresses_Memory_Vault_Alloc_Addr;
// /// @pattern 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 41 54 41 55 41 56 41 57
// /// @nth 14/1039
// constexpr uintptr_t Memory_Vault_AllocAligned = Addresses_Memory_Vault_AllocAligned_Addr;
// /// @pattern 40 53 48 83 EC ? 4D 8B D8 48 8B DA 4C 8B D1
// /// @nth 0/1
// constexpr uintptr_t Memory_Vault_Realloc = Addresses_Memory_Vault_Realloc_Addr;
// /// @pattern 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 41 54 41 55 41 56 41 57
// /// @nth 16/1039
// constexpr uintptr_t Memory_Vault_ReallocAligned = Addresses_Memory_Vault_ReallocAligned_Addr;
// /// @pattern 48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 4C 8B 81 ? ? ? ?
// /// @nth 0/4
// constexpr uintptr_t Memory_Vault_Free = Addresses_Memory_Vault_Free_Addr;
// /// @pattern 4C 8B 81 ? ? ? ? 48 8B C2 4C 8B 89 ? ? ? ? 49 2B C0
// /// @nth 2/3
// constexpr uintptr_t Memory_Vault_Unk1 = Addresses_Memory_Vault_Unk1_Addr;
// /// @pattern 48 83 EC ? 48 8B C1 44 89 44 24 ? 4C 8B CA
// /// @nth 0/1
// constexpr uintptr_t Memory_PoolStorage_OOM = Addresses_Memory_PoolStorage_OOM_Addr;
// #pragma endregion

// #pragma region OpcodeHandlers
// /// @pattern 4C 8D 05 (fn:rel) 48 8D 0D ? ? ? ? 4C 89 9B ? ? ? ?
// /// @nth 0/2
// /// @eval fn
// constexpr uintptr_t OpcodeHandlers = Addresses_OpcodeHandlers_Addr;
// #pragma endregion

// #pragma region ResourceDepot
// /// @pattern 48 89 05 (fn:rel) 49 8B 5B ? 49 8B 73
// /// @nth 0/1
// /// @eval fn
// constexpr uintptr_t ResourceDepot = Addresses_ResourceDepot_Addr;
// #pragma endregion

// #pragma region ResourceLoader
// /// @pattern 48 89 05 (fn:rel) 48 83 C4 ? 5F C3
// /// @nth 2/6
// /// @eval fn
// constexpr uintptr_t ResourceLoader = Addresses_ResourceLoader_Addr;
// /// @pattern 48 8B C4 4C 89 40 ? 53 48 83 EC ? 48 8B DA 4C 8D 40 ?
// /// @nth 0/2
// constexpr uintptr_t ResourceLoader_FindTokenFast = Addresses_ResourceLoader_FindTokenFast_Addr;
// /// @pattern 48 89 5C 24 ? 55 48 8B EC 48 83 EC ? 83 4D E8 ? 33 C0
// /// @nth 0/1
// constexpr uintptr_t ResourceLoader_LoadAsync = Addresses_ResourceLoader_LoadAsync_Addr;
// #pragma endregion

// #pragma region ResourceReference
// /// @pattern 40 53 48 83 EC ? 48 8D 59 ? 4C 8B C1 48 8B 0B
// /// @nth 0/1
// constexpr uintptr_t ResourceReference_Load = Addresses_ResourceReference_Load_Addr;
// /// @pattern 40 53 48 83 EC ? 48 8B D9 E8 ? ? ? ? 48 8B 43 ? 48 85 C0
// /// @nth 0/2
// constexpr uintptr_t ResourceReference_Fetch = Addresses_ResourceReference_Fetch_Addr;
// /// @pattern 48 83 EC ? 48 8B 41 ? 48 83 61 ? ? 48 89 44 24 ? 48 8B 01 48 83 21 ?
// /// @nth 5/27
// constexpr uintptr_t ResourceReference_Reset = Addresses_ResourceReference_Reset_Addr;
// #pragma endregion

// #pragma region ResourceToken
// /// @pattern 48 89 5C 24 ? 57 48 83 EC ? 48 8B D9 E8 ? ? ? ? 84 C0 74 36
// /// @nth 0/1
// constexpr uintptr_t ResourceToken_dtor = Addresses_ResourceToken_dtor_Addr;
// /// @pattern 40 53 48 83  EC 50 48 8B D9 E8 ? ? ? ? 84 C0 74 0A 48 8D 43 28
// /// @nth 0/1
// constexpr uintptr_t ResourceToken_Fetch = Addresses_ResourceToken_Fetch_Addr;
// /// @pattern 48 8B C4 48 89 58 ? 48 89 70 ? 48 89 78 ? 55 48 8D 68 ? 48 81 EC ? ? ? ? 48 8B F2 48 8B D9 48 8B D1
// /// @nth 0/2
// constexpr uintptr_t ResourceToken_OnLoaded = Addresses_ResourceToken_OnLoaded_Addr;
// /// @pattern F6 05 ? ? ? ? ? 75 ? 48 83 79 68 FF 75 ? C3
// /// @nth 0/1
// constexpr uintptr_t ResourceToken_CancelUnk38 = Addresses_ResourceToken_CancelUnk38_Addr;
// /// @pattern 40 53 48 83 EC 30 48 8B D9 E8 ? ? ? ? 84 C0 75 ? 48 83 C4 30 5B C3
// /// @nth 27/194
// constexpr uintptr_t ResourceToken_DestructUnk38 = Addresses_ResourceToken_DestructUnk38_Addr;
// #pragma endregion

// #pragma region TTypedClass
// /// @pattern 48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 54 41 56
// /// @nth 27/876
// constexpr uintptr_t TTypedClass_IsEqual = Addresses_TTypedClass_IsEqual_Addr;
// #pragma endregion

// #pragma region TweakDB
// /// @pattern 48 83 EC ? 48 8B 05 ? ? ? ? 48 85 C0 74 0C
// /// @nth 0/1
// constexpr uintptr_t TweakDB_Get = Addresses_TweakDB_Get_Addr;
// /// @pattern 48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 8B C2
// /// @nth 0/6
// constexpr uintptr_t TweakDB_CreateRecord = Addresses_TweakDB_CreateRecord_Addr;
// #pragma endregion

// #pragma region UpdateRegistrar
// /// @pattern 48 8B C4 48 89 58 08 48 89 70 10 48 89 78 18 55 41 56 41 57 48 8D 68 B1 48 81 EC D0 00 00 00 48 8B 7D 77 49 8B D9
// /// @nth 0/1
// constexpr uintptr_t UpdateRegistrar_RegisterGroupUpdate = Addresses_UpdateRegistrar_RegisterGroupUpdate_Addr; 
// /// @pattern 48 8B C4 48 89 58 08 48 89 70 10 48 89 78 18 55 41 56 41 57 48 8D 68 B9 48 81 EC D0 00 00 00 48 8B 7D 77 49 8B D9
// /// @nth 0/1
// constexpr uintptr_t UpdateRegistrar_RegisterBucketUpdate = Addresses_UpdateRegistrar_RegisterBucketUpdate_Addr;
// #pragma endregion

// } // namespace RED4ext::Addresses
// // clang-format on

