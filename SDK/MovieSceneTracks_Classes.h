#pragma once 
#include <MovieSceneTracks_Structs.h>
 
 
 
// Class MovieSceneTracks.MovieSceneCameraShakeEvaluator
// Size: 0x28(Inherited: 0x28)
struct UMovieSceneCameraShakeEvaluator : UObject
{


}; 
 
 


// Class MovieSceneTracks.MovieSceneColorPropertySystem
// Size: 0x58(Inherited: 0x58)
struct UMovieSceneColorPropertySystem : UMovieScenePropertySystem
{


}; 
 
 


// Class MovieSceneTracks.MovieSceneColorSection
// Size: 0x538(Inherited: 0xF0)
struct UMovieSceneColorSection : UMovieSceneSection
{
	char pad_240[8];  // 0xF0 (0xF0)
	struct FMovieSceneFloatChannel RedCurve;  // 0xF8 (0xF8)
	struct FMovieSceneFloatChannel GreenCurve;  // 0x208 (0x208)
	struct FMovieSceneFloatChannel BlueCurve;  // 0x318 (0x318)
	struct FMovieSceneFloatChannel AlphaCurve;  // 0x428 (0x428)


}; 
 
 


// Class MovieSceneTracks.MovieSceneParameterSection
// Size: 0x158(Inherited: 0xF0)
struct UMovieSceneParameterSection : UMovieSceneSection
{
	char pad_240[8];  // 0xF0 (0xF0)
	struct TArray<struct FBoolParameterNameAndCurve> BoolParameterNamesAndCurves;  // 0xF8 (0xF8)
	struct TArray<struct FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves;  // 0x108 (0x108)
	struct TArray<struct FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves;  // 0x118 (0x118)
	struct TArray<struct FVectorParameterNameAndCurves> VectorParameterNamesAndCurves;  // 0x128 (0x128)
	struct TArray<struct FColorParameterNameAndCurves> ColorParameterNamesAndCurves;  // 0x138 (0x138)
	struct TArray<struct FTransformParameterNameAndCurves> TransformParameterNamesAndCurves;  // 0x148 (0x148)


	bool RemoveVectorParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter
	bool RemoveVector2DParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter
	bool RemoveTransformParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter
	bool RemoveScalarParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter
	bool RemoveColorParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter
	bool RemoveBoolParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter
	void GetParameterNames(struct TSet<struct FName>& ParameterNames); // Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames
	void AddVectorParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FVector InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey
	void AddVector2DParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FVector2D InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey
	void AddTransformParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FTransform& InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey
	void AddScalarParameterKey(struct FName InParameterName, struct FFrameNumber InTime, float InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey
	void AddColorParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FLinearColor InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey
	void AddBoolParameterKey(struct FName InParameterName, struct FFrameNumber InTime, bool InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey
}; 
 
 


// Class MovieSceneTracks.MovieSceneBaseCacheSection
// Size: 0xF8(Inherited: 0xF0)
struct UMovieSceneBaseCacheSection : UMovieSceneSection
{
	char pad_240[8];  // 0xF0 (0xF0)


}; 
 
 


// Class MovieSceneTracks.MovieScenePropertyTrack
// Size: 0xC8(Inherited: 0x98)
struct UMovieScenePropertyTrack : UMovieSceneNameableTrack
{
	struct UMovieSceneSection* SectionToKey;  // 0x98 (0x98)
	struct FMovieScenePropertyBinding PropertyBinding;  // 0xA0 (0xA0)
	char pad_180[4];  // 0xB4 (0xB4)
	struct TArray<struct UMovieSceneSection*> Sections;  // 0xB8 (0xB8)


}; 
 
 


// Class MovieSceneTracks.MovieSceneInterrogatedPropertyInstantiatorSystem
// Size: 0x1F0(Inherited: 0x40)
struct UMovieSceneInterrogatedPropertyInstantiatorSystem : UMovieSceneEntityInstantiatorSystem
{
	char pad_64[432];  // 0x40 (0x40)


}; 
 
 


// Class MovieSceneTracks.MovieSceneDoublePerlinNoiseChannelContainer
// Size: 0xC0(Inherited: 0x58)
struct UMovieSceneDoublePerlinNoiseChannelContainer : UMovieSceneChannelOverrideContainer
{
	struct FMovieSceneDoublePerlinNoiseChannel PerlinNoiseChannel;  // 0x58 (0x58)


}; 
 
 


// Class MovieSceneTracks.MovieScene3DTransformSectionConstraints
// Size: 0x38(Inherited: 0x28)
struct UMovieScene3DTransformSectionConstraints : UObject
{
	struct TArray<struct FConstraintAndActiveChannel> ConstraintsChannels;  // 0x28 (0x28)


}; 
 
 


// Class MovieSceneTracks.MovieSceneTransformOrigin
// Size: 0x28(Inherited: 0x28)
struct UMovieSceneTransformOrigin : UInterface
{


	struct FTransform BP_GetTransformOrigin(); // Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
}; 
 
 


// Class MovieSceneTracks.MovieSceneFloatPerlinNoiseChannelContainer
// Size: 0xC0(Inherited: 0x58)
struct UMovieSceneFloatPerlinNoiseChannelContainer : UMovieSceneChannelOverrideContainer
{
	struct FMovieSceneFloatPerlinNoiseChannel PerlinNoiseChannel;  // 0x58 (0x58)


}; 
 
 


// Class MovieSceneTracks.MovieSceneDeferredComponentMovementSystem
// Size: 0x58(Inherited: 0x40)
struct UMovieSceneDeferredComponentMovementSystem : UMovieSceneEntitySystem
{
	char pad_64[24];  // 0x40 (0x40)


}; 
 
 


// Class MovieSceneTracks.MovieScene3DConstraintSection
// Size: 0x118(Inherited: 0xF0)
struct UMovieScene3DConstraintSection : UMovieSceneSection
{
	struct FGuid ConstraintId;  // 0xF0 (0xF0)
	struct FMovieSceneObjectBindingID ConstraintBindingID;  // 0x100 (0x100)


	void SetConstraintBindingID(struct FMovieSceneObjectBindingID& InConstraintBindingID); // Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
	struct FMovieSceneObjectBindingID GetConstraintBindingID(); // Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
}; 
 
 


// Class MovieSceneTracks.DoublePerlinNoiseChannelEvaluatorSystem
// Size: 0x40(Inherited: 0x40)
struct UDoublePerlinNoiseChannelEvaluatorSystem : UMovieSceneEntitySystem
{


}; 
 
 


// Class MovieSceneTracks.MovieSceneParameterSectionExtender
// Size: 0x28(Inherited: 0x28)
struct UMovieSceneParameterSectionExtender : UInterface
{


}; 
 
 


// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
// Size: 0x110(Inherited: 0xF0)
struct UMovieSceneLevelVisibilitySection : UMovieSceneSection
{
	char pad_240[8];  // 0xF0 (0xF0)
	uint8_t Visibility;  // 0xF8 (0xF8)
	char pad_249[7];  // 0xF9 (0xF9)
	struct TArray<struct FName> LevelNames;  // 0x100 (0x100)


	void SetVisibility(uint8_t Invisibility); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
	void SetLevelNames(struct TArray<struct FName>& InLevelNames); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
	uint8_t GetVisibility(); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
	struct TArray<struct FName> GetLevelNames(); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
}; 
 
 


// Class MovieSceneTracks.MovieSceneActorReferenceSection
// Size: 0x2A0(Inherited: 0xF0)
struct UMovieSceneActorReferenceSection : UMovieSceneSection
{
	struct FMovieSceneActorReferenceData ActorReferenceData;  // 0xF0 (0xF0)
	struct FIntegralCurve ActorGuidIndexCurve;  // 0x210 (0x210)
	struct TArray<struct FString> ActorGuidStrings;  // 0x290 (0x290)


}; 
 
 


// Class MovieSceneTracks.MovieScene3DAttachSection
// Size: 0x138(Inherited: 0x118)
struct UMovieScene3DAttachSection : UMovieScene3DConstraintSection
{
	char pad_280[8];  // 0x118 (0x118)
	struct FName AttachSocketName;  // 0x120 (0x120)
	struct FName AttachComponentName;  // 0x128 (0x128)
	uint8_t AttachmentLocationRule;  // 0x130 (0x130)
	uint8_t AttachmentRotationRule;  // 0x131 (0x131)
	uint8_t AttachmentScaleRule;  // 0x132 (0x132)
	uint8_t DetachmentLocationRule;  // 0x133 (0x133)
	uint8_t DetachmentRotationRule;  // 0x134 (0x134)
	uint8_t DetachmentScaleRule;  // 0x135 (0x135)
	char pad_310[2];  // 0x136 (0x136)


}; 
 
 


// Class MovieSceneTracks.MovieSceneBaseValueEvaluatorSystem
// Size: 0x40(Inherited: 0x40)
struct UMovieSceneBaseValueEvaluatorSystem : UMovieSceneEntitySystem
{


}; 
 
 


// Class MovieSceneTracks.MovieSceneEventSection
// Size: 0x260(Inherited: 0xF0)
struct UMovieSceneEventSection : UMovieSceneSection
{
	struct FNameCurve Events;  // 0xF0 (0xF0)
	struct FMovieSceneEventSectionData EventData;  // 0x168 (0x168)


}; 
 
 


// Class MovieSceneTracks.MovieScene3DPathSection
// Size: 0x230(Inherited: 0x118)
struct UMovieScene3DPathSection : UMovieScene3DConstraintSection
{
	struct FMovieSceneFloatChannel TimingCurve;  // 0x118 (0x118)
	uint8_t FrontAxisEnum;  // 0x228 (0x228)
	uint8_t UpAxisEnum;  // 0x229 (0x229)
	char pad_554[2];  // 0x22A (0x22A)
	char bFollow : 1;  // 0x22C (0x22C)
	char bReverse : 1;  // 0x22C (0x22C)
	char bForceUpright : 1;  // 0x22C (0x22C)
	char pad_556_1 : 5;  // 0x22C (0x22C)
	char pad_557[4];  // 0x22D (0x22D)


}; 
 
 


// Class MovieSceneTracks.MovieScene3DTransformPropertySystem
// Size: 0x58(Inherited: 0x58)
struct UMovieScene3DTransformPropertySystem : UMovieScenePropertySystem
{


}; 
 
 


// Class MovieSceneTracks.MovieScene3DTransformSection
// Size: 0xC30(Inherited: 0xF0)
struct UMovieScene3DTransformSection : UMovieSceneSection
{
	char pad_240[56];  // 0xF0 (0xF0)
	struct FMovieSceneTransformMask TransformMask;  // 0x128 (0x128)
	char pad_300[4];  // 0x12C (0x12C)
	struct FMovieSceneDoubleChannel Translation[3];  // 0x130 (0x130)
	struct FMovieSceneDoubleChannel Rotation[3];  // 0x478 (0x478)
	struct FMovieSceneDoubleChannel Scale[3];  // 0x7C0 (0x7C0)
	struct FMovieSceneFloatChannel ManualWeight;  // 0xB08 (0xB08)
	struct UMovieSceneSectionChannelOverrideRegistry* OverrideRegistry;  // 0xC18 (0xC18)
	struct UMovieScene3DTransformSectionConstraints* Constraints;  // 0xC20 (0xC20)
	char pad_3112_1 : 7;  // 0xC28 (0xC28)
	bool bUseQuaternionInterpolation : 1;  // 0xC28 (0xC28)
	char pad_3113[7];  // 0xC29 (0xC29)


}; 
 
 


// Class MovieSceneTracks.MovieSceneDoubleVectorPropertySystem
// Size: 0x58(Inherited: 0x58)
struct UMovieSceneDoubleVectorPropertySystem : UMovieScenePropertySystem
{


}; 
 
 


// Class MovieSceneTracks.MovieSceneAudioSection
// Size: 0x620(Inherited: 0xF0)
struct UMovieSceneAudioSection : UMovieSceneSection
{
	struct USoundBase* Sound;  // 0xF0 (0xF0)
	struct FFrameNumber StartFrameOffset;  // 0xF8 (0xF8)
	float StartOffset;  // 0xFC (0xFC)
	float AudioStartTime;  // 0x100 (0x100)
	float AudioDilationFactor;  // 0x104 (0x104)
	float AudioVolume;  // 0x108 (0x108)
	char pad_268[4];  // 0x10C (0x10C)
	struct FMovieSceneFloatChannel SoundVolume;  // 0x110 (0x110)
	struct FMovieSceneFloatChannel PitchMultiplier;  // 0x220 (0x220)
	struct TMap<struct FName, struct FMovieSceneFloatChannel> Inputs_Float;  // 0x330 (0x330)
	struct TMap<struct FName, struct FMovieSceneStringChannel> Inputs_String;  // 0x380 (0x380)
	struct TMap<struct FName, struct FMovieSceneBoolChannel> Inputs_Bool;  // 0x3D0 (0x3D0)
	struct TMap<struct FName, struct FMovieSceneIntegerChannel> Inputs_Int;  // 0x420 (0x420)
	struct TMap<struct FName, struct FMovieSceneAudioTriggerChannel> Inputs_Trigger;  // 0x470 (0x470)
	struct FMovieSceneActorReferenceData AttachActorData;  // 0x4C0 (0x4C0)
	char pad_1504_1 : 7;  // 0x5E0 (0x5E0)
	bool bLooping : 1;  // 0x5E0 (0x5E0)
	char pad_1505_1 : 7;  // 0x5E1 (0x5E1)
	bool bSuppressSubtitles : 1;  // 0x5E1 (0x5E1)
	char pad_1506_1 : 7;  // 0x5E2 (0x5E2)
	bool bOverrideAttenuation : 1;  // 0x5E2 (0x5E2)
	char pad_1507[5];  // 0x5E3 (0x5E3)
	struct USoundAttenuation* AttenuationSettings;  // 0x5E8 (0x5E8)
	struct FDelegate OnQueueSubtitles;  // 0x5F0 (0x5F0)
	struct FMulticastInlineDelegate OnAudioFinished;  // 0x600 (0x600)
	struct FMulticastInlineDelegate OnAudioPlaybackPercent;  // 0x610 (0x610)


	void SetStartOffset(struct FFrameNumber InStartOffset); // Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
	void SetSound(struct USoundBase* InSound); // Function MovieSceneTracks.MovieSceneAudioSection.SetSound
	struct FFrameNumber GetStartOffset(); // Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
	struct USoundBase* GetSound(); // Function MovieSceneTracks.MovieSceneAudioSection.GetSound
}; 
 
 


// Class MovieSceneTracks.MovieSceneCVarSection
// Size: 0x148(Inherited: 0xF0)
struct UMovieSceneCVarSection : UMovieSceneSection
{
	char pad_240[8];  // 0xF0 (0xF0)
	struct FMovieSceneCVarOverrides ConsoleVariables;  // 0xF8 (0xF8)


	void SetFromString(struct FString InString); // Function MovieSceneTracks.MovieSceneCVarSection.SetFromString
	struct FString GetString(); // Function MovieSceneTracks.MovieSceneCVarSection.GetString
}; 
 
 


// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// Size: 0xF0(Inherited: 0x98)
struct UMovieSceneSkeletalAnimationTrack : UMovieSceneNameableTrack
{
	char pad_152[8];  // 0x98 (0x98)
	struct TArray<struct UMovieSceneSection*> AnimationSections;  // 0xA0 (0xA0)
	char pad_176_1 : 7;  // 0xB0 (0xB0)
	bool bUseLegacySectionIndexBlend : 1;  // 0xB0 (0xB0)
	char pad_177[7];  // 0xB1 (0xB1)
	struct FMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams;  // 0xB8 (0xB8)
	char pad_232_1 : 7;  // 0xE8 (0xE8)
	bool bBlendFirstChildOfRoot : 1;  // 0xE8 (0xE8)
	char pad_233[7];  // 0xE9 (0xE9)


}; 
 
 


// Class MovieSceneTracks.MovieSceneByteSection
// Size: 0x200(Inherited: 0xF0)
struct UMovieSceneByteSection : UMovieSceneSection
{
	char pad_240[8];  // 0xF0 (0xF0)
	struct FMovieSceneByteChannel ByteCurve;  // 0xF8 (0xF8)


}; 
 
 


// Class MovieSceneTracks.MovieSceneEnumPropertySystem
// Size: 0x58(Inherited: 0x58)
struct UMovieSceneEnumPropertySystem : UMovieScenePropertySystem
{


}; 
 
 


// Class MovieSceneTracks.MovieSceneEnumSection
// Size: 0x200(Inherited: 0xF0)
struct UMovieSceneEnumSection : UMovieSceneSection
{
	char pad_240[8];  // 0xF0 (0xF0)
	struct FMovieSceneByteChannel EnumCurve;  // 0xF8 (0xF8)


}; 
 
 


// Class MovieSceneTracks.MovieSceneCinematicShotSection
// Size: 0x158(Inherited: 0x130)
struct UMovieSceneCinematicShotSection : UMovieSceneSubSection
{
	struct FString ShotDisplayName;  // 0x130 (0x130)
	struct FText DisplayName;  // 0x140 (0x140)


	void SetShotDisplayName(struct FString InShotDisplayName); // Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
	struct FString GetShotDisplayName(); // Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
}; 
 
 


// Class MovieSceneTracks.MovieSceneCameraCutSection
// Size: 0x1A0(Inherited: 0xF0)
struct UMovieSceneCameraCutSection : UMovieSceneSection
{
	char pad_240[8];  // 0xF0 (0xF0)
	char pad_248_1 : 7;  // 0xF8 (0xF8)
	bool bLockPreviousCamera : 1;  // 0xF8 (0xF8)
	char pad_249[3];  // 0xF9 (0xF9)
	struct FGuid CameraGuid;  // 0xFC (0xFC)
	struct FMovieSceneObjectBindingID CameraBindingID;  // 0x10C (0x10C)
	char pad_292[12];  // 0x124 (0x124)
	struct FTransform InitialCameraCutTransform;  // 0x130 (0x130)
	char pad_400_1 : 7;  // 0x190 (0x190)
	bool bHasInitialCameraCutTransform : 1;  // 0x190 (0x190)
	char pad_401[15];  // 0x191 (0x191)


	void SetCameraBindingID(struct FMovieSceneObjectBindingID& InCameraBindingID); // Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
	struct FMovieSceneObjectBindingID GetCameraBindingID(); // Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
}; 
 
 


// Class MovieSceneTracks.MovieSceneCameraShakeSection
// Size: 0x140(Inherited: 0xF0)
struct UMovieSceneCameraShakeSection : UMovieSceneSection
{
	struct FMovieSceneCameraShakeSectionData ShakeData;  // 0xF0 (0xF0)
	UCameraShakeBase* ShakeClass;  // 0x118 (0x118)
	float PlayScale;  // 0x120 (0x120)
	uint8_t PlaySpace;  // 0x124 (0x124)
	char pad_293[3];  // 0x125 (0x125)
	struct FRotator UserDefinedPlaySpace;  // 0x128 (0x128)


}; 
 
 


// Class MovieSceneTracks.MovieSceneSlomoSection
// Size: 0x200(Inherited: 0xF0)
struct UMovieSceneSlomoSection : UMovieSceneSection
{
	struct FMovieSceneFloatChannel FloatCurve;  // 0xF0 (0xF0)


}; 
 
 


// Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeSection
// Size: 0x118(Inherited: 0xF0)
struct UMovieSceneCameraShakeSourceShakeSection : UMovieSceneSection
{
	struct FMovieSceneCameraShakeSectionData ShakeData;  // 0xF0 (0xF0)


}; 
 
 


// Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSection
// Size: 0x1E8(Inherited: 0xF0)
struct UMovieSceneCameraShakeSourceTriggerSection : UMovieSceneSection
{
	struct FMovieSceneCameraShakeSourceTriggerChannel Channel;  // 0xF0 (0xF0)


}; 
 
 


// Class MovieSceneTracks.MovieSceneConstrainedSection
// Size: 0x28(Inherited: 0x28)
struct UMovieSceneConstrainedSection : UInterface
{


}; 
 
 


// Class MovieSceneTracks.MovieSceneDoubleSection
// Size: 0x210(Inherited: 0xF0)
struct UMovieSceneDoubleSection : UMovieSceneSection
{
	char pad_240[8];  // 0xF0 (0xF0)
	struct FMovieSceneDoubleChannel DoubleCurve;  // 0xF8 (0xF8)


}; 
 
 


// Class MovieSceneTracks.MovieSceneDataLayerSection
// Size: 0x120(Inherited: 0xF0)
struct UMovieSceneDataLayerSection : UMovieSceneSection
{
	char pad_240[8];  // 0xF0 (0xF0)
	struct TArray<struct FActorDataLayer> DataLayers;  // 0xF8 (0xF8)
	struct TArray<struct UDataLayerAsset*> DataLayerAssets;  // 0x108 (0x108)
	uint8_t DesiredState;  // 0x118 (0x118)
	uint8_t PrerollState;  // 0x119 (0x119)
	char pad_282_1 : 7;  // 0x11A (0x11A)
	bool bFlushOnUnload : 1;  // 0x11A (0x11A)
	char pad_283[5];  // 0x11B (0x11B)


	void SetPrerollState(uint8_t InPrerollState); // Function MovieSceneTracks.MovieSceneDataLayerSection.SetPrerollState
	void SetFlushOnUnload(bool bFlushOnUnload); // Function MovieSceneTracks.MovieSceneDataLayerSection.SetFlushOnUnload
	void SetDesiredState(uint8_t InDesiredState); // Function MovieSceneTracks.MovieSceneDataLayerSection.SetDesiredState
	void SetDataLayers(struct TArray<struct FActorDataLayer>& InDataLayers); // Function MovieSceneTracks.MovieSceneDataLayerSection.SetDataLayers
	void SetDataLayerAssets(struct TArray<struct UDataLayerAsset*>& InDataLayerAssets); // Function MovieSceneTracks.MovieSceneDataLayerSection.SetDataLayerAssets
	uint8_t GetPrerollState(); // Function MovieSceneTracks.MovieSceneDataLayerSection.GetPrerollState
	bool GetFlushOnUnload(); // Function MovieSceneTracks.MovieSceneDataLayerSection.GetFlushOnUnload
	uint8_t GetDesiredState(); // Function MovieSceneTracks.MovieSceneDataLayerSection.GetDesiredState
	struct TArray<struct FActorDataLayer> GetDataLayers(); // Function MovieSceneTracks.MovieSceneDataLayerSection.GetDataLayers
	struct TArray<struct UDataLayerAsset*> GetDataLayerAssets(); // Function MovieSceneTracks.MovieSceneDataLayerSection.GetDataLayerAssets
}; 
 
 


// Class MovieSceneTracks.MovieSceneEventSectionBase
// Size: 0xF0(Inherited: 0xF0)
struct UMovieSceneEventSectionBase : UMovieSceneSection
{


}; 
 
 


// Class MovieSceneTracks.ByteChannelEvaluatorSystem
// Size: 0x40(Inherited: 0x40)
struct UByteChannelEvaluatorSystem : UMovieSceneEntitySystem
{


}; 
 
 


// Class MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction
// Size: 0x80(Inherited: 0x30)
struct UMovieSceneAsyncAction_SequencePrediction : UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate Result;  // 0x30 (0x30)
	struct FMulticastInlineDelegate Failure;  // 0x40 (0x40)
	char pad_80[16];  // 0x50 (0x50)
	struct UMovieSceneSequencePlayer* SequencePlayer;  // 0x60 (0x60)
	struct USceneComponent* SceneComponent;  // 0x68 (0x68)
	char pad_112[16];  // 0x70 (0x70)


	struct UMovieSceneAsyncAction_SequencePrediction* PredictWorldTransformAtTime(struct UMovieSceneSequencePlayer* Player, struct USceneComponent* TargetComponent, float TimeInSeconds); // Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictWorldTransformAtTime
	struct UMovieSceneAsyncAction_SequencePrediction* PredictWorldTransformAtFrame(struct UMovieSceneSequencePlayer* Player, struct USceneComponent* TargetComponent, struct FFrameTime FrameTime); // Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictWorldTransformAtFrame
	struct UMovieSceneAsyncAction_SequencePrediction* PredictLocalTransformAtTime(struct UMovieSceneSequencePlayer* Player, struct USceneComponent* TargetComponent, float TimeInSeconds); // Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictLocalTransformAtTime
	struct UMovieSceneAsyncAction_SequencePrediction* PredictLocalTransformAtFrame(struct UMovieSceneSequencePlayer* Player, struct USceneComponent* TargetComponent, struct FFrameTime FrameTime); // Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictLocalTransformAtFrame
}; 
 
 


// Class MovieSceneTracks.MovieSceneEventRepeaterSection
// Size: 0x120(Inherited: 0xF0)
struct UMovieSceneEventRepeaterSection : UMovieSceneEventSectionBase
{
	char pad_240[8];  // 0xF0 (0xF0)
	struct FMovieSceneEvent Event;  // 0xF8 (0xF8)


}; 
 
 


// Class MovieSceneTracks.MovieSceneComponentMaterialSystem
// Size: 0x128(Inherited: 0x40)
struct UMovieSceneComponentMaterialSystem : UMovieSceneEntitySystem
{
	char pad_64[232];  // 0x40 (0x40)


}; 
 
 


// Class MovieSceneTracks.MovieSceneEventTriggerSection
// Size: 0x1F0(Inherited: 0xF0)
struct UMovieSceneEventTriggerSection : UMovieSceneEventSectionBase
{
	char pad_240[8];  // 0xF0 (0xF0)
	struct FMovieSceneEventChannel EventChannel;  // 0xF8 (0xF8)


}; 
 
 


// Class MovieSceneTracks.MovieSceneFadeSection
// Size: 0x218(Inherited: 0xF0)
struct UMovieSceneFadeSection : UMovieSceneSection
{
	struct FMovieSceneFloatChannel FloatCurve;  // 0xF0 (0xF0)
	struct FLinearColor FadeColor;  // 0x200 (0x200)
	char bFadeAudio : 1;  // 0x210 (0x210)
	char pad_528_1 : 7;  // 0x210 (0x210)
	char pad_529[8];  // 0x211 (0x211)


}; 
 
 


// Class MovieSceneTracks.MovieSceneFloatSection
// Size: 0x218(Inherited: 0xF0)
struct UMovieSceneFloatSection : UMovieSceneSection
{
	char pad_240[16];  // 0xF0 (0xF0)
	struct FMovieSceneFloatChannel FloatCurve;  // 0x100 (0x100)
	struct UMovieSceneSectionChannelOverrideRegistry* OverrideRegistry;  // 0x210 (0x210)


}; 
 
 


// Class MovieSceneTracks.DoubleChannelEvaluatorSystem
// Size: 0x40(Inherited: 0x40)
struct UDoubleChannelEvaluatorSystem : UMovieSceneEntitySystem
{


}; 
 
 


// Class MovieSceneTracks.MovieScenePropertySystem
// Size: 0x58(Inherited: 0x40)
struct UMovieScenePropertySystem : UMovieSceneEntitySystem
{
	char pad_64[8];  // 0x40 (0x40)
	struct UMovieScenePropertyInstantiatorSystem* InstantiatorSystem;  // 0x48 (0x48)
	char pad_80[8];  // 0x50 (0x50)


}; 
 
 


// Class MovieSceneTracks.MovieSceneIntegerSection
// Size: 0x1F8(Inherited: 0xF0)
struct UMovieSceneIntegerSection : UMovieSceneSection
{
	char pad_240[8];  // 0xF0 (0xF0)
	struct FMovieSceneIntegerChannel IntegerCurve;  // 0xF8 (0xF8)


}; 
 
 


// Class MovieSceneTracks.MovieSceneObjectPropertySection
// Size: 0x228(Inherited: 0xF0)
struct UMovieSceneObjectPropertySection : UMovieSceneSection
{
	struct FMovieSceneObjectPathChannel ObjectChannel;  // 0xF0 (0xF0)


}; 
 
 


// Class MovieSceneTracks.MovieSceneParticleSection
// Size: 0x1F8(Inherited: 0xF0)
struct UMovieSceneParticleSection : UMovieSceneSection
{
	struct FMovieSceneParticleChannel ParticleKeys;  // 0xF0 (0xF0)


}; 
 
 


// Class MovieSceneTracks.MovieSceneBytePropertySystem
// Size: 0x58(Inherited: 0x58)
struct UMovieSceneBytePropertySystem : UMovieScenePropertySystem
{


}; 
 
 


// Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
// Size: 0x230(Inherited: 0xF0)
struct UMovieScenePrimitiveMaterialSection : UMovieSceneSection
{
	char pad_240[8];  // 0xF0 (0xF0)
	struct FMovieSceneObjectPathChannel MaterialChannel;  // 0xF8 (0xF8)


}; 
 
 


// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// Size: 0x350(Inherited: 0xF0)
struct UMovieSceneSkeletalAnimationSection : UMovieSceneSection
{
	struct FMovieSceneSkeletalAnimationParams Params;  // 0xF0 (0xF0)
	struct UAnimSequence* AnimSequence;  // 0x240 (0x240)
	struct UAnimSequenceBase* Animation;  // 0x248 (0x248)
	float StartOffset;  // 0x250 (0x250)
	float EndOffset;  // 0x254 (0x254)
	float PlayRate;  // 0x258 (0x258)
	char bReverse : 1;  // 0x25C (0x25C)
	char pad_604_1 : 7;  // 0x25C (0x25C)
	char pad_605[4];  // 0x25D (0x25D)
	struct FName SlotName;  // 0x260 (0x260)
	struct FVector StartLocationOffset;  // 0x268 (0x268)
	struct FRotator StartRotationOffset;  // 0x280 (0x280)
	char pad_664_1 : 7;  // 0x298 (0x298)
	bool bMatchWithPrevious : 1;  // 0x298 (0x298)
	char pad_665[3];  // 0x299 (0x299)
	struct FName MatchedBoneName;  // 0x29C (0x29C)
	char pad_676[4];  // 0x2A4 (0x2A4)
	struct FVector MatchedLocationOffset;  // 0x2A8 (0x2A8)
	struct FRotator MatchedRotationOffset;  // 0x2C0 (0x2C0)
	char pad_728_1 : 7;  // 0x2D8 (0x2D8)
	bool bMatchTranslation : 1;  // 0x2D8 (0x2D8)
	char pad_729_1 : 7;  // 0x2D9 (0x2D9)
	bool bMatchIncludeZHeight : 1;  // 0x2D9 (0x2D9)
	char pad_730_1 : 7;  // 0x2DA (0x2DA)
	bool bMatchRotationYaw : 1;  // 0x2DA (0x2DA)
	char pad_731_1 : 7;  // 0x2DB (0x2DB)
	bool bMatchRotationPitch : 1;  // 0x2DB (0x2DB)
	char pad_732_1 : 7;  // 0x2DC (0x2DC)
	bool bMatchRotationRoll : 1;  // 0x2DC (0x2DC)
	char pad_733[115];  // 0x2DD (0x2DD)


}; 
 
 


// Class MovieSceneTracks.MovieSceneEventTrack
// Size: 0xC0(Inherited: 0x98)
struct UMovieSceneEventTrack : UMovieSceneNameableTrack
{
	char pad_152[16];  // 0x98 (0x98)
	char bFireEventsWhenForwards : 1;  // 0xA8 (0xA8)
	char bFireEventsWhenBackwards : 1;  // 0xA8 (0xA8)
	char pad_168_1 : 6;  // 0xA8 (0xA8)
	char pad_169[4];  // 0xA9 (0xA9)
	uint8_t EventPosition;  // 0xAC (0xAC)
	char pad_173[3];  // 0xAD (0xAD)
	struct TArray<struct UMovieSceneSection*> Sections;  // 0xB0 (0xB0)


}; 
 
 


// Class MovieSceneTracks.FloatChannelEvaluatorSystem
// Size: 0x40(Inherited: 0x40)
struct UFloatChannelEvaluatorSystem : UMovieSceneEntitySystem
{


}; 
 
 


// Class MovieSceneTracks.IntegerChannelEvaluatorSystem
// Size: 0x40(Inherited: 0x40)
struct UIntegerChannelEvaluatorSystem : UMovieSceneEntitySystem
{


}; 
 
 


// Class MovieSceneTracks.MovieSceneStringSection
// Size: 0x200(Inherited: 0xF0)
struct UMovieSceneStringSection : UMovieSceneSection
{
	struct FMovieSceneStringChannel StringCurve;  // 0xF0 (0xF0)


}; 
 
 


// Class MovieSceneTracks.MovieSceneFloatVectorSection
// Size: 0x540(Inherited: 0xF0)
struct UMovieSceneFloatVectorSection : UMovieSceneSection
{
	char pad_240[8];  // 0xF0 (0xF0)
	struct FMovieSceneFloatChannel Curves[4];  // 0xF8 (0xF8)
	int32_t ChannelsUsed;  // 0x538 (0x538)
	char pad_1340[4];  // 0x53C (0x53C)


}; 
 
 


// Class MovieSceneTracks.MovieSceneDoubleVectorSection
// Size: 0x560(Inherited: 0xF0)
struct UMovieSceneDoubleVectorSection : UMovieSceneSection
{
	char pad_240[8];  // 0xF0 (0xF0)
	struct FMovieSceneDoubleChannel Curves[4];  // 0xF8 (0xF8)
	int32_t ChannelsUsed;  // 0x558 (0x558)
	char pad_1372[4];  // 0x55C (0x55C)


}; 
 
 


// Class MovieSceneTracks.BoolChannelEvaluatorSystem
// Size: 0x40(Inherited: 0x40)
struct UBoolChannelEvaluatorSystem : UMovieSceneEntitySystem
{


}; 
 
 


// Class MovieSceneTracks.FloatPerlinNoiseChannelEvaluatorSystem
// Size: 0x40(Inherited: 0x40)
struct UFloatPerlinNoiseChannelEvaluatorSystem : UMovieSceneEntitySystem
{


}; 
 
 


// Class MovieSceneTracks.MovieSceneBoolPropertySystem
// Size: 0x58(Inherited: 0x58)
struct UMovieSceneBoolPropertySystem : UMovieScenePropertySystem
{


}; 
 
 


// Class MovieSceneTracks.MovieSceneCameraShakeTrack
// Size: 0xB0(Inherited: 0x98)
struct UMovieSceneCameraShakeTrack : UMovieSceneNameableTrack
{
	char pad_152[8];  // 0x98 (0x98)
	struct TArray<struct UMovieSceneSection*> CameraShakeSections;  // 0xA0 (0xA0)


}; 
 
 


// Class MovieSceneTracks.MovieSceneComponentAttachmentInvalidatorSystem
// Size: 0x40(Inherited: 0x40)
struct UMovieSceneComponentAttachmentInvalidatorSystem : UMovieSceneEntityInstantiatorSystem
{


}; 
 
 


// Class MovieSceneTracks.MovieSceneComponentAttachmentSystem
// Size: 0x1D0(Inherited: 0x40)
struct UMovieSceneComponentAttachmentSystem : UMovieSceneEntityInstantiatorSystem
{
	char pad_64[400];  // 0x40 (0x40)


}; 
 
 


// Class MovieSceneTracks.MovieSceneComponentMobilitySystem
// Size: 0x230(Inherited: 0x40)
struct UMovieSceneComponentMobilitySystem : UMovieSceneEntityInstantiatorSystem
{
	char pad_64[496];  // 0x40 (0x40)


}; 
 
 


// Class MovieSceneTracks.MovieSceneComponentTransformSystem
// Size: 0x58(Inherited: 0x58)
struct UMovieSceneComponentTransformSystem : UMovieScenePropertySystem
{


}; 
 
 


// Class MovieSceneTracks.MovieSceneConstraintSystem
// Size: 0x50(Inherited: 0x40)
struct UMovieSceneConstraintSystem : UMovieSceneEntitySystem
{
	char pad_64[16];  // 0x40 (0x40)


}; 
 
 


// Class MovieSceneTracks.MovieSceneFloatVectorTrack
// Size: 0xD0(Inherited: 0xC8)
struct UMovieSceneFloatVectorTrack : UMovieScenePropertyTrack
{
	int32_t NumChannelsUsed;  // 0xC8 (0xC8)
	char pad_204[4];  // 0xCC (0xCC)


}; 
 
 


// Class MovieSceneTracks.MovieSceneDataLayerSystem
// Size: 0xD0(Inherited: 0x40)
struct UMovieSceneDataLayerSystem : UMovieSceneEntitySystem
{
	char pad_64[144];  // 0x40 (0x40)


}; 
 
 


// Class MovieSceneTracks.MovieSceneDoublePropertySystem
// Size: 0x58(Inherited: 0x58)
struct UMovieSceneDoublePropertySystem : UMovieScenePropertySystem
{


}; 
 
 


// Class MovieSceneTracks.MovieSceneEulerTransformPropertySystem
// Size: 0x58(Inherited: 0x58)
struct UMovieSceneEulerTransformPropertySystem : UMovieScenePropertySystem
{


}; 
 
 


// Class MovieSceneTracks.MovieSceneEventSystem
// Size: 0x90(Inherited: 0x40)
struct UMovieSceneEventSystem : UMovieSceneEntitySystem
{
	char pad_64[80];  // 0x40 (0x40)


}; 
 
 


// Class MovieSceneTracks.MovieScenePreSpawnEventSystem
// Size: 0x90(Inherited: 0x90)
struct UMovieScenePreSpawnEventSystem : UMovieSceneEventSystem
{


}; 
 
 


// Class MovieSceneTracks.MovieScenePostSpawnEventSystem
// Size: 0x90(Inherited: 0x90)
struct UMovieScenePostSpawnEventSystem : UMovieSceneEventSystem
{


}; 
 
 


// Class MovieSceneTracks.MovieScenePostEvalEventSystem
// Size: 0x90(Inherited: 0x90)
struct UMovieScenePostEvalEventSystem : UMovieSceneEventSystem
{


}; 
 
 


// Class MovieSceneTracks.MovieSceneFloatPropertySystem
// Size: 0x58(Inherited: 0x58)
struct UMovieSceneFloatPropertySystem : UMovieScenePropertySystem
{


}; 
 
 


// Class MovieSceneTracks.MovieSceneHierarchicalBiasSystem
// Size: 0x40(Inherited: 0x40)
struct UMovieSceneHierarchicalBiasSystem : UMovieSceneEntityInstantiatorSystem
{


}; 
 
 


// Class MovieSceneTracks.MovieSceneInitialValueSystem
// Size: 0x40(Inherited: 0x40)
struct UMovieSceneInitialValueSystem : UMovieSceneEntityInstantiatorSystem
{


}; 
 
 


// Class MovieSceneTracks.MovieSceneDoubleTrack
// Size: 0xC8(Inherited: 0xC8)
struct UMovieSceneDoubleTrack : UMovieScenePropertyTrack
{


}; 
 
 


// Class MovieSceneTracks.MovieSceneIntegerPropertySystem
// Size: 0x58(Inherited: 0x58)
struct UMovieSceneIntegerPropertySystem : UMovieScenePropertySystem
{


}; 
 
 


// Class MovieSceneTracks.MovieSceneLevelVisibilitySystem
// Size: 0x1A8(Inherited: 0x40)
struct UMovieSceneLevelVisibilitySystem : UMovieSceneEntitySystem
{
	char pad_64[360];  // 0x40 (0x40)


}; 
 
 


// Class MovieSceneTracks.MovieScenePiecewiseEnumBlenderSystem
// Size: 0x90(Inherited: 0x68)
struct UMovieScenePiecewiseEnumBlenderSystem : UMovieSceneBlenderSystem
{
	char pad_104[40];  // 0x68 (0x68)


}; 
 
 


// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionSystem
// Size: 0x68(Inherited: 0x40)
struct UMovieSceneMaterialParameterCollectionSystem : UMovieSceneEntitySystem
{
	char pad_64[40];  // 0x40 (0x40)


}; 
 
 


// Class MovieSceneTracks.MovieSceneMaterialParameterSystem
// Size: 0x338(Inherited: 0x40)
struct UMovieSceneMaterialParameterSystem : UMovieSceneEntitySystem
{
	char pad_64[752];  // 0x40 (0x40)
	struct UMovieScenePiecewiseDoubleBlenderSystem* DoubleBlenderSystem;  // 0x330 (0x330)


}; 
 
 


// Class MovieSceneTracks.MovieSceneMotionVectorSimulationSystem
// Size: 0x98(Inherited: 0x40)
struct UMovieSceneMotionVectorSimulationSystem : UMovieSceneEntitySystem
{
	char pad_64[88];  // 0x40 (0x40)


}; 
 
 


// Class MovieSceneTracks.MovieScenePiecewiseBoolBlenderSystem
// Size: 0x90(Inherited: 0x68)
struct UMovieScenePiecewiseBoolBlenderSystem : UMovieSceneBlenderSystem
{
	char pad_104[40];  // 0x68 (0x68)


}; 
 
 


// Class MovieSceneTracks.MovieScenePiecewiseByteBlenderSystem
// Size: 0x90(Inherited: 0x68)
struct UMovieScenePiecewiseByteBlenderSystem : UMovieSceneBlenderSystem
{
	char pad_104[40];  // 0x68 (0x68)


}; 
 
 


// Class MovieSceneTracks.MovieScenePiecewiseDoubleBlenderSystem
// Size: 0x130(Inherited: 0x68)
struct UMovieScenePiecewiseDoubleBlenderSystem : UMovieSceneBlenderSystem
{
	char pad_104[200];  // 0x68 (0x68)


}; 
 
 


// Class MovieSceneTracks.MovieScenePiecewiseIntegerBlenderSystem
// Size: 0xB0(Inherited: 0x68)
struct UMovieScenePiecewiseIntegerBlenderSystem : UMovieSceneBlenderSystem
{
	char pad_104[72];  // 0x68 (0x68)


}; 
 
 


// Class MovieSceneTracks.MovieScenePredictionSystem
// Size: 0xF0(Inherited: 0x40)
struct UMovieScenePredictionSystem : UMovieSceneEntitySystem
{
	char pad_64[144];  // 0x40 (0x40)
	struct TArray<struct UMovieSceneAsyncAction_SequencePrediction*> PendingPredictions;  // 0xD0 (0xD0)
	struct TArray<struct UMovieSceneAsyncAction_SequencePrediction*> ProcessingPredictions;  // 0xE0 (0xE0)


}; 
 
 


// Class MovieSceneTracks.MovieScenePropertyInstantiatorSystem
// Size: 0x248(Inherited: 0x40)
struct UMovieScenePropertyInstantiatorSystem : UMovieSceneEntityInstantiatorSystem
{
	char pad_64[520];  // 0x40 (0x40)


}; 
 
 


// Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
// Size: 0xD0(Inherited: 0xC8)
struct UMovieScenePrimitiveMaterialTrack : UMovieScenePropertyTrack
{
	int32_t MaterialIndex;  // 0xC8 (0xC8)
	char pad_204[4];  // 0xCC (0xCC)


}; 
 
 


// Class MovieSceneTracks.MovieSceneQuaternionInterpolationRotationSystem
// Size: 0x40(Inherited: 0x40)
struct UMovieSceneQuaternionInterpolationRotationSystem : UMovieSceneEntitySystem
{


}; 
 
 


// Class MovieSceneTracks.MovieSceneTransformOriginSystem
// Size: 0x78(Inherited: 0x40)
struct UMovieSceneTransformOriginSystem : UMovieSceneEntitySystem
{
	char pad_64[56];  // 0x40 (0x40)


}; 
 
 


// Class MovieSceneTracks.MovieSceneFloatVectorPropertySystem
// Size: 0x58(Inherited: 0x58)
struct UMovieSceneFloatVectorPropertySystem : UMovieScenePropertySystem
{


}; 
 
 


// Class MovieSceneTracks.ObjectPathChannelEvaluatorSystem
// Size: 0x40(Inherited: 0x40)
struct UObjectPathChannelEvaluatorSystem : UMovieSceneEntitySystem
{


}; 
 
 


// Class MovieSceneTracks.MovieSceneHierarchicalEasingInstantiatorSystem
// Size: 0x90(Inherited: 0x40)
struct UMovieSceneHierarchicalEasingInstantiatorSystem : UMovieSceneEntityInstantiatorSystem
{
	char pad_64[80];  // 0x40 (0x40)


}; 
 
 


// Class MovieSceneTracks.WeightAndEasingEvaluatorSystem
// Size: 0x78(Inherited: 0x40)
struct UWeightAndEasingEvaluatorSystem : UMovieSceneEntitySystem
{
	char pad_64[56];  // 0x40 (0x40)


}; 
 
 


// Class MovieSceneTracks.MovieSceneCameraCutTrackInstance
// Size: 0xC8(Inherited: 0x50)
struct UMovieSceneCameraCutTrackInstance : UMovieSceneTrackInstance
{
	char pad_80[120];  // 0x50 (0x50)


}; 
 
 


// Class MovieSceneTracks.MovieSceneCVarTrackInstance
// Size: 0xA0(Inherited: 0x50)
struct UMovieSceneCVarTrackInstance : UMovieSceneTrackInstance
{
	char pad_80[80];  // 0x50 (0x50)


}; 
 
 


// Class MovieSceneTracks.MovieScene3DConstraintTrack
// Size: 0xA8(Inherited: 0x98)
struct UMovieScene3DConstraintTrack : UMovieSceneTrack
{
	struct TArray<struct UMovieSceneSection*> ConstraintSections;  // 0x98 (0x98)


}; 
 
 


// Class MovieSceneTracks.MovieSceneSlomoTrack
// Size: 0xD0(Inherited: 0xC8)
struct UMovieSceneSlomoTrack : UMovieSceneFloatTrack
{
	char pad_200[8];  // 0xC8 (0xC8)


}; 
 
 


// Class MovieSceneTracks.MovieScene3DAttachTrack
// Size: 0xA8(Inherited: 0xA8)
struct UMovieScene3DAttachTrack : UMovieScene3DConstraintTrack
{


}; 
 
 


// Class MovieSceneTracks.MovieSceneParticleParameterTrack
// Size: 0xB0(Inherited: 0x98)
struct UMovieSceneParticleParameterTrack : UMovieSceneNameableTrack
{
	char pad_152[8];  // 0x98 (0x98)
	struct TArray<struct UMovieSceneSection*> Sections;  // 0xA0 (0xA0)


}; 
 
 


// Class MovieSceneTracks.MovieScene3DPathTrack
// Size: 0xB0(Inherited: 0xA8)
struct UMovieScene3DPathTrack : UMovieScene3DConstraintTrack
{
	char pad_168[8];  // 0xA8 (0xA8)


}; 
 
 


// Class MovieSceneTracks.MovieScene3DTransformTrack
// Size: 0xC8(Inherited: 0xC8)
struct UMovieScene3DTransformTrack : UMovieScenePropertyTrack
{


}; 
 
 


// Class MovieSceneTracks.MovieSceneActorReferenceTrack
// Size: 0xD0(Inherited: 0xC8)
struct UMovieSceneActorReferenceTrack : UMovieScenePropertyTrack
{
	char pad_200[8];  // 0xC8 (0xC8)


}; 
 
 


// Class MovieSceneTracks.MovieSceneTransformTrack
// Size: 0xC8(Inherited: 0xC8)
struct UMovieSceneTransformTrack : UMovieScenePropertyTrack
{


}; 
 
 


// Class MovieSceneTracks.MovieSceneAudioTrack
// Size: 0xB0(Inherited: 0x98)
struct UMovieSceneAudioTrack : UMovieSceneNameableTrack
{
	char pad_152[8];  // 0x98 (0x98)
	struct TArray<struct UMovieSceneSection*> AudioSections;  // 0xA0 (0xA0)


}; 
 
 


// Class MovieSceneTracks.MovieSceneBoolTrack
// Size: 0xD0(Inherited: 0xC8)
struct UMovieSceneBoolTrack : UMovieScenePropertyTrack
{
	char pad_200[8];  // 0xC8 (0xC8)


}; 
 
 


// Class MovieSceneTracks.MovieSceneByteTrack
// Size: 0xD0(Inherited: 0xC8)
struct UMovieSceneByteTrack : UMovieScenePropertyTrack
{
	struct UEnum* Enum;  // 0xC8 (0xC8)


}; 
 
 


// Class MovieSceneTracks.MovieSceneCameraCutTrack
// Size: 0xB0(Inherited: 0x98)
struct UMovieSceneCameraCutTrack : UMovieSceneNameableTrack
{
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool bCanBlend : 1;  // 0x98 (0x98)
	char pad_153[7];  // 0x99 (0x99)
	struct TArray<struct UMovieSceneSection*> Sections;  // 0xA0 (0xA0)


}; 
 
 


// Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeTrack
// Size: 0xB0(Inherited: 0x98)
struct UMovieSceneCameraShakeSourceShakeTrack : UMovieSceneNameableTrack
{
	char pad_152[8];  // 0x98 (0x98)
	struct TArray<struct UMovieSceneSection*> CameraShakeSections;  // 0xA0 (0xA0)


}; 
 
 


// Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerTrack
// Size: 0xB0(Inherited: 0x98)
struct UMovieSceneCameraShakeSourceTriggerTrack : UMovieSceneTrack
{
	char pad_152[8];  // 0x98 (0x98)
	struct TArray<struct UMovieSceneSection*> Sections;  // 0xA0 (0xA0)


}; 
 
 


// Class MovieSceneTracks.MovieSceneCinematicShotTrack
// Size: 0xA8(Inherited: 0xA8)
struct UMovieSceneCinematicShotTrack : UMovieSceneSubTrack
{


}; 
 
 


// Class MovieSceneTracks.MovieSceneColorTrack
// Size: 0xD0(Inherited: 0xC8)
struct UMovieSceneColorTrack : UMovieScenePropertyTrack
{
	char pad_200_1 : 7;  // 0xC8 (0xC8)
	bool bIsSlateColor : 1;  // 0xC8 (0xC8)
	char pad_201[7];  // 0xC9 (0xC9)


}; 
 
 


// Class MovieSceneTracks.MovieSceneCVarTrack
// Size: 0xA8(Inherited: 0x98)
struct UMovieSceneCVarTrack : UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> Sections;  // 0x98 (0x98)


}; 
 
 


// Class MovieSceneTracks.MovieSceneDataLayerTrack
// Size: 0xA8(Inherited: 0x98)
struct UMovieSceneDataLayerTrack : UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> Sections;  // 0x98 (0x98)


}; 
 
 


// Class MovieSceneTracks.MovieSceneEnumTrack
// Size: 0xD0(Inherited: 0xC8)
struct UMovieSceneEnumTrack : UMovieScenePropertyTrack
{
	struct UEnum* Enum;  // 0xC8 (0xC8)


}; 
 
 


// Class MovieSceneTracks.MovieSceneEulerTransformTrack
// Size: 0xC8(Inherited: 0xC8)
struct UMovieSceneEulerTransformTrack : UMovieScenePropertyTrack
{


}; 
 
 


// Class MovieSceneTracks.MovieSceneFloatTrack
// Size: 0xC8(Inherited: 0xC8)
struct UMovieSceneFloatTrack : UMovieScenePropertyTrack
{


}; 
 
 


// Class MovieSceneTracks.MovieSceneFadeTrack
// Size: 0xD0(Inherited: 0xC8)
struct UMovieSceneFadeTrack : UMovieSceneFloatTrack
{
	char pad_200[8];  // 0xC8 (0xC8)


}; 
 
 


// Class MovieSceneTracks.MovieSceneIntegerTrack
// Size: 0xC8(Inherited: 0xC8)
struct UMovieSceneIntegerTrack : UMovieScenePropertyTrack
{


}; 
 
 


// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// Size: 0xA8(Inherited: 0x98)
struct UMovieSceneLevelVisibilityTrack : UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> Sections;  // 0x98 (0x98)


}; 
 
 


// Class MovieSceneTracks.MovieSceneMaterialTrack
// Size: 0xA8(Inherited: 0x98)
struct UMovieSceneMaterialTrack : UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> Sections;  // 0x98 (0x98)


}; 
 
 


// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// Size: 0xC0(Inherited: 0xA8)
struct UMovieSceneMaterialParameterCollectionTrack : UMovieSceneMaterialTrack
{
	char pad_168[16];  // 0xA8 (0xA8)
	struct UMaterialParameterCollection* MPC;  // 0xB8 (0xB8)


}; 
 
 


// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// Size: 0xC0(Inherited: 0xA8)
struct UMovieSceneComponentMaterialTrack : UMovieSceneMaterialTrack
{
	char pad_168[16];  // 0xA8 (0xA8)
	int32_t MaterialIndex;  // 0xB8 (0xB8)
	char pad_188[4];  // 0xBC (0xBC)


}; 
 
 


// Class MovieSceneTracks.MovieSceneObjectPropertyTrack
// Size: 0xD8(Inherited: 0xC8)
struct UMovieSceneObjectPropertyTrack : UMovieScenePropertyTrack
{
	char pad_200[8];  // 0xC8 (0xC8)
	 PropertyClass;  // 0xD0 (0xD0)


}; 
 
 


// Class MovieSceneTracks.MovieSceneParticleTrack
// Size: 0xB0(Inherited: 0x98)
struct UMovieSceneParticleTrack : UMovieSceneNameableTrack
{
	char pad_152[8];  // 0x98 (0x98)
	struct TArray<struct UMovieSceneSection*> ParticleSections;  // 0xA0 (0xA0)


}; 
 
 


// Class MovieSceneTracks.MovieSceneStringTrack
// Size: 0xD0(Inherited: 0xC8)
struct UMovieSceneStringTrack : UMovieScenePropertyTrack
{
	char pad_200[8];  // 0xC8 (0xC8)


}; 
 
 


// Class MovieSceneTracks.MovieSceneDoubleVectorTrack
// Size: 0xD0(Inherited: 0xC8)
struct UMovieSceneDoubleVectorTrack : UMovieScenePropertyTrack
{
	int32_t NumChannelsUsed;  // 0xC8 (0xC8)
	char pad_204[4];  // 0xCC (0xCC)


}; 
 
 


// Class MovieSceneTracks.MovieSceneVisibilityTrack
// Size: 0xD0(Inherited: 0xD0)
struct UMovieSceneVisibilityTrack : UMovieSceneBoolTrack
{


}; 
 
 


