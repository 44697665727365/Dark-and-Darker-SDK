#pragma once 
#include <MovieScene_Structs.h>
 
 
 
// Class MovieScene.MovieSceneSignedObject
// Size: 0x58(Inherited: 0x28)
struct UMovieSceneSignedObject : UObject
{
	char pad_40[4];  // 0x28 (0x28)
	struct FGuid Signature;  // 0x2C (0x2C)
	char pad_60[28];  // 0x3C (0x3C)


}; 
 
 


// Class MovieScene.MovieSceneCompiledData
// Size: 0x3F8(Inherited: 0x28)
struct UMovieSceneCompiledData : UObject
{
	struct FMovieSceneEvaluationTemplate EvaluationTemplate;  // 0x28 (0x28)
	struct FMovieSceneSequenceHierarchy Hierarchy;  // 0x188 (0x188)
	struct FMovieSceneEntityComponentField EntityComponentField;  // 0x2A0 (0x2A0)
	struct FMovieSceneEvaluationField TrackTemplateField;  // 0x390 (0x390)
	struct TArray<struct FFrameTime> DeterminismFences;  // 0x3C0 (0x3C0)
	struct FGuid CompiledSignature;  // 0x3D0 (0x3D0)
	struct FGuid CompilerVersion;  // 0x3E0 (0x3E0)
	struct FMovieSceneSequenceCompilerMaskStruct AccumulatedMask;  // 0x3F0 (0x3F0)
	struct FMovieSceneSequenceCompilerMaskStruct AllocatedMask;  // 0x3F1 (0x3F1)
	uint8_t AccumulatedFlags;  // 0x3F2 (0x3F2)
	char pad_1011[5];  // 0x3F3 (0x3F3)


}; 
 
 


// Class MovieScene.MovieSceneTrack
// Size: 0x98(Inherited: 0x58)
struct UMovieSceneTrack : UMovieSceneSignedObject
{
	struct FMovieSceneTrackEvalOptions EvalOptions;  // 0x58 (0x58)
	char pad_92[1];  // 0x5C (0x5C)
	char pad_93_1 : 7;  // 0x5D (0x5D)
	bool bIsEvalDisabled : 1;  // 0x5D (0x5D)
	char pad_94[2];  // 0x5E (0x5E)
	struct TArray<int32_t> RowsDisabled;  // 0x60 (0x60)
	char pad_112[4];  // 0x70 (0x70)
	struct FGuid EvaluationFieldGuid;  // 0x74 (0x74)
	char pad_132[4];  // 0x84 (0x84)
	struct FMovieSceneTrackEvaluationField EvaluationField;  // 0x88 (0x88)


}; 
 
 


// Class MovieScene.MovieSceneSection
// Size: 0xF0(Inherited: 0x58)
struct UMovieSceneSection : UMovieSceneSignedObject
{
	struct FMovieSceneSectionEvalOptions EvalOptions;  // 0x58 (0x58)
	char pad_90[6];  // 0x5A (0x5A)
	struct FMovieSceneEasingSettings Easing;  // 0x60 (0x60)
	struct FMovieSceneFrameRange SectionRange;  // 0x98 (0x98)
	struct FFrameNumber PreRollFrames;  // 0xA8 (0xA8)
	struct FFrameNumber PostRollFrames;  // 0xAC (0xAC)
	int32_t RowIndex;  // 0xB0 (0xB0)
	int32_t OverlapPriority;  // 0xB4 (0xB4)
	char bIsActive : 1;  // 0xB8 (0xB8)
	char bIsLocked : 1;  // 0xB8 (0xB8)
	char pad_184_1 : 6;  // 0xB8 (0xB8)
	char pad_185[4];  // 0xB9 (0xB9)
	float StartTime;  // 0xBC (0xBC)
	float EndTime;  // 0xC0 (0xC0)
	float PrerollTime;  // 0xC4 (0xC4)
	float PostrollTime;  // 0xC8 (0xC8)
	char bIsInfinite : 1;  // 0xCC (0xCC)
	char pad_204_1 : 7;  // 0xCC (0xCC)
	char pad_205[4];  // [xCD ([xCD)
	char pad_208_1 : 7;  // 0xD0 (0005)
	bool bSupportsInfiniteRange : 1;  // 0xD0 (0xD0)
	struct FOptionalMovieSceneBlendType BlendType;  // 0xD1 (0xD1)
	char pad_211[29];  // 0xD3 (0xD3)


	void SetRowIndex(int32_t NewRowIndex); // Function MovieScene.MovieSceneSection.SetRowIndex
	void SetPreRollFrames(int32_t InPreRollFrames); // Function MovieScene.MovieSceneSection.SetPreRollFrames
	void SetPostRollFrames(int32_t InPostRollFrames); // Function MovieScene.MovieSceneSection.SetPostRollFrames
	void SetOverlapPriority(int32_t NewPriority); // Function MovieScene.MovieSceneSection.SetOverlapPriority
	void SetIsLocked(bool bInIsLocked); // Function MovieScene.MovieSceneSection.SetIsLocked
	void SetIsActive(bool bInIsActive); // Function MovieScene.MovieSceneSection.SetIsActive
	void SetCompletionMode(uint8_t InCompletionMode); // Function MovieScene.MovieSceneSection.SetCompletionMode
	void SetBlendType(uint8_t InBlendType); // Function MovieScene.MovieSceneSection.SetBlendType
	bool IsLocked(); // Function MovieScene.MovieSceneSection.IsLocked
	bool IsActive(); // Function MovieScene.MovieSceneSection.IsActive
	int32_t GetRowIndex(); // Function MovieScene.MovieSceneSection.GetRowIndex
	int32_t GetPreRollFrames(); // Function MovieScene.MovieSceneSection.GetPreRollFrames
	int32_t GetPostRollFrames(); // Function MovieScene.MovieSceneSection.GetPostRollFrames
	int32_t GetOverlapPriority(); // Function MovieScene.MovieSceneSection.GetOverlapPriority
	uint8_t GetCompletionMode(); // Function MovieScene.MovieSceneSection.GetCompletionMode
	struct FOptionalMovieSceneBlendType GetBlendType(); // Function MovieScene.MovieSceneSection.GetBlendType
}; 
 
 


// Class MovieScene.MovieSceneSpawnTrack
// Size: 0xB8(Inherited: 0x98)
struct UMovieSceneSpawnTrack : UMovieSceneTrack
{
	struct TArray<struct UMovieSceneSection*> Sections;  // 0x98 (0x98)
	struct FGuid ObjectGuid;  // 0xA8 (0xA8)


}; 
 
 


// Class MovieScene.MovieScene
// Size: 0x160(Inherited: 0x58)
struct UMovieScene : UMovieSceneSignedObject
{
	char pad_88[8];  // 0x58 (0x58)
	struct TArray<struct FMovieSceneSpawnable> Spawnables;  // 0x60 (0x60)
	struct TArray<struct FMovieScenePossessable> Possessables;  // 0x70 (0x70)
	struct TArray<struct FMovieSceneBinding> ObjectBindings;  // 0x80 (0x80)
	struct TMap<struct FName, struct FMovieSceneObjectBindingIDs> BindingGroups;  // 0x90 (0x90)
	struct TArray<struct UMovieSceneTrack*> MasterTracks;  // 0xE0 (0xE0)
	struct UMovieSceneTrack* CameraCutTrack;  // 0xF0 (0xF0)
	struct FMovieSceneFrameRange SelectionRange;  // 0xF8 (0xF8)
	struct FMovieSceneFrameRange PlaybackRange;  // 0x108 (0x108)
	struct FFrameRate TickResolution;  // 0x118 (0x118)
	struct FFrameRate DisplayRate;  // 0x120 (0x120)
	uint8_t EvaluationType;  // 0x128 (0x128)
	uint8_t ClockSource;  // 0x129 (0x129)
	char pad_298[6];  // 0x12A (0x12A)
	struct FSoftObjectPath CustomClockSourcePath;  // 0x130 (0x130)
	struct TArray<struct FMovieSceneMarkedFrame> MarkedFrames;  // 0x150 (0x150)


}; 
 
 


// Class MovieScene.MovieSceneHookSection
// Size: 0x108(Inherited: 0xF0)
struct UMovieSceneHookSection : UMovieSceneSection
{
	char pad_240[16];  // 0xF0 (0xF0)
	char bRequiresRangedHook : 1;  // 0x100 (0x100)
	char bRequiresTriggerHooks : 1;  // 0x100 (0x100)
	char pad_256_1 : 6;  // 0x100 (0x100)
	char pad_257[8];  // 0x101 (0x101)


}; 
 
 


// Class MovieScene.MovieSceneNameableTrack
// Size: 0x98(Inherited: 0x98)
struct UMovieSceneNameableTrack : UMovieSceneTrack
{


}; 
 
 


// Class MovieScene.MovieSceneTrackInstance
// Size: 0x50(Inherited: 0x28)
struct UMovieSceneTrackInstance : UObject
{
	struct UObject* AnimatedObject;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bIsMasterTrackInstance : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)
	struct UMovieSceneEntitySystemLinker* PrivateLinker;  // 0x38 (0x38)
	struct TArray<struct FMovieSceneTrackInstanceInput> Inputs;  // 0x40 (0x40)


}; 
 
 


// Class MovieScene.MovieSceneSequence
// Size: 0x68(Inherited: 0x58)
struct UMovieSceneSequence : UMovieSceneSignedObject
{
	struct UMovieSceneCompiledData* CompiledData;  // 0x58 (0x58)
	uint8_t DefaultCompletionMode;  // 0x60 (0x60)
	char pad_97_1 : 7;  // 0x61 (0x61)
	bool bParentContextsAreSignificant : 1;  // 0x61 (0x61)
	char pad_98_1 : 7;  // 0x62 (0x62)
	bool bPlayableDirectly : 1;  // 0x62 (0x62)
	uint8_t SequenceFlags;  // 0x63 (0x63)
	char pad_100[4];  // 0x64 (0x64)


	struct FMovieSceneTimecodeSource GetEarliestTimecodeSource(); // Function MovieScene.MovieSceneSequence.GetEarliestTimecodeSource
	struct TArray<struct FMovieSceneObjectBindingID> FindBindingsByTag(struct FName InBindingName); // Function MovieScene.MovieSceneSequence.FindBindingsByTag
	struct FMovieSceneObjectBindingID FindBindingByTag(struct FName InBindingName); // Function MovieScene.MovieSceneSequence.FindBindingByTag
}; 
 
 


// Class MovieScene.MovieSceneCompiledDataManager
// Size: 0x230(Inherited: 0x28)
struct UMovieSceneCompiledDataManager : UObject
{
	char pad_40[176];  // 0x28 (0x28)
	struct TMap<int32_t, struct FMovieSceneSequenceHierarchy> Hierarchies;  // 0xD8 (0xD8)
	struct TMap<int32_t, struct FMovieSceneEvaluationTemplate> TrackTemplates;  // 0x128 (0x128)
	struct TMap<int32_t, struct FMovieSceneEvaluationField> TrackTemplateFields;  // 0x178 (0x178)
	struct TMap<int32_t, struct FMovieSceneEntityComponentField> EntityComponentFields;  // 0x1C8 (0x1C8)
	char pad_536[24];  // 0x218 (0x218)


}; 
 
 


// Class MovieScene.MovieSceneEntitySystem
// Size: 0x40(Inherited: 0x28)
struct UMovieSceneEntitySystem : UObject
{
	struct UMovieSceneEntitySystemLinker* Linker;  // 0x28 (0x28)
	char pad_48[16];  // 0x30 (0x30)


}; 
 
 


// Class MovieScene.MovieSceneEntityInstantiatorSystem
// Size: 0x40(Inherited: 0x40)
struct UMovieSceneEntityInstantiatorSystem : UMovieSceneEntitySystem
{


}; 
 
 


// Class MovieScene.MovieSceneGenericBoundObjectInstantiator
// Size: 0x40(Inherited: 0x40)
struct UMovieSceneGenericBoundObjectInstantiator : UMovieSceneEntityInstantiatorSystem
{


}; 
 
 


// Class MovieScene.MovieSceneEntitySystemLinker
// Size: 0x6D8(Inherited: 0x28)
struct UMovieSceneEntitySystemLinker : UObject
{
	char pad_40[624];  // 0x28 (0x28)
	struct FMovieSceneEntitySystemGraph SystemGraph;  // 0x298 (0x298)
	char pad_976[776];  // 0x3D0 (0x3D0)


}; 
 
 


// Class MovieScene.MovieSceneSubSection
// Size: 0x130(Inherited: 0xF0)
struct UMovieSceneSubSection : UMovieSceneSection
{
	struct FMovieSceneSectionParameters Parameters;  // 0xF0 (0xF0)
	float StartOffset;  // 0x114 (0x114)
	float TimeScale;  // 0x118 (0x118)
	float PrerollTime;  // 0x11C (0x11C)
	char NetworkMask;  // 0x120 (0x120)
	char pad_289[7];  // 0x121 (0x121)
	struct UMovieSceneSequence* SubSequence;  // 0x128 (0x128)


	void SetSequence(struct UMovieSceneSequence* Sequence); // Function MovieScene.MovieSceneSubSection.SetSequence
	struct UMovieSceneSequence* GetSequence(); // Function MovieScene.MovieSceneSubSection.GetSequence
}; 
 
 


// Class MovieScene.MovieScenePlaybackClient
// Size: 0x28(Inherited: 0x28)
struct UMovieScenePlaybackClient : UInterface
{


}; 
 
 


// Class MovieScene.MovieSceneSequencePlayer
// Size: 0x4A8(Inherited: 0x28)
struct UMovieSceneSequencePlayer : UObject
{
	char pad_40[504];  // 0x28 (0x28)
	struct TScriptInterface<IMovieSceneSequencePlayerObserver> Observer;  // 0x220 (0x220)
	struct FMulticastInlineDelegate OnPlay;  // 0x230 (0x230)
	struct FMulticastInlineDelegate OnPlayReverse;  // 0x240 (0x240)
	struct FMulticastInlineDelegate OnStop;  // 0x250 (0x250)
	struct FMulticastInlineDelegate OnPause;  // 0x260 (0x260)
	struct FMulticastInlineDelegate OnFinished;  // 0x270 (0x270)
	enum class EMovieScenePlayerStatus Status;  // 0x280 (0x280)
	char pad_641[3];  // 0x281 (0x281)
	char bReversePlayback : 1;  // 0x284 (0x284)
	char pad_644_1 : 7;  // 0x284 (0x284)
	char pad_645[4];  // 0x285 (0x285)
	struct UMovieSceneSequence* Sequence;  // 0x288 (0x288)
	struct FFrameNumber StartTime;  // 0x290 (0x290)
	int32_t DurationFrames;  // 0x294 (0x294)
	float DurationSubFrames;  // 0x298 (0x298)
	int32_t CurrentNumLoops;  // 0x29C (0x29C)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings;  // 0x2A0 (0x2A0)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;  // 0x2C0 (0x2C0)
	char pad_840[136];  // 0x348 (0x348)
	struct FMovieSceneSequenceReplProperties NetSyncProps;  // 0x3D0 (0x3D0)
	struct TScriptInterface<IMovieScenePlaybackClient> PlaybackClient;  // 0x3E0 (0x3E0)
	struct UMovieSceneSequenceTickManager* TickManager;  // 0x3F0 (0x3F0)
	char pad_1016[176];  // 0x3F8 (0x3F8)


	void StopAtCurrentTime(); // Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime
	void Stop(); // Function MovieScene.MovieSceneSequencePlayer.Stop
	void SetTimeRange(float StartTime, float Duration); // Function MovieScene.MovieSceneSequencePlayer.SetTimeRange
	void SetPlayRate(float PlayRate); // Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
	void SetPlaybackPosition(struct FMovieSceneSequencePlaybackParams PlaybackParams); // Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
	void SetFrameRate(struct FFrameRate FrameRate); // Function MovieScene.MovieSceneSequencePlayer.SetFrameRate
	void SetFrameRange(int32_t StartFrame, int32_t Duration, float SubFrames); // Function MovieScene.MovieSceneSequencePlayer.SetFrameRange
	void SetDisableCameraCuts(bool bInDisableCameraCuts); // Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts
	void ScrubToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds
	bool ScrubToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame
	void ScrubToFrame(struct FFrameTime NewPosition); // Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame
	void Scrub(); // Function MovieScene.MovieSceneSequencePlayer.Scrub
	void RPC_OnStopEvent(struct FFrameTime StoppedTime); // Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent
	void RPC_OnFinishPlaybackEvent(struct FFrameTime StoppedTime); // Function MovieScene.MovieSceneSequencePlayer.RPC_OnFinishPlaybackEvent
	void RPC_ExplicitServerUpdateEvent(uint8_t Method, struct FFrameTime RelevantTime); // Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent
	void RestoreState(); // Function MovieScene.MovieSceneSequencePlayer.RestoreState
	void PlayToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds
	bool PlayToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame
	void PlayToFrame(struct FFrameTime NewPosition); // Function MovieScene.MovieSceneSequencePlayer.PlayToFrame
	void PlayTo(struct FMovieSceneSequencePlaybackParams PlaybackParams, struct FMovieSceneSequencePlayToParams PlayToParams); // Function MovieScene.MovieSceneSequencePlayer.PlayTo
	void PlayReverse(); // Function MovieScene.MovieSceneSequencePlayer.PlayReverse
	void PlayLooping(int32_t NumLoops); // Function MovieScene.MovieSceneSequencePlayer.PlayLooping
	void Play(); // Function MovieScene.MovieSceneSequencePlayer.Play
	void Pause(); // Function MovieScene.MovieSceneSequencePlayer.Pause
	void JumpToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds
	bool JumpToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame
	void JumpToFrame(struct FFrameTime NewPosition); // Function MovieScene.MovieSceneSequencePlayer.JumpToFrame
	bool IsReversed(); // Function MovieScene.MovieSceneSequencePlayer.IsReversed
	bool IsPlaying(); // Function MovieScene.MovieSceneSequencePlayer.IsPlaying
	bool IsPaused(); // Function MovieScene.MovieSceneSequencePlayer.IsPaused
	void GoToEndAndStop(); // Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop
	struct FQualifiedFrameTime GetStartTime(); // Function MovieScene.MovieSceneSequencePlayer.GetStartTime
	struct FString GetSequenceName(bool bAddClientInfo); // Function MovieScene.MovieSceneSequencePlayer.GetSequenceName
	struct UMovieSceneSequence* GetSequence(); // Function MovieScene.MovieSceneSequencePlayer.GetSequence
	float GetPlayRate(); // Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
	struct TArray<struct FMovieSceneObjectBindingID> GetObjectBindings(struct UObject* InObject); // Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings
	struct FFrameRate GetFrameRate(); // Function MovieScene.MovieSceneSequencePlayer.GetFrameRate
	int32_t GetFrameDuration(); // Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration
	struct FQualifiedFrameTime GetEndTime(); // Function MovieScene.MovieSceneSequencePlayer.GetEndTime
	struct FQualifiedFrameTime GetDuration(); // Function MovieScene.MovieSceneSequencePlayer.GetDuration
	bool GetDisableCameraCuts(); // Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts
	struct FQualifiedFrameTime GetCurrentTime(); // Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime
	struct TArray<struct UObject*> GetBoundObjects(struct FMovieSceneObjectBindingID ObjectBinding); // Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects
	void ChangePlaybackDirection(); // Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
}; 
 
 


// Class MovieScene.MovieSceneSubTrack
// Size: 0xA8(Inherited: 0x98)
struct UMovieSceneSubTrack : UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> Sections;  // 0x98 (0x98)


}; 
 
 


// Class MovieScene.MovieSceneChannelOverrideProvider
// Size: 0x28(Inherited: 0x28)
struct UMovieSceneChannelOverrideProvider : UInterface
{


}; 
 
 


// Class MovieScene.MovieSceneDeterminismSource
// Size: 0x28(Inherited: 0x28)
struct UMovieSceneDeterminismSource : UInterface
{


}; 
 
 


// Class MovieScene.MovieSceneTrackInstanceInstantiator
// Size: 0xF0(Inherited: 0x40)
struct UMovieSceneTrackInstanceInstantiator : UMovieSceneEntityInstantiatorSystem
{
	char pad_64[176];  // 0x40 (0x40)


}; 
 
 


// Class MovieScene.MovieSceneEvaluationHook
// Size: 0x28(Inherited: 0x28)
struct UMovieSceneEvaluationHook : UInterface
{


}; 
 
 


// Class MovieScene.MovieSceneSequencePlayerObserver
// Size: 0x28(Inherited: 0x28)
struct UMovieSceneSequencePlayerObserver : UInterface
{


}; 
 
 


// Class MovieScene.TestMovieSceneEvalHookSection
// Size: 0x120(Inherited: 0x108)
struct UTestMovieSceneEvalHookSection : UMovieSceneHookSection
{
	char pad_264[24];  // 0x108 (0x108)


}; 
 
 


// Class MovieScene.MovieSceneBindingOwnerInterface
// Size: 0x28(Inherited: 0x28)
struct UMovieSceneBindingOwnerInterface : UInterface
{


}; 
 
 


// Class MovieScene.MovieSceneChannelOverrideContainer
// Size: 0x58(Inherited: 0x58)
struct UMovieSceneChannelOverrideContainer : UMovieSceneSignedObject
{


}; 
 
 


// Class MovieScene.MovieSceneEasingFunction
// Size: 0x28(Inherited: 0x28)
struct UMovieSceneEasingFunction : UInterface
{


	float OnEvaluate(float Interp); // Function MovieScene.MovieSceneEasingFunction.OnEvaluate
}; 
 
 


// Class MovieScene.MovieSceneKeyProxy
// Size: 0x28(Inherited: 0x28)
struct UMovieSceneKeyProxy : UInterface
{


}; 
 
 


// Class MovieScene.MovieSceneSequenceTickManagerClient
// Size: 0x28(Inherited: 0x28)
struct UMovieSceneSequenceTickManagerClient : UInterface
{


}; 
 
 


// Class MovieScene.MovieSceneSectionChannelOverrideRegistry
// Size: 0x78(Inherited: 0x28)
struct UMovieSceneSectionChannelOverrideRegistry : UObject
{
	struct TMap<struct FName, struct UMovieSceneChannelOverrideContainer*> Overrides;  // 0x28 (0x28)


}; 
 
 


// Class MovieScene.MovieSceneTrackTemplateProducer
// Size: 0x28(Inherited: 0x28)
struct UMovieSceneTrackTemplateProducer : UInterface
{


}; 
 
 


// Class MovieScene.MovieSceneEntityProvider
// Size: 0x28(Inherited: 0x28)
struct UMovieSceneEntityProvider : UInterface
{


}; 
 
 


// Class MovieScene.MovieSceneCustomClockSource
// Size: 0x28(Inherited: 0x28)
struct UMovieSceneCustomClockSource : UInterface
{


	void OnTick(float DeltaSeconds, float InPlayRate); // Function MovieScene.MovieSceneCustomClockSource.OnTick
	void OnStopPlaying(struct FQualifiedFrameTime& InStopTime); // Function MovieScene.MovieSceneCustomClockSource.OnStopPlaying
	void OnStartPlaying(struct FQualifiedFrameTime& InStartTime); // Function MovieScene.MovieSceneCustomClockSource.OnStartPlaying
	struct FFrameTime OnRequestCurrentTime(struct FQualifiedFrameTime& InCurrentTime, float InPlayRate); // Function MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime
}; 
 
 


// Class MovieScene.MovieSceneBlenderSystem
// Size: 0x68(Inherited: 0x40)
struct UMovieSceneBlenderSystem : UMovieSceneEntitySystem
{
	char pad_64[40];  // 0x40 (0x40)


}; 
 
 


// Class MovieScene.MovieSceneBoundSceneComponentInstantiator
// Size: 0x40(Inherited: 0x40)
struct UMovieSceneBoundSceneComponentInstantiator : UMovieSceneEntityInstantiatorSystem
{


}; 
 
 


// Class MovieScene.MovieSceneValueDecomposer
// Size: 0x28(Inherited: 0x28)
struct UMovieSceneValueDecomposer : UInterface
{


}; 
 
 


// Class MovieScene.TestMovieSceneSequence
// Size: 0x70(Inherited: 0x68)
struct UTestMovieSceneSequence : UMovieSceneSequence
{
	struct UMovieScene* MovieScene;  // 0x68 (0x68)


}; 
 
 


// Class MovieScene.MovieSceneNodeGroup
// Size: 0x28(Inherited: 0x28)
struct UMovieSceneNodeGroup : UObject
{


}; 
 
 


// Class MovieScene.MovieSceneEvalTimeSystem
// Size: 0x50(Inherited: 0x40)
struct UMovieSceneEvalTimeSystem : UMovieSceneEntitySystem
{
	char pad_64[16];  // 0x40 (0x40)


}; 
 
 


// Class MovieScene.MovieSceneEvaluationHookSystem
// Size: 0x90(Inherited: 0x40)
struct UMovieSceneEvaluationHookSystem : UMovieSceneEntitySystem
{
	struct TMap<struct FMovieSceneEvaluationInstanceKey, struct FMovieSceneEvaluationHookEventContainer> PendingEventsByRootInstance;  // 0x40 (0x40)


}; 
 
 


// Class MovieScene.MovieSceneBuiltInEasingFunction
// Size: 0x38(Inherited: 0x28)
struct UMovieSceneBuiltInEasingFunction : UObject
{
	char pad_40[8];  // 0x28 (0x28)
	uint8_t Type;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)


}; 
 
 


// Class MovieScene.MovieSceneMasterInstantiatorSystem
// Size: 0x40(Inherited: 0x40)
struct UMovieSceneMasterInstantiatorSystem : UMovieSceneEntityInstantiatorSystem
{


}; 
 
 


// Class MovieScene.MovieSceneNodeGroupCollection
// Size: 0x28(Inherited: 0x28)
struct UMovieSceneNodeGroupCollection : UObject
{


}; 
 
 


// Class MovieScene.MovieSceneCachePreAnimatedStateSystem
// Size: 0x40(Inherited: 0x40)
struct UMovieSceneCachePreAnimatedStateSystem : UMovieSceneEntityInstantiatorSystem
{


}; 
 
 


// Class MovieScene.MovieScenePreAnimatedStateSystemInterface
// Size: 0x28(Inherited: 0x28)
struct UMovieScenePreAnimatedStateSystemInterface : UInterface
{


}; 
 
 


// Class MovieScene.TestMovieSceneSection
// Size: 0xF0(Inherited: 0xF0)
struct UTestMovieSceneSection : UMovieSceneSection
{


}; 
 
 


// Class MovieScene.MovieSceneRestorePreAnimatedStateSystem
// Size: 0x50(Inherited: 0x40)
struct UMovieSceneRestorePreAnimatedStateSystem : UMovieSceneEntityInstantiatorSystem
{
	char pad_64[16];  // 0x40 (0x40)


}; 
 
 


// Class MovieScene.MovieSceneSpawnablesSystem
// Size: 0x40(Inherited: 0x40)
struct UMovieSceneSpawnablesSystem : UMovieSceneEntitySystem
{


}; 
 
 


// Class MovieScene.MovieSceneTrackInstanceSystem
// Size: 0x48(Inherited: 0x40)
struct UMovieSceneTrackInstanceSystem : UMovieSceneEntitySystem
{
	struct UMovieSceneTrackInstanceInstantiator* Instantiator;  // 0x40 (0x40)


}; 
 
 


// Class MovieScene.MovieSceneEasingExternalCurve
// Size: 0x38(Inherited: 0x28)
struct UMovieSceneEasingExternalCurve : UObject
{
	char pad_40[8];  // 0x28 (0x28)
	struct UCurveFloat* Curve;  // 0x30 (0x30)


}; 
 
 


// Class MovieScene.NodeAndChannelMappings
// Size: 0x28(Inherited: 0x28)
struct UNodeAndChannelMappings : UInterface
{


}; 
 
 


// Class MovieScene.MovieSceneBindingOverrides
// Size: 0x90(Inherited: 0x28)
struct UMovieSceneBindingOverrides : UObject
{
	struct TArray<struct FMovieSceneBindingOverrideData> BindingData;  // 0x28 (0x28)
	char pad_56[88];  // 0x38 (0x38)


}; 
 
 


// Class MovieScene.MovieSceneFolder
// Size: 0x78(Inherited: 0x28)
struct UMovieSceneFolder : UObject
{
	char pad_40[4];  // 0x28 (0x28)
	struct FName FolderName;  // 0x2C (0x2C)
	char pad_52[4];  // 0x34 (0x34)
	struct TArray<struct UMovieSceneFolder*> ChildFolders;  // 0x38 (0x38)
	struct TArray<struct UMovieSceneTrack*> ChildMasterTracks;  // 0x48 (0x48)
	struct TArray<struct FString> ChildObjectBindingStrings;  // 0x58 (0x58)
	char pad_104[16];  // 0x68 (0x68)


}; 
 
 


// Class MovieScene.MovieSceneSequenceTickManager
// Size: 0x98(Inherited: 0x28)
struct UMovieSceneSequenceTickManager : UObject
{
	char pad_40[112];  // 0x28 (0x28)


}; 
 
 


// Class MovieScene.TestMovieSceneTrack
// Size: 0xB8(Inherited: 0x98)
struct UTestMovieSceneTrack : UMovieSceneTrack
{
	char pad_152[8];  // 0x98 (0x98)
	char pad_160_1 : 7;  // 0xA0 (0xA0)
	bool bHighPassFilter : 1;  // 0xA0 (0xA0)
	char pad_161[7];  // 0xA1 (0xA1)
	struct TArray<struct UMovieSceneSection*> SectionArray;  // 0xA8 (0xA8)


}; 
 
 


// Class MovieScene.MovieSceneBoolSection
// Size: 0x1F8(Inherited: 0xF0)
struct UMovieSceneBoolSection : UMovieSceneSection
{
	char pad_240_1 : 7;  // 0xF0 (0xF0)
	bool DefaultValue : 1;  // 0xF0 (0xF0)
	char pad_241[7];  // 0xF1 (0xF1)
	struct FMovieSceneBoolChannel BoolCurve;  // 0xF8 (0xF8)


}; 
 
 


// Class MovieScene.MovieSceneSpawnSection
// Size: 0x200(Inherited: 0x1F8)
struct UMovieSceneSpawnSection : UMovieSceneBoolSection
{
	char pad_504[8];  // 0x1F8 (0x1F8)


}; 
 
 


// Class MovieScene.TestMovieSceneSubTrack
// Size: 0xB8(Inherited: 0xA8)
struct UTestMovieSceneSubTrack : UMovieSceneSubTrack
{
	struct TArray<struct UMovieSceneSection*> SectionArray;  // 0xA8 (0xA8)


}; 
 
 


// Class MovieScene.TestMovieSceneSubSection
// Size: 0x130(Inherited: 0x130)
struct UTestMovieSceneSubSection : UMovieSceneSubSection
{


}; 
 
 


// Class MovieScene.TestMovieSceneEvalHookTrack
// Size: 0xA8(Inherited: 0x98)
struct UTestMovieSceneEvalHookTrack : UMovieSceneTrack
{
	struct TArray<struct UMovieSceneSection*> SectionArray;  // 0x98 (0x98)


}; 
 
 


