#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData
struct FClientUpdateARWorldData
{
	int32_t Offset;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<char> Buffer;  // 0x8 (0x8)


}; 
 
 // Function AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor
struct FServerDestroyARActor
{
	struct AARActor* Actor;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.CalculateAlignmentTransform
struct FCalculateAlignmentTransform
{
	struct FTransform TransformInFirstCoordinateSystem;  // 0x0 (0x0)
	struct FTransform TransformInSecondCoordinateSystem;  // 0x60 (0x60)
	struct FTransform AlignmentTransform;  // 0xC0 (0xC0)


}; 
 
 // ScriptStruct AugmentedReality.ARImageUpdatePayload
struct FARImageUpdatePayload
{
	struct FARSessionPayload SessionPayload;  // 0x0 (0x0)
	char pad_24[8];  // 0x18 (0x18)
	struct FTransform WorldTransform;  // 0x20 (0x20)
	struct UARCandidateImage* DetectedImage;  // 0x80 (0x80)
	struct FVector2D EstimatedSize;  // 0x88 (0x88)
	char pad_152[8];  // 0x98 (0x98)


}; 
 
 // ScriptStruct AugmentedReality.ARSessionPayload
struct FARSessionPayload
{
	int32_t ConfigFlags;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UMaterialInterface* DefaultMeshMaterial;  // 0x8 (0x8)
	struct UMaterialInterface* DefaultWireframeMeshMaterial;  // 0x10 (0x10)


}; 
 
 // DelegateFunction AugmentedReality.TrackableDelegate__DelegateSignature
struct FTrackableDelegate__DelegateSignature
{
	struct UARTrackedGeometry* TrackedGeometry;  // 0x0 (0x0)


}; 
 
 // DelegateFunction AugmentedReality.ARGetCandidateObjectPin__DelegateSignature
struct FARGetCandidateObjectPin__DelegateSignature
{
	struct UARCandidateObject* SavedObject;  // 0x0 (0x0)


}; 
 
 // DelegateFunction AugmentedReality.ARSaveWorldPin__DelegateSignature
struct FARSaveWorldPin__DelegateSignature
{
	struct TArray<char> SavedWorld;  // 0x0 (0x0)


}; 
 
 // DelegateFunction AugmentedReality.TrackablePlaneDelegate__DelegateSignature
struct FTrackablePlaneDelegate__DelegateSignature
{
	struct UARPlaneGeometry* TrackedPlane;  // 0x0 (0x0)


}; 
 
 // DelegateFunction AugmentedReality.OnARTrackingStateChanged__DelegateSignature
struct FOnARTrackingStateChanged__DelegateSignature
{
	uint8_t NewTrackingState;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition
struct FGetGeoLocationAtWorldPosition
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FVector WorldPosition;  // 0x8 (0x8)
	struct UGetGeoLocationAsyncTaskBlueprintProxy* ReturnValue;  // 0x20 (0x20)


}; 
 
 // DelegateFunction AugmentedReality.TrackableEnvProbeDelegate__DelegateSignature
struct FTrackableEnvProbeDelegate__DelegateSignature
{
	struct UAREnvironmentCaptureProbe* TrackedEnvProbe;  // 0x0 (0x0)


}; 
 
 // DelegateFunction AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature
struct FGetGeoLocationDelegate__DelegateSignature
{
	float Longitude;  // 0x0 (0x0)
	float Latitude;  // 0x4 (0x4)
	float Altitude;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FString Error;  // 0x10 (0x10)


}; 
 
 // DelegateFunction AugmentedReality.OnARTransformUpdated__DelegateSignature
struct FOnARTransformUpdated__DelegateSignature
{
	struct FTransform OldToNewTransform;  // 0x0 (0x0)


}; 
 
 // DelegateFunction AugmentedReality.TrackableFaceDelegate__DelegateSignature
struct FTrackableFaceDelegate__DelegateSignature
{
	struct UARFaceGeometry* TrackedFace;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints
struct FGetAllTrackedPoints
{
	struct TArray<struct UARTrackedPoint*> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode
struct FSetFaceComponentDebugMode
{
	uint8_t NewDebugMode;  // 0x0 (0x0)


}; 
 
 // DelegateFunction AugmentedReality.TrackableImageDelegate__DelegateSignature
struct FTrackableImageDelegate__DelegateSignature
{
	struct UARTrackedImage* TrackedImage;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AugmentedReality.ARCameraIntrinsics
struct FARCameraIntrinsics
{
	struct FIntPoint ImageResolution;  // 0x0 (0x0)
	struct FVector2D FocalLength;  // 0x8 (0x8)
	struct FVector2D PrincipalPoint;  // 0x18 (0x18)


}; 
 
 // DelegateFunction AugmentedReality.TrackableObjectDelegate__DelegateSignature
struct FTrackableObjectDelegate__DelegateSignature
{
	struct UARTrackedObject* TrackedObject;  // 0x0 (0x0)


}; 
 
 // DelegateFunction AugmentedReality.TrackablePointDelegate__DelegateSignature
struct FTrackablePointDelegate__DelegateSignature
{
	struct UARTrackedPoint* TrackedPoint;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.GetPointCloud
struct FGetPointCloud
{
	struct TArray<struct FVector> ReturnValue;  // 0x0 (0x0)


}; 
 
 // DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature
struct FInstanceARActorSpawnedDelegate__DelegateSignature
{
	UObject* ComponentClass;  // 0x0 (0x0)
	struct FGuid NativeID;  // 0x8 (0x8)
	struct AARActor* SpawnedActor;  // 0x18 (0x18)


}; 
 
 // ScriptStruct AugmentedReality.ARGeoAnchorUpdatePayload
struct FARGeoAnchorUpdatePayload
{
	struct FARSessionPayload SessionPayload;  // 0x0 (0x0)
	char pad_24[8];  // 0x18 (0x18)
	struct FTransform WorldTransform;  // 0x20 (0x20)
	float Longitude;  // 0x80 (0x80)
	float Latitude;  // 0x84 (0x84)
	float AltitudeMeters;  // 0x88 (0x88)
	uint8_t AltitudeSource;  // 0x8C (0x8C)
	char pad_141[3];  // 0x8D (0x8D)
	struct FString AnchorName;  // 0x90 (0x90)


}; 
 
 // DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature
struct FInstanceARActorToBeDestroyedDelegate__DelegateSignature
{
	struct AARActor* Actor;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARPin.GetTrackedGeometry
struct FGetTrackedGeometry
{
	struct UARTrackedGeometry* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor
struct FServerSpawnARActor
{
	UObject* ComponentClass;  // 0x0 (0x0)
	struct FGuid NativeID;  // 0x8 (0x8)


}; 
 
 // ScriptStruct AugmentedReality.ARSharedWorldReplicationState
struct FARSharedWorldReplicationState
{
	int32_t PreviewImageOffset;  // 0x0 (0x0)
	int32_t ARWorldOffset;  // 0x4 (0x4)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats
struct FGetSupportedVideoFormats
{
	uint8_t SessionType;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct TArray<struct FARVideoFormat> ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability
struct FCheckGeoTrackingAvailability
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation
struct FCheckGeoTrackingAvailabilityAtLocation
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	float Longitude;  // 0x8 (0x8)
	float Latitude;  // 0xC (0xC)
	struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses
struct FGetAllTracked2DPoses
{
	struct TArray<struct FARPose2D> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry
struct FDebugDrawTrackedGeometry
{
	struct UARTrackedGeometry* TrackedGeometry;  // 0x0 (0x0)
	struct UObject* WorldContextObject;  // 0x8 (0x8)
	struct FLinearColor Color;  // 0x10 (0x10)
	float OutlineThickness;  // 0x20 (0x20)
	float PersistForSeconds;  // 0x24 (0x24)


}; 
 
 // ScriptStruct AugmentedReality.ARMeshUpdatePayload
struct FARMeshUpdatePayload
{
	struct FARSessionPayload SessionPayload;  // 0x0 (0x0)
	char pad_24[8];  // 0x18 (0x18)
	struct FTransform WorldTransform;  // 0x20 (0x20)
	uint8_t ObjectClassification;  // 0x80 (0x80)
	char pad_129[15];  // 0x81 (0x81)


}; 
 
 // ScriptStruct AugmentedReality.ARFaceUpdatePayload
struct FARFaceUpdatePayload
{
	struct FARSessionPayload SessionPayload;  // 0x0 (0x0)
	struct FVector LeftEyePosition;  // 0x18 (0x18)
	struct FVector RightEyePosition;  // 0x30 (0x30)
	struct FVector LookAtTarget;  // 0x48 (0x48)


}; 
 
 // Function AugmentedReality.ARGeoAnchor.GetLongitude
struct FGetLongitude
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AugmentedReality.ARSessionStatus
struct FARSessionStatus
{
	struct FString AdditionalInfo;  // 0x0 (0x0)
	uint8_t Status;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // DelegateFunction AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature
struct FGeoTrackingAvailabilityDelegate__DelegateSignature
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsAvailable : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FString Error;  // 0x8 (0x8)


}; 
 
 // ScriptStruct AugmentedReality.TrackedGeometryGroup
struct FTrackedGeometryGroup
{
	struct AARActor* ARActor;  // 0x0 (0x0)
	struct UARComponent* ARComponent;  // 0x8 (0x8)
	struct UARTrackedGeometry* TrackedGeometry;  // 0x10 (0x10)


}; 
 
 // ScriptStruct AugmentedReality.ARPlaneUpdatePayload
struct FARPlaneUpdatePayload
{
	struct FARSessionPayload SessionPayload;  // 0x0 (0x0)
	char pad_24[8];  // 0x18 (0x18)
	struct FTransform WorldTransform;  // 0x20 (0x20)
	struct FVector Center;  // 0x80 (0x80)
	struct FVector Extents;  // 0x98 (0x98)
	struct TArray<struct FVector> BoundaryVertices;  // 0xB0 (0xB0)
	uint8_t ObjectClassification;  // 0xC0 (0xC0)
	char pad_193[15];  // 0xC1 (0xC1)


}; 
 
 // Function AugmentedReality.ARTrackedGeometry.IsTracked
struct FIsTracked
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AugmentedReality.ARPointUpdatePayload
struct FARPointUpdatePayload
{
	char pad_0[1];  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.GetAllGeometriesByClass
struct FGetAllGeometriesByClass
{
	UARTrackedGeometry* GeometryClass;  // 0x0 (0x0)
	struct TArray<struct UARTrackedGeometry*> ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.FindTrackedPointsByName
struct FFindTrackedPointsByName
{
	struct FString PointName;  // 0x0 (0x0)
	struct TArray<struct UARTrackedPoint*> ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct AugmentedReality.ARQRCodeUpdatePayload
struct FARQRCodeUpdatePayload
{
	struct FARSessionPayload SessionPayload;  // 0x0 (0x0)
	char pad_24[8];  // 0x18 (0x18)
	struct FTransform WorldTransform;  // 0x20 (0x20)
	struct FVector Extents;  // 0x80 (0x80)
	struct FString QRCode;  // 0x98 (0x98)
	char pad_168[8];  // 0xA8 (0xA8)


}; 
 
 // ScriptStruct AugmentedReality.ARSkeletonDefinition
struct FARSkeletonDefinition
{
	int32_t NumJoints;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FName> JointNames;  // 0x8 (0x8)
	struct TArray<int32_t> ParentIndices;  // 0x18 (0x18)


}; 
 
 // ScriptStruct AugmentedReality.ARPoseUpdatePayload
struct FARPoseUpdatePayload
{
	struct FTransform WorldTransform;  // 0x0 (0x0)
	struct TArray<struct FTransform> JointTransforms;  // 0x60 (0x60)


}; 
 
 // ScriptStruct AugmentedReality.AREnvironmentProbeUpdatePayload
struct FAREnvironmentProbeUpdatePayload
{
	struct FTransform WorldTransform;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARTrackedPose.GetTrackedPoseData
struct FGetTrackedPoseData
{
	struct FARPose3D ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AugmentedReality.ARObjectUpdatePayload
struct FARObjectUpdatePayload
{
	struct FTransform WorldTransform;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AugmentedReality.ARTraceResult
struct FARTraceResult
{
	float DistanceFromCamera;  // 0x0 (0x0)
	uint8_t TraceChannel;  // 0x4 (0x4)
	char pad_5[11];  // 0x5 (0x5)
	struct FTransform LocalTransform;  // 0x10 (0x10)
	struct UARTrackedGeometry* TrackedGeometry;  // 0x70 (0x70)
	char pad_120[24];  // 0x78 (0x78)


}; 
 
 // ScriptStruct AugmentedReality.ARVideoFormat
struct FARVideoFormat
{
	int32_t FPS;  // 0x0 (0x0)
	int32_t Width;  // 0x4 (0x4)
	int32_t Height;  // 0x8 (0x8)


}; 
 
 // ScriptStruct AugmentedReality.ARPose2D
struct FARPose2D
{
	struct FARSkeletonDefinition SkeletonDefinition;  // 0x0 (0x0)
	struct TArray<struct FVector2D> JointLocations;  // 0x28 (0x28)
	struct TArray<bool> IsJointTracked;  // 0x38 (0x38)


}; 
 
 // ScriptStruct AugmentedReality.ARPose3D
struct FARPose3D
{
	struct FARSkeletonDefinition SkeletonDefinition;  // 0x0 (0x0)
	struct TArray<struct FTransform> JointTransforms;  // 0x28 (0x28)
	struct TArray<bool> IsJointTracked;  // 0x38 (0x38)
	uint8_t JointTransformSpace;  // 0x48 (0x48)
	char pad_73[7];  // 0x49 (0x49)


}; 
 
 // Function AugmentedReality.ARActor.AddARComponent
struct FAddARComponent
{
	UARComponent* InComponentClass;  // 0x0 (0x0)
	struct FGuid NativeID;  // 0x8 (0x8)
	struct UARComponent* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe
struct FAddManualEnvironmentCaptureProbe
{
	struct FVector Location;  // 0x0 (0x0)
	struct FVector Extent;  // 0x18 (0x18)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool ReturnValue : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)


}; 
 
 // Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy
struct FGetSubsumedBy
{
	struct UARPlaneGeometry* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage
struct FAddRuntimeCandidateImage
{
	struct UARSessionConfig* SessionConfig;  // 0x0 (0x0)
	struct UTexture2D* CandidateTexture;  // 0x8 (0x8)
	struct FString FriendlyName;  // 0x10 (0x10)
	float PhysicalWidth;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)
	struct UARCandidateImage* ReturnValue;  // 0x28 (0x28)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages
struct FGetAllTrackedImages
{
	struct TArray<struct UARTrackedImage*> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.AddTrackedPointWithName
struct FAddTrackedPointWithName
{
	struct FTransform WorldTransform;  // 0x0 (0x0)
	struct FString PointName;  // 0x60 (0x60)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool bDeletePointsWithSameName : 1;  // 0x70 (0x70)
	char pad_113_1 : 7;  // 0x71 (0x71)
	bool ReturnValue : 1;  // 0x71 (0x71)
	char pad_114[14];  // 0x72 (0x72)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.CalculateClosestIntersection
struct FCalculateClosestIntersection
{
	struct TArray<struct FVector> StartPoints;  // 0x0 (0x0)
	struct TArray<struct FVector> EndPoints;  // 0x10 (0x10)
	struct FVector ClosestIntersection;  // 0x20 (0x20)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin
struct FDebugDrawPin
{
	struct UARPin* ARPin;  // 0x0 (0x0)
	struct UObject* WorldContextObject;  // 0x8 (0x8)
	struct FLinearColor Color;  // 0x10 (0x10)
	float Scale;  // 0x20 (0x20)
	float PersistForSeconds;  // 0x24 (0x24)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.GetAlignmentTransform
struct FGetAlignmentTransform
{
	struct FTransform ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries
struct FGetAllGeometries
{
	struct TArray<struct UARTrackedGeometry*> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes
struct FGetAllTrackedEnvironmentCaptureProbes
{
	struct TArray<struct UAREnvironmentCaptureProbe*> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.GetAllPins
struct FGetAllPins
{
	struct TArray<struct UARPin*> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.IsSceneReconstructionSupported
struct FIsSceneReconstructionSupported
{
	uint8_t SessionType;  // 0x0 (0x0)
	uint8_t SceneReconstructionMethod;  // 0x1 (0x1)
	char pad_2_1 : 7;  // 0x2 (0x2)
	bool ReturnValue : 1;  // 0x2 (0x2)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.GetARTexture
struct FGetARTexture
{
	uint8_t TextureType;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct UARTexture* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes
struct FGetAllTrackedPlanes
{
	struct TArray<struct UARPlaneGeometry*> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARPin.DebugDraw
struct FDebugDraw
{
	struct UWorld* World;  // 0x0 (0x0)
	struct FLinearColor Color;  // 0x8 (0x8)
	float Scale;  // 0x18 (0x18)
	float PersistForSeconds;  // 0x1C (0x1C)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses
struct FGetAllTrackedPoses
{
	struct TArray<struct UARTrackedPose*> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.GetARWorldScale
struct FGetARWorldScale
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARTrackedObject.GetDetectedObject
struct FGetDetectedObject
{
	struct UARCandidateObject* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.LoadARPinsFromLocalStore
struct FLoadARPinsFromLocalStore
{
	struct TMap<struct FName, struct UARPin*> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus
struct FGetARSessionStatus
{
	struct FARSessionStatus ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth
struct FGetCameraDepth
{
	struct UARTextureCameraDepth* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.GetCameraImage
struct FGetCameraImage
{
	struct UARTextureCameraImage* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.GetCameraIntrinsics
struct FGetCameraIntrinsics
{
	struct FARCameraIntrinsics OutCameraIntrinsics;  // 0x0 (0x0)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool ReturnValue : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate
struct FGetCurrentLightEstimate
{
	struct UARLightEstimate* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARSessionConfig.SetCandidateObjectList
struct FSetCandidateObjectList
{
	struct TArray<struct UARCandidateObject*> InCandidateObjects;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.GetNumberOfTrackedFacesSupported
struct FGetNumberOfTrackedFacesSupported
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage
struct FGetPersonSegmentationDepthImage
{
	struct UARTexture* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARMeshGeometry.GetObjectClassificationAtLocation
struct FGetObjectClassificationAtLocation
{
	struct FVector InWorldLocation;  // 0x0 (0x0)
	uint8_t OutClassification;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct FVector OutClassificationLocation;  // 0x20 (0x20)
	float MaxLocationDiff;  // 0x38 (0x38)
	char pad_60_1 : 7;  // 0x3C (0x3C)
	bool ReturnValue : 1;  // 0x3C (0x3C)
	char pad_61[3];  // 0x3D (0x3D)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage
struct FGetPersonSegmentationImage
{
	struct UARTexture* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate
struct FReceiveUpdate
{
	struct FARGeoAnchorUpdatePayload Payload;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig
struct FGetSessionConfig
{
	struct UARSessionConfig* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality
struct FGetTrackingQuality
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason
struct FGetTrackingQualityReason
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus
struct FGetWorldMappingStatus
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreReady
struct FIsARPinLocalStoreReady
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreSupported
struct FIsARPinLocalStoreSupported
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.IsARSupported
struct FIsARSupported
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported
struct FIsSessionTrackingFeatureSupported
{
	uint8_t SessionType;  // 0x0 (0x0)
	uint8_t SessionTrackingFeature;  // 0x1 (0x1)
	char pad_2_1 : 7;  // 0x2 (0x2)
	bool ReturnValue : 1;  // 0x2 (0x2)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported
struct FIsSessionTypeSupported
{
	uint8_t SessionType;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool ReturnValue : 1;  // 0x1 (0x1)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects
struct FLineTraceTrackedObjects
{
	struct FVector2D ScreenCoord;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bTestFeaturePoints : 1;  // 0x10 (0x10)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool bTestGroundPlane : 1;  // 0x11 (0x11)
	char pad_18_1 : 7;  // 0x12 (0x12)
	bool bTestPlaneExtents : 1;  // 0x12 (0x12)
	char pad_19_1 : 7;  // 0x13 (0x13)
	bool bTestPlaneBoundaryPolygon : 1;  // 0x13 (0x13)
	char pad_20[4];  // 0x14 (0x14)
	struct TArray<struct FARTraceResult> ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D
struct FLineTraceTrackedObjects3D
{
	struct FVector Start;  // 0x0 (0x0)
	struct FVector End;  // 0x18 (0x18)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bTestFeaturePoints : 1;  // 0x30 (0x30)
	char pad_49_1 : 7;  // 0x31 (0x31)
	bool bTestGroundPlane : 1;  // 0x31 (0x31)
	char pad_50_1 : 7;  // 0x32 (0x32)
	bool bTestPlaneExtents : 1;  // 0x32 (0x32)
	char pad_51_1 : 7;  // 0x33 (0x33)
	bool bTestPlaneBoundaryPolygon : 1;  // 0x33 (0x33)
	char pad_52[4];  // 0x34 (0x34)
	struct TArray<struct FARTraceResult> ReturnValue;  // 0x38 (0x38)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.PinComponent
struct FPinComponent
{
	struct USceneComponent* ComponentToPin;  // 0x0 (0x0)
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform PinToWorldTransform;  // 0x10 (0x10)
	struct UARTrackedGeometry* TrackedGeometry;  // 0x70 (0x70)
	struct FName DebugName;  // 0x78 (0x78)
	struct UARPin* ReturnValue;  // 0x80 (0x80)
	char pad_136[8];  // 0x88 (0x88)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.PinComponentToARPin
struct FPinComponentToARPin
{
	struct USceneComponent* ComponentToPin;  // 0x0 (0x0)
	struct UARPin* Pin;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
struct FPinComponentToTraceResult
{
	struct USceneComponent* ComponentToPin;  // 0x0 (0x0)
	char pad_8[8];  // 0x8 (0x8)
	struct FARTraceResult TraceResult;  // 0x10 (0x10)
	struct FName DebugName;  // 0xA0 (0xA0)
	struct UARPin* ReturnValue;  // 0xA8 (0xA8)


}; 
 
 // Function AugmentedReality.ARSessionConfig.SetWorldMapData
struct FSetWorldMapData
{
	struct TArray<char> WorldMapData;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
struct FGetPlaneDetectionMode
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.RemoveARPinFromLocalStore
struct FRemoveARPinFromLocalStore
{
	struct FName InSaveName;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.RemovePin
struct FRemovePin
{
	struct UARPin* PinToRemove;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.ResizeXRCamera
struct FResizeXRCamera
{
	struct FIntPoint InSize;  // 0x0 (0x0)
	struct FIntPoint ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel
struct FGetTraceChannel
{
	struct FARTraceResult TraceResult;  // 0x0 (0x0)
	uint8_t ReturnValue;  // 0x90 (0x90)
	char pad_145[15];  // 0x91 (0x91)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.SaveARPinToLocalStore
struct FSaveARPinToLocalStore
{
	struct FName InSaveName;  // 0x0 (0x0)
	struct UARPin* InPin;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform
struct FSetAlignmentTransform
{
	struct FTransform InAlignmentTransform;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.SetARWorldOriginLocationAndRotation
struct FSetARWorldOriginLocationAndRotation
{
	struct FVector OriginLocation;  // 0x0 (0x0)
	struct FRotator OriginRotation;  // 0x18 (0x18)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bIsTransformInWorldSpace : 1;  // 0x30 (0x30)
	char pad_49_1 : 7;  // 0x31 (0x31)
	bool bMaintainUpDirection : 1;  // 0x31 (0x31)
	char pad_50[6];  // 0x32 (0x32)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.SetARWorldScale
struct FSetARWorldScale
{
	float InWorldScale;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARImageComponent.SetImageComponentDebugMode
struct FSetImageComponentDebugMode
{
	uint8_t NewDebugMode;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.SetEnabledXRCamera
struct FSetEnabledXRCamera
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bOnOff : 1;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
struct FGetMaxNumSimultaneousImagesTracked
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.StartARSession
struct FStartARSession
{
	struct UARSessionConfig* SessionConfig;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.ToggleARCapture
struct FToggleARCapture
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bOnOff : 1;  // 0x0 (0x0)
	uint8_t CaptureType;  // 0x1 (0x1)
	char pad_2_1 : 7;  // 0x2 (0x2)
	bool ReturnValue : 1;  // 0x2 (0x2)


}; 
 
 // Function AugmentedReality.ARBlueprintLibrary.UnpinComponent
struct FUnpinComponent
{
	struct USceneComponent* ComponentToUnpin;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
struct FShouldEnableCameraTracking
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera
struct FGetDistanceFromCamera
{
	struct FARTraceResult TraceResult;  // 0x0 (0x0)
	float ReturnValue;  // 0x90 (0x90)
	char pad_148[12];  // 0x94 (0x94)


}; 
 
 // Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
struct FGetLocalToTrackingTransform
{
	struct FTransform ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent
struct FGetExtent
{
	struct FVector ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
struct FGetLocalToWorldTransform
{
	struct FTransform ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARDependencyHandler.InstallARService
struct FInstallARService
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FLatentActionInfo LatentInfo;  // 0x8 (0x8)
	uint8_t OutInstallResult;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function AugmentedReality.ARTraceResultLibrary.GetLocalTransform
struct FGetLocalTransform
{
	struct FARTraceResult TraceResult;  // 0x0 (0x0)
	struct FTransform ReturnValue;  // 0x90 (0x90)


}; 
 
 // Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
struct FARSaveWorld
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UARSaveWorldAsyncTaskBlueprintProxy* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
struct FARGetCandidateObject
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FVector Location;  // 0x8 (0x8)
	struct FVector Extent;  // 0x20 (0x20)
	struct UARGetCandidateObjectAsyncTaskBlueprintProxy* ReturnValue;  // 0x38 (0x38)


}; 
 
 // Function AugmentedReality.ARComponent.GetMRMesh
struct FGetMRMesh
{
	struct UMRMeshComponent* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARComponent.SetNativeID
struct FSetNativeID
{
	struct FGuid NativeID;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARPlaneComponent.GetObjectClassificationDebugColors
struct FGetObjectClassificationDebugColors
{
	struct TMap<uint8_t, struct FLinearColor> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARGeoAnchorComponent.ReceiveAdd
struct FReceiveAdd
{
	struct FARGeoAnchorUpdatePayload Payload;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload
struct FServerUpdatePayload
{
	struct FARGeoAnchorUpdatePayload NewPayload;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARPlaneComponent.SetObjectClassificationDebugColors
struct FSetObjectClassificationDebugColors
{
	struct TMap<uint8_t, struct FLinearColor> InColors;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode
struct FSetPlaneComponentDebugMode
{
	uint8_t NewDebugMode;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode
struct FSetQRCodeComponentDebugMode
{
	uint8_t NewDebugMode;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode
struct FSetPoseComponentDebugMode
{
	uint8_t NewDebugMode;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode
struct FSetGeoAnchorComponentDebugMode
{
	uint8_t NewDebugMode;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARDependencyHandler.CheckARServiceAvailability
struct FCheckARServiceAvailability
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FLatentActionInfo LatentInfo;  // 0x8 (0x8)
	uint8_t OutAvailability;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
struct FGetAmbientColorTemperatureKelvin
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARDependencyHandler.GetARDependencyHandler
struct FGetARDependencyHandler
{
	struct UARDependencyHandler* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
struct FGetEnvironmentCaptureProbeType
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingSupport
struct FGetGeoTrackingSupport
{
	struct UARGeoTrackingSupport* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARDependencyHandler.RequestARSessionPermission
struct FRequestARSessionPermission
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UARSessionConfig* SessionConfig;  // 0x8 (0x8)
	struct FLatentActionInfo LatentInfo;  // 0x10 (0x10)
	uint8_t OutPermissionResult;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 // Function AugmentedReality.ARDependencyHandler.StartARSessionLatent
struct FStartARSessionLatent
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UARSessionConfig* SessionConfig;  // 0x8 (0x8)
	struct FLatentActionInfo LatentInfo;  // 0x10 (0x10)


}; 
 
 // Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocation
struct FAddGeoAnchorAtLocation
{
	float Longitude;  // 0x0 (0x0)
	float Latitude;  // 0x4 (0x4)
	struct FString OptionalAnchorName;  // 0x8 (0x8)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocationWithAltitude
struct FAddGeoAnchorAtLocationWithAltitude
{
	float Longitude;  // 0x0 (0x0)
	float Latitude;  // 0x4 (0x4)
	float AltitudeMeters;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FString OptionalAnchorName;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingAccuracy
struct FGetGeoTrackingAccuracy
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingState
struct FGetGeoTrackingState
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
struct FGetLastUpdateFrameNumber
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingStateReason
struct FGetGeoTrackingStateReason
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARGeoAnchor.GetAltitudeSource
struct FGetAltitudeSource
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
struct FGetAmbientIntensityLumens
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor
struct FGetAmbientColor
{
	struct FLinearColor ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARTrackedGeometry.GetDebugName
struct FGetDebugName
{
	struct FName ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARPin.GetPinnedComponent
struct FGetPinnedComponent
{
	struct USceneComponent* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARTrackedGeometry.GetTrackingState
struct FGetTrackingState
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARSessionConfig.AddCandidateImage
struct FAddCandidateImage
{
	struct UARCandidateImage* NewCandidateImage;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARSessionConfig.AddCandidateObject
struct FAddCandidateObject
{
	struct UARCandidateObject* CandidateObject;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARTrackedGeometry.HasSpatialMeshUsageFlag
struct FHasSpatialMeshUsageFlag
{
	uint8_t InFlag;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool ReturnValue : 1;  // 0x1 (0x1)


}; 
 
 // Function AugmentedReality.ARSessionConfig.GetCandidateImageList
struct FGetCandidateImageList
{
	struct TArray<struct UARCandidateImage*> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARSessionConfig.GetCandidateObjectList
struct FGetCandidateObjectList
{
	struct TArray<struct UARCandidateObject*> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
struct FGetDesiredVideoFormat
{
	struct FARVideoFormat ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
struct FGetEnabledSessionTrackingFeature
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARTrackedGeometry.GetObjectClassification
struct FGetObjectClassification
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
struct FGetFaceTrackingDirection
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
struct FGetFaceTrackingUpdate
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARSessionConfig.GetFrameSyncMode
struct FGetFrameSyncMode
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARSessionConfig.GetLightEstimationMode
struct FGetLightEstimationMode
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
struct FSetSessionTrackingFeatureToEnable
{
	uint8_t InSessionTrackingFeature;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod
struct FGetSceneReconstructionMethod
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARSessionConfig.GetSessionType
struct FGetSessionType
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARSessionConfig.GetWorldAlignment
struct FGetWorldAlignment
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARSessionConfig.GetWorldMapData
struct FGetWorldMapData
{
	struct TArray<char> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
struct FSetDesiredVideoFormat
{
	struct FARVideoFormat NewFormat;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus
struct FSetEnableAutoFocus
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bNewValue : 1;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
struct FSetFaceTrackingDirection
{
	uint8_t InDirection;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
struct FSetFaceTrackingUpdate
{
	uint8_t InUpdate;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARSessionConfig.SetResetCameraTracking
struct FSetResetCameraTracking
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bNewValue : 1;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects
struct FSetResetTrackedObjects
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bNewValue : 1;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod
struct FSetSceneReconstructionMethod
{
	uint8_t InSceneReconstructionMethod;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData
struct FClientUpdatePreviewImageData
{
	int32_t Offset;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<char> Buffer;  // 0x8 (0x8)


}; 
 
 // Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
struct FShouldEnableAutoFocus
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
struct FShouldRenderCameraOverlay
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
struct FShouldResetCameraTracking
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
struct FShouldResetTrackedObjects
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
struct FGetARSharedWorldGameState
{
	struct AARSharedWorldGameState* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
struct FSetARSharedWorldData
{
	struct TArray<char> ARWorldData;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
struct FSetPreviewImageData
{
	struct TArray<char> ImageData;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld
struct FClientInitSharedWorld
{
	int32_t PreviewImageSize;  // 0x0 (0x0)
	int32_t ARWorldDataSize;  // 0x4 (0x4)


}; 
 
 // Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
struct FSetEnvironmentCaptureProbe
{
	struct UAREnvironmentCaptureProbe* InCaptureProbe;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
struct FGetLastUpdateTimestamp
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARTrackedGeometry.GetName
struct FGetName
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
struct FGetUnderlyingMesh
{
	struct UMRMeshComponent* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
struct FGetBoundaryPolygonInLocalSpace
{
	struct TArray<struct FVector> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARPlaneGeometry.GetCenter
struct FGetCenter
{
	struct FVector ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARCandidateImage.GetOrientation
struct FGetOrientation
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARTrackedImage.GetDetectedImage
struct FGetDetectedImage
{
	struct UARCandidateImage* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARTrackedImage.GetEstimateSize
struct FGetEstimateSize
{
	struct FVector2D ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARFaceGeometry.GetBlendShapes
struct FGetBlendShapes
{
	struct TMap<uint8_t, float> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue
struct FGetBlendShapeValue
{
	uint8_t BlendShape;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float ReturnValue;  // 0x4 (0x4)


}; 
 
 // Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
struct FGetLocalSpaceEyeTransform
{
	uint8_t Eye;  // 0x0 (0x0)
	char pad_1[15];  // 0x1 (0x1)
	struct FTransform ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
struct FGetWorldSpaceEyeTransform
{
	uint8_t Eye;  // 0x0 (0x0)
	char pad_1[15];  // 0x1 (0x1)
	struct FTransform ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
struct FGetEnvironmentCaptureTexture
{
	struct UAREnvironmentCaptureProbeTexture* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARGeoAnchor.GetAltitudeMeters
struct FGetAltitudeMeters
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARGeoAnchor.GetLatitude
struct FGetLatitude
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARCandidateImage.GetCandidateTexture
struct FGetCandidateTexture
{
	struct UTexture2D* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARCandidateObject.GetFriendlyName
struct FGetFriendlyName
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARCandidateImage.GetPhysicalHeight
struct FGetPhysicalHeight
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARCandidateImage.GetPhysicalWidth
struct FGetPhysicalWidth
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARCandidateObject.GetBoundingBox
struct FGetBoundingBox
{
	struct FBox ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARCandidateObject.GetCandidateObjectData
struct FGetCandidateObjectData
{
	struct TArray<char> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARCandidateObject.SetBoundingBox
struct FSetBoundingBox
{
	struct FBox InBoundingBox;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARCandidateObject.SetCandidateObjectData
struct FSetCandidateObjectData
{
	struct TArray<char> InCandidateObject;  // 0x0 (0x0)


}; 
 
 // Function AugmentedReality.ARCandidateObject.SetFriendlyName
struct FSetFriendlyName
{
	struct FString NewName;  // 0x0 (0x0)


}; 
 
 