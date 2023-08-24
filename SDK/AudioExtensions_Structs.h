#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function AudioExtensions.AudioParameterControllerInterface.SetIntArrayParameter
struct FSetIntArrayParameter
{
	struct FName InName;  // 0x0 (0x0)
	struct TArray<int32_t> InValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct AudioExtensions.AudioParameter
struct FAudioParameter
{
	struct FName ParamName;  // 0x0 (0x0)
	float FloatParam;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool BoolParam : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	int32_t IntParam;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct UObject* ObjectParam;  // 0x18 (0x18)
	struct FString StringParam;  // 0x20 (0x20)
	struct TArray<float> ArrayFloatParam;  // 0x30 (0x30)
	struct TArray<bool> ArrayBoolParam;  // 0x40 (0x40)
	struct TArray<int32_t> ArrayIntParam;  // 0x50 (0x50)
	struct TArray<struct UObject*> ArrayObjectParam;  // 0x60 (0x60)
	struct TArray<struct FString> ArrayStringParam;  // 0x70 (0x70)
	uint8_t ParamType;  // 0x80 (0x80)
	char pad_129[3];  // 0x81 (0x81)
	struct FName TypeName;  // 0x84 (0x84)
	char pad_140[20];  // 0x8C (0x8C)


}; 
 
 // Function AudioExtensions.AudioParameterControllerInterface.SetBoolArrayParameter
struct FSetBoolArrayParameter
{
	struct FName InName;  // 0x0 (0x0)
	struct TArray<bool> InValue;  // 0x8 (0x8)


}; 
 
 // Function AudioExtensions.AudioParameterControllerInterface.SetIntParameter
struct FSetIntParameter
{
	struct FName InName;  // 0x0 (0x0)
	int32_t inInt;  // 0x8 (0x8)


}; 
 
 // Function AudioExtensions.AudioParameterControllerInterface.SetFloatArrayParameter
struct FSetFloatArrayParameter
{
	struct FName InName;  // 0x0 (0x0)
	struct TArray<float> InValue;  // 0x8 (0x8)


}; 
 
 // Function AudioExtensions.AudioParameterControllerInterface.SetStringArrayParameter
struct FSetStringArrayParameter
{
	struct FName InName;  // 0x0 (0x0)
	struct TArray<struct FString> InValue;  // 0x8 (0x8)


}; 
 
 // Function AudioExtensions.AudioParameterControllerInterface.SetFloatParameter
struct FSetFloatParameter
{
	struct FName InName;  // 0x0 (0x0)
	float InFloat;  // 0x8 (0x8)


}; 
 
 // Function AudioExtensions.AudioParameterControllerInterface.SetBoolParameter
struct FSetBoolParameter
{
	struct FName InName;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool InBool : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function AudioExtensions.AudioParameterControllerInterface.SetObjectArrayParameter
struct FSetObjectArrayParameter
{
	struct FName InName;  // 0x0 (0x0)
	struct TArray<struct UObject*> InValue;  // 0x8 (0x8)


}; 
 
 // Function AudioExtensions.AudioParameterControllerInterface.SetObjectParameter
struct FSetObjectParameter
{
	struct FName InName;  // 0x0 (0x0)
	struct UObject* InValue;  // 0x8 (0x8)


}; 
 
 // Function AudioExtensions.AudioParameterControllerInterface.SetParameters_Blueprint
struct FSetParameters_Blueprint
{
	struct TArray<struct FAudioParameter> InParameters;  // 0x0 (0x0)


}; 
 
 // Function AudioExtensions.AudioParameterControllerInterface.SetStringParameter
struct FSetStringParameter
{
	struct FName InName;  // 0x0 (0x0)
	struct FString InValue;  // 0x8 (0x8)


}; 
 
 // Function AudioExtensions.AudioParameterControllerInterface.SetTriggerParameter
struct FSetTriggerParameter
{
	struct FName InName;  // 0x0 (0x0)


}; 
 
 