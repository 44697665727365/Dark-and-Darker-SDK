#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct WwiseSimpleExternalSource.WwiseExternalSourceCookieDefaultMedia
// Size: 0x38(Inherited: 0x8)
struct FWwiseExternalSourceCookieDefaultMedia : FTableRowBase
{
	int32_t ExternalSourceCookie;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FString ExternalSourceName;  // 0x10 (0x10)
	int32_t MediaInfoId;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)
	struct FString MediaName;  // 0x28 (0x28)


}; 
 
 // ScriptStruct WwiseSimpleExternalSource.WwiseExternalSourceMediaInfo
// Size: 0x28(Inherited: 0x8)
struct FWwiseExternalSourceMediaInfo : FTableRowBase
{
	int32_t ExternalSourceMediaInfoId;  // 0x8 (0x8)
	struct FName MediaName;  // 0xC (0xC)
	int32_t CodecID;  // 0x14 (0x14)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bIsStreamed : 1;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool bUseDeviceMemory : 1;  // 0x19 (0x19)
	char pad_26[2];  // 0x1A (0x1A)
	int32_t MemoryAlignment;  // 0x1C (0x1C)
	int32_t PrefetchSize;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 