#include "pch.h"
#include "SDK.h"

int32_t UHandKeypointConversion::Conv_HandKeypointToInt32(uint8_t Input){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HandKeypointConversion.Conv_HandKeypointToInt32");

	FConv_HandKeypointToInt32 parms{};	
	parms.Input = Input;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAsyncTask_LoadXRDeviceVisComponent* UAsyncTask_LoadXRDeviceVisComponent::AddNamedDeviceVisualizationComponentAsync(struct AActor* Target, struct FName SystemName, struct FName DeviceName, bool bManualAttachment, struct FTransform& RelativeTransform, struct FXRDeviceId& XRDeviceId, struct UPrimitiveComponent*& NewComponent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync");

	FAddNamedDeviceVisualizationComponentAsync parms{};	
	parms.Target = Target;
	parms.SystemName = SystemName;
	parms.DeviceName = DeviceName;
	parms.bManualAttachment = bManualAttachment;
	parms.RelativeTransform = RelativeTransform;
	parms.XRDeviceId = XRDeviceId;
	parms.NewComponent = NewComponent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAsyncTask_LoadXRDeviceVisComponent* UAsyncTask_LoadXRDeviceVisComponent::AddDeviceVisualizationComponentAsync(struct AActor* Target, struct FXRDeviceId& XRDeviceId, bool bManualAttachment, struct FTransform& RelativeTransform, struct UPrimitiveComponent*& NewComponent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync");

	FAddDeviceVisualizationComponentAsync parms{};	
	parms.Target = Target;
	parms.XRDeviceId = XRDeviceId;
	parms.bManualAttachment = bManualAttachment;
	parms.RelativeTransform = RelativeTransform;
	parms.NewComponent = NewComponent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UHeadMountedDisplayFunctionLibrary::UpdateExternalTrackingHMDPosition(struct FTransform& ExternalTrackingTransform){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition");

	FUpdateExternalTrackingHMDPosition parms{};	
	parms.ExternalTrackingTransform = ExternalTrackingTransform;

	ProcessEvent(fn, &parms);
}

void UHeadMountedDisplayFunctionLibrary::SetXRTimedInputActionDelegate(struct FName& ActionName, struct FDelegate& InDelegate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRTimedInputActionDelegate");

	FSetXRTimedInputActionDelegate parms{};	
	parms.ActionName = ActionName;
	parms.InDelegate = InDelegate;

	ProcessEvent(fn, &parms);
}

void UHeadMountedDisplayFunctionLibrary::SetXRDisconnectDelegate(struct FDelegate& InDisconnectedDelegate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRDisconnectDelegate");

	FSetXRDisconnectDelegate parms{};	
	parms.InDisconnectedDelegate = InDisconnectedDelegate;

	ProcessEvent(fn, &parms);
}

void UHeadMountedDisplayFunctionLibrary::SetWorldToMetersScale(struct UObject* WorldContext, float NewScale){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale");

	FSetWorldToMetersScale parms{};	
	parms.WorldContext = WorldContext;
	parms.NewScale = NewScale;

	ProcessEvent(fn, &parms);
}

void UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(enum class EHMDTrackingOrigin Origin){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin");

	FSetTrackingOrigin parms{};	
	parms.Origin = Origin;

	ProcessEvent(fn, &parms);
}

void UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenTexture(struct UTexture* InTexture){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture");

	FSetSpectatorScreenTexture parms{};	
	parms.InTexture = InTexture;

	ProcessEvent(fn, &parms);
}

void UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenModeTexturePlusEyeLayout(struct FVector2D EyeRectMin, struct FVector2D EyeRectMax, struct FVector2D TextureRectMin, struct FVector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout");

	FSetSpectatorScreenModeTexturePlusEyeLayout parms{};	
	parms.EyeRectMin = EyeRectMin;
	parms.EyeRectMax = EyeRectMax;
	parms.TextureRectMin = TextureRectMin;
	parms.TextureRectMax = TextureRectMax;
	parms.bDrawEyeFirst = bDrawEyeFirst;
	parms.bClearBlack = bClearBlack;
	parms.bUseAlpha = bUseAlpha;

	ProcessEvent(fn, &parms);
}

void UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenMode(uint8_t Mode){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode");

	FSetSpectatorScreenMode parms{};	
	parms.Mode = Mode;

	ProcessEvent(fn, &parms);
}

void UHeadMountedDisplayFunctionLibrary::SetClippingPlanes(float Near, float Far){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes");

	FSetClippingPlanes parms{};	
	parms.Near = Near;
	parms.Far = Far;

	ProcessEvent(fn, &parms);
}

void UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition(float Yaw, enum class EOrientPositionSelector Options){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition");

	FResetOrientationAndPosition parms{};	
	parms.Yaw = Yaw;
	parms.Options = Options;

	ProcessEvent(fn, &parms);
}

bool UHeadMountedDisplayFunctionLibrary::IsSpectatorScreenModeControllable(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable");

	FIsSpectatorScreenModeControllable parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UHeadMountedDisplayFunctionLibrary::IsInLowPersistenceMode(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode");

	FIsInLowPersistenceMode parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled");

	FIsHeadMountedDisplayEnabled parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayConnected(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected");

	FIsHeadMountedDisplayConnected parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UHeadMountedDisplayFunctionLibrary::IsDeviceTracking(struct FXRDeviceId& XRDeviceId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking");

	FIsDeviceTracking parms{};	
	parms.XRDeviceId = XRDeviceId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UHeadMountedDisplayFunctionLibrary::HasValidTrackingPosition(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition");

	FHasValidTrackingPosition parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UHeadMountedDisplayFunctionLibrary::GetXRSystemFlags(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetXRSystemFlags");

	FGetXRSystemFlags parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UHeadMountedDisplayFunctionLibrary::GetWorldToMetersScale(struct UObject* WorldContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale");

	FGetWorldToMetersScale parms{};	
	parms.WorldContext = WorldContext;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UHeadMountedDisplayFunctionLibrary::GetVRFocusState(bool& bUseFocus, bool& bHasFocus){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState");

	FGetVRFocusState parms{};	
	parms.bUseFocus = bUseFocus;
	parms.bHasFocus = bHasFocus;

	ProcessEvent(fn, &parms);
}

struct FString UHeadMountedDisplayFunctionLibrary::GetVersionString(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVersionString");

	FGetVersionString parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform UHeadMountedDisplayFunctionLibrary::GetTrackingToWorldTransform(struct UObject* WorldContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform");

	FGetTrackingToWorldTransform parms{};	
	parms.WorldContext = WorldContext;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UHeadMountedDisplayFunctionLibrary::GetTrackingSensorParameters(struct FVector& Origin, struct FRotator& Rotation, float& LeftFOV, float& RightFOV, float& TopFOV, float& BottomFOV, float& Distance, float& NearPlane, float& FarPlane, bool& IsActive, int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters");

	FGetTrackingSensorParameters parms{};	
	parms.Origin = Origin;
	parms.Rotation = Rotation;
	parms.LeftFOV = LeftFOV;
	parms.RightFOV = RightFOV;
	parms.TopFOV = TopFOV;
	parms.BottomFOV = BottomFOV;
	parms.Distance = Distance;
	parms.NearPlane = NearPlane;
	parms.FarPlane = FarPlane;
	parms.IsActive = IsActive;
	parms.Index = Index;

	ProcessEvent(fn, &parms);
}

bool UHeadMountedDisplayFunctionLibrary::GetTrackingOriginTransform(enum class EHMDTrackingOrigin Origin, struct FTransform& OutTransform){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOriginTransform");

	FGetTrackingOriginTransform parms{};	
	parms.Origin = Origin;
	parms.OutTransform = OutTransform;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

enum class EHMDTrackingOrigin UHeadMountedDisplayFunctionLibrary::GetTrackingOrigin(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin");

	FGetTrackingOrigin parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UHeadMountedDisplayFunctionLibrary::GetPositionalTrackingCameraParameters(struct FVector& CameraOrigin, struct FRotator& CameraRotation, float& HFOV, float& VFOV, float& CameraDistance, float& NearPlane, float& FarPlane){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters");

	FGetPositionalTrackingCameraParameters parms{};	
	parms.CameraOrigin = CameraOrigin;
	parms.CameraRotation = CameraRotation;
	parms.HFOV = HFOV;
	parms.VFOV = VFOV;
	parms.CameraDistance = CameraDistance;
	parms.NearPlane = NearPlane;
	parms.FarPlane = FarPlane;

	ProcessEvent(fn, &parms);
}

bool UHeadMountedDisplayFunctionLibrary::GetPlayAreaRect(struct FTransform& OutTransform, struct FVector2D& OutRect){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPlayAreaRect");

	FGetPlayAreaRect parms{};	
	parms.OutTransform = OutTransform;
	parms.OutRect = OutRect;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector2D UHeadMountedDisplayFunctionLibrary::GetPlayAreaBounds(enum class EHMDTrackingOrigin Origin){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPlayAreaBounds");

	FGetPlayAreaBounds parms{};	
	parms.Origin = Origin;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UHeadMountedDisplayFunctionLibrary::GetPixelDensity(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity");

	FGetPixelDensity parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(struct FRotator& DeviceRotation, struct FVector& DevicePosition){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition");

	FGetOrientationAndPosition parms{};	
	parms.DeviceRotation = DeviceRotation;
	parms.DevicePosition = DevicePosition;

	ProcessEvent(fn, &parms);
}

int32_t UHeadMountedDisplayFunctionLibrary::GetNumOfTrackingSensors(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors");

	FGetNumOfTrackingSensors parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UHeadMountedDisplayFunctionLibrary::GetMotionControllerData(struct UObject* WorldContext, uint8_t Hand, struct FXRMotionControllerData& MotionControllerData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetMotionControllerData");

	FGetMotionControllerData parms{};	
	parms.WorldContext = WorldContext;
	parms.Hand = Hand;
	parms.MotionControllerData = MotionControllerData;

	ProcessEvent(fn, &parms);
}

enum class EHMDWornState UHeadMountedDisplayFunctionLibrary::GetHMDWornState(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState");

	FGetHMDWornState parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FName UHeadMountedDisplayFunctionLibrary::GetHMDDeviceName(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName");

	FGetHMDDeviceName parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UHeadMountedDisplayFunctionLibrary::GetHMDData(struct UObject* WorldContext, struct FXRHMDData& HMDData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDData");

	FGetHMDData parms{};	
	parms.WorldContext = WorldContext;
	parms.HMDData = HMDData;

	ProcessEvent(fn, &parms);
}

void UHeadMountedDisplayFunctionLibrary::GetDeviceWorldPose(struct UObject* WorldContext, struct FXRDeviceId& XRDeviceId, bool& bIsTracked, struct FRotator& Orientation, bool& bHasPositionalTracking, struct FVector& Position){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose");

	FGetDeviceWorldPose parms{};	
	parms.WorldContext = WorldContext;
	parms.XRDeviceId = XRDeviceId;
	parms.bIsTracked = bIsTracked;
	parms.Orientation = Orientation;
	parms.bHasPositionalTracking = bHasPositionalTracking;
	parms.Position = Position;

	ProcessEvent(fn, &parms);
}

void UHeadMountedDisplayFunctionLibrary::GetDevicePose(struct FXRDeviceId& XRDeviceId, bool& bIsTracked, struct FRotator& Orientation, bool& bHasPositionalTracking, struct FVector& Position){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose");

	FGetDevicePose parms{};	
	parms.XRDeviceId = XRDeviceId;
	parms.bIsTracked = bIsTracked;
	parms.Orientation = Orientation;
	parms.bHasPositionalTracking = bHasPositionalTracking;
	parms.Position = Position;

	ProcessEvent(fn, &parms);
}

bool UHeadMountedDisplayFunctionLibrary::GetCurrentInteractionProfile(uint8_t Hand, struct FString& InteractionProfile){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetCurrentInteractionProfile");

	FGetCurrentInteractionProfile parms{};	
	parms.Hand = Hand;
	parms.InteractionProfile = InteractionProfile;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UHeadMountedDisplayFunctionLibrary::GetControllerTransformForTime(struct UObject* WorldContext, int32_t ControllerIndex, struct FName MotionSource, struct FTimespan Time, bool& bTimeWasUsed, struct FRotator& Orientation, struct FVector& Position, bool& bProvidedLinearVelocity, struct FVector& LinearVelocity, bool& bProvidedAngularVelocity, struct FVector& AngularVelocityRadPerSec, bool& bProvidedLinearAcceleration, struct FVector& LinearAcceleration){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetControllerTransformForTime");

	FGetControllerTransformForTime parms{};	
	parms.WorldContext = WorldContext;
	parms.ControllerIndex = ControllerIndex;
	parms.MotionSource = MotionSource;
	parms.Time = Time;
	parms.bTimeWasUsed = bTimeWasUsed;
	parms.Orientation = Orientation;
	parms.Position = Position;
	parms.bProvidedLinearVelocity = bProvidedLinearVelocity;
	parms.LinearVelocity = LinearVelocity;
	parms.bProvidedAngularVelocity = bProvidedAngularVelocity;
	parms.AngularVelocityRadPerSec = AngularVelocityRadPerSec;
	parms.bProvidedLinearAcceleration = bProvidedLinearAcceleration;
	parms.LinearAcceleration = LinearAcceleration;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FXRDeviceId> UHeadMountedDisplayFunctionLibrary::EnumerateTrackedDevices(struct FName SystemId, uint8_t DeviceType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices");

	FEnumerateTrackedDevices parms{};	
	parms.SystemId = SystemId;
	parms.DeviceType = DeviceType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UHeadMountedDisplayFunctionLibrary::EnableLowPersistenceMode(bool bEnable){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode");

	FEnableLowPersistenceMode parms{};	
	parms.bEnable = bEnable;

	ProcessEvent(fn, &parms);
}

bool UHeadMountedDisplayFunctionLibrary::EnableHMD(bool bEnable){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD");

	FEnableHMD parms{};	
	parms.bEnable = bEnable;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UHeadMountedDisplayFunctionLibrary::DisconnectRemoteXRDevice(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.DisconnectRemoteXRDevice");

	FDisconnectRemoteXRDevice parms{};	

	ProcessEvent(fn, &parms);
}

enum class EXRDeviceConnectionResult UHeadMountedDisplayFunctionLibrary::ConnectRemoteXRDevice(struct FString IpAddress, int32_t BitRate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConnectRemoteXRDevice");

	FConnectRemoteXRDevice parms{};	
	parms.IpAddress = IpAddress;
	parms.BitRate = BitRate;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UHeadMountedDisplayFunctionLibrary::ConfigureGestures(struct FXRGestureConfig& GestureConfig){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConfigureGestures");

	FConfigureGestures parms{};	
	parms.GestureConfig = GestureConfig;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UHeadMountedDisplayFunctionLibrary::ClearXRTimedInputActionDelegate(struct FName& ActionPath){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ClearXRTimedInputActionDelegate");

	FClearXRTimedInputActionDelegate parms{};	
	parms.ActionPath = ActionPath;

	ProcessEvent(fn, &parms);
}

void UHeadMountedDisplayFunctionLibrary::CalibrateExternalTrackingToHMD(struct FTransform& ExternalTrackingTransform){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD");

	FCalibrateExternalTrackingToHMD parms{};	
	parms.ExternalTrackingTransform = ExternalTrackingTransform;

	ProcessEvent(fn, &parms);
}

void UHeadMountedDisplayFunctionLibrary::BreakKey(struct FKey InKey, struct FString& InteractionProfile, uint8_t& Hand, struct FName& MotionSource, struct FString& Indentifier, struct FString& Component){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.BreakKey");

	FBreakKey parms{};	
	parms.InKey = InKey;
	parms.InteractionProfile = InteractionProfile;
	parms.Hand = Hand;
	parms.MotionSource = MotionSource;
	parms.Indentifier = Indentifier;
	parms.Component = Component;

	ProcessEvent(fn, &parms);
}

void UMotionControllerComponent::SetTrackingSource(uint8_t NewSource){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource");

	FSetTrackingSource parms{};	
	parms.NewSource = NewSource;

	ProcessEvent(fn, &parms);
}

void UMotionControllerComponent::SetTrackingMotionSource(struct FName NewSource){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource");

	FSetTrackingMotionSource parms{};	
	parms.NewSource = NewSource;

	ProcessEvent(fn, &parms);
}

void UMotionControllerComponent::SetShowDeviceModel(bool bShowControllerModel){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel");

	FSetShowDeviceModel parms{};	
	parms.bShowControllerModel = bShowControllerModel;

	ProcessEvent(fn, &parms);
}

void UMotionControllerComponent::SetDisplayModelSource(struct FName NewDisplayModelSource){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource");

	FSetDisplayModelSource parms{};	
	parms.NewDisplayModelSource = NewDisplayModelSource;

	ProcessEvent(fn, &parms);
}

void UMotionControllerComponent::SetCustomDisplayMesh(struct UStaticMesh* NewDisplayMesh){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh");

	FSetCustomDisplayMesh parms{};	
	parms.NewDisplayMesh = NewDisplayMesh;

	ProcessEvent(fn, &parms);
}

void UMotionControllerComponent::SetAssociatedPlayerIndex(int32_t NewPlayer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex");

	FSetAssociatedPlayerIndex parms{};	
	parms.NewPlayer = NewPlayer;

	ProcessEvent(fn, &parms);
}

void UMotionControllerComponent::OnMotionControllerUpdated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated");

	FOnMotionControllerUpdated parms{};	

	ProcessEvent(fn, &parms);
}

bool UMotionControllerComponent::IsTracked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.IsTracked");

	FIsTracked parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UMotionControllerComponent::GetTrackingSource(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource");

	FGetTrackingSource parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMotionControllerComponent::GetParameterValue(struct FName InName, bool& bValueFound){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue");

	FGetParameterValue parms{};	
	parms.InName = InName;
	parms.bValueFound = bValueFound;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector UMotionControllerComponent::GetHandJointPosition(int32_t jointIndex, bool& bValueFound){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition");

	FGetHandJointPosition parms{};	
	parms.jointIndex = jointIndex;
	parms.bValueFound = bValueFound;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UPrimitiveComponent* UXRAssetFunctionLibrary::AddNamedDeviceVisualizationComponentBlocking(struct AActor* Target, struct FName SystemName, struct FName DeviceName, bool bManualAttachment, struct FTransform& RelativeTransform, struct FXRDeviceId& XRDeviceId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking");

	FAddNamedDeviceVisualizationComponentBlocking parms{};	
	parms.Target = Target;
	parms.SystemName = SystemName;
	parms.DeviceName = DeviceName;
	parms.bManualAttachment = bManualAttachment;
	parms.RelativeTransform = RelativeTransform;
	parms.XRDeviceId = XRDeviceId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UPrimitiveComponent* UXRAssetFunctionLibrary::AddDeviceVisualizationComponentBlocking(struct AActor* Target, struct FXRDeviceId& XRDeviceId, bool bManualAttachment, struct FTransform& RelativeTransform){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking");

	FAddDeviceVisualizationComponentBlocking parms{};	
	parms.Target = Target;
	parms.XRDeviceId = XRDeviceId;
	parms.bManualAttachment = bManualAttachment;
	parms.RelativeTransform = RelativeTransform;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMotionTrackedDeviceFunctionLibrary::SetIsControllerMotionTrackingEnabledByDefault(bool Enable){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault");

	FSetIsControllerMotionTrackingEnabledByDefault parms{};	
	parms.Enable = Enable;

	ProcessEvent(fn, &parms);
}

bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForSource(int32_t PlayerIndex, struct FName SourceName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource");

	FIsMotionTrackingEnabledForSource parms{};	
	parms.PlayerIndex = PlayerIndex;
	parms.SourceName = SourceName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForDevice(int32_t PlayerIndex, uint8_t Hand){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice");

	FIsMotionTrackingEnabledForDevice parms{};	
	parms.PlayerIndex = PlayerIndex;
	parms.Hand = Hand;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForComponent(struct UMotionControllerComponent* MotionControllerComponent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent");

	FIsMotionTrackingEnabledForComponent parms{};	
	parms.MotionControllerComponent = MotionControllerComponent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackedDeviceCountManagementNecessary(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary");

	FIsMotionTrackedDeviceCountManagementNecessary parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMotionTrackedDeviceFunctionLibrary::IsMotionSourceTracking(int32_t PlayerIndex, struct FName SourceName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking");

	FIsMotionSourceTracking parms{};	
	parms.PlayerIndex = PlayerIndex;
	parms.SourceName = SourceName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMotionTrackedDeviceFunctionLibrary::GetMotionTrackingEnabledControllerCount(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount");

	FGetMotionTrackingEnabledControllerCount parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMotionTrackedDeviceFunctionLibrary::GetMaximumMotionTrackedControllerCount(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount");

	FGetMaximumMotionTrackedControllerCount parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FName UMotionTrackedDeviceFunctionLibrary::GetActiveTrackingSystemName(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName");

	FGetActiveTrackingSystemName parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FName> UMotionTrackedDeviceFunctionLibrary::EnumerateMotionSources(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources");

	FEnumerateMotionSources parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfSource(int32_t PlayerIndex, struct FName SourceName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource");

	FEnableMotionTrackingOfSource parms{};	
	parms.PlayerIndex = PlayerIndex;
	parms.SourceName = SourceName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfDevice(int32_t PlayerIndex, uint8_t Hand){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice");

	FEnableMotionTrackingOfDevice parms{};	
	parms.PlayerIndex = PlayerIndex;
	parms.Hand = Hand;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingForComponent(struct UMotionControllerComponent* MotionControllerComponent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent");

	FEnableMotionTrackingForComponent parms{};	
	parms.MotionControllerComponent = MotionControllerComponent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfSource(int32_t PlayerIndex, struct FName SourceName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource");

	FDisableMotionTrackingOfSource parms{};	
	parms.PlayerIndex = PlayerIndex;
	parms.SourceName = SourceName;

	ProcessEvent(fn, &parms);
}

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfDevice(int32_t PlayerIndex, uint8_t Hand){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice");

	FDisableMotionTrackingOfDevice parms{};	
	parms.PlayerIndex = PlayerIndex;
	parms.Hand = Hand;

	ProcessEvent(fn, &parms);
}

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfControllersForPlayer(int32_t PlayerIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer");

	FDisableMotionTrackingOfControllersForPlayer parms{};	
	parms.PlayerIndex = PlayerIndex;

	ProcessEvent(fn, &parms);
}

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfAllControllers(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers");

	FDisableMotionTrackingOfAllControllers parms{};	

	ProcessEvent(fn, &parms);
}

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingForComponent(struct UMotionControllerComponent* MotionControllerComponent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent");

	FDisableMotionTrackingForComponent parms{};	
	parms.MotionControllerComponent = MotionControllerComponent;

	ProcessEvent(fn, &parms);
}

void UXRLoadingScreenFunctionLibrary::ShowLoadingScreen(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ShowLoadingScreen");

	FShowLoadingScreen parms{};	

	ProcessEvent(fn, &parms);
}

void UXRLoadingScreenFunctionLibrary::SetLoadingScreen(struct UTexture* Texture, struct FVector2D Scale, struct FVector Offset, bool bShowLoadingMovie, bool bShowOnSet){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen");

	FSetLoadingScreen parms{};	
	parms.Texture = Texture;
	parms.Scale = Scale;
	parms.Offset = Offset;
	parms.bShowLoadingMovie = bShowLoadingMovie;
	parms.bShowOnSet = bShowOnSet;

	ProcessEvent(fn, &parms);
}

void UXRLoadingScreenFunctionLibrary::HideLoadingScreen(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.HideLoadingScreen");

	FHideLoadingScreen parms{};	

	ProcessEvent(fn, &parms);
}

void UXRLoadingScreenFunctionLibrary::ClearLoadingScreenSplashes(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ClearLoadingScreenSplashes");

	FClearLoadingScreenSplashes parms{};	

	ProcessEvent(fn, &parms);
}

void UXRLoadingScreenFunctionLibrary::AddLoadingScreenSplash(struct UTexture* Texture, struct FVector Translation, struct FRotator Rotation, struct FVector2D Size, struct FRotator DeltaRotation, bool bClearBeforeAdd){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash");

	FAddLoadingScreenSplash parms{};	
	parms.Texture = Texture;
	parms.Translation = Translation;
	parms.Rotation = Rotation;
	parms.Size = Size;
	parms.DeltaRotation = DeltaRotation;
	parms.bClearBeforeAdd = bClearBeforeAdd;

	ProcessEvent(fn, &parms);
}

