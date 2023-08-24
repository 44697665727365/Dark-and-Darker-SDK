#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct AudioPlatformConfiguration.PlatformRuntimeAudioCompressionOverrides
struct FPlatformRuntimeAudioCompressionOverrides
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bOverrideCompressionTimes : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float DurationThreshold;  // 0x4 (0x4)
	int32_t MaxNumRandomBranches;  // 0x8 (0x8)
	int32_t SoundCueQualityIndex;  // 0xC (0xC)


}; 
 
 