#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct GameplayCameras.VOscillator
struct FVOscillator
{
	struct FFOscillator X;  // 0x0 (0x0)
	struct FFOscillator Y;  // 0xC (0xC)
	struct FFOscillator Z;  // 0x18 (0x18)


}; 
 
 // ScriptStruct GameplayCameras.FOscillator
struct FFOscillator
{
	float Amplitude;  // 0x0 (0x0)
	float Frequency;  // 0x4 (0x4)
	enum class EInitialOscillatorOffset InitialOffset;  // 0x8 (0x8)
	uint8_t Waveform;  // 0x9 (0x9)
	char pad_10[2];  // 0xA (0xA)


}; 
 
 // ScriptStruct GameplayCameras.PerlinNoiseShaker
struct FPerlinNoiseShaker
{
	float Amplitude;  // 0x0 (0x0)
	float Frequency;  // 0x4 (0x4)


}; 
 
 // ScriptStruct GameplayCameras.ROscillator
struct FROscillator
{
	struct FFOscillator Pitch;  // 0x0 (0x0)
	struct FFOscillator Yaw;  // 0xC (0xC)
	struct FFOscillator Roll;  // 0x18 (0x18)


}; 
 
 // ScriptStruct GameplayCameras.CameraAnimationParams
struct FCameraAnimationParams
{
	float PlayRate;  // 0x0 (0x0)
	float Scale;  // 0x4 (0x4)
	uint8_t EaseInType;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)
	float EaseInDuration;  // 0xC (0xC)
	uint8_t EaseOutType;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	float EaseOutDuration;  // 0x14 (0x14)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bLoop : 1;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool bRandomStartTime : 1;  // 0x19 (0x19)
	char pad_26[2];  // 0x1A (0x1A)
	float DurationOverride;  // 0x1C (0x1C)
	uint8_t PlaySpace;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)
	struct FRotator UserPlaySpaceRot;  // 0x28 (0x28)


}; 
 
 // ScriptStruct GameplayCameras.CameraAnimationHandle
struct FCameraAnimationHandle
{
	char pad_0[4];  // 0x0 (0x0)


}; 
 
 // ScriptStruct GameplayCameras.ActiveCameraAnimationInfo
struct FActiveCameraAnimationInfo
{
	struct UCameraAnimationSequence* Sequence;  // 0x0 (0x0)
	struct FCameraAnimationParams Params;  // 0x8 (0x8)
	struct FCameraAnimationHandle Handle;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)
	struct UCameraAnimationSequencePlayer* Player;  // 0x50 (0x50)
	struct UCameraAnimationSequenceCameraStandIn* CameraStandIn;  // 0x58 (0x58)
	float EaseInCurrentTime;  // 0x60 (0x60)
	float EaseOutCurrentTime;  // 0x64 (0x64)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool bIsEasingIn : 1;  // 0x68 (0x68)
	char pad_105_1 : 7;  // 0x69 (0x69)
	bool bIsEasingOut : 1;  // 0x69 (0x69)
	char pad_106[6];  // 0x6A (0x6A)


}; 
 
 // ScriptStruct GameplayCameras.WaveOscillator
struct FWaveOscillator
{
	float Amplitude;  // 0x0 (0x0)
	float Frequency;  // 0x4 (0x4)
	uint8_t InitialOffsetType;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function GameplayCameras.LegacyCameraShake.BlueprintUpdateCameraShake
struct FBlueprintUpdateCameraShake
{
	float DeltaTime;  // 0x0 (0x0)
	float Alpha;  // 0x4 (0x4)
	char pad_8[8];  // 0x8 (0x8)
	struct FMinimalViewInfo POV;  // 0x10 (0x10)
	struct FMinimalViewInfo ModifiedPOV;  // 0x7D0 (0x7D0)


}; 
 
 // Function GameplayCameras.LegacyCameraShake.ReceiveIsFinished
struct FReceiveIsFinished
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function GameplayCameras.LegacyCameraShake.ReceivePlayShake
struct FReceivePlayShake
{
	float Scale;  // 0x0 (0x0)


}; 
 
 // Function GameplayCameras.GameplayCamerasSubsystem.StopCameraAnimation
struct FStopCameraAnimation
{
	struct APlayerController* PlayerController;  // 0x0 (0x0)
	struct FCameraAnimationHandle Handle;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bImmediate : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // Function GameplayCameras.LegacyCameraShake.ReceiveStopShake
struct FReceiveStopShake
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bImmediately : 1;  // 0x0 (0x0)


}; 
 
 // Function GameplayCameras.LegacyCameraShake.StartLegacyCameraShake
struct FStartLegacyCameraShake
{
	struct APlayerCameraManager* PlayerCameraManager;  // 0x0 (0x0)
	ULegacyCameraShake* ShakeClass;  // 0x8 (0x8)
	float Scale;  // 0x10 (0x10)
	uint8_t PlaySpace;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	struct FRotator UserPlaySpaceRot;  // 0x18 (0x18)
	struct ULegacyCameraShake* ReturnValue;  // 0x30 (0x30)


}; 
 
 // Function GameplayCameras.LegacyCameraShake.StartLegacyCameraShakeFromSource
struct FStartLegacyCameraShakeFromSource
{
	struct APlayerCameraManager* PlayerCameraManager;  // 0x0 (0x0)
	ULegacyCameraShake* ShakeClass;  // 0x8 (0x8)
	struct UCameraShakeSourceComponent* SourceComponent;  // 0x10 (0x10)
	float Scale;  // 0x18 (0x18)
	uint8_t PlaySpace;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	struct FRotator UserPlaySpaceRot;  // 0x20 (0x20)
	struct ULegacyCameraShake* ReturnValue;  // 0x38 (0x38)


}; 
 
 // Function GameplayCameras.LegacyCameraShakeFunctionLibrary.Conv_LegacyCameraShake
struct FConv_LegacyCameraShake
{
	struct UCameraShakeBase* CameraShake;  // 0x0 (0x0)
	struct ULegacyCameraShake* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifier
struct FGetCameraAnimationCameraModifier
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	int32_t PlayerIndex;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct UCameraAnimationCameraModifier* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromID
struct FGetCameraAnimationCameraModifierFromID
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	int32_t ControllerId;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct UCameraAnimationCameraModifier* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraAnimationCameraModifier
struct FConv_CameraAnimationCameraModifier
{
	struct APlayerCameraManager* PlayerCameraManager;  // 0x0 (0x0)
	struct UCameraAnimationCameraModifier* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromPlayerController
struct FGetCameraAnimationCameraModifierFromPlayerController
{
	struct APlayerController* PlayerController;  // 0x0 (0x0)
	struct UCameraAnimationCameraModifier* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function GameplayCameras.GameplayCamerasSubsystem.IsCameraAnimationActive
struct FIsCameraAnimationActive
{
	struct APlayerController* PlayerController;  // 0x0 (0x0)
	struct FCameraAnimationHandle Handle;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool ReturnValue : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // Function GameplayCameras.GameplayCamerasSubsystem.PlayCameraAnimation
struct FPlayCameraAnimation
{
	struct APlayerController* PlayerController;  // 0x0 (0x0)
	struct UCameraAnimationSequence* Sequence;  // 0x8 (0x8)
	struct FCameraAnimationParams Params;  // 0x10 (0x10)
	struct FCameraAnimationHandle ReturnValue;  // 0x50 (0x50)
	char pad_84[4];  // 0x54 (0x54)


}; 
 
 // Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimations
struct FStopAllCameraAnimations
{
	struct APlayerController* PlayerController;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bImmediate : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraShakePlaySpace
struct FConv_CameraShakePlaySpace
{
	uint8_t CameraAnimationPlaySpace;  // 0x0 (0x0)
	uint8_t ReturnValue;  // 0x1 (0x1)


}; 
 
 // Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimationsOf
struct FStopAllCameraAnimationsOf
{
	struct APlayerController* PlayerController;  // 0x0 (0x0)
	struct UCameraAnimationSequence* Sequence;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bImmediate : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraAnimationPlaySpace
struct FConv_CameraAnimationPlaySpace
{
	uint8_t CameraShakePlaySpace;  // 0x0 (0x0)
	uint8_t ReturnValue;  // 0x1 (0x1)


}; 
 
 