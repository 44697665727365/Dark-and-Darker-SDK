#pragma once 
#include <WmfMediaFactory_Structs.h>
 
 
 
// Class WmfMediaFactory.WmfMediaSettings
// Size: 0x30(Inherited: 0x28)
struct UWmfMediaSettings : UObject
{
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool AllowNonStandardCodecs : 1;  // 0x28 (0x28)
	char pad_41_1 : 7;  // 0x29 (0x29)
	bool LowLatency : 1;  // 0x29 (0x29)
	char pad_42_1 : 7;  // 0x2A (0x2A)
	bool NativeAudioOut : 1;  // 0x2A (0x2A)
	char pad_43_1 : 7;  // 0x2B (0x2B)
	bool HardwareAcceleratedVideoDecoding : 1;  // 0x2B (0x2B)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 


