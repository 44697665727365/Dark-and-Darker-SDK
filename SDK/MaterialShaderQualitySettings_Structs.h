#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
struct FMaterialQualityOverrides
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bDiscardQualityDuringCook : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bEnableOverride : 1;  // 0x1 (0x1)
	char pad_2_1 : 7;  // 0x2 (0x2)
	bool bForceFullyRough : 1;  // 0x2 (0x2)
	char pad_3_1 : 7;  // 0x3 (0x3)
	bool bForceNonMetal : 1;  // 0x3 (0x3)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bForceDisableLMDirectionality : 1;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool bForceDisablePreintegratedGF : 1;  // 0x5 (0x5)
	char pad_6_1 : 7;  // 0x6 (0x6)
	bool bDisableMaterialNormalCalculation : 1;  // 0x6 (0x6)
	uint8_t MobileShadowQuality;  // 0x7 (0x7)


}; 
 
 