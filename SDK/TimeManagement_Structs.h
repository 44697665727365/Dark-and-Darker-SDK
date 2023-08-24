#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
struct FConv_QualifiedFrameTimeToSeconds
{
	struct FQualifiedFrameTime InFrameTime;  // 0x0 (0x0)
	float ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger
struct FMultiply_FrameNumberInteger
{
	struct FFrameNumber A;  // 0x0 (0x0)
	int32_t B;  // 0x4 (0x4)
	struct FFrameNumber ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct TimeManagement.TimedDataChannelSampleTime
struct FTimedDataChannelSampleTime
{
	char pad_0[24];  // 0x0 (0x0)


}; 
 
 // ScriptStruct TimeManagement.TimedDataInputEvaluationData
struct FTimedDataInputEvaluationData
{
	float DistanceToNewestSampleSeconds;  // 0x0 (0x0)
	float DistanceToOldestSampleSeconds;  // 0x4 (0x4)


}; 
 
 // Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber
struct FAdd_FrameNumberFrameNumber
{
	struct FFrameNumber A;  // 0x0 (0x0)
	struct FFrameNumber B;  // 0x4 (0x4)
	struct FFrameNumber ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
struct FConv_FrameRateToSeconds
{
	struct FFrameRate InFrameRate;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger
struct FAdd_FrameNumberInteger
{
	struct FFrameNumber A;  // 0x0 (0x0)
	int32_t B;  // 0x4 (0x4)
	struct FFrameNumber ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate
struct FIsValid_Framerate
{
	struct FFrameRate InFrameRate;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger
struct FConv_FrameNumberToInteger
{
	struct FFrameNumber InFrameNumber;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x4 (0x4)


}; 
 
 // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString
struct FConv_TimecodeToString
{
	struct FTimecode InTimecode;  // 0x0 (0x0)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bForceSignDisplay : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	struct FString ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger
struct FDivide_FrameNumberInteger
{
	struct FFrameNumber A;  // 0x0 (0x0)
	int32_t B;  // 0x4 (0x4)
	struct FFrameNumber ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode
struct FGetTimecode
{
	struct FTimecode ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber
struct FSubtract_FrameNumberFrameNumber
{
	struct FFrameNumber A;  // 0x0 (0x0)
	struct FFrameNumber B;  // 0x4 (0x4)
	struct FFrameNumber ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate
struct FGetTimecodeFrameRate
{
	struct FFrameRate ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf
struct FIsValid_MultipleOf
{
	struct FFrameRate InFrameRate;  // 0x0 (0x0)
	struct FFrameRate OtherFramerate;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)


}; 
 
 // Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
struct FMultiply_SecondsFrameRate
{
	float TimeInSeconds;  // 0x0 (0x0)
	struct FFrameRate FrameRate;  // 0x4 (0x4)
	struct FFrameTime ReturnValue;  // 0xC (0xC)


}; 
 
 // Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate
struct FSnapFrameTimeToRate
{
	struct FFrameTime SourceTime;  // 0x0 (0x0)
	struct FFrameRate SourceRate;  // 0x8 (0x8)
	struct FFrameRate SnapToRate;  // 0x10 (0x10)
	struct FFrameTime ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger
struct FSubtract_FrameNumberInteger
{
	struct FFrameNumber A;  // 0x0 (0x0)
	int32_t B;  // 0x4 (0x4)
	struct FFrameNumber ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime
struct FTransformTime
{
	struct FFrameTime SourceTime;  // 0x0 (0x0)
	struct FFrameRate SourceRate;  // 0x8 (0x8)
	struct FFrameRate DestinationRate;  // 0x10 (0x10)
	struct FFrameTime ReturnValue;  // 0x18 (0x18)


}; 
 
 