#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function XeSSBlueprint.XeSSBlueprintLibrary.GetDefaultXeSSQualityMode
struct FGetDefaultXeSSQualityMode
{
	struct FIntPoint ScreenResolution;  // 0x0 (0x0)
	uint8_t ReturnValue;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function XeSSBlueprint.XeSSBlueprintLibrary.GetSupportedXeSSQualityModes
struct FGetSupportedXeSSQualityModes
{
	struct TArray<uint8_t> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityMode
struct FGetXeSSQualityMode
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function XeSSBlueprint.XeSSBlueprintLibrary.IsXeSSSupported
struct FIsXeSSSupported
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityModeInformation
struct FGetXeSSQualityModeInformation
{
	uint8_t QualityMode;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float ScreenPercentage;  // 0x4 (0x4)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function XeSSBlueprint.XeSSBlueprintLibrary.SetXeSSQualityMode
struct FSetXeSSQualityMode
{
	uint8_t QualityMode;  // 0x0 (0x0)


}; 
 
 