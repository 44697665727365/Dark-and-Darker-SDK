#pragma once 
#include <DLSS_Structs.h>
 
 
 
// Class DLSS.DLSSSettings
// Size: 0x68(Inherited: 0x28)
struct UDLSSSettings : UObject
{
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bEnableDLSSD3D12 : 1;  // 0x28 (0x28)
	char pad_41_1 : 7;  // 0x29 (0x29)
	bool bEnableDLSSD3D11 : 1;  // 0x29 (0x29)
	char pad_42_1 : 7;  // 0x2A (0x2A)
	bool bEnableDLSSVulkan : 1;  // 0x2A (0x2A)
	char pad_43_1 : 7;  // 0x2B (0x2B)
	bool bEnableDLSSInEditorViewports : 1;  // 0x2B (0x2B)
	char pad_44_1 : 7;  // 0x2C (0x2C)
	bool bEnableDLSSInPlayInEditorViewports : 1;  // 0x2C (0x2C)
	char pad_45_1 : 7;  // 0x2D (0x2D)
	bool bShowDLSSSDebugOnScreenMessages : 1;  // 0x2D (0x2D)
	char pad_46[2];  // 0x2E (0x2E)
	struct FString GenericDLSSBinaryPath;  // 0x30 (0x30)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool bGenericDLSSBinaryExists : 1;  // 0x40 (0x40)
	char pad_65[3];  // 0x41 (0x41)
	uint32_t NVIDIANGXApplicationId;  // 0x44 (0x44)
	struct FString CustomDLSSBinaryPath;  // 0x48 (0x48)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool bCustomDLSSBinaryExists : 1;  // 0x58 (0x58)
	char pad_89_1 : 7;  // 0x59 (0x59)
	bool bAllowOTAUpdate : 1;  // 0x59 (0x59)
	char pad_90_1 : 7;  // 0x5A (0x5A)
	bool bShowDLSSIncompatiblePluginsToolsWarnings : 1;  // 0x5A (0x5A)
	uint8_t DLAAPreset;  // 0x5B (0x5B)
	char pad_92[1];  // 0x5C (0x5C)
	uint8_t DLSSQualityPreset;  // 0x5D (0x5D)
	uint8_t DLSSBalancedPreset;  // 0x5E (0x5E)
	uint8_t DLSSPerformancePreset;  // 0x5F (0x5F)
	uint8_t DLSSUltraPerformancePreset;  // 0x60 (0x60)
	char pad_97[7];  // 0x61 (0x61)


}; 
 
 


// Class DLSS.DLSSOverrideSettings
// Size: 0x30(Inherited: 0x28)
struct UDLSSOverrideSettings : UObject
{
	uint8_t EnableDLSSInEditorViewportsOverride;  // 0x28 (0x28)
	uint8_t EnableDLSSInPlayInEditorViewportsOverride;  // 0x29 (0x29)
	char pad_42_1 : 7;  // 0x2A (0x2A)
	bool bShowDLSSIncompatiblePluginsToolsWarnings : 1;  // 0x2A (0x2A)
	uint8_t ShowDLSSSDebugOnScreenMessages;  // 0x2B (0x2B)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 


