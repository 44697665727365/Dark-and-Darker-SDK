#include "pch.h"
#include "SDK.h"

bool UARSessionConfig::ShouldResetTrackedObjects(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects");

	FShouldResetTrackedObjects parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UARSessionConfig::ShouldResetCameraTracking(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking");

	FShouldResetCameraTracking parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UARSessionConfig::ShouldRenderCameraOverlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay");

	FShouldRenderCameraOverlay parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UARSessionConfig::ShouldEnableCameraTracking(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking");

	FShouldEnableCameraTracking parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UARSessionConfig::ShouldEnableAutoFocus(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus");

	FShouldEnableAutoFocus parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UARSessionConfig::SetWorldMapData(struct TArray<char> WorldMapData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetWorldMapData");

	FSetWorldMapData parms{};	
	parms.WorldMapData = WorldMapData;

	ProcessEvent(fn, &parms);
}

void UARSessionConfig::SetSessionTrackingFeatureToEnable(uint8_t InSessionTrackingFeature){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable");

	FSetSessionTrackingFeatureToEnable parms{};	
	parms.InSessionTrackingFeature = InSessionTrackingFeature;

	ProcessEvent(fn, &parms);
}

void UARSessionConfig::SetSceneReconstructionMethod(uint8_t InSceneReconstructionMethod){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod");

	FSetSceneReconstructionMethod parms{};	
	parms.InSceneReconstructionMethod = InSceneReconstructionMethod;

	ProcessEvent(fn, &parms);
}

void UARSessionConfig::SetResetTrackedObjects(bool bNewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects");

	FSetResetTrackedObjects parms{};	
	parms.bNewValue = bNewValue;

	ProcessEvent(fn, &parms);
}

void UARSessionConfig::SetResetCameraTracking(bool bNewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetResetCameraTracking");

	FSetResetCameraTracking parms{};	
	parms.bNewValue = bNewValue;

	ProcessEvent(fn, &parms);
}

void UARSessionConfig::SetFaceTrackingUpdate(uint8_t InUpdate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate");

	FSetFaceTrackingUpdate parms{};	
	parms.InUpdate = InUpdate;

	ProcessEvent(fn, &parms);
}

void UARSessionConfig::SetFaceTrackingDirection(uint8_t InDirection){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection");

	FSetFaceTrackingDirection parms{};	
	parms.InDirection = InDirection;

	ProcessEvent(fn, &parms);
}

void UARSessionConfig::SetEnableAutoFocus(bool bNewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus");

	FSetEnableAutoFocus parms{};	
	parms.bNewValue = bNewValue;

	ProcessEvent(fn, &parms);
}

void UARSessionConfig::SetDesiredVideoFormat(struct FARVideoFormat NewFormat){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat");

	FSetDesiredVideoFormat parms{};	
	parms.NewFormat = NewFormat;

	ProcessEvent(fn, &parms);
}

void UARSessionConfig::SetCandidateObjectList(struct TArray<struct UARCandidateObject*>& InCandidateObjects){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetCandidateObjectList");

	FSetCandidateObjectList parms{};	
	parms.InCandidateObjects = InCandidateObjects;

	ProcessEvent(fn, &parms);
}

struct TArray<char> UARSessionConfig::GetWorldMapData(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetWorldMapData");

	FGetWorldMapData parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UARSessionConfig::GetWorldAlignment(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetWorldAlignment");

	FGetWorldAlignment parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UARSessionConfig::GetSessionType(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetSessionType");

	FGetSessionType parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UARSessionConfig::GetSceneReconstructionMethod(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod");

	FGetSceneReconstructionMethod parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UARSessionConfig::GetPlaneDetectionMode(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode");

	FGetPlaneDetectionMode parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UARSessionConfig::GetMaxNumSimultaneousImagesTracked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked");

	FGetMaxNumSimultaneousImagesTracked parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UARSessionConfig::GetLightEstimationMode(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetLightEstimationMode");

	FGetLightEstimationMode parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UARSessionConfig::GetFrameSyncMode(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFrameSyncMode");

	FGetFrameSyncMode parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UARSessionConfig::GetFaceTrackingUpdate(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate");

	FGetFaceTrackingUpdate parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UARSessionConfig::GetFaceTrackingDirection(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection");

	FGetFaceTrackingDirection parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UARSessionConfig::GetEnvironmentCaptureProbeType(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType");

	FGetEnvironmentCaptureProbeType parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UARSessionConfig::GetEnabledSessionTrackingFeature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature");

	FGetEnabledSessionTrackingFeature parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FARVideoFormat UARSessionConfig::GetDesiredVideoFormat(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat");

	FGetDesiredVideoFormat parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UARCandidateObject*> UARSessionConfig::GetCandidateObjectList(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetCandidateObjectList");

	FGetCandidateObjectList parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UARCandidateImage*> UARSessionConfig::GetCandidateImageList(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetCandidateImageList");

	FGetCandidateImageList parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UARSessionConfig::AddCandidateObject(struct UARCandidateObject* CandidateObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.AddCandidateObject");

	FAddCandidateObject parms{};	
	parms.CandidateObject = CandidateObject;

	ProcessEvent(fn, &parms);
}

void UARSessionConfig::AddCandidateImage(struct UARCandidateImage* NewCandidateImage){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.AddCandidateImage");

	FAddCandidateImage parms{};	
	parms.NewCandidateImage = NewCandidateImage;

	ProcessEvent(fn, &parms);
}

struct UARGeoTrackingSupport* UARGeoTrackingSupport::GetGeoTrackingSupport(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingSupport");

	FGetGeoTrackingSupport parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UARGeoTrackingSupport::GetGeoTrackingStateReason(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingStateReason");

	FGetGeoTrackingStateReason parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UARGeoTrackingSupport::GetGeoTrackingState(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingState");

	FGetGeoTrackingState parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UARGeoTrackingSupport::GetGeoTrackingAccuracy(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingAccuracy");

	FGetGeoTrackingAccuracy parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UARGeoTrackingSupport::AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, struct FString OptionalAnchorName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocationWithAltitude");

	FAddGeoAnchorAtLocationWithAltitude parms{};	
	parms.Longitude = Longitude;
	parms.Latitude = Latitude;
	parms.AltitudeMeters = AltitudeMeters;
	parms.OptionalAnchorName = OptionalAnchorName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UARGeoTrackingSupport::AddGeoAnchorAtLocation(float Longitude, float Latitude, struct FString OptionalAnchorName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocation");

	FAddGeoAnchorAtLocation parms{};	
	parms.Longitude = Longitude;
	parms.Latitude = Latitude;
	parms.OptionalAnchorName = OptionalAnchorName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UARBlueprintLibrary::UnpinComponent(struct USceneComponent* ComponentToUnpin){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.UnpinComponent");

	FUnpinComponent parms{};	
	parms.ComponentToUnpin = ComponentToUnpin;

	ProcessEvent(fn, &parms);
}

bool UARBlueprintLibrary::ToggleARCapture(bool bOnOff, uint8_t CaptureType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.ToggleARCapture");

	FToggleARCapture parms{};	
	parms.bOnOff = bOnOff;
	parms.CaptureType = CaptureType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UARBlueprintLibrary::StopARSession(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.StopARSession");

	FStopARSession parms{};	

	ProcessEvent(fn, &parms);
}

void UARBlueprintLibrary::StartARSession(struct UARSessionConfig* SessionConfig){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.StartARSession");

	FStartARSession parms{};	
	parms.SessionConfig = SessionConfig;

	ProcessEvent(fn, &parms);
}

void UARBlueprintLibrary::SetEnabledXRCamera(bool bOnOff){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.SetEnabledXRCamera");

	FSetEnabledXRCamera parms{};	
	parms.bOnOff = bOnOff;

	ProcessEvent(fn, &parms);
}

void UARBlueprintLibrary::SetARWorldScale(float InWorldScale){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.SetARWorldScale");

	FSetARWorldScale parms{};	
	parms.InWorldScale = InWorldScale;

	ProcessEvent(fn, &parms);
}

void UARBlueprintLibrary::SetARWorldOriginLocationAndRotation(struct FVector OriginLocation, struct FRotator OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.SetARWorldOriginLocationAndRotation");

	FSetARWorldOriginLocationAndRotation parms{};	
	parms.OriginLocation = OriginLocation;
	parms.OriginRotation = OriginRotation;
	parms.bIsTransformInWorldSpace = bIsTransformInWorldSpace;
	parms.bMaintainUpDirection = bMaintainUpDirection;

	ProcessEvent(fn, &parms);
}

void UARBlueprintLibrary::SetAlignmentTransform(struct FTransform& InAlignmentTransform){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform");

	FSetAlignmentTransform parms{};	
	parms.InAlignmentTransform = InAlignmentTransform;

	ProcessEvent(fn, &parms);
}

bool UARBlueprintLibrary::SaveARPinToLocalStore(struct FName InSaveName, struct UARPin* InPin){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.SaveARPinToLocalStore");

	FSaveARPinToLocalStore parms{};	
	parms.InSaveName = InSaveName;
	parms.InPin = InPin;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FIntPoint UARBlueprintLibrary::ResizeXRCamera(struct FIntPoint& InSize){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.ResizeXRCamera");

	FResizeXRCamera parms{};	
	parms.InSize = InSize;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UARBlueprintLibrary::RemovePin(struct UARPin* PinToRemove){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.RemovePin");

	FRemovePin parms{};	
	parms.PinToRemove = PinToRemove;

	ProcessEvent(fn, &parms);
}

void UARBlueprintLibrary::RemoveARPinFromLocalStore(struct FName InSaveName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.RemoveARPinFromLocalStore");

	FRemoveARPinFromLocalStore parms{};	
	parms.InSaveName = InSaveName;

	ProcessEvent(fn, &parms);
}

void UARBlueprintLibrary::RemoveAllARPinsFromLocalStore(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.RemoveAllARPinsFromLocalStore");

	FRemoveAllARPinsFromLocalStore parms{};	

	ProcessEvent(fn, &parms);
}

struct UARPin* UARBlueprintLibrary::PinComponentToTraceResult(struct USceneComponent* ComponentToPin, struct FARTraceResult& TraceResult, struct FName DebugName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult");

	FPinComponentToTraceResult parms{};	
	parms.ComponentToPin = ComponentToPin;
	parms.TraceResult = TraceResult;
	parms.DebugName = DebugName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UARBlueprintLibrary::PinComponentToARPin(struct USceneComponent* ComponentToPin, struct UARPin* Pin){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PinComponentToARPin");

	FPinComponentToARPin parms{};	
	parms.ComponentToPin = ComponentToPin;
	parms.Pin = Pin;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UARPin* UARBlueprintLibrary::PinComponent(struct USceneComponent* ComponentToPin, struct FTransform& PinToWorldTransform, struct UARTrackedGeometry* TrackedGeometry, struct FName DebugName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PinComponent");

	FPinComponent parms{};	
	parms.ComponentToPin = ComponentToPin;
	parms.PinToWorldTransform = PinToWorldTransform;
	parms.TrackedGeometry = TrackedGeometry;
	parms.DebugName = DebugName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UARBlueprintLibrary::PauseARSession(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PauseARSession");

	FPauseARSession parms{};	

	ProcessEvent(fn, &parms);
}

struct TMap<struct FName, struct UARPin*> UARBlueprintLibrary::LoadARPinsFromLocalStore(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.LoadARPinsFromLocalStore");

	FLoadARPinsFromLocalStore parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FARTraceResult> UARBlueprintLibrary::LineTraceTrackedObjects3D(struct FVector Start, struct FVector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D");

	FLineTraceTrackedObjects3D parms{};	
	parms.Start = Start;
	parms.End = End;
	parms.bTestFeaturePoints = bTestFeaturePoints;
	parms.bTestGroundPlane = bTestGroundPlane;
	parms.bTestPlaneExtents = bTestPlaneExtents;
	parms.bTestPlaneBoundaryPolygon = bTestPlaneBoundaryPolygon;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FARTraceResult> UARBlueprintLibrary::LineTraceTrackedObjects(struct FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects");

	FLineTraceTrackedObjects parms{};	
	parms.ScreenCoord = ScreenCoord;
	parms.bTestFeaturePoints = bTestFeaturePoints;
	parms.bTestGroundPlane = bTestGroundPlane;
	parms.bTestPlaneExtents = bTestPlaneExtents;
	parms.bTestPlaneBoundaryPolygon = bTestPlaneBoundaryPolygon;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UARBlueprintLibrary::IsSessionTypeSupported(uint8_t SessionType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported");

	FIsSessionTypeSupported parms{};	
	parms.SessionType = SessionType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UARBlueprintLibrary::IsSessionTrackingFeatureSupported(uint8_t SessionType, uint8_t SessionTrackingFeature){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported");

	FIsSessionTrackingFeatureSupported parms{};	
	parms.SessionType = SessionType;
	parms.SessionTrackingFeature = SessionTrackingFeature;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UARBlueprintLibrary::IsSceneReconstructionSupported(uint8_t SessionType, uint8_t SceneReconstructionMethod){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsSceneReconstructionSupported");

	FIsSceneReconstructionSupported parms{};	
	parms.SessionType = SessionType;
	parms.SceneReconstructionMethod = SceneReconstructionMethod;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UARBlueprintLibrary::IsARSupported(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsARSupported");

	FIsARSupported parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UARBlueprintLibrary::IsARPinLocalStoreSupported(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreSupported");

	FIsARPinLocalStoreSupported parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UARBlueprintLibrary::IsARPinLocalStoreReady(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreReady");

	FIsARPinLocalStoreReady parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UARBlueprintLibrary::GetWorldMappingStatus(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus");

	FGetWorldMappingStatus parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UARBlueprintLibrary::GetTrackingQualityReason(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason");

	FGetTrackingQualityReason parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UARBlueprintLibrary::GetTrackingQuality(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality");

	FGetTrackingQuality parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FARVideoFormat> UARBlueprintLibrary::GetSupportedVideoFormats(uint8_t SessionType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats");

	FGetSupportedVideoFormats parms{};	
	parms.SessionType = SessionType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UARSessionConfig* UARBlueprintLibrary::GetSessionConfig(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig");

	FGetSessionConfig parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FVector> UARBlueprintLibrary::GetPointCloud(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetPointCloud");

	FGetPointCloud parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UARTexture* UARBlueprintLibrary::GetPersonSegmentationImage(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage");

	FGetPersonSegmentationImage parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UARTexture* UARBlueprintLibrary::GetPersonSegmentationDepthImage(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage");

	FGetPersonSegmentationDepthImage parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UARBlueprintLibrary::GetObjectClassificationAtLocation(struct FVector& InWorldLocation, uint8_t& OutClassification, struct FVector& OutClassificationLocation, float MaxLocationDiff){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetObjectClassificationAtLocation");

	FGetObjectClassificationAtLocation parms{};	
	parms.InWorldLocation = InWorldLocation;
	parms.OutClassification = OutClassification;
	parms.OutClassificationLocation = OutClassificationLocation;
	parms.MaxLocationDiff = MaxLocationDiff;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UARBlueprintLibrary::GetNumberOfTrackedFacesSupported(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetNumberOfTrackedFacesSupported");

	FGetNumberOfTrackedFacesSupported parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UARLightEstimate* UARBlueprintLibrary::GetCurrentLightEstimate(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate");

	FGetCurrentLightEstimate parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UARBlueprintLibrary::GetCameraIntrinsics(struct FARCameraIntrinsics& OutCameraIntrinsics){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCameraIntrinsics");

	FGetCameraIntrinsics parms{};	
	parms.OutCameraIntrinsics = OutCameraIntrinsics;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UARTextureCameraImage* UARBlueprintLibrary::GetCameraImage(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCameraImage");

	FGetCameraImage parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UARTextureCameraDepth* UARBlueprintLibrary::GetCameraDepth(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth");

	FGetCameraDepth parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UARBlueprintLibrary::GetARWorldScale(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetARWorldScale");

	FGetARWorldScale parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UARTexture* UARBlueprintLibrary::GetARTexture(uint8_t TextureType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetARTexture");

	FGetARTexture parms{};	
	parms.TextureType = TextureType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FARSessionStatus UARBlueprintLibrary::GetARSessionStatus(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus");

	FGetARSessionStatus parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UARTrackedPose*> UARBlueprintLibrary::GetAllTrackedPoses(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses");

	FGetAllTrackedPoses parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UARTrackedPoint*> UARBlueprintLibrary::GetAllTrackedPoints(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints");

	FGetAllTrackedPoints parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UARPlaneGeometry*> UARBlueprintLibrary::GetAllTrackedPlanes(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes");

	FGetAllTrackedPlanes parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UARTrackedImage*> UARBlueprintLibrary::GetAllTrackedImages(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages");

	FGetAllTrackedImages parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UAREnvironmentCaptureProbe*> UARBlueprintLibrary::GetAllTrackedEnvironmentCaptureProbes(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes");

	FGetAllTrackedEnvironmentCaptureProbes parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FARPose2D> UARBlueprintLibrary::GetAllTracked2DPoses(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses");

	FGetAllTracked2DPoses parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UARPin*> UARBlueprintLibrary::GetAllPins(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllPins");

	FGetAllPins parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UARTrackedGeometry*> UARBlueprintLibrary::GetAllGeometriesByClass(UARTrackedGeometry* GeometryClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllGeometriesByClass");

	FGetAllGeometriesByClass parms{};	
	parms.GeometryClass = GeometryClass;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UARTrackedGeometry*> UARBlueprintLibrary::GetAllGeometries(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries");

	FGetAllGeometries parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform UARBlueprintLibrary::GetAlignmentTransform(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAlignmentTransform");

	FGetAlignmentTransform parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UARTrackedPoint*> UARBlueprintLibrary::FindTrackedPointsByName(struct FString PointName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.FindTrackedPointsByName");

	FFindTrackedPointsByName parms{};	
	parms.PointName = PointName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UARBlueprintLibrary::DebugDrawTrackedGeometry(struct UARTrackedGeometry* TrackedGeometry, struct UObject* WorldContextObject, struct FLinearColor Color, float OutlineThickness, float PersistForSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry");

	FDebugDrawTrackedGeometry parms{};	
	parms.TrackedGeometry = TrackedGeometry;
	parms.WorldContextObject = WorldContextObject;
	parms.Color = Color;
	parms.OutlineThickness = OutlineThickness;
	parms.PersistForSeconds = PersistForSeconds;

	ProcessEvent(fn, &parms);
}

void UARBlueprintLibrary::DebugDrawPin(struct UARPin* ARPin, struct UObject* WorldContextObject, struct FLinearColor Color, float Scale, float PersistForSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin");

	FDebugDrawPin parms{};	
	parms.ARPin = ARPin;
	parms.WorldContextObject = WorldContextObject;
	parms.Color = Color;
	parms.Scale = Scale;
	parms.PersistForSeconds = PersistForSeconds;

	ProcessEvent(fn, &parms);
}

void UARBlueprintLibrary::CalculateClosestIntersection(struct TArray<struct FVector>& StartPoints, struct TArray<struct FVector>& EndPoints, struct FVector& ClosestIntersection){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.CalculateClosestIntersection");

	FCalculateClosestIntersection parms{};	
	parms.StartPoints = StartPoints;
	parms.EndPoints = EndPoints;
	parms.ClosestIntersection = ClosestIntersection;

	ProcessEvent(fn, &parms);
}

void UARBlueprintLibrary::CalculateAlignmentTransform(struct FTransform& TransformInFirstCoordinateSystem, struct FTransform& TransformInSecondCoordinateSystem, struct FTransform& AlignmentTransform){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.CalculateAlignmentTransform");

	FCalculateAlignmentTransform parms{};	
	parms.TransformInFirstCoordinateSystem = TransformInFirstCoordinateSystem;
	parms.TransformInSecondCoordinateSystem = TransformInSecondCoordinateSystem;
	parms.AlignmentTransform = AlignmentTransform;

	ProcessEvent(fn, &parms);
}

bool UARBlueprintLibrary::AddTrackedPointWithName(struct FTransform& WorldTransform, struct FString PointName, bool bDeletePointsWithSameName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.AddTrackedPointWithName");

	FAddTrackedPointWithName parms{};	
	parms.WorldTransform = WorldTransform;
	parms.PointName = PointName;
	parms.bDeletePointsWithSameName = bDeletePointsWithSameName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UARCandidateImage* UARBlueprintLibrary::AddRuntimeCandidateImage(struct UARSessionConfig* SessionConfig, struct UTexture2D* CandidateTexture, struct FString FriendlyName, float PhysicalWidth){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage");

	FAddRuntimeCandidateImage parms{};	
	parms.SessionConfig = SessionConfig;
	parms.CandidateTexture = CandidateTexture;
	parms.FriendlyName = FriendlyName;
	parms.PhysicalWidth = PhysicalWidth;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UARBlueprintLibrary::AddManualEnvironmentCaptureProbe(struct FVector Location, struct FVector Extent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe");

	FAddManualEnvironmentCaptureProbe parms{};	
	parms.Location = Location;
	parms.Extent = Extent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UARComponent* AARActor::AddARComponent(UARComponent* InComponentClass, struct FGuid& NativeID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARActor.AddARComponent");

	FAddARComponent parms{};	
	parms.InComponentClass = InComponentClass;
	parms.NativeID = NativeID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UARPlaneComponent::SetPlaneComponentDebugMode(uint8_t NewDebugMode){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode");

	FSetPlaneComponentDebugMode parms{};	
	parms.NewDebugMode = NewDebugMode;

	ProcessEvent(fn, &parms);
}

void UARPlaneComponent::SetObjectClassificationDebugColors(struct TMap<uint8_t, struct FLinearColor>& InColors){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneComponent.SetObjectClassificationDebugColors");

	FSetObjectClassificationDebugColors parms{};	
	parms.InColors = InColors;

	ProcessEvent(fn, &parms);
}

void UARPlaneComponent::ServerUpdatePayload(struct FARPlaneUpdatePayload NewPayload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneComponent.ServerUpdatePayload");

	FServerUpdatePayload parms{};	
	parms.NewPayload = NewPayload;

	ProcessEvent(fn, &parms);
}

void UARPlaneComponent::ReceiveUpdate(struct FARPlaneUpdatePayload& Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneComponent.ReceiveUpdate");

	FReceiveUpdate parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UARPlaneComponent::ReceiveAdd(struct FARPlaneUpdatePayload& Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneComponent.ReceiveAdd");

	FReceiveAdd parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

struct TMap<uint8_t, struct FLinearColor> UARPlaneComponent::GetObjectClassificationDebugColors(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneComponent.GetObjectClassificationDebugColors");

	FGetObjectClassificationDebugColors parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UARTrackedGeometry* UARTraceResultLibrary::GetTrackedGeometry(struct FARTraceResult& TraceResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry");

	FGetTrackedGeometry parms{};	
	parms.TraceResult = TraceResult;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UARTraceResultLibrary::GetTraceChannel(struct FARTraceResult& TraceResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel");

	FGetTraceChannel parms{};	
	parms.TraceResult = TraceResult;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform UARTraceResultLibrary::GetLocalTransform(struct FARTraceResult& TraceResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetLocalTransform");

	FGetLocalTransform parms{};	
	parms.TraceResult = TraceResult;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform UARTraceResultLibrary::GetLocalToWorldTransform(struct FARTraceResult& TraceResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform");

	FGetLocalToWorldTransform parms{};	
	parms.TraceResult = TraceResult;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform UARTraceResultLibrary::GetLocalToTrackingTransform(struct FARTraceResult& TraceResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform");

	FGetLocalToTrackingTransform parms{};	
	parms.TraceResult = TraceResult;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UARTraceResultLibrary::GetDistanceFromCamera(struct FARTraceResult& TraceResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera");

	FGetDistanceFromCamera parms{};	
	parms.TraceResult = TraceResult;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGetGeoLocationAsyncTaskBlueprintProxy::GetGeoLocationDelegate__DelegateSignature(float Longitude, float Latitude, float Altitude, struct FString Error){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature");

	FGetGeoLocationDelegate__DelegateSignature parms{};	
	parms.Longitude = Longitude;
	parms.Latitude = Latitude;
	parms.Altitude = Altitude;
	parms.Error = Error;

	ProcessEvent(fn, &parms);
}

struct UGetGeoLocationAsyncTaskBlueprintProxy* UGetGeoLocationAsyncTaskBlueprintProxy::GetGeoLocationAtWorldPosition(struct UObject* WorldContextObject, struct FVector& WorldPosition){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition");

	FGetGeoLocationAtWorldPosition parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.WorldPosition = WorldPosition;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UARSaveWorldAsyncTaskBlueprintProxy* UARSaveWorldAsyncTaskBlueprintProxy::ARSaveWorld(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld");

	FARSaveWorld parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UARComponent::UpdateVisualization(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARComponent.UpdateVisualization");

	FUpdateVisualization parms{};	

	ProcessEvent(fn, &parms);
}

void UARComponent::SetNativeID(struct FGuid NativeID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARComponent.SetNativeID");

	FSetNativeID parms{};	
	parms.NativeID = NativeID;

	ProcessEvent(fn, &parms);
}

void UARComponent::ReceiveRemove(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARComponent.ReceiveRemove");

	FReceiveRemove parms{};	

	ProcessEvent(fn, &parms);
}

void UARComponent::OnRep_Payload(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARComponent.OnRep_Payload");

	FOnRep_Payload parms{};	

	ProcessEvent(fn, &parms);
}

struct UMRMeshComponent* UARComponent::GetMRMesh(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARComponent.GetMRMesh");

	FGetMRMesh parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UARGetCandidateObjectAsyncTaskBlueprintProxy* UARGetCandidateObjectAsyncTaskBlueprintProxy::ARGetCandidateObject(struct UObject* WorldContextObject, struct FVector Location, struct FVector Extent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject");

	FARGetCandidateObject parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.Location = Location;
	parms.Extent = Extent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void AARSharedWorldPlayerController::ServerMarkReadyForReceiving(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving");

	FServerMarkReadyForReceiving parms{};	

	ProcessEvent(fn, &parms);
}

void AARSharedWorldPlayerController::ClientUpdatePreviewImageData(int32_t Offset, struct TArray<char> Buffer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData");

	FClientUpdatePreviewImageData parms{};	
	parms.Offset = Offset;
	parms.Buffer = Buffer;

	ProcessEvent(fn, &parms);
}

void AARSharedWorldPlayerController::ClientUpdateARWorldData(int32_t Offset, struct TArray<char> Buffer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData");

	FClientUpdateARWorldData parms{};	
	parms.Offset = Offset;
	parms.Buffer = Buffer;

	ProcessEvent(fn, &parms);
}

void AARSharedWorldPlayerController::ClientInitSharedWorld(int32_t PreviewImageSize, int32_t ARWorldDataSize){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld");

	FClientInitSharedWorld parms{};	
	parms.PreviewImageSize = PreviewImageSize;
	parms.ARWorldDataSize = ARWorldDataSize;

	ProcessEvent(fn, &parms);
}

void AARSharedWorldGameMode::SetPreviewImageData(struct TArray<char> ImageData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData");

	FSetPreviewImageData parms{};	
	parms.ImageData = ImageData;

	ProcessEvent(fn, &parms);
}

void AARSharedWorldGameMode::SetARWorldSharingIsReady(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady");

	FSetARWorldSharingIsReady parms{};	

	ProcessEvent(fn, &parms);
}

void AARSharedWorldGameMode::SetARSharedWorldData(struct TArray<char> ARWorldData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData");

	FSetARSharedWorldData parms{};	
	parms.ARWorldData = ARWorldData;

	ProcessEvent(fn, &parms);
}

struct AARSharedWorldGameState* AARSharedWorldGameMode::GetARSharedWorldGameState(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState");

	FGetARSharedWorldGameState parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UARPointComponent::ServerUpdatePayload(struct FARPointUpdatePayload NewPayload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARPointComponent.ServerUpdatePayload");

	FServerUpdatePayload parms{};	
	parms.NewPayload = NewPayload;

	ProcessEvent(fn, &parms);
}

void UARPointComponent::ReceiveUpdate(struct FARPointUpdatePayload& Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARPointComponent.ReceiveUpdate");

	FReceiveUpdate parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UARPointComponent::ReceiveAdd(struct FARPointUpdatePayload& Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARPointComponent.ReceiveAdd");

	FReceiveAdd parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UARFaceComponent::SetFaceComponentDebugMode(uint8_t NewDebugMode){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode");

	FSetFaceComponentDebugMode parms{};	
	parms.NewDebugMode = NewDebugMode;

	ProcessEvent(fn, &parms);
}

void UARFaceComponent::ServerUpdatePayload(struct FARFaceUpdatePayload NewPayload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceComponent.ServerUpdatePayload");

	FServerUpdatePayload parms{};	
	parms.NewPayload = NewPayload;

	ProcessEvent(fn, &parms);
}

void UARFaceComponent::ReceiveUpdate(struct FARFaceUpdatePayload& Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceComponent.ReceiveUpdate");

	FReceiveUpdate parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UARFaceComponent::ReceiveAdd(struct FARFaceUpdatePayload& Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceComponent.ReceiveAdd");

	FReceiveAdd parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UARObjectComponent::ServerUpdatePayload(struct FARObjectUpdatePayload NewPayload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARObjectComponent.ServerUpdatePayload");

	FServerUpdatePayload parms{};	
	parms.NewPayload = NewPayload;

	ProcessEvent(fn, &parms);
}

void UARObjectComponent::ReceiveUpdate(struct FARObjectUpdatePayload& Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARObjectComponent.ReceiveUpdate");

	FReceiveUpdate parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UARObjectComponent::ReceiveAdd(struct FARObjectUpdatePayload& Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARObjectComponent.ReceiveAdd");

	FReceiveAdd parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UARImageComponent::SetImageComponentDebugMode(uint8_t NewDebugMode){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARImageComponent.SetImageComponentDebugMode");

	FSetImageComponentDebugMode parms{};	
	parms.NewDebugMode = NewDebugMode;

	ProcessEvent(fn, &parms);
}

void UARImageComponent::ServerUpdatePayload(struct FARImageUpdatePayload NewPayload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARImageComponent.ServerUpdatePayload");

	FServerUpdatePayload parms{};	
	parms.NewPayload = NewPayload;

	ProcessEvent(fn, &parms);
}

void UARImageComponent::ReceiveUpdate(struct FARImageUpdatePayload& Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARImageComponent.ReceiveUpdate");

	FReceiveUpdate parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UARImageComponent::ReceiveAdd(struct FARImageUpdatePayload& Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARImageComponent.ReceiveAdd");

	FReceiveAdd parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UARQRCodeComponent::SetQRCodeComponentDebugMode(uint8_t NewDebugMode){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode");

	FSetQRCodeComponentDebugMode parms{};	
	parms.NewDebugMode = NewDebugMode;

	ProcessEvent(fn, &parms);
}

void UARQRCodeComponent::ServerUpdatePayload(struct FARQRCodeUpdatePayload NewPayload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARQRCodeComponent.ServerUpdatePayload");

	FServerUpdatePayload parms{};	
	parms.NewPayload = NewPayload;

	ProcessEvent(fn, &parms);
}

void UARQRCodeComponent::ReceiveUpdate(struct FARQRCodeUpdatePayload& Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARQRCodeComponent.ReceiveUpdate");

	FReceiveUpdate parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UARQRCodeComponent::ReceiveAdd(struct FARQRCodeUpdatePayload& Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARQRCodeComponent.ReceiveAdd");

	FReceiveAdd parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UARPoseComponent::SetPoseComponentDebugMode(uint8_t NewDebugMode){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode");

	FSetPoseComponentDebugMode parms{};	
	parms.NewDebugMode = NewDebugMode;

	ProcessEvent(fn, &parms);
}

void UARPoseComponent::ServerUpdatePayload(struct FARPoseUpdatePayload NewPayload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARPoseComponent.ServerUpdatePayload");

	FServerUpdatePayload parms{};	
	parms.NewPayload = NewPayload;

	ProcessEvent(fn, &parms);
}

void UARPoseComponent::ReceiveUpdate(struct FARPoseUpdatePayload& Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARPoseComponent.ReceiveUpdate");

	FReceiveUpdate parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UARPoseComponent::ReceiveAdd(struct FARPoseUpdatePayload& Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARPoseComponent.ReceiveAdd");

	FReceiveAdd parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UAREnvironmentProbeComponent::ServerUpdatePayload(struct FAREnvironmentProbeUpdatePayload NewPayload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentProbeComponent.ServerUpdatePayload");

	FServerUpdatePayload parms{};	
	parms.NewPayload = NewPayload;

	ProcessEvent(fn, &parms);
}

void UAREnvironmentProbeComponent::ReceiveUpdate(struct FAREnvironmentProbeUpdatePayload& Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentProbeComponent.ReceiveUpdate");

	FReceiveUpdate parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UAREnvironmentProbeComponent::ReceiveAdd(struct FAREnvironmentProbeUpdatePayload& Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentProbeComponent.ReceiveAdd");

	FReceiveAdd parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

bool UARMeshGeometry::GetObjectClassificationAtLocation(struct FVector& InWorldLocation, uint8_t& OutClassification, struct FVector& OutClassificationLocation, float MaxLocationDiff){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARMeshGeometry.GetObjectClassificationAtLocation");

	FGetObjectClassificationAtLocation parms{};	
	parms.InWorldLocation = InWorldLocation;
	parms.OutClassification = OutClassification;
	parms.OutClassificationLocation = OutClassificationLocation;
	parms.MaxLocationDiff = MaxLocationDiff;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UARMeshComponent::ServerUpdatePayload(struct FARMeshUpdatePayload NewPayload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARMeshComponent.ServerUpdatePayload");

	FServerUpdatePayload parms{};	
	parms.NewPayload = NewPayload;

	ProcessEvent(fn, &parms);
}

void UARMeshComponent::ReceiveUpdate(struct FARMeshUpdatePayload& Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARMeshComponent.ReceiveUpdate");

	FReceiveUpdate parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UARMeshComponent::ReceiveAdd(struct FARMeshUpdatePayload& Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARMeshComponent.ReceiveAdd");

	FReceiveAdd parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

bool UARTrackedGeometry::IsTracked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.IsTracked");

	FIsTracked parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UARTrackedGeometry::HasSpatialMeshUsageFlag(uint8_t InFlag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.HasSpatialMeshUsageFlag");

	FHasSpatialMeshUsageFlag parms{};	
	parms.InFlag = InFlag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMRMeshComponent* UARTrackedGeometry::GetUnderlyingMesh(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh");

	FGetUnderlyingMesh parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UARTrackedGeometry::GetTrackingState(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetTrackingState");

	FGetTrackingState parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UARTrackedGeometry::GetObjectClassification(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetObjectClassification");

	FGetObjectClassification parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UARTrackedGeometry::GetName(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetName");

	FGetName parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform UARTrackedGeometry::GetLocalToWorldTransform(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform");

	FGetLocalToWorldTransform parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform UARTrackedGeometry::GetLocalToTrackingTransform(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform");

	FGetLocalToTrackingTransform parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UARTrackedGeometry::GetLastUpdateTimestamp(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp");

	FGetLastUpdateTimestamp parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UARTrackedGeometry::GetLastUpdateFrameNumber(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber");

	FGetLastUpdateFrameNumber parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FName UARTrackedGeometry::GetDebugName(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetDebugName");

	FGetDebugName parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UARGeoAnchorComponent::SetGeoAnchorComponentDebugMode(uint8_t NewDebugMode){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode");

	FSetGeoAnchorComponentDebugMode parms{};	
	parms.NewDebugMode = NewDebugMode;

	ProcessEvent(fn, &parms);
}

void UARGeoAnchorComponent::ServerUpdatePayload(struct FARGeoAnchorUpdatePayload NewPayload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload");

	FServerUpdatePayload parms{};	
	parms.NewPayload = NewPayload;

	ProcessEvent(fn, &parms);
}

void UARGeoAnchorComponent::ReceiveUpdate(struct FARGeoAnchorUpdatePayload& Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate");

	FReceiveUpdate parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UARGeoAnchorComponent::ReceiveAdd(struct FARGeoAnchorUpdatePayload& Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchorComponent.ReceiveAdd");

	FReceiveAdd parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UARDependencyHandler::StartARSessionLatent(struct UObject* WorldContextObject, struct UARSessionConfig* SessionConfig, struct FLatentActionInfo LatentInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARDependencyHandler.StartARSessionLatent");

	FStartARSessionLatent parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.SessionConfig = SessionConfig;
	parms.LatentInfo = LatentInfo;

	ProcessEvent(fn, &parms);
}

void UARDependencyHandler::RequestARSessionPermission(struct UObject* WorldContextObject, struct UARSessionConfig* SessionConfig, struct FLatentActionInfo LatentInfo, uint8_t& OutPermissionResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARDependencyHandler.RequestARSessionPermission");

	FRequestARSessionPermission parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.SessionConfig = SessionConfig;
	parms.LatentInfo = LatentInfo;
	parms.OutPermissionResult = OutPermissionResult;

	ProcessEvent(fn, &parms);
}

void UARDependencyHandler::InstallARService(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, uint8_t& OutInstallResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARDependencyHandler.InstallARService");

	FInstallARService parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.LatentInfo = LatentInfo;
	parms.OutInstallResult = OutInstallResult;

	ProcessEvent(fn, &parms);
}

struct UARDependencyHandler* UARDependencyHandler::GetARDependencyHandler(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARDependencyHandler.GetARDependencyHandler");

	FGetARDependencyHandler parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UARDependencyHandler::CheckARServiceAvailability(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, uint8_t& OutAvailability){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARDependencyHandler.CheckARServiceAvailability");

	FCheckARServiceAvailability parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.LatentInfo = LatentInfo;
	parms.OutAvailability = OutAvailability;

	ProcessEvent(fn, &parms);
}

void UARCandidateObject::SetFriendlyName(struct FString NewName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.SetFriendlyName");

	FSetFriendlyName parms{};	
	parms.NewName = NewName;

	ProcessEvent(fn, &parms);
}

void UARCandidateObject::SetCandidateObjectData(struct TArray<char>& InCandidateObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.SetCandidateObjectData");

	FSetCandidateObjectData parms{};	
	parms.InCandidateObject = InCandidateObject;

	ProcessEvent(fn, &parms);
}

void UARCandidateObject::SetBoundingBox(struct FBox& InBoundingBox){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.SetBoundingBox");

	FSetBoundingBox parms{};	
	parms.InBoundingBox = InBoundingBox;

	ProcessEvent(fn, &parms);
}

struct FString UARCandidateObject::GetFriendlyName(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetFriendlyName");

	FGetFriendlyName parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<char> UARCandidateObject::GetCandidateObjectData(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetCandidateObjectData");

	FGetCandidateObjectData parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FBox UARCandidateObject::GetBoundingBox(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetBoundingBox");

	FGetBoundingBox parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void AARSkyLight::SetEnvironmentCaptureProbe(struct UAREnvironmentCaptureProbe* InCaptureProbe){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe");

	FSetEnvironmentCaptureProbe parms{};	
	parms.InCaptureProbe = InCaptureProbe;

	ProcessEvent(fn, &parms);
}

void UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::GeoTrackingAvailabilityDelegate__DelegateSignature(bool bIsAvailable, struct FString Error){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature");

	FGeoTrackingAvailabilityDelegate__DelegateSignature parms{};	
	parms.bIsAvailable = bIsAvailable;
	parms.Error = Error;

	ProcessEvent(fn, &parms);
}

struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::CheckGeoTrackingAvailabilityAtLocation(struct UObject* WorldContextObject, float Longitude, float Latitude){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation");

	FCheckGeoTrackingAvailabilityAtLocation parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.Longitude = Longitude;
	parms.Latitude = Latitude;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::CheckGeoTrackingAvailability(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability");

	FCheckGeoTrackingAvailability parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UARLifeCycleComponent::ServerSpawnARActor(UObject* ComponentClass, struct FGuid NativeID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor");

	FServerSpawnARActor parms{};	
	parms.ComponentClass = ComponentClass;
	parms.NativeID = NativeID;

	ProcessEvent(fn, &parms);
}

void UARLifeCycleComponent::ServerDestroyARActor(struct AARActor* Actor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor");

	FServerDestroyARActor parms{};	
	parms.Actor = Actor;

	ProcessEvent(fn, &parms);
}

void UARLifeCycleComponent::InstanceARActorToBeDestroyedDelegate__DelegateSignature(struct AARActor* Actor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature");

	FInstanceARActorToBeDestroyedDelegate__DelegateSignature parms{};	
	parms.Actor = Actor;

	ProcessEvent(fn, &parms);
}

void UARLifeCycleComponent::InstanceARActorSpawnedDelegate__DelegateSignature(UObject* ComponentClass, struct FGuid NativeID, struct AARActor* SpawnedActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature");

	FInstanceARActorSpawnedDelegate__DelegateSignature parms{};	
	parms.ComponentClass = ComponentClass;
	parms.NativeID = NativeID;
	parms.SpawnedActor = SpawnedActor;

	ProcessEvent(fn, &parms);
}

struct UARPlaneGeometry* UARPlaneGeometry::GetSubsumedBy(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy");

	FGetSubsumedBy parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UARPlaneGeometry::GetOrientation(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetOrientation");

	FGetOrientation parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector UARPlaneGeometry::GetExtent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetExtent");

	FGetExtent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector UARPlaneGeometry::GetCenter(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetCenter");

	FGetCenter parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FVector> UARPlaneGeometry::GetBoundaryPolygonInLocalSpace(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace");

	FGetBoundaryPolygonInLocalSpace parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UARBasicLightEstimate::GetAmbientIntensityLumens(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens");

	FGetAmbientIntensityLumens parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UARBasicLightEstimate::GetAmbientColorTemperatureKelvin(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin");

	FGetAmbientColorTemperatureKelvin parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FLinearColor UARBasicLightEstimate::GetAmbientColor(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor");

	FGetAmbientColor parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UARPin::GetTrackingState(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetTrackingState");

	FGetTrackingState parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UARTrackedGeometry* UARPin::GetTrackedGeometry(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetTrackedGeometry");

	FGetTrackedGeometry parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct USceneComponent* UARPin::GetPinnedComponent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetPinnedComponent");

	FGetPinnedComponent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform UARPin::GetLocalToWorldTransform(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetLocalToWorldTransform");

	FGetLocalToWorldTransform parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform UARPin::GetLocalToTrackingTransform(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetLocalToTrackingTransform");

	FGetLocalToTrackingTransform parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FName UARPin::GetDebugName(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetDebugName");

	FGetDebugName parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UARPin::DebugDraw(struct UWorld* World, struct FLinearColor& Color, float Scale, float PersistForSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.DebugDraw");

	FDebugDraw parms{};	
	parms.World = World;
	parms.Color = Color;
	parms.Scale = Scale;
	parms.PersistForSeconds = PersistForSeconds;

	ProcessEvent(fn, &parms);
}

void AARSharedWorldGameState::K2_OnARWorldMapIsReady(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady");

	FK2_OnARWorldMapIsReady parms{};	

	ProcessEvent(fn, &parms);
}

float UARGeoAnchor::GetLongitude(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchor.GetLongitude");

	FGetLongitude parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UARGeoAnchor::GetLatitude(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchor.GetLatitude");

	FGetLatitude parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UARGeoAnchor::GetAltitudeSource(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchor.GetAltitudeSource");

	FGetAltitudeSource parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UARGeoAnchor::GetAltitudeMeters(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchor.GetAltitudeMeters");

	FGetAltitudeMeters parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UARCandidateObject* UARTrackedObject::GetDetectedObject(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedObject.GetDetectedObject");

	FGetDetectedObject parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector2D UARTrackedImage::GetEstimateSize(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedImage.GetEstimateSize");

	FGetEstimateSize parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UARCandidateImage* UARTrackedImage::GetDetectedImage(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedImage.GetDetectedImage");

	FGetDetectedImage parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UARCandidateImage::GetPhysicalWidth(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetPhysicalWidth");

	FGetPhysicalWidth parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UARCandidateImage::GetPhysicalHeight(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetPhysicalHeight");

	FGetPhysicalHeight parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UARCandidateImage::GetOrientation(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetOrientation");

	FGetOrientation parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UARCandidateImage::GetFriendlyName(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetFriendlyName");

	FGetFriendlyName parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UTexture2D* UARCandidateImage::GetCandidateTexture(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetCandidateTexture");

	FGetCandidateTexture parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform UARFaceGeometry::GetWorldSpaceEyeTransform(uint8_t Eye){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform");

	FGetWorldSpaceEyeTransform parms{};	
	parms.Eye = Eye;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform UARFaceGeometry::GetLocalSpaceEyeTransform(uint8_t Eye){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform");

	FGetLocalSpaceEyeTransform parms{};	
	parms.Eye = Eye;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UARFaceGeometry::GetBlendShapeValue(uint8_t BlendShape){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue");

	FGetBlendShapeValue parms{};	
	parms.BlendShape = BlendShape;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TMap<uint8_t, float> UARFaceGeometry::GetBlendShapes(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetBlendShapes");

	FGetBlendShapes parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector UAREnvironmentCaptureProbe::GetExtent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent");

	FGetExtent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAREnvironmentCaptureProbeTexture* UAREnvironmentCaptureProbe::GetEnvironmentCaptureTexture(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture");

	FGetEnvironmentCaptureTexture parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FARPose3D UARTrackedPose::GetTrackedPoseData(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedPose.GetTrackedPoseData");

	FGetTrackedPoseData parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

