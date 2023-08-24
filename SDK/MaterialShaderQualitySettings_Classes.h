#pragma once 
#include <MaterialShaderQualitySettings_Structs.h>
 
 
 
// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
// Size: 0x58(Inherited: 0x28)
struct UShaderPlatformQualitySettings : UObject
{
	struct FMaterialQualityOverrides QualityOverrides[4];  // 0x28 (0x28)
	char pad_72[16];  // 0x48 (0x48)


}; 
 
 


// Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
// Size: 0x78(Inherited: 0x28)
struct UMaterialShaderQualitySettings : UObject
{
	struct TMap<struct FName, struct UShaderPlatformQualitySettings*> ForwardSettingMap;  // 0x28 (0x28)


}; 
 
 


