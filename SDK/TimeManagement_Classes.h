#pragma once 
#include <TimeManagement_Structs.h>
 
 
 
// Class TimeManagement.FixedFrameRateCustomTimeStep
// Size: 0x28(Inherited: 0x28)
struct UFixedFrameRateCustomTimeStep : UEngineCustomTimeStep
{


}; 
 
 


// Class TimeManagement.GenlockedCustomTimeStep
// Size: 0x30(Inherited: 0x28)
struct UGenlockedCustomTimeStep : UFixedFrameRateCustomTimeStep
{
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bAutoDetectFormat : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 


// Class TimeManagement.GenlockedFixedRateCustomTimeStep
// Size: 0x50(Inherited: 0x30)
struct UGenlockedFixedRateCustomTimeStep : UGenlockedCustomTimeStep
{
	struct FFrameRate FrameRate;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bShouldBlock : 1;  // 0x38 (0x38)
	char pad_57_1 : 7;  // 0x39 (0x39)
	bool bForceSingleFrameDeltaTime : 1;  // 0x39 (0x39)
	char pad_58[22];  // 0x3A (0x3A)


}; 
 
 


// Class TimeManagement.GenlockedTimecodeProvider
// Size: 0x58(Inherited: 0x30)
struct UGenlockedTimecodeProvider : UTimecodeProvider
{
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bUseGenlockToCount : 1;  // 0x30 (0x30)
	char pad_49[39];  // 0x31 (0x31)


}; 
 
 


// Class TimeManagement.TimeManagementBlueprintLibrary
// Size: 0x28(Inherited: 0x28)
struct UTimeManagementBlueprintLibrary : UBlueprintFunctionLibrary
{


	struct FFrameTime TransformTime(struct FFrameTime& SourceTime, struct FFrameRate& SourceRate, struct FFrameRate& DestinationRate); // Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime
	struct FFrameNumber Subtract_FrameNumberInteger(struct FFrameNumber A, int32_t B); // Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger
	struct FFrameNumber Subtract_FrameNumberFrameNumber(struct FFrameNumber A, struct FFrameNumber B); // Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber
	struct FFrameTime SnapFrameTimeToRate(struct FFrameTime& SourceTime, struct FFrameRate& SourceRate, struct FFrameRate& SnapToRate); // Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate
	struct FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds, struct FFrameRate& FrameRate); // Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
	struct FFrameNumber Multiply_FrameNumberInteger(struct FFrameNumber A, int32_t B); // Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger
	bool IsValid_MultipleOf(struct FFrameRate& InFrameRate, struct FFrameRate& OtherFramerate); // Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf
	bool IsValid_Framerate(struct FFrameRate& InFrameRate); // Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate
	struct FFrameRate GetTimecodeFrameRate(); // Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate
	struct FTimecode GetTimecode(); // Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode
	struct FFrameNumber Divide_FrameNumberInteger(struct FFrameNumber A, int32_t B); // Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger
	struct FString Conv_TimecodeToString(struct FTimecode& InTimecode, bool bForceSignDisplay); // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString
	float Conv_QualifiedFrameTimeToSeconds(struct FQualifiedFrameTime& InFrameTime); // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
	float Conv_FrameRateToSeconds(struct FFrameRate& InFrameRate); // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
	int32_t Conv_FrameNumberToInteger(struct FFrameNumber& InFrameNumber); // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger
	struct FFrameNumber Add_FrameNumberInteger(struct FFrameNumber A, int32_t B); // Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger
	struct FFrameNumber Add_FrameNumberFrameNumber(struct FFrameNumber A, struct FFrameNumber B); // Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber
}; 
 
 


// Class TimeManagement.TimeSynchronizationSource
// Size: 0x30(Inherited: 0x28)
struct UTimeSynchronizationSource : UObject
{
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bUseForSynchronization : 1;  // 0x28 (0x28)
	char pad_41[3];  // 0x29 (0x29)
	int32_t FrameOffset;  // 0x2C (0x2C)


}; 
 
 


