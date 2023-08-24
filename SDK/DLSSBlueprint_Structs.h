#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function DLSSBlueprint.DLSSLibrary.EnableDLSS
struct FEnableDLSS
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bEnabled : 1;  // 0x0 (0x0)


}; 
 
 // Function DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation
struct FGetDLSSModeInformation
{
	uint8_t DLSSMode;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FVector2D ScreenResolution;  // 0x8 (0x8)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bIsSupported : 1;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	float OptimalScreenPercentage;  // 0x1C (0x1C)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool bIsFixedScreenPercentage : 1;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)
	float MinScreenPercentage;  // 0x24 (0x24)
	float MaxScreenPercentage;  // 0x28 (0x28)
	float OptimalSharpness;  // 0x2C (0x2C)


}; 
 
 // Function DLSSBlueprint.DLSSLibrary.EnableDLAA
struct FEnableDLAA
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bEnabled : 1;  // 0x0 (0x0)


}; 
 
 // Function DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode
struct FGetDefaultDLSSMode
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion
struct FGetDLSSMinimumDriverVersion
{
	int32_t MinDriverVersionMajor;  // 0x0 (0x0)
	int32_t MinDriverVersionMinor;  // 0x4 (0x4)


}; 
 
 // Function DLSSBlueprint.DLSSLibrary.GetDLSSMode
struct FGetDLSSMode
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange
struct FGetDLSSScreenPercentageRange
{
	float MinScreenPercentage;  // 0x0 (0x0)
	float MaxScreenPercentage;  // 0x4 (0x4)


}; 
 
 // Function DLSSBlueprint.DLSSLibrary.GetDLSSSharpness
struct FGetDLSSSharpness
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes
struct FGetSupportedDLSSModes
{
	struct TArray<uint8_t> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DLSSBlueprint.DLSSLibrary.IsDLAAEnabled
struct FIsDLAAEnabled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function DLSSBlueprint.DLSSLibrary.IsDLSSEnabled
struct FIsDLSSEnabled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported
struct FIsDLSSModeSupported
{
	uint8_t DLSSMode;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool ReturnValue : 1;  // 0x1 (0x1)


}; 
 
 // Function DLSSBlueprint.DLSSLibrary.IsDLSSSupported
struct FIsDLSSSupported
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function DLSSBlueprint.DLSSLibrary.SetDLSSSharpness
struct FSetDLSSSharpness
{
	float Sharpness;  // 0x0 (0x0)


}; 
 
 // Function DLSSBlueprint.DLSSLibrary.QueryDLSSSupport
struct FQueryDLSSSupport
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DLSSBlueprint.DLSSLibrary.SetDLSSMode
struct FSetDLSSMode
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	uint8_t DLSSMode;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 