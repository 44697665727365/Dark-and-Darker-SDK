#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityTree
struct FMovieSceneEvaluationFieldEntityTree
{
	char pad_0[96];  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneObjectBindingID
struct FMovieSceneObjectBindingID
{
	struct FGuid Guid;  // 0x0 (0x0)
	int32_t SequenceID;  // 0x10 (0x10)
	int32_t ResolveParentIndex;  // 0x14 (0x14)


}; 
 
 // ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
struct FMovieSceneSequencePlaybackSettings
{
	char bAutoPlay : 1;  // 0x0 (0x0)
	char pad_0_1 : 7;  // 0x0 (0x0)
	char pad_1[4];  // 0x1 (0x1)
	struct FMovieSceneSequenceLoopCount LoopCount;  // 0x4 (0x4)
	struct FMovieSceneSequenceTickInterval TickInterval;  // 0x8 (0x8)
	float PlayRate;  // 0x14 (0x14)
	float StartTime;  // 0x18 (0x18)
	char bRandomStartTime : 1;  // 0x1C (0x1C)
	char bRestoreState : 1;  // 0x1C (0x1C)
	char bDisableMovementInput : 1;  // 0x1C (0x1C)
	char bDisableLookAtInput : 1;  // 0x1C (0x1C)
	char bHidePlayer : 1;  // 0x1C (0x1C)
	char bHideHud : 1;  // 0x1C (0x1C)
	char bDisableCameraCuts : 1;  // 0x1C (0x1C)
	char bPauseAtEnd : 1;  // 0x1C (0x1C)
	char bInheritTickIntervalFromOwner : 1;  // 0x1D (0x1D)
	char pad_29_1 : 7;  // 0x1D (0x1D)
	char pad_30[3];  // 0x1E (0x1E)


}; 
 
 // ScriptStruct MovieScene.MovieSceneSequenceTransform
struct FMovieSceneSequenceTransform
{
	struct FMovieSceneTimeTransform LinearTransform;  // 0x0 (0x0)
	char pad_12[4];  // 0xC (0xC)
	struct TArray<struct FMovieSceneNestedSequenceTransform> NestedTransforms;  // 0x10 (0x10)


}; 
 
 // ScriptStruct MovieScene.MovieSceneEvalTemplate
// Size: 0x20(Inherited: 0x10)
struct FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase
{
	uint8_t CompletionMode;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	struct TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr;  // 0x14 (0x14)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // Function MovieScene.MovieSceneSection.SetPostRollFrames
struct FSetPostRollFrames
{
	int32_t InPostRollFrames;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneChannel
struct FMovieSceneChannel
{
	char pad_0[80];  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.TrackInstanceInputComponent
struct FTrackInstanceInputComponent
{
	struct UMovieSceneSection* Section;  // 0x0 (0x0)
	int32_t OutputIndex;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // ScriptStruct MovieScene.MovieSceneEvalTemplateBase
struct FMovieSceneEvalTemplateBase
{
	char pad_0[16];  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneTrackImplementation
// Size: 0x10(Inherited: 0x10)
struct FMovieSceneTrackImplementation : FMovieSceneEvalTemplateBase
{


}; 
 
 // ScriptStruct MovieScene.MovieSceneFloatChannel
// Size: 0x110(Inherited: 0x50)
struct FMovieSceneFloatChannel : FMovieSceneChannel
{
	enum class ERichCurveExtrapolation PreInfinityExtrap;  // 0x50 (0x50)
	enum class ERichCurveExtrapolation PostInfinityExtrap;  // 0x51 (0x51)
	char pad_82[6];  // 0x52 (0x52)
	struct TArray<struct FFrameNumber> Times;  // 0x58 (0x58)
	struct TArray<struct FMovieSceneFloatValue> Values;  // 0x68 (0x68)
	float DefaultValue;  // 0x78 (0x78)
	char pad_124_1 : 7;  // 0x7C (0x7C)
	bool bHasDefaultValue : 1;  // 0x7C (0x7C)
	char pad_125[3];  // 0x7D (0x7D)
	struct FMovieSceneKeyHandleMap KeyHandles;  // 0x80 (0x80)
	struct FFrameRate TickResolution;  // 0x108 (0x108)


}; 
 
 // ScriptStruct MovieScene.MovieSceneBoolChannel
// Size: 0x100(Inherited: 0x50)
struct FMovieSceneBoolChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> Times;  // 0x50 (0x50)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool DefaultValue : 1;  // 0x60 (0x60)
	char pad_97_1 : 7;  // 0x61 (0x61)
	bool bHasDefaultValue : 1;  // 0x61 (0x61)
	char pad_98[6];  // 0x62 (0x62)
	struct TArray<bool> Values;  // 0x68 (0x68)
	char pad_120[136];  // 0x78 (0x78)


}; 
 
 // ScriptStruct MovieScene.MovieSceneKeyHandleMap
// Size: 0x88(Inherited: 0x88)
struct FMovieSceneKeyHandleMap : FKeyHandleLookupTable
{


}; 
 
 // ScriptStruct MovieScene.MovieSceneTangentData
struct FMovieSceneTangentData
{
	float ArriveTangent;  // 0x0 (0x0)
	float LeaveTangent;  // 0x4 (0x4)
	float ArriveTangentWeight;  // 0x8 (0x8)
	float LeaveTangentWeight;  // 0xC (0xC)
	enum class ERichCurveTangentWeightMode TangentWeightMode;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)


}; 
 
 // ScriptStruct MovieScene.MovieSceneFloatValue
struct FMovieSceneFloatValue
{
	float Value;  // 0x0 (0x0)
	struct FMovieSceneTangentData Tangent;  // 0x4 (0x4)
	enum class ERichCurveInterpMode InterpMode;  // 0x18 (0x18)
	enum class ERichCurveTangentMode TangentMode;  // 0x19 (0x19)
	char PaddingByte;  // 0x1A (0x1A)
	char pad_27[1];  // 0x1B (0x1B)


}; 
 
 // ScriptStruct MovieScene.MovieSceneFieldEntry_EvaluationTrack
struct FMovieSceneFieldEntry_EvaluationTrack
{
	struct FMovieSceneEvaluationFieldTrackPtr TrackPtr;  // 0x0 (0x0)
	uint16_t NumChildren;  // 0x8 (0x8)
	char pad_10[2];  // 0xA (0xA)


}; 
 
 // ScriptStruct MovieScene.MovieSceneEvaluationHookComponent
struct FMovieSceneEvaluationHookComponent
{
	struct TScriptInterface<IMovieSceneEvaluationHook> Interface;  // 0x0 (0x0)
	char pad_16[16];  // 0x10 (0x10)


}; 
 
 // ScriptStruct MovieScene.MovieSceneIntegerChannel
// Size: 0x100(Inherited: 0x50)
struct FMovieSceneIntegerChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> Times;  // 0x50 (0x50)
	int32_t DefaultValue;  // 0x60 (0x60)
	char pad_100_1 : 7;  // 0x64 (0x64)
	bool bHasDefaultValue : 1;  // 0x64 (0x64)
	char pad_101[3];  // 0x65 (0x65)
	struct TArray<int32_t> Values;  // 0x68 (0x68)
	char pad_120[136];  // 0x78 (0x78)


}; 
 
 // Function MovieScene.MovieSceneSequencePlayer.IsPaused
struct FIsPaused
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneSequence.GetEarliestTimecodeSource
struct FGetEarliestTimecodeSource
{
	struct FMovieSceneTimecodeSource ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneSequenceInstanceData
struct FMovieSceneSequenceInstanceData
{
	char pad_0[8];  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneEmptyStruct
struct FMovieSceneEmptyStruct
{
	char pad_0[1];  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneEvaluationOperand
struct FMovieSceneEvaluationOperand
{
	struct FGuid ObjectBindingID;  // 0x0 (0x0)
	struct FMovieSceneSequenceID SequenceID;  // 0x10 (0x10)


}; 
 
 // ScriptStruct MovieScene.MovieSceneSequenceID
struct FMovieSceneSequenceID
{
	uint32_t Value;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneByteChannel
// Size: 0x108(Inherited: 0x50)
struct FMovieSceneByteChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> Times;  // 0x50 (0x50)
	char DefaultValue;  // 0x60 (0x60)
	char pad_97_1 : 7;  // 0x61 (0x61)
	bool bHasDefaultValue : 1;  // 0x61 (0x61)
	char pad_98[6];  // 0x62 (0x62)
	struct TArray<char> Values;  // 0x68 (0x68)
	struct UEnum* Enum;  // 0x78 (0x78)
	char pad_128[136];  // 0x80 (0x80)


}; 
 
 // ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
struct FMovieSceneEvalTemplatePtr
{
	char pad_0[136];  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieScenePropertyBinding
struct FMovieScenePropertyBinding
{
	struct FName PropertyName;  // 0x0 (0x0)
	struct FName PropertyPath;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bCanUseClassLookup : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)


}; 
 
 // ScriptStruct MovieScene.MovieSceneEvaluationField
struct FMovieSceneEvaluationField
{
	struct TArray<struct FMovieSceneFrameRange> Ranges;  // 0x0 (0x0)
	struct TArray<struct FMovieSceneEvaluationGroup> Groups;  // 0x10 (0x10)
	struct TArray<struct FMovieSceneEvaluationMetaData> MetaData;  // 0x20 (0x20)


}; 
 
 // ScriptStruct MovieScene.MovieScenePropertySectionTemplate
// Size: 0x38(Inherited: 0x20)
struct FMovieScenePropertySectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData PropertyData;  // 0x20 (0x20)


}; 
 
 // ScriptStruct MovieScene.MovieSceneTrackInstanceEntry
struct FMovieSceneTrackInstanceEntry
{
	struct UObject* BoundObject;  // 0x0 (0x0)
	struct UMovieSceneTrackInstance* TrackInstance;  // 0x8 (0x8)


}; 
 
 // ScriptStruct MovieScene.MovieSceneSectionGroup
struct FMovieSceneSectionGroup
{
	struct TArray<struct TWeakObjectPtr<UMovieSceneSection>> Sections;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieScenePropertySectionData
struct FMovieScenePropertySectionData
{
	struct FName PropertyName;  // 0x0 (0x0)
	struct FString PropertyPath;  // 0x8 (0x8)


}; 
 
 // ScriptStruct MovieScene.MovieSceneEvaluationFieldEntity
struct FMovieSceneEvaluationFieldEntity
{
	struct FMovieSceneEvaluationFieldEntityKey Key;  // 0x0 (0x0)
	int32_t SharedMetaDataIndex;  // 0xC (0xC)


}; 
 
 // ScriptStruct MovieScene.ActorForWorldTransforms
struct FActorForWorldTransforms
{
	struct TWeakObjectPtr<AActor> Actor;  // 0x0 (0x0)
	struct TWeakObjectPtr<USceneComponent> Component;  // 0x8 (0x8)
	struct FName SocketName;  // 0x10 (0x10)


}; 
 
 // Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings
struct FGetObjectBindings
{
	struct UObject* InObject;  // 0x0 (0x0)
	struct TArray<struct FMovieSceneObjectBindingID> ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
struct FMovieSceneEvaluationFieldTrackPtr
{
	struct FMovieSceneSequenceID SequenceID;  // 0x0 (0x0)
	struct FMovieSceneTrackIdentifier TrackIdentifier;  // 0x4 (0x4)


}; 
 
 // ScriptStruct MovieScene.MovieSceneDoubleChannel
// Size: 0x118(Inherited: 0x50)
struct FMovieSceneDoubleChannel : FMovieSceneChannel
{
	enum class ERichCurveExtrapolation PreInfinityExtrap;  // 0x50 (0x50)
	enum class ERichCurveExtrapolation PostInfinityExtrap;  // 0x51 (0x51)
	char pad_82[6];  // 0x52 (0x52)
	struct TArray<struct FFrameNumber> Times;  // 0x58 (0x58)
	struct TArray<struct FMovieSceneDoubleValue> Values;  // 0x68 (0x68)
	double DefaultValue;  // 0x78 (0x78)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool bHasDefaultValue : 1;  // 0x80 (0x80)
	char pad_129[7];  // 0x81 (0x81)
	struct FMovieSceneKeyHandleMap KeyHandles;  // 0x88 (0x88)
	struct FFrameRate TickResolution;  // 0x110 (0x110)


}; 
 
 // ScriptStruct MovieScene.MovieSceneDeterminismData
struct FMovieSceneDeterminismData
{
	struct TArray<struct FFrameTime> Fences;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bParentSequenceRequiresLowerFence : 1;  // 0x10 (0x10)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool bParentSequenceRequiresUpperFence : 1;  // 0x11 (0x11)
	char pad_18[6];  // 0x12 (0x12)


}; 
 
 // ScriptStruct MovieScene.MovieSceneEvaluationKey
struct FMovieSceneEvaluationKey
{
	struct FMovieSceneSequenceID SequenceID;  // 0x0 (0x0)
	struct FMovieSceneTrackIdentifier TrackIdentifier;  // 0x4 (0x4)
	uint32_t SectionIndex;  // 0x8 (0x8)


}; 
 
 // ScriptStruct MovieScene.MovieSceneTrackIdentifier
struct FMovieSceneTrackIdentifier
{
	uint32_t Value;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneEvaluationHookEventContainer
struct FMovieSceneEvaluationHookEventContainer
{
	struct TArray<struct FMovieSceneEvaluationHookEvent> Events;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneKeyStruct
struct FMovieSceneKeyStruct
{
	char pad_0[8];  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneCompiledSequenceFlagStruct
struct FMovieSceneCompiledSequenceFlagStruct
{
	char bParentSequenceRequiresLowerFence : 1;  // 0x0 (0x0)
	char bParentSequenceRequiresUpperFence : 1;  // 0x0 (0x0)
	char pad_0_1 : 6;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneSubSequenceTreeEntry
struct FMovieSceneSubSequenceTreeEntry
{
	char pad_0[24];  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneObjectPathChannelKeyValue
struct FMovieSceneObjectPathChannelKeyValue
{
	struct TSoftObjectPtr<UObject> SoftPtr;  // 0x0 (0x0)
	struct UObject* HardPtr;  // 0x30 (0x30)


}; 
 
 // ScriptStruct MovieScene.GeneratedMovieSceneKeyStruct
struct FGeneratedMovieSceneKeyStruct
{
	char pad_0[80];  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneKeyTimeStruct
// Size: 0x28(Inherited: 0x8)
struct FMovieSceneKeyTimeStruct : FMovieSceneKeyStruct
{
	struct FFrameNumber Time;  // 0x8 (0x8)
	char pad_12[28];  // 0xC (0xC)


}; 
 
 // ScriptStruct MovieScene.MovieSceneSectionParameters
struct FMovieSceneSectionParameters
{
	struct FFrameNumber StartFrameOffset;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bCanLoop : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct FFrameNumber EndFrameOffset;  // 0x8 (0x8)
	struct FFrameNumber FirstLoopStartFrameOffset;  // 0xC (0xC)
	float TimeScale;  // 0x10 (0x10)
	int32_t HierarchicalBias;  // 0x14 (0x14)
	float StartOffset;  // 0x18 (0x18)
	float PrerollTime;  // 0x1C (0x1C)
	float PostrollTime;  // 0x20 (0x20)


}; 
 
 // ScriptStruct MovieScene.MovieSceneSegmentIdentifier
struct FMovieSceneSegmentIdentifier
{
	int32_t IdentifierIndex;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneSequenceLoopCount
struct FMovieSceneSequenceLoopCount
{
	int32_t Value;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityKey
struct FMovieSceneEvaluationFieldEntityKey
{
	struct TWeakObjectPtr<UObject> EntityOwner;  // 0x0 (0x0)
	uint32_t EntityID;  // 0x8 (0x8)


}; 
 
 // ScriptStruct MovieScene.SectionEvaluationData
struct FSectionEvaluationData
{
	int32_t ImplIndex;  // 0x0 (0x0)
	struct FFrameNumber ForcedTime;  // 0x4 (0x4)
	uint8_t Flags;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // ScriptStruct MovieScene.MovieSceneEntitySystemGraphNodes
struct FMovieSceneEntitySystemGraphNodes
{
	char pad_0[56];  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneSegment
struct FMovieSceneSegment
{
	char pad_0[88];  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneSequenceTickInterval
struct FMovieSceneSequenceTickInterval
{
	float TickIntervalSeconds;  // 0x0 (0x0)
	float EvaluationBudgetMicroseconds;  // 0x4 (0x4)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bTickWhenPaused : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool bAllowRounding : 1;  // 0x9 (0x9)
	char pad_10[2];  // 0xA (0xA)


}; 
 
 // ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
struct FMovieSceneTrackImplementationPtr
{
	char pad_0[56];  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneTimeTransform
struct FMovieSceneTimeTransform
{
	float TimeScale;  // 0x0 (0x0)
	struct FFrameTime Offset;  // 0x4 (0x4)


}; 
 
 // ScriptStruct MovieScene.MovieSceneSequencePlayToParams
struct FMovieSceneSequencePlayToParams
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bExclusive : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneAudioTriggerChannel
// Size: 0xF8(Inherited: 0x50)
struct FMovieSceneAudioTriggerChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> Times;  // 0x50 (0x50)
	struct TArray<bool> Values;  // 0x60 (0x60)
	char pad_112[136];  // 0x70 (0x70)


}; 
 
 // ScriptStruct MovieScene.MovieSceneDoubleValue
struct FMovieSceneDoubleValue
{
	double Value;  // 0x0 (0x0)
	struct FMovieSceneTangentData Tangent;  // 0x8 (0x8)
	enum class ERichCurveInterpMode InterpMode;  // 0x1C (0x1C)
	enum class ERichCurveTangentMode TangentMode;  // 0x1D (0x1D)
	char PaddingByte;  // 0x1E (0x1E)
	char pad_31[1];  // 0x1F (0x1F)


}; 
 
 // Function MovieScene.MovieSceneSection.IsLocked
struct FIsLocked
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneObjectPathChannel
// Size: 0x138(Inherited: 0x50)
struct FMovieSceneObjectPathChannel : FMovieSceneChannel
{
	 PropertyClass;  // 0x50 (0x50)
	struct TArray<struct FFrameNumber> Times;  // 0x58 (0x58)
	struct TArray<struct FMovieSceneObjectPathChannelKeyValue> Values;  // 0x68 (0x68)
	struct FMovieSceneObjectPathChannelKeyValue DefaultValue;  // 0x78 (0x78)
	char pad_176[136];  // 0xB0 (0xB0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneSequenceCompilerMaskStruct
struct FMovieSceneSequenceCompilerMaskStruct
{
	char bHierarchy : 1;  // 0x0 (0x0)
	char bEvaluationTemplate : 1;  // 0x0 (0x0)
	char bEvaluationTemplateField : 1;  // 0x0 (0x0)
	char bEntityComponentField : 1;  // 0x0 (0x0)
	char pad_0_1 : 4;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.EasingComponentData
struct FEasingComponentData
{
	struct UMovieSceneSection* Section;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneTrackInstanceComponent
struct FMovieSceneTrackInstanceComponent
{
	struct UMovieSceneSection* Owner;  // 0x0 (0x0)
	UMovieSceneTrackInstance* TrackInstanceClass;  // 0x8 (0x8)


}; 
 
 // ScriptStruct MovieScene.MovieSceneEntitySystemGraphNode
struct FMovieSceneEntitySystemGraphNode
{
	char pad_0[32];  // 0x0 (0x0)
	struct UMovieSceneEntitySystem* System;  // 0x20 (0x20)


}; 
 
 // Function MovieScene.MovieSceneSection.SetIsLocked
struct FSetIsLocked
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInIsLocked : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneEntitySystemGraph
struct FMovieSceneEntitySystemGraph
{
	char pad_0[128];  // 0x0 (0x0)
	struct FMovieSceneEntitySystemGraphNodes Nodes;  // 0x80 (0x80)
	char pad_184[128];  // 0xB8 (0xB8)


}; 
 
 // ScriptStruct MovieScene.MovieSceneEvaluationHookEvent
struct FMovieSceneEvaluationHookEvent
{
	struct FMovieSceneEvaluationHookComponent Hook;  // 0x0 (0x0)
	char pad_32[24];  // 0x20 (0x20)


}; 
 
 // ScriptStruct MovieScene.MovieSceneEvaluationInstanceKey
struct FMovieSceneEvaluationInstanceKey
{
	char pad_0[4];  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneTrackInstanceInput
struct FMovieSceneTrackInstanceInput
{
	struct UMovieSceneSection* Section;  // 0x0 (0x0)
	char pad_8[8];  // 0x8 (0x8)


}; 
 
 // ScriptStruct MovieScene.MovieSceneTrackEvalOptions
struct FMovieSceneTrackEvalOptions
{
	char bCanEvaluateNearestSection : 1;  // 0x0 (0x0)
	char bEvalNearestSection : 1;  // 0x0 (0x0)
	char bEvaluateInPreroll : 1;  // 0x0 (0x0)
	char bEvaluateInPostroll : 1;  // 0x0 (0x0)
	char bEvaluateNearestSection : 1;  // 0x0 (0x0)
	char pad_0_1 : 3;  // 0x0 (0x0)
	char pad_1[4];  // 0x1 (0x1)


}; 
 
 // ScriptStruct MovieScene.OptionalMovieSceneBlendType
struct FOptionalMovieSceneBlendType
{
	uint8_t BlendType;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bIsValid : 1;  // 0x1 (0x1)


}; 
 
 // ScriptStruct MovieScene.MovieSceneEvaluationGroup
struct FMovieSceneEvaluationGroup
{
	struct TArray<struct FMovieSceneEvaluationGroupLUTIndex> LUTIndices;  // 0x0 (0x0)
	struct TArray<struct FMovieSceneFieldEntry_EvaluationTrack> TrackLUT;  // 0x10 (0x10)
	struct TArray<struct FMovieSceneFieldEntry_ChildTemplate> SectionLUT;  // 0x20 (0x20)


}; 
 
 // ScriptStruct MovieScene.MovieSceneEvaluationFieldSharedEntityMetaData
struct FMovieSceneEvaluationFieldSharedEntityMetaData
{
	struct FGuid ObjectBindingID;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityMetaData
struct FMovieSceneEvaluationFieldEntityMetaData
{
	struct FString OverrideBoundPropertyPath;  // 0x0 (0x0)
	struct FFrameNumber ForcedTime;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	uint8_t Flags;  // 0x18 (0x18)
	char bEvaluateInSequencePreRoll : 1;  // 0x19 (0x19)
	char bEvaluateInSequencePostRoll : 1;  // 0x19 (0x19)
	char pad_25_1 : 6;  // 0x19 (0x19)
	char pad_26[7];  // 0x1A (0x1A)


}; 
 
 // ScriptStruct MovieScene.MovieSceneEntityComponentField
struct FMovieSceneEntityComponentField
{
	struct FMovieSceneEvaluationFieldEntityTree PersistentEntityTree;  // 0x0 (0x0)
	struct FMovieSceneEvaluationFieldEntityTree OneShotEntityTree;  // 0x60 (0x60)
	struct TArray<struct FMovieSceneEvaluationFieldEntity> Entities;  // 0xC0 (0xC0)
	struct TArray<struct FMovieSceneEvaluationFieldEntityMetaData> EntityMetaData;  // 0xD0 (0xD0)
	struct TArray<struct FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData;  // 0xE0 (0xE0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
// Size: 0xC(Inherited: 0x8)
struct FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr
{
	struct FMovieSceneSegmentIdentifier SegmentID;  // 0x8 (0x8)


}; 
 
 // ScriptStruct MovieScene.MovieSceneFieldEntry_ChildTemplate
struct FMovieSceneFieldEntry_ChildTemplate
{
	uint16_t ChildIndex;  // 0x0 (0x0)
	uint8_t Flags;  // 0x2 (0x2)
	char pad_3[1];  // 0x3 (0x3)
	struct FFrameNumber ForcedTime;  // 0x4 (0x4)


}; 
 
 // ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
struct FMovieSceneEvaluationGroupLUTIndex
{
	int32_t NumInitPtrs;  // 0x0 (0x0)
	int32_t NumEvalPtrs;  // 0x4 (0x4)


}; 
 
 // ScriptStruct MovieScene.MovieSceneOrderedEvaluationKey
struct FMovieSceneOrderedEvaluationKey
{
	struct FMovieSceneEvaluationKey Key;  // 0x0 (0x0)
	uint16_t SetupIndex;  // 0xC (0xC)
	uint16_t TearDownIndex;  // 0xE (0xE)


}; 
 
 // ScriptStruct MovieScene.MovieSceneEvaluationMetaData
struct FMovieSceneEvaluationMetaData
{
	struct TArray<struct FMovieSceneSequenceID> ActiveSequences;  // 0x0 (0x0)
	struct TArray<struct FMovieSceneOrderedEvaluationKey> ActiveEntities;  // 0x10 (0x10)


}; 
 
 // ScriptStruct MovieScene.MovieSceneFrameRange
struct FMovieSceneFrameRange
{
	char pad_0[16];  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneTemplateGenerationLedger
struct FMovieSceneTemplateGenerationLedger
{
	struct FMovieSceneTrackIdentifier LastTrackIdentifier;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TMap<struct FGuid, struct FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier;  // 0x8 (0x8)
	struct TMap<struct FGuid, struct FMovieSceneFrameRange> SubSectionRanges;  // 0x58 (0x58)


}; 
 
 // ScriptStruct MovieScene.MovieSceneSubSectionData
struct FMovieSceneSubSectionData
{
	struct TWeakObjectPtr<UMovieSceneSubSection> Section;  // 0x0 (0x0)
	struct FGuid ObjectBindingID;  // 0x8 (0x8)
	uint8_t Flags;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)


}; 
 
 // ScriptStruct MovieScene.MovieSceneEvaluationTemplateSerialNumber
struct FMovieSceneEvaluationTemplateSerialNumber
{
	uint32_t Value;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneEvaluationTemplate
struct FMovieSceneEvaluationTemplate
{
	struct TMap<struct FMovieSceneTrackIdentifier, struct FMovieSceneEvaluationTrack> Tracks;  // 0x0 (0x0)
	char pad_80[80];  // 0x50 (0x50)
	struct FGuid SequenceSignature;  // 0xA0 (0xA0)
	struct FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber;  // 0xB0 (0xB0)
	char pad_180[4];  // 0xB4 (0xB4)
	struct FMovieSceneTemplateGenerationLedger TemplateLedger;  // 0xB8 (0xB8)


}; 
 
 // ScriptStruct MovieScene.MovieSceneEvaluationTrack
struct FMovieSceneEvaluationTrack
{
	struct FGuid ObjectBindingID;  // 0x0 (0x0)
	uint16_t EvaluationPriority;  // 0x10 (0x10)
	uint8_t EvaluationMethod;  // 0x12 (0x12)
	char pad_19[1];  // 0x13 (0x13)
	struct TWeakObjectPtr<UMovieSceneTrack> SourceTrack;  // 0x14 (0x14)
	char pad_28[4];  // 0x1C (0x1C)
	struct TArray<struct FMovieSceneEvalTemplatePtr> ChildTemplates;  // 0x20 (0x20)
	struct FMovieSceneTrackImplementationPtr TrackTemplate;  // 0x30 (0x30)
	struct FName EvaluationGroup;  // 0x68 (0x68)
	char bEvaluateInPreroll : 1;  // 0x70 (0x70)
	char bEvaluateInPostroll : 1;  // 0x70 (0x70)
	char bTearDownPriority : 1;  // 0x70 (0x70)
	char pad_112_1 : 5;  // 0x70 (0x70)
	char pad_113[8];  // 0x71 (0x71)


}; 
 
 // ScriptStruct MovieScene.MovieSceneRootEvaluationTemplateInstance
struct FMovieSceneRootEvaluationTemplateInstance
{
	struct TWeakObjectPtr<UMovieSceneSequence> WeakRootSequence;  // 0x0 (0x0)
	struct UMovieSceneCompiledDataManager* CompiledDataManager;  // 0x8 (0x8)
	char pad_16[24];  // 0x10 (0x10)
	struct UMovieSceneEntitySystemLinker* EntitySystemLinker;  // 0x28 (0x28)
	struct TMap<struct FMovieSceneSequenceID, struct UObject*> DirectorInstances;  // 0x30 (0x30)
	char pad_128[8];  // 0x80 (0x80)


}; 
 
 // ScriptStruct MovieScene.MovieSceneSubSequenceData
struct FMovieSceneSubSequenceData
{
	struct FSoftObjectPath Sequence;  // 0x0 (0x0)
	struct FMovieSceneSequenceTransform OuterToInnerTransform;  // 0x20 (0x20)
	struct FMovieSceneSequenceTransform RootToSequenceTransform;  // 0x40 (0x40)
	struct FFrameRate TickResolution;  // 0x60 (0x60)
	struct FMovieSceneSequenceID DeterministicSequenceID;  // 0x68 (0x68)
	struct FMovieSceneFrameRange ParentPlayRange;  // 0x6C (0x6C)
	struct FFrameNumber ParentStartFrameOffset;  // 0x7C (0x7C)
	struct FFrameNumber ParentEndFrameOffset;  // 0x80 (0x80)
	struct FFrameNumber ParentFirstLoopStartFrameOffset;  // 0x84 (0x84)
	char pad_136_1 : 7;  // 0x88 (0x88)
	bool bCanLoop : 1;  // 0x88 (0x88)
	char pad_137[3];  // 0x89 (0x89)
	struct FMovieSceneFrameRange PlayRange;  // 0x8C (0x8C)
	struct FMovieSceneFrameRange FullPlayRange;  // 0x9C (0x9C)
	struct FMovieSceneFrameRange UnwarpedPlayRange;  // 0xAC (0xAC)
	struct FMovieSceneFrameRange PreRollRange;  // 0xBC (0xBC)
	struct FMovieSceneFrameRange PostRollRange;  // 0xCC (0xCC)
	int16_t HierarchicalBias;  // 0xDC (0xDC)
	char pad_222_1 : 7;  // 0xDE (0xDE)
	bool bHasHierarchicalEasing : 1;  // 0xDE (0xDE)
	char pad_223[1];  // 0xDF (0xDF)
	struct FMovieSceneSequenceInstanceDataPtr InstanceData;  // 0xE0 (0xE0)
	char pad_248[8];  // 0xF8 (0xF8)
	struct FGuid SubSectionSignature;  // 0x100 (0x100)


}; 
 
 // ScriptStruct MovieScene.MovieSceneSequenceInstanceDataPtr
struct FMovieSceneSequenceInstanceDataPtr
{
	char pad_0[24];  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneNestedSequenceTransform
struct FMovieSceneNestedSequenceTransform
{
	struct FMovieSceneTimeTransform LinearTransform;  // 0x0 (0x0)
	struct FMovieSceneTimeWarping Warping;  // 0xC (0xC)


}; 
 
 // Function MovieScene.MovieSceneSection.GetOverlapPriority
struct FGetOverlapPriority
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneTimeWarping
struct FMovieSceneTimeWarping
{
	struct FFrameNumber Start;  // 0x0 (0x0)
	struct FFrameNumber End;  // 0x4 (0x4)


}; 
 
 // Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts
struct FGetDisableCameraCuts
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneSection.GetRowIndex
struct FGetRowIndex
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
struct FMovieSceneSequenceHierarchyNode
{
	struct FMovieSceneSequenceID ParentID;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FMovieSceneSequenceID> Children;  // 0x8 (0x8)


}; 
 
 // ScriptStruct MovieScene.MovieSceneSubSequenceTree
struct FMovieSceneSubSequenceTree
{
	char pad_0[96];  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneSequenceHierarchy
struct FMovieSceneSequenceHierarchy
{
	struct FMovieSceneSequenceHierarchyNode RootNode;  // 0x0 (0x0)
	struct FMovieSceneSubSequenceTree Tree;  // 0x18 (0x18)
	struct TMap<struct FMovieSceneSequenceID, struct FMovieSceneSubSequenceData> SubSequences;  // 0x78 (0x78)
	struct TMap<struct FMovieSceneSequenceID, struct FMovieSceneSequenceHierarchyNode> Hierarchy;  // 0xC8 (0xC8)


}; 
 
 // ScriptStruct MovieScene.MovieSceneWarpCounter
struct FMovieSceneWarpCounter
{
	struct TArray<uint32_t> WarpCounts;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneExpansionState
struct FMovieSceneExpansionState
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bExpanded : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneMarkedFrame
struct FMovieSceneMarkedFrame
{
	struct FFrameNumber FrameNumber;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FString Label;  // 0x8 (0x8)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bIsDeterminismFence : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct MovieScene.MovieSceneEditorData
struct FMovieSceneEditorData
{
	struct TMap<struct FString, struct FMovieSceneExpansionState> ExpansionStates;  // 0x0 (0x0)
	struct TArray<struct FString> PinnedNodes;  // 0x50 (0x50)
	double ViewStart;  // 0x60 (0x60)
	double ViewEnd;  // 0x68 (0x68)
	double WorkStart;  // 0x70 (0x70)
	double WorkEnd;  // 0x78 (0x78)
	struct TSet<struct FFrameNumber> MarkedFrames;  // 0x80 (0x80)
	struct FFloatRange WorkingRange;  // 0xD0 (0xD0)
	struct FFloatRange ViewRange;  // 0xE0 (0xE0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneTrackLabels
struct FMovieSceneTrackLabels
{
	struct TArray<struct FString> Strings;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneObjectBindingIDs
struct FMovieSceneObjectBindingIDs
{
	struct TArray<struct FMovieSceneObjectBindingID> IDs;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneBinding
struct FMovieSceneBinding
{
	struct FGuid ObjectGuid;  // 0x0 (0x0)
	struct FString BindingName;  // 0x10 (0x10)
	struct TArray<struct UMovieSceneTrack*> Tracks;  // 0x20 (0x20)


}; 
 
 // ScriptStruct MovieScene.MovieSceneBindingOverrideData
struct FMovieSceneBindingOverrideData
{
	struct FMovieSceneObjectBindingID ObjectBindingID;  // 0x0 (0x0)
	struct TSoftObjectPtr<UObject> Object;  // 0x18 (0x18)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool bOverridesDefault : 1;  // 0x48 (0x48)
	char pad_73[7];  // 0x49 (0x49)


}; 
 
 // Function MovieScene.MovieSceneSection.GetBlendType
struct FGetBlendType
{
	struct FOptionalMovieSceneBlendType ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneBindingProxy
struct FMovieSceneBindingProxy
{
	struct FGuid BindingID;  // 0x0 (0x0)
	struct UMovieSceneSequence* Sequence;  // 0x10 (0x10)


}; 
 
 // ScriptStruct MovieScene.MovieScenePossessable
struct FMovieScenePossessable
{
	struct TArray<struct FName> Tags;  // 0x0 (0x0)
	struct FGuid Guid;  // 0x10 (0x10)
	struct FString Name;  // 0x20 (0x20)
	struct FGuid ParentGuid;  // 0x30 (0x30)
	struct FMovieSceneObjectBindingID SpawnableObjectBindingID;  // 0x40 (0x40)


}; 
 
 // ScriptStruct MovieScene.MovieSceneSectionEvalOptions
struct FMovieSceneSectionEvalOptions
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bCanEditCompletionMode : 1;  // 0x0 (0x0)
	uint8_t CompletionMode;  // 0x1 (0x1)


}; 
 
 // Function MovieScene.MovieSceneCustomClockSource.OnTick
struct FOnTick
{
	float DeltaSeconds;  // 0x0 (0x0)
	float InPlayRate;  // 0x4 (0x4)


}; 
 
 // ScriptStruct MovieScene.MovieSceneEasingSettings
struct FMovieSceneEasingSettings
{
	int32_t AutoEaseInDuration;  // 0x0 (0x0)
	int32_t AutoEaseOutDuration;  // 0x4 (0x4)
	struct TScriptInterface<IMovieSceneEasingFunction> EaseIn;  // 0x8 (0x8)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bManualEaseIn : 1;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	int32_t ManualEaseInDuration;  // 0x1C (0x1C)
	struct TScriptInterface<IMovieSceneEasingFunction> EaseOut;  // 0x20 (0x20)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bManualEaseOut : 1;  // 0x30 (0x30)
	char pad_49[3];  // 0x31 (0x31)
	int32_t ManualEaseOutDuration;  // 0x34 (0x34)


}; 
 
 // ScriptStruct MovieScene.MovieSceneTimecodeSource
struct FMovieSceneTimecodeSource
{
	struct FTimecode Timecode;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneSequenceReplProperties
struct FMovieSceneSequenceReplProperties
{
	struct FFrameTime LastKnownPosition;  // 0x0 (0x0)
	enum class EMovieScenePlayerStatus LastKnownStatus;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)
	int32_t LastKnownNumLoops;  // 0xC (0xC)


}; 
 
 // ScriptStruct MovieScene.MovieSceneSequencePlaybackParams
struct FMovieSceneSequencePlaybackParams
{
	struct FFrameTime Frame;  // 0x0 (0x0)
	float Time;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FString MarkedFrame;  // 0x10 (0x10)
	uint8_t PositionType;  // 0x20 (0x20)
	uint8_t UpdateMethod;  // 0x21 (0x21)
	char pad_34_1 : 7;  // 0x22 (0x22)
	bool bHasJumped : 1;  // 0x22 (0x22)
	char pad_35[5];  // 0x23 (0x23)


}; 
 
 // Function MovieScene.MovieSceneSection.GetPostRollFrames
struct FGetPostRollFrames
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.MovieSceneSpawnable
struct FMovieSceneSpawnable
{
	struct FTransform SpawnTransform;  // 0x0 (0x0)
	struct TArray<struct FName> Tags;  // 0x60 (0x60)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool bContinuouslyRespawn : 1;  // 0x70 (0x70)
	char pad_113_1 : 7;  // 0x71 (0x71)
	bool bNetAddressableName : 1;  // 0x71 (0x71)
	char pad_114_1 : 7;  // 0x72 (0x72)
	bool bEvaluateTracksWhenNotSpawned : 1;  // 0x72 (0x72)
	char pad_115[1];  // 0x73 (0x73)
	struct FGuid Guid;  // 0x74 (0x74)
	char pad_132[4];  // 0x84 (0x84)
	struct FString Name;  // 0x88 (0x88)
	struct UObject* ObjectTemplate;  // 0x98 (0x98)
	struct TArray<struct FGuid> ChildPossessables;  // 0xA0 (0xA0)
	uint8_t Ownership;  // 0xB0 (0xB0)
	char pad_177[3];  // 0xB1 (0xB1)
	struct FName LevelName;  // 0xB4 (0xB4)
	char pad_188[4];  // 0xBC (0xBC)


}; 
 
 // ScriptStruct MovieScene.MovieSceneTrackDisplayOptions
struct FMovieSceneTrackDisplayOptions
{
	char bShowVerticalFrames : 1;  // 0x0 (0x0)
	char pad_0_1 : 7;  // 0x0 (0x0)
	char pad_1[4];  // 0x1 (0x1)


}; 
 
 // ScriptStruct MovieScene.MovieSceneTrackEvaluationFieldEntry
struct FMovieSceneTrackEvaluationFieldEntry
{
	struct UMovieSceneSection* Section;  // 0x0 (0x0)
	struct FFrameNumberRange Range;  // 0x8 (0x8)
	struct FFrameNumber ForcedTime;  // 0x18 (0x18)
	uint8_t Flags;  // 0x1C (0x1C)
	char pad_29[1];  // 0x1D (0x1D)
	int16_t LegacySortOrder;  // 0x1E (0x1E)


}; 
 
 // ScriptStruct MovieScene.MovieSceneTrackEvaluationField
struct FMovieSceneTrackEvaluationField
{
	struct TArray<struct FMovieSceneTrackEvaluationFieldEntry> Entries;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieScene.TestMovieSceneEvalTemplate
// Size: 0x20(Inherited: 0x20)
struct FTestMovieSceneEvalTemplate : FMovieSceneEvalTemplate
{


}; 
 
 // Function MovieScene.MovieSceneSection.GetCompletionMode
struct FGetCompletionMode
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneSection.GetPreRollFrames
struct FGetPreRollFrames
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneSection.IsActive
struct FIsActive
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneSection.SetBlendType
struct FSetBlendType
{
	uint8_t InBlendType;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneSection.SetCompletionMode
struct FSetCompletionMode
{
	uint8_t InCompletionMode;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneSequencePlayer.JumpToFrame
struct FJumpToFrame
{
	struct FFrameTime NewPosition;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneSection.SetIsActive
struct FSetIsActive
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInIsActive : 1;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneSection.SetOverlapPriority
struct FSetOverlapPriority
{
	int32_t NewPriority;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneSection.SetPreRollFrames
struct FSetPreRollFrames
{
	int32_t InPreRollFrames;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneSection.SetRowIndex
struct FSetRowIndex
{
	int32_t NewRowIndex;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneSequence.FindBindingByTag
struct FFindBindingByTag
{
	struct FName InBindingName;  // 0x0 (0x0)
	struct FMovieSceneObjectBindingID ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function MovieScene.MovieSceneSequence.FindBindingsByTag
struct FFindBindingsByTag
{
	struct FName InBindingName;  // 0x0 (0x0)
	struct TArray<struct FMovieSceneObjectBindingID> ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function MovieScene.MovieSceneSequencePlayer.GetSequence
struct FGetSequence
{
	struct UMovieSceneSequence* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneSubSection.SetSequence
struct FSetSequence
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects
struct FGetBoundObjects
{
	struct FMovieSceneObjectBindingID ObjectBinding;  // 0x0 (0x0)
	struct TArray<struct UObject*> ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime
struct FGetCurrentTime
{
	struct FQualifiedFrameTime ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneSequencePlayer.GetDuration
struct FGetDuration
{
	struct FQualifiedFrameTime ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneSequencePlayer.GetEndTime
struct FGetEndTime
{
	struct FQualifiedFrameTime ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration
struct FGetFrameDuration
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneSequencePlayer.GetFrameRate
struct FGetFrameRate
{
	struct FFrameRate ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
struct FGetPlayRate
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneSequencePlayer.GetSequenceName
struct FGetSequenceName
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bAddClientInfo : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FString ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function MovieScene.MovieSceneSequencePlayer.GetStartTime
struct FGetStartTime
{
	struct FQualifiedFrameTime ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneSequencePlayer.IsPlaying
struct FIsPlaying
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneSequencePlayer.IsReversed
struct FIsReversed
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame
struct FJumpToMarkedFrame
{
	struct FString InLabel;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds
struct FJumpToSeconds
{
	float TimeInSeconds;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneSequencePlayer.PlayLooping
struct FPlayLooping
{
	int32_t NumLoops;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneSequencePlayer.PlayTo
struct FPlayTo
{
	struct FMovieSceneSequencePlaybackParams PlaybackParams;  // 0x0 (0x0)
	struct FMovieSceneSequencePlayToParams PlayToParams;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 // Function MovieScene.MovieSceneSequencePlayer.PlayToFrame
struct FPlayToFrame
{
	struct FFrameTime NewPosition;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame
struct FPlayToMarkedFrame
{
	struct FString InLabel;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds
struct FPlayToSeconds
{
	float TimeInSeconds;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent
struct FRPC_ExplicitServerUpdateEvent
{
	uint8_t Method;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	struct FFrameTime RelevantTime;  // 0x4 (0x4)


}; 
 
 // Function MovieScene.MovieSceneSequencePlayer.RPC_OnFinishPlaybackEvent
struct FRPC_OnFinishPlaybackEvent
{
	struct FFrameTime StoppedTime;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent
struct FRPC_OnStopEvent
{
	struct FFrameTime StoppedTime;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame
struct FScrubToFrame
{
	struct FFrameTime NewPosition;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame
struct FScrubToMarkedFrame
{
	struct FString InLabel;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds
struct FScrubToSeconds
{
	float TimeInSeconds;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts
struct FSetDisableCameraCuts
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInDisableCameraCuts : 1;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneSequencePlayer.SetFrameRange
struct FSetFrameRange
{
	int32_t StartFrame;  // 0x0 (0x0)
	int32_t Duration;  // 0x4 (0x4)
	float SubFrames;  // 0x8 (0x8)


}; 
 
 // Function MovieScene.MovieSceneSequencePlayer.SetFrameRate
struct FSetFrameRate
{
	struct FFrameRate FrameRate;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
struct FSetPlaybackPosition
{
	struct FMovieSceneSequencePlaybackParams PlaybackParams;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
struct FSetPlayRate
{
	float PlayRate;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneSequencePlayer.SetTimeRange
struct FSetTimeRange
{
	float StartTime;  // 0x0 (0x0)
	float Duration;  // 0x4 (0x4)


}; 
 
 // Function MovieScene.MovieSceneEasingFunction.OnEvaluate
struct FOnEvaluate
{
	float Interp;  // 0x0 (0x0)
	float ReturnValue;  // 0x4 (0x4)


}; 
 
 // Function MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime
struct FOnRequestCurrentTime
{
	struct FQualifiedFrameTime InCurrentTime;  // 0x0 (0x0)
	float InPlayRate;  // 0x10 (0x10)
	struct FFrameTime ReturnValue;  // 0x14 (0x14)


}; 
 
 // Function MovieScene.MovieSceneCustomClockSource.OnStartPlaying
struct FOnStartPlaying
{
	struct FQualifiedFrameTime InStartTime;  // 0x0 (0x0)


}; 
 
 // Function MovieScene.MovieSceneCustomClockSource.OnStopPlaying
struct FOnStopPlaying
{
	struct FQualifiedFrameTime InStopTime;  // 0x0 (0x0)


}; 
 
 