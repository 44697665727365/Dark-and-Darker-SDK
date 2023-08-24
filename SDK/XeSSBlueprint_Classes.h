#pragma once 
#include <XeSSBlueprint_Structs.h>
 
 
 
// Class XeSSBlueprint.XeSSBlueprintLibrary
// Size: 0x28(Inherited: 0x28)
struct UXeSSBlueprintLibrary : UBlueprintFunctionLibrary
{


	void SetXeSSQualityMode(uint8_t QualityMode); // Function XeSSBlueprint.XeSSBlueprintLibrary.SetXeSSQualityMode
	bool IsXeSSSupported(); // Function XeSSBlueprint.XeSSBlueprintLibrary.IsXeSSSupported
	bool GetXeSSQualityModeInformation(uint8_t QualityMode, float& ScreenPercentage); // Function XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityModeInformation
	uint8_t GetXeSSQualityMode(); // Function XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityMode
	struct TArray<uint8_t> GetSupportedXeSSQualityModes(); // Function XeSSBlueprint.XeSSBlueprintLibrary.GetSupportedXeSSQualityModes
	uint8_t GetDefaultXeSSQualityMode(struct FIntPoint ScreenResolution); // Function XeSSBlueprint.XeSSBlueprintLibrary.GetDefaultXeSSQualityMode
}; 
 
 


