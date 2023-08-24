#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct PropertyPath.CachedPropertyPath
struct FCachedPropertyPath
{
	struct TArray<struct FPropertyPathSegment> Segments;  // 0x0 (0x0)
	char pad_16[8];  // 0x10 (0x10)
	struct UFunction* CachedFunction;  // 0x18 (0x18)
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // ScriptStruct PropertyPath.PropertyPathSegment
struct FPropertyPathSegment
{
	struct FName Name;  // 0x0 (0x0)
	int32_t ArrayIndex;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct UStruct* Struct;  // 0x10 (0x10)
	char pad_24[16];  // 0x18 (0x18)


}; 
 
 