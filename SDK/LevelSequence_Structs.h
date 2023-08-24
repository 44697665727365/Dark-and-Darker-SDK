#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
struct FCreateLevelSequencePlayer
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct ULevelSequence* LevelSequence;  // 0x8 (0x8)
	struct FMovieSceneSequencePlaybackSettings Settings;  // 0x10 (0x10)
	struct ALevelSequenceActor* OutActor;  // 0x30 (0x30)
	struct ULevelSequencePlayer* ReturnValue;  // 0x38 (0x38)


}; 
 
 // Function LevelSequence.LevelSequenceActor.AddBinding
struct FAddBinding
{
	struct FMovieSceneObjectBindingID Binding;  // 0x0 (0x0)
	struct AActor* Actor;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool bAllowBindingsFromAsset : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function LevelSequence.LevelSequenceMediaController.GetMediaComponent
struct FGetMediaComponent
{
	struct UMediaComponent* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function LevelSequence.LevelSequenceActor.LoadSequence
struct FLoadSequence
{
	struct ULevelSequence* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function LevelSequence.LevelSequenceActor.SetBinding
struct FSetBinding
{
	struct FMovieSceneObjectBindingID Binding;  // 0x0 (0x0)
	struct TArray<struct AActor*> Actors;  // 0x18 (0x18)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bAllowBindingsFromAsset : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 // Function LevelSequence.LevelSequenceActor.AddBindingByTag
struct FAddBindingByTag
{
	struct FName BindingTag;  // 0x0 (0x0)
	struct AActor* Actor;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bAllowBindingsFromAsset : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function LevelSequence.LevelSequenceActor.FindNamedBinding
struct FFindNamedBinding
{
	struct FName Tag;  // 0x0 (0x0)
	struct FMovieSceneObjectBindingID ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function LevelSequence.LevelSequenceActor.RemoveBindingByTag
struct FRemoveBindingByTag
{
	struct FName Tag;  // 0x0 (0x0)
	struct AActor* Actor;  // 0x8 (0x8)


}; 
 
 // Function LevelSequence.LevelSequenceActor.FindNamedBindings
struct FFindNamedBindings
{
	struct FName Tag;  // 0x0 (0x0)
	struct TArray<struct FMovieSceneObjectBindingID> ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct LevelSequence.LevelSequenceBindingReference
struct FLevelSequenceBindingReference
{
	struct FString PackageName;  // 0x0 (0x0)
	struct FSoftObjectPath ExternalObjectPath;  // 0x10 (0x10)
	struct FString ObjectPath;  // 0x30 (0x30)


}; 
 
 // Function LevelSequence.LevelSequenceMediaController.GetSequence
struct FGetSequence
{
	struct ALevelSequenceActor* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function LevelSequence.LevelSequenceActor.GetSequencePlayer
struct FGetSequencePlayer
{
	struct ULevelSequencePlayer* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function LevelSequence.LevelSequence.FindMetaDataByClass
struct FFindMetaDataByClass
{
	UObject* InClass;  // 0x0 (0x0)
	struct UObject* ReturnValue;  // 0x8 (0x8)


}; 
 
 // DelegateFunction LevelSequence.OnLevelSequencePlayerCameraCutEvent__DelegateSignature
struct FOnLevelSequencePlayerCameraCutEvent__DelegateSignature
{
	struct UCameraComponent* CameraComponent;  // 0x0 (0x0)


}; 
 
 // Function LevelSequence.LevelSequenceActor.RemoveBinding
struct FRemoveBinding
{
	struct FMovieSceneObjectBindingID Binding;  // 0x0 (0x0)
	struct AActor* Actor;  // 0x18 (0x18)


}; 
 
 // Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
struct FGetActiveCameraComponent
{
	struct UCameraComponent* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function LevelSequence.LevelSequenceActor.ResetBinding
struct FResetBinding
{
	struct FMovieSceneObjectBindingID Binding;  // 0x0 (0x0)


}; 
 
 // ScriptStruct LevelSequence.LevelSequenceObject
struct FLevelSequenceObject
{
	 ObjectOrOwner;  // 0x0 (0x0)
	char pad_28[4];  // 0x1C (0x1C)
	struct FString ComponentName;  // 0x20 (0x20)
	struct TWeakObjectPtr<UObject> CachedComponent;  // 0x30 (0x30)


}; 
 
 // Function LevelSequence.LevelSequenceActor.SetBindingByTag
struct FSetBindingByTag
{
	struct FName BindingTag;  // 0x0 (0x0)
	struct TArray<struct AActor*> Actors;  // 0x8 (0x8)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bAllowBindingsFromAsset : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function LevelSequence.LevelSequenceActor.SetReplicatePlayback
struct FSetReplicatePlayback
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReplicatePlayback : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct LevelSequence.LevelSequenceCameraSettings
struct FLevelSequenceCameraSettings
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bOverrideAspectRatioAxisConstraint : 1;  // 0x0 (0x0)
	enum class EAspectRatioAxisConstraint AspectRatioAxisConstraint;  // 0x1 (0x1)


}; 
 
 // Function LevelSequence.LevelSequenceActor.SetSequence
struct FSetSequence
{
	struct ULevelSequence* InSequence;  // 0x0 (0x0)


}; 
 
 // ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference
struct FLevelSequenceLegacyObjectReference
{
	char pad_0[32];  // 0x0 (0x0)


}; 
 
 // Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
struct FGetSettingsClass
{
	ULevelSequenceBurnInInitSettings* ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
struct FLevelSequenceObjectReferenceMap
{
	char pad_0[80];  // 0x0 (0x0)


}; 
 
 // ScriptStruct LevelSequence.BoundActorProxy
struct FBoundActorProxy
{
	char pad_0[1];  // 0x0 (0x0)


}; 
 
 // ScriptStruct LevelSequence.LevelSequenceAnimSequenceLinkItem
struct FLevelSequenceAnimSequenceLinkItem
{
	struct FGuid SkelTrackGuid;  // 0x0 (0x0)
	struct FSoftObjectPath PathToAnimSequence;  // 0x10 (0x10)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bExportTransforms : 1;  // 0x30 (0x30)
	char pad_49_1 : 7;  // 0x31 (0x31)
	bool bExportMorphTargets : 1;  // 0x31 (0x31)
	char pad_50_1 : 7;  // 0x32 (0x32)
	bool bExportAttributeCurves : 1;  // 0x32 (0x32)
	char pad_51_1 : 7;  // 0x33 (0x33)
	bool bExportMaterialCurves : 1;  // 0x33 (0x33)
	uint8_t Interpolation;  // 0x34 (0x34)
	enum class ERichCurveInterpMode CurveInterpolation;  // 0x35 (0x35)
	char pad_54_1 : 7;  // 0x36 (0x36)
	bool bRecordInWorldSpace : 1;  // 0x36 (0x36)
	char pad_55_1 : 7;  // 0x37 (0x37)
	bool bEvaluateAllSkeletalMeshComponents : 1;  // 0x37 (0x37)


}; 
 
 // ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
struct FLevelSequenceBindingReferenceArray
{
	struct TArray<struct FLevelSequenceBindingReference> References;  // 0x0 (0x0)


}; 
 
 // ScriptStruct LevelSequence.LevelSequenceBindingReferences
struct FLevelSequenceBindingReferences
{
	struct TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> BindingIdToReferences;  // 0x0 (0x0)
	struct TSet<struct FGuid> AnimSequenceInstances;  // 0x50 (0x50)
	struct TSet<struct FGuid> PostProcessInstances;  // 0xA0 (0xA0)


}; 
 
 // Function LevelSequence.LevelSequenceDirector.GetMasterSequenceTime
struct FGetMasterSequenceTime
{
	struct FQualifiedFrameTime ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function LevelSequence.LevelSequence.CopyMetaData
struct FCopyMetaData
{
	struct UObject* InMetaData;  // 0x0 (0x0)
	struct UObject* ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
struct FLevelSequenceSnapshotSettings
{
	char pad_0[1];  // 0x0 (0x0)


}; 
 
 // ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
struct FLevelSequencePlayerSnapshot
{
	struct FString MasterName;  // 0x0 (0x0)
	struct FQualifiedFrameTime MasterTime;  // 0x10 (0x10)
	struct FQualifiedFrameTime SourceTime;  // 0x20 (0x20)
	struct FString CurrentShotName;  // 0x30 (0x30)
	struct FQualifiedFrameTime CurrentShotLocalTime;  // 0x40 (0x40)
	struct FQualifiedFrameTime CurrentShotSourceTime;  // 0x50 (0x50)
	struct FString SourceTimecode;  // 0x60 (0x60)
	struct TSoftObjectPtr<UCameraComponent> CameraComponent;  // 0x70 (0x70)
	struct ULevelSequence* ActiveShot;  // 0xA0 (0xA0)
	struct FMovieSceneSequenceID ShotID;  // 0xA8 (0xA8)
	char pad_172[4];  // 0xAC (0xAC)


}; 
 
 // Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass
struct FFindOrAddMetaDataByClass
{
	UObject* InClass;  // 0x0 (0x0)
	struct UObject* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer
struct FSynchronizeToServer
{
	float DesyncThresholdSeconds;  // 0x0 (0x0)


}; 
 
 // Function LevelSequence.LevelSequence.RemoveMetaDataByClass
struct FRemoveMetaDataByClass
{
	UObject* InClass;  // 0x0 (0x0)


}; 
 
 // Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
struct FSetBurnIn
{
	struct FSoftClassPath InBurnInClass;  // 0x0 (0x0)


}; 
 
 // Function LevelSequence.LevelSequenceBurnIn.SetSettings
struct FSetSettings
{
	struct UObject* InSettings;  // 0x0 (0x0)


}; 
 
 // Function LevelSequence.LevelSequenceDirector.GetBoundActor
struct FGetBoundActor
{
	struct FMovieSceneObjectBindingID ObjectBinding;  // 0x0 (0x0)
	struct AActor* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function LevelSequence.LevelSequenceDirector.GetBoundActors
struct FGetBoundActors
{
	struct FMovieSceneObjectBindingID ObjectBinding;  // 0x0 (0x0)
	struct TArray<struct AActor*> ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function LevelSequence.LevelSequenceDirector.GetBoundObject
struct FGetBoundObject
{
	struct FMovieSceneObjectBindingID ObjectBinding;  // 0x0 (0x0)
	struct UObject* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function LevelSequence.LevelSequenceDirector.GetBoundObjects
struct FGetBoundObjects
{
	struct FMovieSceneObjectBindingID ObjectBinding;  // 0x0 (0x0)
	struct TArray<struct UObject*> ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function LevelSequence.LevelSequenceDirector.GetCurrentTime
struct FGetCurrentTime
{
	struct FQualifiedFrameTime ReturnValue;  // 0x0 (0x0)


}; 
 
 