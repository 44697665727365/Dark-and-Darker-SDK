#pragma once 
#include <ImgMediaFactory_Structs.h>
 
 
 
// Class ImgMediaFactory.ImgMediaSettings
// Size: 0x68(Inherited: 0x28)
struct UImgMediaSettings : UObject
{
	struct FFrameRate DefaultFrameRate;  // [x28 ([x28)
	float CacheBehindPercentage;  // 0x30 (0x30)
	float CacheSizeGB;  // 0x34 (0x34)
	int32_t CacheThreads;  // 0x38 (0x38)
	int32_t CacheThreadStackSizeKB;  // 0x3C (0x3C)
	float GlobalCacheSizeGB;  // 0x40 (0x40)
	char pad_68_1 : 7;  // 0x44 (0x44)
	bool UseGlobalCache : 1;  // 0x44 (0x44)
	char pad_69[3];  // 0x45 (0x45)
	uint32_t ExrDecoderThreads;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)
	struct FString DefaultProxy;  // 0x50 (0x50)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool UseDefaultProxy : 1;  // 0x60 (0x60)
	char pad_97[7];  // 0x61 (0x61)


}; 
 
 


