#include "pch.h"
#include "SDK.h"

struct ULegacyCameraShake* ULegacyCameraShake::StartLegacyCameraShakeFromSource(struct APlayerCameraManager* PlayerCameraManager, ULegacyCameraShake* ShakeClass, struct UCameraShakeSourceComponent* SourceComponent, float Scale, uint8_t PlaySpace, struct FRotator UserPlaySpaceRot){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayCameras.LegacyCameraShake.StartLegacyCameraShakeFromSource");

	FStartLegacyCameraShakeFromSource parms{};	
	parms.PlayerCameraManager = PlayerCameraManager;
	parms.ShakeClass = ShakeClass;
	parms.SourceComponent = SourceComponent;
	parms.Scale = Scale;
	parms.PlaySpace = PlaySpace;
	parms.UserPlaySpaceRot = UserPlaySpaceRot;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct ULegacyCameraShake* ULegacyCameraShake::StartLegacyCameraShake(struct APlayerCameraManager* PlayerCameraManager, ULegacyCameraShake* ShakeClass, float Scale, uint8_t PlaySpace, struct FRotator UserPlaySpaceRot){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayCameras.LegacyCameraShake.StartLegacyCameraShake");

	FStartLegacyCameraShake parms{};	
	parms.PlayerCameraManager = PlayerCameraManager;
	parms.ShakeClass = ShakeClass;
	parms.Scale = Scale;
	parms.PlaySpace = PlaySpace;
	parms.UserPlaySpaceRot = UserPlaySpaceRot;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ULegacyCameraShake::ReceiveStopShake(bool bImmediately){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayCameras.LegacyCameraShake.ReceiveStopShake");

	FReceiveStopShake parms{};	
	parms.bImmediately = bImmediately;

	ProcessEvent(fn, &parms);
}

void ULegacyCameraShake::ReceivePlayShake(float Scale){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayCameras.LegacyCameraShake.ReceivePlayShake");

	FReceivePlayShake parms{};	
	parms.Scale = Scale;

	ProcessEvent(fn, &parms);
}

bool ULegacyCameraShake::ReceiveIsFinished(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayCameras.LegacyCameraShake.ReceiveIsFinished");

	FReceiveIsFinished parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ULegacyCameraShake::BlueprintUpdateCameraShake(float DeltaTime, float Alpha, struct FMinimalViewInfo& POV, struct FMinimalViewInfo& ModifiedPOV){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayCameras.LegacyCameraShake.BlueprintUpdateCameraShake");

	FBlueprintUpdateCameraShake parms{};	
	parms.DeltaTime = DeltaTime;
	parms.Alpha = Alpha;
	parms.POV = POV;
	parms.ModifiedPOV = ModifiedPOV;

	ProcessEvent(fn, &parms);
}

struct ULegacyCameraShake* ULegacyCameraShakeFunctionLibrary::Conv_LegacyCameraShake(struct UCameraShakeBase* CameraShake){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayCameras.LegacyCameraShakeFunctionLibrary.Conv_LegacyCameraShake");

	FConv_LegacyCameraShake parms{};	
	parms.CameraShake = CameraShake;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCameraAnimationCameraModifier::StopCameraAnimation(struct FCameraAnimationHandle& Handle, bool bImmediate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayCameras.CameraAnimationCameraModifier.StopCameraAnimation");

	FStopCameraAnimation parms{};	
	parms.Handle = Handle;
	parms.bImmediate = bImmediate;

	ProcessEvent(fn, &parms);
}

void UCameraAnimationCameraModifier::StopAllCameraAnimationsOf(struct UCameraAnimationSequence* Sequence, bool bImmediate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimationsOf");

	FStopAllCameraAnimationsOf parms{};	
	parms.Sequence = Sequence;
	parms.bImmediate = bImmediate;

	ProcessEvent(fn, &parms);
}

void UCameraAnimationCameraModifier::StopAllCameraAnimations(bool bImmediate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimations");

	FStopAllCameraAnimations parms{};	
	parms.bImmediate = bImmediate;

	ProcessEvent(fn, &parms);
}

struct FCameraAnimationHandle UCameraAnimationCameraModifier::PlayCameraAnimation(struct UCameraAnimationSequence* Sequence, struct FCameraAnimationParams Params){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayCameras.CameraAnimationCameraModifier.PlayCameraAnimation");

	FPlayCameraAnimation parms{};	
	parms.Sequence = Sequence;
	parms.Params = Params;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UCameraAnimationCameraModifier::IsCameraAnimationActive(struct FCameraAnimationHandle& Handle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayCameras.CameraAnimationCameraModifier.IsCameraAnimationActive");

	FIsCameraAnimationActive parms{};	
	parms.Handle = Handle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UCameraAnimationCameraModifier* UCameraAnimationCameraModifier::GetCameraAnimationCameraModifierFromPlayerController(struct APlayerController* PlayerController){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromPlayerController");

	FGetCameraAnimationCameraModifierFromPlayerController parms{};	
	parms.PlayerController = PlayerController;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UCameraAnimationCameraModifier* UCameraAnimationCameraModifier::GetCameraAnimationCameraModifierFromID(struct UObject* WorldContextObject, int32_t ControllerId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromID");

	FGetCameraAnimationCameraModifierFromID parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.ControllerId = ControllerId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UCameraAnimationCameraModifier* UCameraAnimationCameraModifier::GetCameraAnimationCameraModifier(struct UObject* WorldContextObject, int32_t PlayerIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifier");

	FGetCameraAnimationCameraModifier parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.PlayerIndex = PlayerIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UGameplayCamerasFunctionLibrary::Conv_CameraShakePlaySpace(uint8_t CameraAnimationPlaySpace){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraShakePlaySpace");

	FConv_CameraShakePlaySpace parms{};	
	parms.CameraAnimationPlaySpace = CameraAnimationPlaySpace;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UGameplayCamerasFunctionLibrary::Conv_CameraAnimationPlaySpace(uint8_t CameraShakePlaySpace){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraAnimationPlaySpace");

	FConv_CameraAnimationPlaySpace parms{};	
	parms.CameraShakePlaySpace = CameraShakePlaySpace;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UCameraAnimationCameraModifier* UGameplayCamerasFunctionLibrary::Conv_CameraAnimationCameraModifier(struct APlayerCameraManager* PlayerCameraManager){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraAnimationCameraModifier");

	FConv_CameraAnimationCameraModifier parms{};	
	parms.PlayerCameraManager = PlayerCameraManager;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGameplayCamerasSubsystem::StopCameraAnimation(struct APlayerController* PlayerController, struct FCameraAnimationHandle& Handle, bool bImmediate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayCameras.GameplayCamerasSubsystem.StopCameraAnimation");

	FStopCameraAnimation parms{};	
	parms.PlayerController = PlayerController;
	parms.Handle = Handle;
	parms.bImmediate = bImmediate;

	ProcessEvent(fn, &parms);
}

void UGameplayCamerasSubsystem::StopAllCameraAnimationsOf(struct APlayerController* PlayerController, struct UCameraAnimationSequence* Sequence, bool bImmediate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimationsOf");

	FStopAllCameraAnimationsOf parms{};	
	parms.PlayerController = PlayerController;
	parms.Sequence = Sequence;
	parms.bImmediate = bImmediate;

	ProcessEvent(fn, &parms);
}

void UGameplayCamerasSubsystem::StopAllCameraAnimations(struct APlayerController* PlayerController, bool bImmediate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimations");

	FStopAllCameraAnimations parms{};	
	parms.PlayerController = PlayerController;
	parms.bImmediate = bImmediate;

	ProcessEvent(fn, &parms);
}

struct FCameraAnimationHandle UGameplayCamerasSubsystem::PlayCameraAnimation(struct APlayerController* PlayerController, struct UCameraAnimationSequence* Sequence, struct FCameraAnimationParams Params){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayCameras.GameplayCamerasSubsystem.PlayCameraAnimation");

	FPlayCameraAnimation parms{};	
	parms.PlayerController = PlayerController;
	parms.Sequence = Sequence;
	parms.Params = Params;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UGameplayCamerasSubsystem::IsCameraAnimationActive(struct APlayerController* PlayerController, struct FCameraAnimationHandle& Handle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayCameras.GameplayCamerasSubsystem.IsCameraAnimationActive");

	FIsCameraAnimationActive parms{};	
	parms.PlayerController = PlayerController;
	parms.Handle = Handle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

