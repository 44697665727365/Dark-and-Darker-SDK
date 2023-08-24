#pragma once 
#include <LevelSequence_Structs.h>
 
 
 
// Class LevelSequence.LevelSequence
// Size: 0x220(Inherited: 0x68)
struct ULevelSequence : UMovieSceneSequence
{
	char pad_104[8];  // 0x68 (0x68)
	struct UMovieScene* MovieScene;  // 0x70 (0x70)
	struct FLevelSequenceObjectReferenceMap ObjectReferences;  // 0x78 (0x78)
	struct FLevelSequenceBindingReferences BindingReferences;  // 0xC8 (0xC8)
	struct TMap<struct FString, struct FLevelSequenceObject> PossessedObjects;  // 0x1B8 (0x1B8)
	 DirectorClass;  // 0x208 (0x208)
	struct TArray<struct UAssetUserData*> AssetUserData;  // 0x210 (0x210)


	void RemoveMetaDataByClass(UObject* InClass); // Function LevelSequence.LevelSequence.RemoveMetaDataByClass
	struct UObject* FindOrAddMetaDataByClass(UObject* InClass); // Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass
	struct UObject* FindMetaDataByClass(UObject* InClass); // Function LevelSequence.LevelSequence.FindMetaDataByClass
	struct UObject* CopyMetaData(struct UObject* InMetaData); // Function LevelSequence.LevelSequence.CopyMetaData
}; 
 
 


// Class LevelSequence.LevelSequenceActor
// Size: 0x308(Inherited: 0x290)
struct ALevelSequenceActor : AActor
{
	char pad_656[16];  // 0x290 (0x290)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings;  // 0x2A0 (0x2A0)
	struct ULevelSequencePlayer* SequencePlayer;  // 0x2C0 (0x2C0)
	struct ULevelSequence* LevelSequenceAsset;  // 0x2C8 (0x2C8)
	struct FLevelSequenceCameraSettings CameraSettings;  // 0x2D0 (0x2D0)
	char pad_722[6];  // 0x2D2 (0x2D2)
	struct ULevelSequenceBurnInOptions* BurnInOptions;  // 0x2D8 (0x2D8)
	struct UMovieSceneBindingOverrides* BindingOverrides;  // 0x2E0 (0x2E0)
	char bAutoPlay : 1;  // 0x2E8 (0x2E8)
	char bOverrideInstanceData : 1;  // 0x2E8 (0x2E8)
	char bReplicatePlayback : 1;  // 0x2E8 (0x2E8)
	char pad_744_1 : 5;  // 0x2E8 (0x2E8)
	char pad_745[8];  // 0x2E9 (0x2E9)
	struct UObject* DefaultInstanceData;  // 0x2F0 (0x2F0)
	struct ULevelSequenceBurnIn* BurnInInstance;  // 0x2F8 (0x2F8)
	char pad_768_1 : 7;  // 0x300 (0x300)
	bool bShowBurnin : 1;  // 0x300 (0x300)
	char pad_769[7];  // 0x301 (0x301)


	void ShowBurnin(); // Function LevelSequence.LevelSequenceActor.ShowBurnin
	void SetSequence(struct ULevelSequence* InSequence); // Function LevelSequence.LevelSequenceActor.SetSequence
	void SetReplicatePlayback(bool ReplicatePlayback); // Function LevelSequence.LevelSequenceActor.SetReplicatePlayback
	void SetBindingByTag(struct FName BindingTag, struct TArray<struct AActor*>& Actors, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.SetBindingByTag
	void SetBinding(struct FMovieSceneObjectBindingID Binding, struct TArray<struct AActor*>& Actors, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.SetBinding
	void ResetBindings(); // Function LevelSequence.LevelSequenceActor.ResetBindings
	void ResetBinding(struct FMovieSceneObjectBindingID Binding); // Function LevelSequence.LevelSequenceActor.ResetBinding
	void RemoveBindingByTag(struct FName Tag, struct AActor* Actor); // Function LevelSequence.LevelSequenceActor.RemoveBindingByTag
	void RemoveBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor); // Function LevelSequence.LevelSequenceActor.RemoveBinding
	void OnLevelSequenceLoaded__DelegateSignature(); // DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature
	struct ULevelSequence* LoadSequence(); // Function LevelSequence.LevelSequenceActor.LoadSequence
	void HideBurnin(); // Function LevelSequence.LevelSequenceActor.HideBurnin
	struct ULevelSequencePlayer* GetSequencePlayer(); // Function LevelSequence.LevelSequenceActor.GetSequencePlayer
	struct ULevelSequence* GetSequence(); // Function LevelSequence.LevelSequenceActor.GetSequence
	struct TArray<struct FMovieSceneObjectBindingID> FindNamedBindings(struct FName Tag); // Function LevelSequence.LevelSequenceActor.FindNamedBindings
	struct FMovieSceneObjectBindingID FindNamedBinding(struct FName Tag); // Function LevelSequence.LevelSequenceActor.FindNamedBinding
	void AddBindingByTag(struct FName BindingTag, struct AActor* Actor, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.AddBindingByTag
	void AddBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.AddBinding
}; 
 
 


// Class LevelSequence.LevelSequenceAnimSequenceLink
// Size: 0x38(Inherited: 0x28)
struct ULevelSequenceAnimSequenceLink : UAssetUserData
{
	struct TArray<struct FLevelSequenceAnimSequenceLinkItem> AnimSequenceLinks;  // 0x28 (0x28)


}; 
 
 


// Class LevelSequence.AnimSequenceLevelSequenceLink
// Size: 0x58(Inherited: 0x28)
struct UAnimSequenceLevelSequenceLink : UAssetUserData
{
	struct FGuid SkelTrackGuid;  // 0x28 (0x28)
	struct FSoftObjectPath PathToLevelSequence;  // 0x38 (0x38)


}; 
 
 


// Class LevelSequence.DefaultLevelSequenceInstanceData
// Size: 0xA0(Inherited: 0x28)
struct UDefaultLevelSequenceInstanceData : UObject
{
	char pad_40[8];  // 0x28 (0x28)
	struct AActor* TransformOriginActor;  // 0x30 (0x30)
	char pad_56[8];  // 0x38 (0x38)
	struct FTransform TransformOrigin;  // 0x40 (0x40)


}; 
 
 


// Class LevelSequence.LevelSequenceMetaData
// Size: 0x28(Inherited: 0x28)
struct ULevelSequenceMetaData : UInterface
{


}; 
 
 


// Class LevelSequence.LevelSequenceBurnInInitSettings
// Size: 0x28(Inherited: 0x28)
struct ULevelSequenceBurnInInitSettings : UObject
{


}; 
 
 


// Class LevelSequence.LevelSequenceProjectSettings
// Size: 0x68(Inherited: 0x38)
struct ULevelSequenceProjectSettings : UDeveloperSettings
{
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bDefaultLockEngineToDisplayRate : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct FString DefaultDisplayRate;  // 0x40 (0x40)
	struct FString DefaultTickResolution;  // 0x50 (0x50)
	uint8_t DefaultClockSource;  // 0x60 (0x60)
	char pad_97[7];  // 0x61 (0x61)


}; 
 
 


// Class LevelSequence.LevelSequenceBurnInOptions
// Size: 0x58(Inherited: 0x28)
struct ULevelSequenceBurnInOptions : UObject
{
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bUseBurnIn : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct FSoftClassPath BurnInClass;  // 0x30 (0x30)
	struct ULevelSequenceBurnInInitSettings* Settings;  // 0x50 (0x50)


	void SetBurnIn(struct FSoftClassPath InBurnInClass); // Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
}; 
 
 


// Class LevelSequence.ReplicatedLevelSequenceActor
// Size: 0x308(Inherited: 0x308)
struct AReplicatedLevelSequenceActor : ALevelSequenceActor
{


}; 
 
 


// Class LevelSequence.LevelSequenceBurnIn
// Size: 0x330(Inherited: 0x278)
struct ULevelSequenceBurnIn : UUserWidget
{
	struct FLevelSequencePlayerSnapshot FrameInformation;  // 0x278 (0x278)
	struct ALevelSequenceActor* LevelSequenceActor;  // 0x328 (0x328)


	void SetSettings(struct UObject* InSettings); // Function LevelSequence.LevelSequenceBurnIn.SetSettings
	ULevelSequenceBurnInInitSettings* GetSettingsClass(); // Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
}; 
 
 


// Class LevelSequence.LevelSequenceDirector
// Size: 0x38(Inherited: 0x28)
struct ULevelSequenceDirector : UObject
{
	struct ULevelSequencePlayer* Player;  // 0x28 (0x28)
	int32_t SubSequenceID;  // 0x30 (0x30)
	int32_t MovieScenePlayerIndex;  // 0x34 (0x34)


	void OnCreated(); // Function LevelSequence.LevelSequenceDirector.OnCreated
	struct UMovieSceneSequence* GetSequence(); // Function LevelSequence.LevelSequenceDirector.GetSequence
	struct FQualifiedFrameTime GetMasterSequenceTime(); // Function LevelSequence.LevelSequenceDirector.GetMasterSequenceTime
	struct FQualifiedFrameTime GetCurrentTime(); // Function LevelSequence.LevelSequenceDirector.GetCurrentTime
	struct TArray<struct UObject*> GetBoundObjects(struct FMovieSceneObjectBindingID ObjectBinding); // Function LevelSequence.LevelSequenceDirector.GetBoundObjects
	struct UObject* GetBoundObject(struct FMovieSceneObjectBindingID ObjectBinding); // Function LevelSequence.LevelSequenceDirector.GetBoundObject
	struct TArray<struct AActor*> GetBoundActors(struct FMovieSceneObjectBindingID ObjectBinding); // Function LevelSequence.LevelSequenceDirector.GetBoundActors
	struct AActor* GetBoundActor(struct FMovieSceneObjectBindingID ObjectBinding); // Function LevelSequence.LevelSequenceDirector.GetBoundActor
}; 
 
 


// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
// Size: 0xA8(Inherited: 0xA8)
struct ULegacyLevelSequenceDirectorBlueprint : UBlueprint
{


}; 
 
 


// Class LevelSequence.LevelSequencePlayer
// Size: 0x5B8(Inherited: 0x4A8)
struct ULevelSequencePlayer : UMovieSceneSequencePlayer
{
	struct FMulticastInlineDelegate OnCameraCut;  // 0x4A8 (0x4A8)
	char pad_1208[256];  // 0x4B8 (0x4B8)


	struct UCameraComponent* GetActiveCameraComponent(); // Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
	struct ULevelSequencePlayer* CreateLevelSequencePlayer(struct UObject* WorldContextObject, struct ULevelSequence* LevelSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ALevelSequenceActor*& OutActor); // Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
}; 
 
 


// Class LevelSequence.LevelSequenceMediaController
// Size: 0x2B8(Inherited: 0x290)
struct ALevelSequenceMediaController : AActor
{
	char pad_656[8];  // 0x290 (0x290)
	struct ALevelSequenceActor* Sequence;  // 0x298 (0x298)
	struct UMediaComponent* MediaComponent;  // 0x2A0 (0x2A0)
	float ServerStartTimeSeconds;  // 0x2A8 (0x2A8)
	char pad_684[12];  // 0x2AC (0x2AC)


	void SynchronizeToServer(float DesyncThresholdSeconds); // Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer
	void Play(); // Function LevelSequence.LevelSequenceMediaController.Play
	void OnRep_ServerStartTimeSeconds(); // Function LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds
	struct ALevelSequenceActor* GetSequence(); // Function LevelSequence.LevelSequenceMediaController.GetSequence
	struct UMediaComponent* GetMediaComponent(); // Function LevelSequence.LevelSequenceMediaController.GetMediaComponent
}; 
 
 


