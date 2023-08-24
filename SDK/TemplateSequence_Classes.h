#pragma once 
#include <TemplateSequence_Structs.h>
 
 
 
// Class TemplateSequence.TemplateSequence
// Size: 0x120(Inherited: 0x68)
struct UTemplateSequence : UMovieSceneSequence
{
	struct UMovieScene* MovieScene;  // 0x68 (0x68)
	struct TSoftClassPtr<UObject> BoundActorClass;  // 0x70 (0x70)
	struct TSoftObjectPtr<AActor> BoundPreviewActor;  // 0xA0 (0xA0)
	struct TMap<struct FGuid, struct FName> BoundActorComponents;  // 0xD0 (0xD0)


}; 
 
 


// Class TemplateSequence.CameraAnimationSequence
// Size: 0x120(Inherited: 0x120)
struct UCameraAnimationSequence : UTemplateSequence
{


}; 
 
 


// Class TemplateSequence.TemplateSequenceSection
// Size: 0x148(Inherited: 0x130)
struct UTemplateSequenceSection : UMovieSceneSubSection
{
	char pad_304[8];  // 0x130 (0x130)
	struct TArray<struct FTemplateSectionPropertyScale> PropertyScales;  // 0x138 (0x138)


}; 
 
 


// Class TemplateSequence.CameraAnimationEntitySystemLinker
// Size: 0x6D8(Inherited: 0x6D8)
struct UCameraAnimationEntitySystemLinker : UMovieSceneEntitySystemLinker
{


}; 
 
 


// Class TemplateSequence.CameraAnimationSequenceCameraStandIn
// Size: 0x840(Inherited: 0x28)
struct UCameraAnimationSequenceCameraStandIn : UObject
{
	float FieldOfView;  // 0x28 (0x28)
	char bConstrainAspectRatio : 1;  // 0x2C (0x2C)
	char pad_44_1 : 7;  // 0x2C (0x2C)
	char pad_45[4];  // 0x2D (0x2D)
	float AspectRatio;  // 0x30 (0x30)
	char pad_52[12];  // 0x34 (0x34)
	struct FPostProcessSettings PostProcessSettings;  // 0x40 (0x40)
	float PostProcessBlendWeight;  // 0x720 (0x720)
	struct FCameraFilmbackSettings Filmback;  // 0x724 (0x724)
	struct FCameraLensSettings LensSettings;  // 0x730 (0x730)
	char pad_1868[4];  // 0x74C (0x74C)
	struct FCameraFocusSettings FocusSettings;  // 0x750 (0x750)
	float CurrentFocalLength;  // 0x7B8 (0x7B8)
	float CurrentAperture;  // 0x7BC (0x7BC)
	float CurrentFocusDistance;  // 0x7C0 (0x7C0)
	char pad_1988[124];  // 0x7C4 (0x7C4)


}; 
 
 


// Class TemplateSequence.CameraAnimationBoundObjectInstantiator
// Size: 0x40(Inherited: 0x40)
struct UCameraAnimationBoundObjectInstantiator : UMovieSceneEntityInstantiatorSystem
{


}; 
 
 


// Class TemplateSequence.CameraAnimationSequencePlayer
// Size: 0x380(Inherited: 0x28)
struct UCameraAnimationSequencePlayer : UObject
{
	char pad_40[608];  // 0x28 (0x28)
	struct UObject* BoundObjectOverride;  // 0x288 (0x288)
	struct UMovieSceneSequence* Sequence;  // 0x290 (0x290)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;  // 0x298 (0x298)
	char pad_800[96];  // 0x320 (0x320)


}; 
 
 


// Class TemplateSequence.CameraAnimationSpawnableSystem
// Size: 0x40(Inherited: 0x40)
struct UCameraAnimationSpawnableSystem : UMovieSceneEntitySystem
{


}; 
 
 


// Class TemplateSequence.CameraAnimationSequenceSubsystem
// Size: 0x48(Inherited: 0x30)
struct UCameraAnimationSequenceSubsystem : UWorldSubsystem
{
	struct UMovieSceneEntitySystemLinker* Linker;  // 0x30 (0x30)
	char pad_56[16];  // 0x38 (0x38)


}; 
 
 


// Class TemplateSequence.SequenceCameraShakePattern
// Size: 0x58(Inherited: 0x28)
struct USequenceCameraShakePattern : UCameraShakePattern
{
	struct UCameraAnimationSequence* Sequence;  // 0x28 (0x28)
	float PlayRate;  // 0x30 (0x30)
	float Scale;  // 0x34 (0x34)
	float BlendInTime;  // 0x38 (0x38)
	float BlendOutTime;  // 0x3C (0x3C)
	float RandomSegmentDuration;  // 0x40 (0x40)
	char pad_68_1 : 7;  // 0x44 (0x44)
	bool bRandomSegment : 1;  // 0x44 (0x44)
	char pad_69[3];  // 0x45 (0x45)
	struct UCameraAnimationSequencePlayer* Player;  // 0x48 (0x48)
	struct UCameraAnimationSequenceCameraStandIn* CameraStandIn;  // 0x50 (0x50)


}; 
 
 


// Class TemplateSequence.TemplateSequenceSystem
// Size: 0xB0(Inherited: 0x40)
struct UTemplateSequenceSystem : UMovieSceneEntitySystem
{
	char pad_64[112];  // 0x40 (0x40)


}; 
 
 


// Class TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
// Size: 0x98(Inherited: 0x40)
struct UTemplateSequencePropertyScalingInstantiatorSystem : UMovieSceneEntitySystem
{
	char pad_64[88];  // 0x40 (0x40)


}; 
 
 


// Class TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
// Size: 0x90(Inherited: 0x40)
struct UTemplateSequencePropertyScalingEvaluatorSystem : UMovieSceneEntitySystem
{
	char pad_64[80];  // 0x40 (0x40)


}; 
 
 


// Class TemplateSequence.TemplateSequenceActor
// Size: 0x2F0(Inherited: 0x290)
struct ATemplateSequenceActor : AActor
{
	char pad_656[8];  // 0x290 (0x290)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings;  // 0x298 (0x298)
	struct UTemplateSequencePlayer* SequencePlayer;  // 0x2B8 (0x2B8)
	struct FSoftObjectPath TemplateSequence;  // 0x2C0 (0x2C0)
	struct FTemplateSequenceBindingOverrideData BindingOverride;  // 0x2E0 (0x2E0)
	char pad_748[4];  // 0x2EC (0x2EC)


	void SetSequence(struct UTemplateSequence* InSequence); // Function TemplateSequence.TemplateSequenceActor.SetSequence
	void SetBinding(struct AActor* Actor, bool bOverridesDefault); // Function TemplateSequence.TemplateSequenceActor.SetBinding
	struct UTemplateSequence* LoadSequence(); // Function TemplateSequence.TemplateSequenceActor.LoadSequence
	struct UTemplateSequencePlayer* GetSequencePlayer(); // Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer
	struct UTemplateSequence* GetSequence(); // Function TemplateSequence.TemplateSequenceActor.GetSequence
}; 
 
 


// Class TemplateSequence.TemplateSequencePlayer
// Size: 0x4B0(Inherited: 0x4A8)
struct UTemplateSequencePlayer : UMovieSceneSequencePlayer
{
	char pad_1192[8];  // 0x4A8 (0x4A8)


	struct UTemplateSequencePlayer* CreateTemplateSequencePlayer(struct UObject* WorldContextObject, struct UTemplateSequence* TemplateSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ATemplateSequenceActor*& OutActor); // Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
}; 
 
 


// Class TemplateSequence.SequenceCameraShakeTestUtil
// Size: 0x28(Inherited: 0x28)
struct USequenceCameraShakeTestUtil : UBlueprintFunctionLibrary
{


	bool GetPostProcessBlendCache(struct APlayerController* PlayerController, int32_t PPIndex, struct FPostProcessSettings& OutPPSettings, float& OutPPBlendWeight); // Function TemplateSequence.SequenceCameraShakeTestUtil.GetPostProcessBlendCache
	struct FMinimalViewInfo GetLastFrameCameraCachePOV(struct APlayerController* PlayerController); // Function TemplateSequence.SequenceCameraShakeTestUtil.GetLastFrameCameraCachePOV
	struct FMinimalViewInfo GetCameraCachePOV(struct APlayerController* PlayerController); // Function TemplateSequence.SequenceCameraShakeTestUtil.GetCameraCachePOV
}; 
 
 


// Class TemplateSequence.TemplateSequenceTrack
// Size: 0xA8(Inherited: 0xA8)
struct UTemplateSequenceTrack : UMovieSceneSubTrack
{


}; 
 
 


