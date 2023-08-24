#pragma once 
#include <DLSSBlueprint_Structs.h>
 
 
 
// Class DLSSBlueprint.DLSSLibrary
// Size: 0x28(Inherited: 0x28)
struct UDLSSLibrary : UBlueprintFunctionLibrary
{


	void SetDLSSSharpness(float Sharpness); // Function DLSSBlueprint.DLSSLibrary.SetDLSSSharpness
	void SetDLSSMode(struct UObject* WorldContextObject, uint8_t DLSSMode); // Function DLSSBlueprint.DLSSLibrary.SetDLSSMode
	uint8_t QueryDLSSSupport(); // Function DLSSBlueprint.DLSSLibrary.QueryDLSSSupport
	bool IsDLSSSupported(); // Function DLSSBlueprint.DLSSLibrary.IsDLSSSupported
	bool IsDLSSModeSupported(uint8_t DLSSMode); // Function DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported
	bool IsDLSSEnabled(); // Function DLSSBlueprint.DLSSLibrary.IsDLSSEnabled
	bool IsDLAAEnabled(); // Function DLSSBlueprint.DLSSLibrary.IsDLAAEnabled
	struct TArray<uint8_t> GetSupportedDLSSModes(); // Function DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes
	float GetDLSSSharpness(); // Function DLSSBlueprint.DLSSLibrary.GetDLSSSharpness
	void GetDLSSScreenPercentageRange(float& MinScreenPercentage, float& MaxScreenPercentage); // Function DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange
	void GetDLSSModeInformation(uint8_t DLSSMode, struct FVector2D ScreenResolution, bool& bIsSupported, float& OptimalScreenPercentage, bool& bIsFixedScreenPercentage, float& MinScreenPercentage, float& MaxScreenPercentage, float& OptimalSharpness); // Function DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation
	uint8_t GetDLSSMode(); // Function DLSSBlueprint.DLSSLibrary.GetDLSSMode
	void GetDLSSMinimumDriverVersion(int32_t& MinDriverVersionMajor, int32_t& MinDriverVersionMinor); // Function DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion
	uint8_t GetDefaultDLSSMode(); // Function DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode
	void EnableDLSS(bool bEnabled); // Function DLSSBlueprint.DLSSLibrary.EnableDLSS
	void EnableDLAA(bool bEnabled); // Function DLSSBlueprint.DLSSLibrary.EnableDLAA
}; 
 
 


