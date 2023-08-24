#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
struct FSetTrackingSource
{
	uint8_t NewSource;  // 0x0 (0x0)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode
struct FSetSpectatorScreenMode
{
	uint8_t Mode;  // 0x0 (0x0)


}; 
 
 // DelegateFunction HeadMountedDisplay.DeviceModelLoadedDelegate__DelegateSignature
struct FDeviceModelLoadedDelegate__DelegateSignature
{
	struct UPrimitiveComponent* LoadedComponent;  // 0x0 (0x0)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes
struct FSetClippingPlanes
{
	float Near;  // 0x0 (0x0)
	float Far;  // 0x4 (0x4)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking
struct FIsDeviceTracking
{
	struct FXRDeviceId XRDeviceId;  // 0x0 (0x0)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool ReturnValue : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // DelegateFunction HeadMountedDisplay.XRDeviceOnDisconnectDelegate__DelegateSignature
struct FXRDeviceOnDisconnectDelegate__DelegateSignature
{
	struct FString OutReason;  // 0x0 (0x0)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOriginTransform
struct FGetTrackingOriginTransform
{
	enum class EHMDTrackingOrigin Origin;  // 0x0 (0x0)
	char pad_1[15];  // 0x1 (0x1)
	struct FTransform OutTransform;  // 0x10 (0x10)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool ReturnValue : 1;  // 0x70 (0x70)
	char pad_113[15];  // 0x71 (0x71)


}; 
 
 // ScriptStruct HeadMountedDisplay.XRGestureConfig
struct FXRGestureConfig
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bTap : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bHold : 1;  // 0x1 (0x1)
	uint8_t AxisGesture;  // 0x2 (0x2)
	char pad_3_1 : 7;  // 0x3 (0x3)
	bool bNavigationAxisX : 1;  // 0x3 (0x3)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bNavigationAxisY : 1;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool bNavigationAxisZ : 1;  // 0x5 (0x5)


}; 
 
 // ScriptStruct HeadMountedDisplay.XRDeviceId
struct FXRDeviceId
{
	struct FName SystemName;  // 0x0 (0x0)
	int32_t DeviceID;  // 0x8 (0x8)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin
struct FSetTrackingOrigin
{
	enum class EHMDTrackingOrigin Origin;  // 0x0 (0x0)


}; 
 
 // DelegateFunction HeadMountedDisplay.XRTimedInputActionDelegate__DelegateSignature
struct FXRTimedInputActionDelegate__DelegateSignature
{
	float Value;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FTimespan Time;  // 0x8 (0x8)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected
struct FIsHeadMountedDisplayConnected
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors
struct FGetNumOfTrackingSensors
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ClearXRTimedInputActionDelegate
struct FClearXRTimedInputActionDelegate
{
	struct FName ActionPath;  // 0x0 (0x0)


}; 
 
 // ScriptStruct HeadMountedDisplay.XRHMDData
struct FXRHMDData
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bValid : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	struct FName DeviceName;  // 0x4 (0x4)
	struct FGuid ApplicationInstanceID;  // 0xC (0xC)
	uint8_t TrackingStatus;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	struct FVector Position;  // 0x20 (0x20)
	char pad_56[8];  // 0x38 (0x38)
	struct FQuat Rotation;  // 0x40 (0x40)


}; 
 
 // ScriptStruct HeadMountedDisplay.XRMotionControllerData
struct FXRMotionControllerData
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bValid : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	struct FName DeviceName;  // 0x4 (0x4)
	struct FGuid ApplicationInstanceID;  // 0xC (0xC)
	uint8_t DeviceVisualType;  // 0x1C (0x1C)
	uint8_t HandIndex;  // 0x1D (0x1D)
	uint8_t TrackingStatus;  // 0x1E (0x1E)
	char pad_31[1];  // 0x1F (0x1F)
	struct FVector GripPosition;  // 0x20 (0x20)
	char pad_56[8];  // 0x38 (0x38)
	struct FQuat GripRotation;  // 0x40 (0x40)
	struct FVector AimPosition;  // 0x60 (0x60)
	char pad_120[8];  // 0x78 (0x78)
	struct FQuat AimRotation;  // 0x80 (0x80)
	struct TArray<struct FVector> HandKeyPositions;  // 0xA0 (0xA0)
	struct TArray<struct FQuat> HandKeyRotations;  // 0xB0 (0xB0)
	struct TArray<float> HandKeyRadii;  // 0xC0 (0xC0)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool bIsGrasped : 1;  // 0xD0 (0xD0)
	char pad_209[15];  // 0xD1 (0xD1)


}; 
 
 // Function HeadMountedDisplay.HandKeypointConversion.Conv_HandKeypointToInt32
struct FConv_HandKeypointToInt32
{
	uint8_t Input;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	int32_t ReturnValue;  // 0x4 (0x4)


}; 
 
 // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent
struct FEnableMotionTrackingForComponent
{
	struct UMotionControllerComponent* MotionControllerComponent;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.BreakKey
struct FBreakKey
{
	struct FKey InKey;  // 0x0 (0x0)
	struct FString InteractionProfile;  // 0x18 (0x18)
	uint8_t Hand;  // 0x28 (0x28)
	char pad_41[3];  // 0x29 (0x29)
	struct FName MotionSource;  // 0x2C (0x2C)
	char pad_52[4];  // 0x34 (0x34)
	struct FString Indentifier;  // 0x38 (0x38)
	struct FString Component;  // 0x48 (0x48)


}; 
 
 // Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh
struct FSetCustomDisplayMesh
{
	struct UStaticMesh* NewDisplayMesh;  // 0x0 (0x0)


}; 
 
 // Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue
struct FGetParameterValue
{
	struct FName InName;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bValueFound : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)
	float ReturnValue;  // 0xC (0xC)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD
struct FCalibrateExternalTrackingToHMD
{
	struct FTransform ExternalTrackingTransform;  // 0x0 (0x0)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConfigureGestures
struct FConfigureGestures
{
	struct FXRGestureConfig GestureConfig;  // 0x0 (0x0)
	char pad_6_1 : 7;  // 0x6 (0x6)
	bool ReturnValue : 1;  // 0x6 (0x6)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConnectRemoteXRDevice
struct FConnectRemoteXRDevice
{
	struct FString IpAddress;  // 0x0 (0x0)
	int32_t BitRate;  // 0x10 (0x10)
	enum class EXRDeviceConnectionResult ReturnValue;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD
struct FEnableHMD
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bEnable : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool ReturnValue : 1;  // 0x1 (0x1)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform
struct FGetTrackingToWorldTransform
{
	struct UObject* WorldContext;  // 0x0 (0x0)
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode
struct FEnableLowPersistenceMode
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bEnable : 1;  // 0x0 (0x0)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters
struct FGetTrackingSensorParameters
{
	struct FVector Origin;  // 0x0 (0x0)
	struct FRotator Rotation;  // 0x18 (0x18)
	float LeftFOV;  // 0x30 (0x30)
	float RightFOV;  // 0x34 (0x34)
	float TopFOV;  // 0x38 (0x38)
	float BottomFOV;  // 0x3C (0x3C)
	float Distance;  // 0x40 (0x40)
	float NearPlane;  // 0x44 (0x44)
	float FarPlane;  // 0x48 (0x48)
	char pad_76_1 : 7;  // 0x4C (0x4C)
	bool IsActive : 1;  // 0x4C (0x4C)
	char pad_77[3];  // 0x4D (0x4D)
	int32_t Index;  // 0x50 (0x50)
	char pad_84[4];  // 0x54 (0x54)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices
struct FEnumerateTrackedDevices
{
	struct FName SystemId;  // 0x0 (0x0)
	uint8_t DeviceType;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct TArray<struct FXRDeviceId> ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetControllerTransformForTime
struct FGetControllerTransformForTime
{
	struct UObject* WorldContext;  // 0x0 (0x0)
	int32_t ControllerIndex;  // 0x8 (0x8)
	struct FName MotionSource;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)
	struct FTimespan Time;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool bTimeWasUsed : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)
	struct FRotator Orientation;  // 0x28 (0x28)
	struct FVector Position;  // 0x40 (0x40)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool bProvidedLinearVelocity : 1;  // 0x58 (0x58)
	char pad_89[7];  // 0x59 (0x59)
	struct FVector LinearVelocity;  // 0x60 (0x60)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool bProvidedAngularVelocity : 1;  // 0x78 (0x78)
	char pad_121[7];  // 0x79 (0x79)
	struct FVector AngularVelocityRadPerSec;  // 0x80 (0x80)
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool bProvidedLinearAcceleration : 1;  // 0x98 (0x98)
	char pad_153[7];  // 0x99 (0x99)
	struct FVector LinearAcceleration;  // 0xA0 (0xA0)
	char pad_184_1 : 7;  // 0xB8 (0xB8)
	bool ReturnValue : 1;  // 0xB8 (0xB8)
	char pad_185[7];  // 0xB9 (0xB9)


}; 
 
 // Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource
struct FSetDisplayModelSource
{
	struct FName NewDisplayModelSource;  // 0x0 (0x0)


}; 
 
 // Function HeadMountedDisplay.MotionControllerComponent.IsTracked
struct FIsTracked
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition
struct FHasValidTrackingPosition
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetCurrentInteractionProfile
struct FGetCurrentInteractionProfile
{
	uint8_t Hand;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FString InteractionProfile;  // 0x8 (0x8)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDData
struct FGetHMDData
{
	struct UObject* WorldContext;  // 0x0 (0x0)
	char pad_8[8];  // 0x8 (0x8)
	struct FXRHMDData HMDData;  // 0x10 (0x10)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose
struct FGetDevicePose
{
	struct FXRDeviceId XRDeviceId;  // 0x0 (0x0)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bIsTracked : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	struct FRotator Orientation;  // 0x10 (0x10)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bHasPositionalTracking : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct FVector Position;  // 0x30 (0x30)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPlayAreaRect
struct FGetPlayAreaRect
{
	struct FTransform OutTransform;  // 0x0 (0x0)
	struct FVector2D OutRect;  // 0x60 (0x60)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool ReturnValue : 1;  // 0x70 (0x70)
	char pad_113[15];  // 0x71 (0x71)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose
struct FGetDeviceWorldPose
{
	struct UObject* WorldContext;  // 0x0 (0x0)
	struct FXRDeviceId XRDeviceId;  // 0x8 (0x8)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bIsTracked : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	struct FRotator Orientation;  // 0x18 (0x18)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bHasPositionalTracking : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)
	struct FVector Position;  // 0x38 (0x38)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout
struct FSetSpectatorScreenModeTexturePlusEyeLayout
{
	struct FVector2D EyeRectMin;  // 0x0 (0x0)
	struct FVector2D EyeRectMax;  // 0x10 (0x10)
	struct FVector2D TextureRectMin;  // 0x20 (0x20)
	struct FVector2D TextureRectMax;  // 0x30 (0x30)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool bDrawEyeFirst : 1;  // 0x40 (0x40)
	char pad_65_1 : 7;  // 0x41 (0x41)
	bool bClearBlack : 1;  // 0x41 (0x41)
	char pad_66_1 : 7;  // 0x42 (0x42)
	bool bUseAlpha : 1;  // 0x42 (0x42)
	char pad_67[5];  // 0x43 (0x43)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName
struct FGetHMDDeviceName
{
	struct FName ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition
struct FGetOrientationAndPosition
{
	struct FRotator DeviceRotation;  // 0x0 (0x0)
	struct FVector DevicePosition;  // 0x18 (0x18)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState
struct FGetHMDWornState
{
	enum class EHMDWornState ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
struct FSetTrackingMotionSource
{
	struct FName NewSource;  // 0x0 (0x0)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetMotionControllerData
struct FGetMotionControllerData
{
	struct UObject* WorldContext;  // 0x0 (0x0)
	uint8_t Hand;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct FXRMotionControllerData MotionControllerData;  // 0x10 (0x10)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity
struct FGetPixelDensity
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPlayAreaBounds
struct FGetPlayAreaBounds
{
	enum class EHMDTrackingOrigin Origin;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FVector2D ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters
struct FGetPositionalTrackingCameraParameters
{
	struct FVector CameraOrigin;  // 0x0 (0x0)
	struct FRotator CameraRotation;  // 0x18 (0x18)
	float HFOV;  // 0x30 (0x30)
	float VFOV;  // 0x34 (0x34)
	float CameraDistance;  // 0x38 (0x38)
	float NearPlane;  // 0x3C (0x3C)
	float FarPlane;  // 0x40 (0x40)
	char pad_68[4];  // 0x44 (0x44)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin
struct FGetTrackingOrigin
{
	enum class EHMDTrackingOrigin ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVersionString
struct FGetVersionString
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState
struct FGetVRFocusState
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bUseFocus : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bHasFocus : 1;  // 0x1 (0x1)


}; 
 
 // Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
struct FSetAssociatedPlayerIndex
{
	int32_t NewPlayer;  // 0x0 (0x0)


}; 
 
 // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount
struct FGetMaximumMotionTrackedControllerCount
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition
struct FUpdateExternalTrackingHMDPosition
{
	struct FTransform ExternalTrackingTransform;  // 0x0 (0x0)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale
struct FGetWorldToMetersScale
{
	struct UObject* WorldContext;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition
struct FResetOrientationAndPosition
{
	float Yaw;  // 0x0 (0x0)
	enum class EOrientPositionSelector Options;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetXRSystemFlags
struct FGetXRSystemFlags
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled
struct FIsHeadMountedDisplayEnabled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer
struct FDisableMotionTrackingOfControllersForPlayer
{
	int32_t PlayerIndex;  // 0x0 (0x0)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale
struct FSetWorldToMetersScale
{
	struct UObject* WorldContext;  // 0x0 (0x0)
	float NewScale;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode
struct FIsInLowPersistenceMode
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent
struct FDisableMotionTrackingForComponent
{
	struct UMotionControllerComponent* MotionControllerComponent;  // 0x0 (0x0)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable
struct FIsSpectatorScreenModeControllable
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash
struct FAddLoadingScreenSplash
{
	struct UTexture* Texture;  // 0x0 (0x0)
	struct FVector Translation;  // 0x8 (0x8)
	struct FRotator Rotation;  // 0x20 (0x20)
	struct FVector2D Size;  // 0x38 (0x38)
	struct FRotator DeltaRotation;  // 0x48 (0x48)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool bClearBeforeAdd : 1;  // 0x60 (0x60)
	char pad_97[7];  // 0x61 (0x61)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture
struct FSetSpectatorScreenTexture
{
	struct UTexture* InTexture;  // 0x0 (0x0)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRDisconnectDelegate
struct FSetXRDisconnectDelegate
{
	struct FDelegate InDisconnectedDelegate;  // 0x0 (0x0)


}; 
 
 // Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel
struct FSetShowDeviceModel
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bShowControllerModel : 1;  // 0x0 (0x0)


}; 
 
 // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRTimedInputActionDelegate
struct FSetXRTimedInputActionDelegate
{
	struct FName ActionName;  // 0x0 (0x0)
	struct FDelegate InDelegate;  // 0x8 (0x8)


}; 
 
 // Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
struct FGetHandJointPosition
{
	int32_t jointIndex;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bValueFound : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct FVector ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
struct FGetTrackingSource
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice
struct FDisableMotionTrackingOfDevice
{
	int32_t PlayerIndex;  // 0x0 (0x0)
	uint8_t Hand;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource
struct FDisableMotionTrackingOfSource
{
	int32_t PlayerIndex;  // 0x0 (0x0)
	struct FName SourceName;  // 0x4 (0x4)


}; 
 
 // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice
struct FEnableMotionTrackingOfDevice
{
	int32_t PlayerIndex;  // 0x0 (0x0)
	uint8_t Hand;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool ReturnValue : 1;  // 0x5 (0x5)
	char pad_6[2];  // 0x6 (0x6)


}; 
 
 // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource
struct FEnableMotionTrackingOfSource
{
	int32_t PlayerIndex;  // 0x0 (0x0)
	struct FName SourceName;  // 0x4 (0x4)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool ReturnValue : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources
struct FEnumerateMotionSources
{
	struct TArray<struct FName> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName
struct FGetActiveTrackingSystemName
{
	struct FName ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount
struct FGetMotionTrackingEnabledControllerCount
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking
struct FIsMotionSourceTracking
{
	int32_t PlayerIndex;  // 0x0 (0x0)
	struct FName SourceName;  // 0x4 (0x4)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool ReturnValue : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary
struct FIsMotionTrackedDeviceCountManagementNecessary
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent
struct FIsMotionTrackingEnabledForComponent
{
	struct UMotionControllerComponent* MotionControllerComponent;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice
struct FIsMotionTrackingEnabledForDevice
{
	int32_t PlayerIndex;  // 0x0 (0x0)
	uint8_t Hand;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool ReturnValue : 1;  // 0x5 (0x5)
	char pad_6[2];  // 0x6 (0x6)


}; 
 
 // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource
struct FIsMotionTrackingEnabledForSource
{
	int32_t PlayerIndex;  // 0x0 (0x0)
	struct FName SourceName;  // 0x4 (0x4)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool ReturnValue : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault
struct FSetIsControllerMotionTrackingEnabledByDefault
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Enable : 1;  // 0x0 (0x0)


}; 
 
 // Function HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking
struct FAddDeviceVisualizationComponentBlocking
{
	struct AActor* Target;  // 0x0 (0x0)
	struct FXRDeviceId XRDeviceId;  // 0x8 (0x8)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bManualAttachment : 1;  // 0x14 (0x14)
	char pad_21[11];  // 0x15 (0x15)
	struct FTransform RelativeTransform;  // 0x20 (0x20)
	struct UPrimitiveComponent* ReturnValue;  // 0x80 (0x80)
	char pad_136[8];  // 0x88 (0x88)


}; 
 
 // Function HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking
struct FAddNamedDeviceVisualizationComponentBlocking
{
	struct AActor* Target;  // 0x0 (0x0)
	struct FName SystemName;  // 0x8 (0x8)
	struct FName DeviceName;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bManualAttachment : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct FTransform RelativeTransform;  // 0x20 (0x20)
	struct FXRDeviceId XRDeviceId;  // 0x80 (0x80)
	char pad_140[4];  // 0x8C (0x8C)
	struct UPrimitiveComponent* ReturnValue;  // 0x90 (0x90)
	char pad_152[8];  // 0x98 (0x98)


}; 
 
 // Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync
struct FAddDeviceVisualizationComponentAsync
{
	struct AActor* Target;  // 0x0 (0x0)
	struct FXRDeviceId XRDeviceId;  // 0x8 (0x8)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bManualAttachment : 1;  // 0x14 (0x14)
	char pad_21[11];  // 0x15 (0x15)
	struct FTransform RelativeTransform;  // 0x20 (0x20)
	struct UPrimitiveComponent* NewComponent;  // 0x80 (0x80)
	struct UAsyncTask_LoadXRDeviceVisComponent* ReturnValue;  // 0x88 (0x88)


}; 
 
 // Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync
struct FAddNamedDeviceVisualizationComponentAsync
{
	struct AActor* Target;  // 0x0 (0x0)
	struct FName SystemName;  // 0x8 (0x8)
	struct FName DeviceName;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bManualAttachment : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct FTransform RelativeTransform;  // 0x20 (0x20)
	struct FXRDeviceId XRDeviceId;  // 0x80 (0x80)
	char pad_140[4];  // 0x8C (0x8C)
	struct UPrimitiveComponent* NewComponent;  // 0x90 (0x90)
	struct UAsyncTask_LoadXRDeviceVisComponent* ReturnValue;  // 0x98 (0x98)


}; 
 
 // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen
struct FSetLoadingScreen
{
	struct UTexture* Texture;  // 0x0 (0x0)
	struct FVector2D Scale;  // 0x8 (0x8)
	struct FVector Offset;  // 0x18 (0x18)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bShowLoadingMovie : 1;  // 0x30 (0x30)
	char pad_49_1 : 7;  // 0x31 (0x31)
	bool bShowOnSet : 1;  // 0x31 (0x31)
	char pad_50[6];  // 0x32 (0x32)


}; 
 
 