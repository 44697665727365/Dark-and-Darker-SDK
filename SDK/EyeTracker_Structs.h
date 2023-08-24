#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct EyeTracker.EyeTrackerStereoGazeData
struct FEyeTrackerStereoGazeData
{
	struct FVector LeftEyeOrigin;  // 0x0 (0x0)
	struct FVector LeftEyeDirection;  // 0x18 (0x18)
	struct FVector RightEyeOrigin;  // 0x30 (0x30)
	struct FVector RightEyeDirection;  // 0x48 (0x48)
	struct FVector FixationPoint;  // 0x60 (0x60)
	float ConfidenceValue;  // 0x78 (0x78)
	char pad_124[4];  // 0x7C (0x7C)


}; 
 
 // ScriptStruct EyeTracker.EyeTrackerGazeData
struct FEyeTrackerGazeData
{
	struct FVector GazeOrigin;  // 0x0 (0x0)
	struct FVector GazeDirection;  // 0x18 (0x18)
	struct FVector FixationPoint;  // 0x30 (0x30)
	float ConfidenceValue;  // 0x48 (0x48)
	char pad_76_1 : 7;  // 0x4C (0x4C)
	bool bIsLeftEyeBlink : 1;  // 0x4C (0x4C)
	char pad_77_1 : 7;  // 0x4D (0x4D)
	bool bIsRightEyeBlink : 1;  // 0x4D (0x4D)
	char pad_78[2];  // 0x4E (0x4E)
	float LeftPupilDiameter;  // 0x50 (0x50)
	float RightPupilDiameter;  // 0x54 (0x54)


}; 
 
 // Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData
struct FGetGazeData
{
	struct FEyeTrackerGazeData OutGazeData;  // 0x0 (0x0)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool ReturnValue : 1;  // 0x58 (0x58)
	char pad_89[7];  // 0x59 (0x59)


}; 
 
 // Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData
struct FGetStereoGazeData
{
	struct FEyeTrackerStereoGazeData OutGazeData;  // 0x0 (0x0)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool ReturnValue : 1;  // 0x80 (0x80)
	char pad_129[7];  // 0x81 (0x81)


}; 
 
 // Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected
struct FIsEyeTrackerConnected
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer
struct FSetEyeTrackedPlayer
{
	struct APlayerController* PlayerController;  // 0x0 (0x0)


}; 
 
 // Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable
struct FIsStereoGazeDataAvailable
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 