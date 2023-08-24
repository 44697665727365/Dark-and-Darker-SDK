#pragma once 
#include <GameplayCameras_Structs.h>
 
 
 
// Class GameplayCameras.LegacyCameraShake
// Size: 0x210(Inherited: 0xF0)
struct ULegacyCameraShake : UCameraShakeBase
{
	float OscillationDuration;  // 0xE8 (0xE8)
	float OscillationBlendInTime;  // 0xEC (0xEC)
	float OscillationBlendOutTime;  // 0xF0 (0xF0)
	struct FROscillator RotOscillation;  // 0xF4 (0xF4)
	struct FVOscillator LocOscillation;  // 0x118 (0x118)
	struct FFOscillator FOVOscillation;  // 0x13C (0x13C)
	float AnimPlayRate;  // 0x148 (0x148)
	float AnimScale;  // 0x14C (0x14C)
	float AnimBlendInTime;  // 0x150 (0x150)
	float AnimBlendOutTime;  // 0x154 (0x154)
	float RandomAnimSegmentDuration;  // 0x158 (0x158)
	struct UCameraAnimationSequence* AnimSequence;  // 0x160 (0x160)
	char bRandomAnimSegment : 1;  // 0x168 (0x168)
	float OscillatorTimeRemaining;  // 0x16C (0x16C)
	char pad_368_1 : 7;  // 0x170 (0x170)
	char pad_369[112];  // 0x171 (0x171)
	struct USequenceCameraShakePattern* SequenceShakePattern;  // 0x1E0 (0x1E0)
	char pad_488[40];  // 0x1E8 (0x1E8)


	struct ULegacyCameraShake* StartLegacyCameraShakeFromSource(struct APlayerCameraManager* PlayerCameraManager, ULegacyCameraShake* ShakeClass, struct UCameraShakeSourceComponent* SourceComponent, float Scale, uint8_t PlaySpace, struct FRotator UserPlaySpaceRot); // Function GameplayCameras.LegacyCameraShake.StartLegacyCameraShakeFromSource
	struct ULegacyCameraShake* StartLegacyCameraShake(struct APlayerCameraManager* PlayerCameraManager, ULegacyCameraShake* ShakeClass, float Scale, uint8_t PlaySpace, struct FRotator UserPlaySpaceRot); // Function GameplayCameras.LegacyCameraShake.StartLegacyCameraShake
	void ReceiveStopShake(bool bImmediately); // Function GameplayCameras.LegacyCameraShake.ReceiveStopShake
	void ReceivePlayShake(float Scale); // Function GameplayCameras.LegacyCameraShake.ReceivePlayShake
	bool ReceiveIsFinished(); // Function GameplayCameras.LegacyCameraShake.ReceiveIsFinished
	void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, struct FMinimalViewInfo& POV, struct FMinimalViewInfo& ModifiedPOV); // Function GameplayCameras.LegacyCameraShake.BlueprintUpdateCameraShake
}; 
 
 


// Class GameplayCameras.DefaultCameraShakeBase
// Size: 0xF0(Inherited: 0xF0)
struct UDefaultCameraShakeBase : UCameraShakeBase
{


}; 
 
 


// Class GameplayCameras.LegacyCameraShakeFunctionLibrary
// Size: 0x28(Inherited: 0x28)
struct ULegacyCameraShakeFunctionLibrary : UBlueprintFunctionLibrary
{


	struct ULegacyCameraShake* Conv_LegacyCameraShake(struct UCameraShakeBase* CameraShake); // Function GameplayCameras.LegacyCameraShakeFunctionLibrary.Conv_LegacyCameraShake
}; 
 
 


// Class GameplayCameras.LegacyCameraShakePattern
// Size: 0x28(Inherited: 0x28)
struct ULegacyCameraShakePattern : UCameraShakePattern
{


}; 
 
 


// Class GameplayCameras.CameraAnimationCameraModifier
// Size: 0x60(Inherited: 0x48)
struct UCameraAnimationCameraModifier : UCameraModifier
{
	struct TArray<struct FActiveCameraAnimationInfo> ActiveAnimations;  // 0x48 (0x48)
	uint16_t NextInstanceSerialNumber;  // 0x58 (0x58)
	char pad_90[6];  // 0x5A (0x5A)


	void StopCameraAnimation(struct FCameraAnimationHandle& Handle, bool bImmediate); // Function GameplayCameras.CameraAnimationCameraModifier.StopCameraAnimation
	void StopAllCameraAnimationsOf(struct UCameraAnimationSequence* Sequence, bool bImmediate); // Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimationsOf
	void StopAllCameraAnimations(bool bImmediate); // Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimations
	struct FCameraAnimationHandle PlayCameraAnimation(struct UCameraAnimationSequence* Sequence, struct FCameraAnimationParams Params); // Function GameplayCameras.CameraAnimationCameraModifier.PlayCameraAnimation
	bool IsCameraAnimationActive(struct FCameraAnimationHandle& Handle); // Function GameplayCameras.CameraAnimationCameraModifier.IsCameraAnimationActive
	struct UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromPlayerController(struct APlayerController* PlayerController); // Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromPlayerController
	struct UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromID(struct UObject* WorldContextObject, int32_t ControllerId); // Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromID
	struct UCameraAnimationCameraModifier* GetCameraAnimationCameraModifier(struct UObject* WorldContextObject, int32_t PlayerIndex); // Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifier
}; 
 
 


// Class GameplayCameras.CompositeCameraShakePattern
// Size: 0x48(Inherited: 0x28)
struct UCompositeCameraShakePattern : UCameraShakePattern
{
	struct TArray<struct UCameraShakePattern*> ChildPatterns;  // 0x28 (0x28)
	char pad_56[16];  // 0x38 (0x38)


}; 
 
 


// Class GameplayCameras.GameplayCamerasFunctionLibrary
// Size: 0x28(Inherited: 0x28)
struct UGameplayCamerasFunctionLibrary : UBlueprintFunctionLibrary
{


	uint8_t Conv_CameraShakePlaySpace(uint8_t CameraAnimationPlaySpace); // Function GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraShakePlaySpace
	uint8_t Conv_CameraAnimationPlaySpace(uint8_t CameraShakePlaySpace); // Function GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraAnimationPlaySpace
	struct UCameraAnimationCameraModifier* Conv_CameraAnimationCameraModifier(struct APlayerCameraManager* PlayerCameraManager); // Function GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraAnimationCameraModifier
}; 
 
 


// Class GameplayCameras.GameplayCamerasSubsystem
// Size: 0x30(Inherited: 0x30)
struct UGameplayCamerasSubsystem : UWorldSubsystem
{


	void StopCameraAnimation(struct APlayerController* PlayerController, struct FCameraAnimationHandle& Handle, bool bImmediate); // Function GameplayCameras.GameplayCamerasSubsystem.StopCameraAnimation
	void StopAllCameraAnimationsOf(struct APlayerController* PlayerController, struct UCameraAnimationSequence* Sequence, bool bImmediate); // Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimationsOf
	void StopAllCameraAnimations(struct APlayerController* PlayerController, bool bImmediate); // Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimations
	struct FCameraAnimationHandle PlayCameraAnimation(struct APlayerController* PlayerController, struct UCameraAnimationSequence* Sequence, struct FCameraAnimationParams Params); // Function GameplayCameras.GameplayCamerasSubsystem.PlayCameraAnimation
	bool IsCameraAnimationActive(struct APlayerController* PlayerController, struct FCameraAnimationHandle& Handle); // Function GameplayCameras.GameplayCamerasSubsystem.IsCameraAnimationActive
}; 
 
 


// Class GameplayCameras.SimpleCameraShakePattern
// Size: 0x38(Inherited: 0x28)
struct USimpleCameraShakePattern : UCameraShakePattern
{
	float Duration;  // 0x28 (0x28)
	float BlendInTime;  // 0x2C (0x2C)
	float BlendOutTime;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 


// Class GameplayCameras.PerlinNoiseCameraShakePattern
// Size: 0xB8(Inherited: 0x38)
struct UPerlinNoiseCameraShakePattern : USimpleCameraShakePattern
{
	float LocationAmplitudeMultiplier;  // 0x38 (0x38)
	float LocationFrequencyMultiplier;  // 0x3C (0x3C)
	struct FPerlinNoiseShaker X;  // 0x40 (0x40)
	struct FPerlinNoiseShaker Y;  // 0x48 (0x48)
	struct FPerlinNoiseShaker Z;  // 0x50 (0x50)
	float RotationAmplitudeMultiplier;  // 0x58 (0x58)
	float RotationFrequencyMultiplier;  // 0x5C (0x5C)
	struct FPerlinNoiseShaker Pitch;  // 0x60 (0x60)
	struct FPerlinNoiseShaker Yaw;  // 0x68 (0x68)
	struct FPerlinNoiseShaker Roll;  // 0x70 (0x70)
	struct FPerlinNoiseShaker FOV;  // 0x78 (0x78)
	char pad_128[56];  // 0x80 (0x80)


}; 
 
 


// Class GameplayCameras.TestCameraShake
// Size: 0xF0(Inherited: 0xF0)
struct UTestCameraShake : UCameraShakeBase
{


}; 
 
 


// Class GameplayCameras.ConstantCameraShakePattern
// Size: 0x68(Inherited: 0x38)
struct UConstantCameraShakePattern : USimpleCameraShakePattern
{
	struct FVector LocationOffset;  // 0x38 (0x38)
	struct FRotator RotationOffset;  // 0x50 (0x50)


}; 
 
 


// Class GameplayCameras.WaveOscillatorCameraShakePattern
// Size: 0xD8(Inherited: 0x38)
struct UWaveOscillatorCameraShakePattern : USimpleCameraShakePattern
{
	float LocationAmplitudeMultiplier;  // 0x38 (0x38)
	float LocationFrequencyMultiplier;  // 0x3C (0x3C)
	struct FWaveOscillator X;  // 0x40 (0x40)
	struct FWaveOscillator Y;  // 0x4C (0x4C)
	struct FWaveOscillator Z;  // 0x58 (0x58)
	float RotationAmplitudeMultiplier;  // 0x64 (0x64)
	float RotationFrequencyMultiplier;  // 0x68 (0x68)
	struct FWaveOscillator Pitch;  // 0x6C (0x6C)
	struct FWaveOscillator Yaw;  // 0x78 (0x78)
	struct FWaveOscillator Roll;  // 0x84 (0x84)
	struct FWaveOscillator FOV;  // 0x90 (0x90)
	char pad_156[60];  // 0x9C (0x9C)


}; 
 
 


