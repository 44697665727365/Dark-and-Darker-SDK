#pragma once 
#include <FSR2TemporalUpscaling_Structs.h>
 
 
 
// Class FSR2TemporalUpscaling.FSR2Settings
// Size: 0x90(Inherited: 0x38)
struct UFSR2Settings : UDeveloperSettings
{
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bEnabled : 1;  // 0x38 (0x38)
	char pad_57_1 : 7;  // 0x39 (0x39)
	bool AutoExposure : 1;  // 0x39 (0x39)
	char pad_58_1 : 7;  // 0x3A (0x3A)
	bool EnabledInEditorViewport : 1;  // 0x3A (0x3A)
	char pad_59_1 : 7;  // 0x3B (0x3B)
	bool UseSSRExperimentalDenoiser : 1;  // 0x3B (0x3B)
	char pad_60_1 : 7;  // 0x3C (0x3C)
	bool UseNativeDX12 : 1;  // 0x3C (0x3C)
	char pad_61_1 : 7;  // 0x3D (0x3D)
	bool UseNativeVulkan : 1;  // 0x3D (0x3D)
	char pad_62[2];  // 0x3E (0x3E)
	uint8_t QualityMode;  // 0x40 (0x40)
	uint8_t HistoryFormat;  // 0x44 (0x44)
	uint8_t DeDither;  // 0x48 (0x48)
	float Sharpness;  // 0x4C (0x4C)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool AdjustMipBias : 1;  // 0x50 (0x50)
	char pad_81_1 : 7;  // 0x51 (0x51)
	bool ReactiveMask : 1;  // 0x51 (0x51)
	char pad_82_1 : 7;  // 0x52 (0x52)
	bool ForceVertexDeformationOutputsVelocity : 1;  // 0x52 (0x52)
	char pad_83[1];  // 0x53 (0x53)
	uint8_t ForceLandscapeHISMMobility;  // 0x54 (0x54)
	float ReflectionScale;  // 0x58 (0x58)
	float ReflectionLuminanceBias;  // 0x5C (0x5C)
	float RoughnessScale;  // 0x60 (0x60)
	float RoughnessBias;  // 0x64 (0x64)
	float RoughnessMaxDistance;  // 0x68 (0x68)
	char pad_108_1 : 7;  // 0x6C (0x6C)
	bool ReactiveMaskRoughnessForceMaxDistance : 1;  // 0x6C (0x6C)
	char pad_109[3];  // 0x6D (0x6D)
	float TranslucencyBias;  // 0x70 (0x70)
	float TranslucencyLuminanceBias;  // 0x74 (0x74)
	float TranslucencyMaxDistance;  // 0x78 (0x78)
	float PreDOFTranslucencyScale;  // 0x7C (0x7C)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool PreDOFTranslucencyMax : 1;  // 0x80 (0x80)
	enum class EMaterialShadingModel ReactiveShadingModelID;  // 0x81 (0x81)
	char pad_130[2];  // 0x82 (0x82)
	float ForceReactiveMaterialValue;  // 0x84 (0x84)
	float ReactiveHistoryTranslucencyBias;  // 0x88 (0x88)
	float ReactiveHistoryTranslucencyLumaBias;  // 0x8C (0x8C)


}; 
 
 


