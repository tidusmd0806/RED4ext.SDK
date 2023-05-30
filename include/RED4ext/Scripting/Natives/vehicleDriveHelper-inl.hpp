#pragma once

//#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Scripting/Natives/vehicleDriveHelper.hpp"
//#endif

//RED4ext::TTypedClass<RED4ext::vehicle::DriveHelper> helperCls("vehicleDriveHelper");

//RED4EXT_INLINE RED4ext::CClass *RED4ext::vehicle::DriveHelper::GetNativeType() { return &helperCls; }

RED4EXT_INLINE RED4ext::CClass * RED4ext::vehicle::DriveHelper::GetNativeType() {
  RED4ext::RelocFunc<RED4ext::CClass* (*)()> func(RED4ext::vehicle::DriveHelper_GetNativeType);
  return func();
}

RED4EXT_INLINE RED4ext::vehicle::DriveHelper::~DriveHelper() {
  RED4ext::RelocFunc<uintptr_t (*)(DriveHelper*)> func(RED4ext::vehicle::DriveHelper_dtor);
  return func(this);
}

RED4EXT_INLINE void RED4ext::vehicle::DriveHelper::sub_18() {}