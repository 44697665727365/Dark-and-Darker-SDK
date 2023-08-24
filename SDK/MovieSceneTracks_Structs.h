#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct MovieSceneTracks.MovieSceneTransformMask
struct FMovieSceneTransformMask
{
	uint32_t Mask;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieSceneTracks.BoolParameterNameAndCurve
struct FBoolParameterNameAndCurve
{
	struct FName ParameterName;  // 0x0 (0x0)
	struct FMovieSceneBoolChannel ParameterCurve;  // 0x8 (0x8)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
// Size: 0x80(Inherited: 0x80)
struct FMovieSceneParticleParameterSectionTemplate : FMovieSceneParameterSectionTemplate
{


}; 
 
 // ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
struct FScalarParameterNameAndCurve
{
	struct FName ParameterName;  // 0x0 (0x0)
	struct FMovieSceneFloatChannel ParameterCurve;  // 0x8 (0x8)


}; 
 
 // ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
struct FVectorParameterNameAndCurves
{
	struct FName ParameterName;  // 0x0 (0x0)
	struct FMovieSceneFloatChannel XCurve;  // 0x8 (0x8)
	struct FMovieSceneFloatChannel YCurve;  // 0x118 (0x118)
	struct FMovieSceneFloatChannel ZCurve;  // 0x228 (0x228)


}; 
 
 // DelegateFunction MovieSceneTracks.MovieSceneActorPredictionResult__DelegateSignature
struct FMovieSceneActorPredictionResult__DelegateSignature
{
	struct FTransform PredictedTransform;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
struct FMovieSceneCameraShakeSectionData
{
	UCameraShakeBase* ShakeClass;  // 0x0 (0x0)
	float PlayScale;  // 0x8 (0x8)
	uint8_t PlaySpace;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	struct FRotator UserDefinedPlaySpace;  // 0x10 (0x10)


}; 
 
 // ScriptStruct MovieSceneTracks.Vector2DParameterNameAndCurves
struct FVector2DParameterNameAndCurves
{
	struct FName ParameterName;  // 0x0 (0x0)
	struct FMovieSceneFloatChannel XCurve;  // 0x8 (0x8)
	struct FMovieSceneFloatChannel YCurve;  // 0x118 (0x118)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
// Size: 0x80(Inherited: 0x20)
struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate
{
	struct TArray<struct FScalarParameterNameAndCurve> Scalars;  // 0x20 (0x20)
	struct TArray<struct FBoolParameterNameAndCurve> Bools;  // 0x30 (0x30)
	struct TArray<struct FVector2DParameterNameAndCurves> Vector2Ds;  // 0x40 (0x40)
	struct TArray<struct FVectorParameterNameAndCurves> Vectors;  // 0x50 (0x50)
	struct TArray<struct FColorParameterNameAndCurves> Colors;  // 0x60 (0x60)
	struct TArray<struct FTransformParameterNameAndCurves> Transforms;  // 0x70 (0x70)


}; 
 
 // Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
struct FBP_GetTransformOrigin
{
	struct FTransform ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
// Size: 0x150(Inherited: 0x20)
struct FMovieScene3DPathSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneObjectBindingID PathBindingID;  // 0x20 (0x20)
	struct FMovieSceneFloatChannel TimingCurve;  // 0x38 (0x38)
	uint8_t FrontAxisEnum;  // 0x148 (0x148)
	uint8_t UpAxisEnum;  // 0x149 (0x149)
	char pad_330[2];  // 0x14A (0x14A)
	char bFollow : 1;  // 0x14C (0x14C)
	char bReverse : 1;  // 0x14C (0x14C)
	char bForceUpright : 1;  // 0x14C (0x14C)
	char pad_332_1 : 5;  // 0x14C (0x14C)
	char pad_333[4];  // 0x14D (0x14D)


}; 
 
 // ScriptStruct MovieSceneTracks.TransformParameterNameAndCurves
struct FTransformParameterNameAndCurves
{
	struct FName ParameterName;  // 0x0 (0x0)
	struct FMovieSceneFloatChannel Translation[3];  // 0x8 (0x8)
	struct FMovieSceneFloatChannel Rotation[3];  // 0x338 (0x338)
	struct FMovieSceneFloatChannel Scale[3];  // 0x668 (0x668)


}; 
 
 // ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
struct FColorParameterNameAndCurves
{
	struct FName ParameterName;  // 0x0 (0x0)
	struct FMovieSceneFloatChannel RedCurve;  // 0x8 (0x8)
	struct FMovieSceneFloatChannel GreenCurve;  // 0x118 (0x118)
	struct FMovieSceneFloatChannel BlueCurve;  // 0x228 (0x228)
	struct FMovieSceneFloatChannel AlphaCurve;  // 0x338 (0x338)


}; 
 
 // Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
struct FSetShotDisplayName
{
	struct FString InShotDisplayName;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneEventPtrs
struct FMovieSceneEventPtrs
{
	struct UFunction* Function;  // 0x0 (0x0)
	struct TFieldPath<FNone> BoundObjectProperty;  // 0x8 (0x8)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneBaseCacheParams
struct FMovieSceneBaseCacheParams
{
	char pad_0[8];  // 0x0 (0x0)
	struct FFrameNumber FirstLoopStartFrameOffset;  // 0x8 (0x8)
	struct FFrameNumber StartFrameOffset;  // 0xC (0xC)
	struct FFrameNumber EndFrameOffset;  // 0x10 (0x10)
	float PlayRate;  // 0x14 (0x14)
	char bReverse : 1;  // 0x18 (0x18)
	char pad_24_1 : 7;  // 0x18 (0x18)
	char pad_25[8];  // 0x19 (0x19)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
// Size: 0x38(Inherited: 0x28)
struct FMovieSceneVector2DKeyStruct : FMovieSceneDoubleVectorKeyStructBase
{
	struct FVector2D Vector;  // 0x28 (0x28)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTrigger
struct FMovieSceneCameraShakeSourceTrigger
{
	UCameraShakeBase* ShakeClass;  // 0x0 (0x0)
	float PlayScale;  // 0x8 (0x8)
	uint8_t PlaySpace;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	struct FRotator UserDefinedPlaySpace;  // 0x10 (0x10)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneEventPayloadVariable
struct FMovieSceneEventPayloadVariable
{
	struct FString Value;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneBaseCacheSectionTemplateParameters
struct FMovieSceneBaseCacheSectionTemplateParameters
{
	struct FFrameNumber SectionStartTime;  // 0x0 (0x0)
	struct FFrameNumber SectionEndTime;  // 0x4 (0x4)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
struct FMovieSceneSkeletalAnimationParams
{
	struct UAnimSequenceBase* Animation;  // 0x0 (0x0)
	struct FFrameNumber FirstLoopStartFrameOffset;  // 0x8 (0x8)
	struct FFrameNumber StartFrameOffset;  // 0xC (0xC)
	struct FFrameNumber EndFrameOffset;  // 0x10 (0x10)
	float PlayRate;  // 0x14 (0x14)
	char bReverse : 1;  // 0x18 (0x18)
	char pad_24_1 : 7;  // 0x18 (0x18)
	char pad_25[4];  // 0x19 (0x19)
	struct FName SlotName;  // 0x1C (0x1C)
	char pad_36[4];  // 0x24 (0x24)
	struct UMirrorDataTable* MirrorDataTable;  // 0x28 (0x28)
	struct FMovieSceneFloatChannel Weight;  // 0x30 (0x30)
	char pad_320_1 : 7;  // 0x140 (0x140)
	bool bSkipAnimNotifiers : 1;  // 0x140 (0x140)
	char pad_321_1 : 7;  // 0x141 (0x141)
	bool bForceCustomMode : 1;  // 0x141 (0x141)
	uint8_t SwapRootBone;  // 0x142 (0x142)
	char pad_323[1];  // 0x143 (0x143)
	float StartOffset;  // 0x144 (0x144)
	float EndOffset;  // 0x148 (0x148)
	char pad_332[4];  // 0x14C (0x14C)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieScenePreAnimatedMaterialParameters
struct FMovieScenePreAnimatedMaterialParameters
{
	struct UMaterialInterface* PreviousMaterial;  // 0x0 (0x0)
	struct UMaterialInterface* PreviousParameterContainer;  // 0x8 (0x8)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
// Size: 0x480(Inherited: 0x38)
struct FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneFloatChannel Curves[4];  // 0x38 (0x38)
	uint8_t BlendType;  // 0x478 (0x478)
	char pad_1145[7];  // 0x479 (0x479)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTriggerChannel
// Size: 0xF8(Inherited: 0x50)
struct FMovieSceneCameraShakeSourceTriggerChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> KeyTimes;  // 0x50 (0x50)
	struct TArray<struct FMovieSceneCameraShakeSourceTrigger> KeyValues;  // 0x60 (0x60)
	char pad_112[136];  // 0x70 (0x70)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneDoublePerlinNoiseChannel
// Size: 0x68(Inherited: 0x50)
struct FMovieSceneDoublePerlinNoiseChannel : FMovieSceneChannel
{
	struct FPerlinNoiseParams PerlinNoiseParams;  // 0x50 (0x50)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
// Size: 0x50(Inherited: 0x20)
struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneCameraShakeSectionData SourceData;  // 0x20 (0x20)
	struct FFrameNumber SectionStartTime;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)


}; 
 
 // ScriptStruct MovieSceneTracks.PerlinNoiseParams
struct FPerlinNoiseParams
{
	float Frequency;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	double Amplitude;  // 0x8 (0x8)
	float Offset;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // ScriptStruct MovieSceneTracks.EventPayload
struct FEventPayload
{
	struct FName EventName;  // 0x0 (0x0)
	struct FMovieSceneEventParameters Parameters;  // 0x8 (0x8)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneEvent
struct FMovieSceneEvent
{
	struct FMovieSceneEventPtrs Ptrs;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneDataLayerComponentData
struct FMovieSceneDataLayerComponentData
{
	struct UMovieSceneDataLayerSection* Section;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneFloatVectorKeyStructBase
// Size: 0x28(Inherited: 0x8)
struct FMovieSceneFloatVectorKeyStructBase : FMovieSceneKeyStruct
{
	struct FFrameNumber Time;  // 0x8 (0x8)
	char pad_12[28];  // 0xC (0xC)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneEventChannel
// Size: 0xF8(Inherited: 0x50)
struct FMovieSceneEventChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> KeyTimes;  // 0x50 (0x50)
	struct TArray<struct FMovieSceneEvent> KeyValues;  // 0x60 (0x60)
	char pad_112[136];  // 0x70 (0x70)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
// Size: 0x138(Inherited: 0x38)
struct FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneBoolChannel BoolCurve;  // 0x38 (0x38)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
// Size: 0xF8(Inherited: 0x50)
struct FMovieSceneEventSectionData : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> Times;  // 0x50 (0x50)
	struct TArray<struct FEventPayload> KeyValues;  // 0x60 (0x60)
	char pad_112[136];  // 0x70 (0x70)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneObjectPropertyTemplate
// Size: 0x170(Inherited: 0x38)
struct FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneObjectPathChannel ObjectChannel;  // 0x38 (0x38)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneFloatPerlinNoiseChannel
// Size: 0x68(Inherited: 0x50)
struct FMovieSceneFloatPerlinNoiseChannel : FMovieSceneChannel
{
	struct FPerlinNoiseParams PerlinNoiseParams;  // 0x50 (0x50)


}; 
 
 // Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
struct FGetStartOffset
{
	struct FFrameNumber ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneVector4fKeyStruct
// Size: 0x40(Inherited: 0x28)
struct FMovieSceneVector4fKeyStruct : FMovieSceneFloatVectorKeyStructBase
{
	char pad_40[8];  // 0x28 (0x28)
	struct FVector4f Vector;  // 0x30 (0x30)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneStringChannel
// Size: 0x110(Inherited: 0x50)
struct FMovieSceneStringChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> Times;  // 0x50 (0x50)
	struct TArray<struct FString> Values;  // 0x60 (0x60)
	struct FString DefaultValue;  // 0x70 (0x70)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool bHasDefaultValue : 1;  // 0x80 (0x80)
	char pad_129[143];  // 0x81 (0x81)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
// Size: 0x40(Inherited: 0x8)
struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct
{
	struct FRotator Rotation;  // 0x8 (0x8)
	struct FFrameNumber Time;  // 0x20 (0x20)
	char pad_36[28];  // 0x24 (0x24)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
// Size: 0x158(Inherited: 0x20)
struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData PropertyData;  // 0x20 (0x20)
	struct FMovieSceneActorReferenceData ActorReferenceData;  // 0x38 (0x38)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
// Size: 0x158(Inherited: 0x150)
struct FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams
{
	struct FFrameNumber SectionStartTime;  // 0x150 (0x150)
	struct FFrameNumber SectionEndTime;  // 0x154 (0x154)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneActorReferenceData
// Size: 0x120(Inherited: 0x50)
struct FMovieSceneActorReferenceData : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> KeyTimes;  // 0x50 (0x50)
	struct FMovieSceneActorReferenceKey DefaultValue;  // 0x60 (0x60)
	struct TArray<struct FMovieSceneActorReferenceKey> KeyValues;  // 0x88 (0x88)
	char pad_152[136];  // 0x98 (0x98)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimRootMotionTrackParams
struct FMovieSceneSkeletalAnimRootMotionTrackParams
{
	char pad_0[48];  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneActorReferenceKey
struct FMovieSceneActorReferenceKey
{
	struct FMovieSceneObjectBindingID Object;  // 0x0 (0x0)
	struct FName ComponentName;  // 0x18 (0x18)
	struct FName SocketName;  // 0x20 (0x20)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneVector3dKeyStruct
// Size: 0x40(Inherited: 0x28)
struct FMovieSceneVector3dKeyStruct : FMovieSceneDoubleVectorKeyStructBase
{
	struct FVector3d Vector;  // 0x28 (0x28)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
// Size: 0x28(Inherited: 0x20)
struct FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate
{
	struct UMovieSceneAudioSection* AudioSection;  // 0x20 (0x20)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceShakeSectionTemplate
// Size: 0x50(Inherited: 0x20)
struct FMovieSceneCameraShakeSourceShakeSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneCameraShakeSectionData SourceData;  // 0x20 (0x20)
	struct FFrameNumber SectionStartTime;  // 0x48 (0x48)
	struct FFrameNumber SectionEndTime;  // 0x4C (0x4C)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSectionTemplate
// Size: 0x40(Inherited: 0x20)
struct FMovieSceneCameraShakeSourceTriggerSectionTemplate : FMovieSceneEvalTemplate
{
	struct TArray<struct FFrameNumber> TriggerTimes;  // 0x20 (0x20)
	struct TArray<struct FMovieSceneCameraShakeSourceTrigger> TriggerValues;  // 0x30 (0x30)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
// Size: 0x120(Inherited: 0x20)
struct FMovieSceneEventSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneEventSectionData EventData;  // 0x20 (0x20)
	char bFireEventsWhenForwards : 1;  // 0x118 (0x118)
	char bFireEventsWhenBackwards : 1;  // 0x118 (0x118)
	char pad_280_1 : 6;  // 0x118 (0x118)
	char pad_281[8];  // 0x119 (0x119)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneEventParameters
struct FMovieSceneEventParameters
{
	char pad_0[48];  // 0x0 (0x0)


}; 
 
 // Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
struct FSetCameraBindingID
{
	struct FMovieSceneObjectBindingID InCameraBindingID;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneVector2fKeyStruct
// Size: 0x30(Inherited: 0x28)
struct FMovieSceneVector2fKeyStruct : FMovieSceneFloatVectorKeyStructBase
{
	struct FVector2f Vector;  // 0x28 (0x28)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
// Size: 0x148(Inherited: 0x38)
struct FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneStringChannel StringCurve;  // 0x38 (0x38)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneFadeSectionTemplate
// Size: 0x148(Inherited: 0x20)
struct FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneFloatChannel FadeCurve;  // 0x20 (0x20)
	struct FLinearColor FadeColor;  // 0x130 (0x130)
	char bFadeAudio : 1;  // 0x140 (0x140)
	char pad_320_1 : 7;  // 0x140 (0x140)
	char pad_321[8];  // 0x141 (0x141)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneDoubleVectorKeyStructBase
// Size: 0x28(Inherited: 0x8)
struct FMovieSceneDoubleVectorKeyStructBase : FMovieSceneKeyStruct
{
	struct FFrameNumber Time;  // 0x8 (0x8)
	char pad_12[28];  // 0xC (0xC)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
// Size: 0x38(Inherited: 0x8)
struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct
{
	struct FLinearColor Color;  // 0x8 (0x8)
	struct FFrameNumber Time;  // 0x18 (0x18)
	char pad_28[28];  // 0x1C (0x1C)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
// Size: 0x128(Inherited: 0x20)
struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneParticleChannel ParticleKeys;  // 0x20 (0x20)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneParticleChannel
// Size: 0x108(Inherited: 0x108)
struct FMovieSceneParticleChannel : FMovieSceneByteChannel
{


}; 
 
 // ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
// Size: 0x40(Inherited: 0x8)
struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct
{
	struct FVector Location;  // 0x8 (0x8)
	struct FFrameNumber Time;  // 0x20 (0x20)
	char pad_36[28];  // 0x24 (0x24)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
// Size: 0x178(Inherited: 0x20)
struct FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneSkeletalAnimationSectionTemplateParameters Params;  // 0x20 (0x20)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
// Size: 0x130(Inherited: 0x20)
struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneFloatChannel SlomoCurve;  // 0x20 (0x20)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
// Size: 0x138(Inherited: 0x138)
struct FMovieSceneVisibilitySectionTemplate : FMovieSceneBoolPropertySectionTemplate
{


}; 
 
 // ScriptStruct MovieSceneTracks.LevelVisibilityComponentData
struct FLevelVisibilityComponentData
{
	struct UMovieSceneLevelVisibilitySection* Section;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieSceneTracks.ConstraintComponentData
struct FConstraintComponentData
{
	struct FName ConstraintName;  // 0x0 (0x0)
	char pad_8[16];  // 0x8 (0x8)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
// Size: 0x30(Inherited: 0x8)
struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct
{
	struct FVector3f Scale;  // 0x8 (0x8)
	struct FFrameNumber Time;  // 0x14 (0x14)
	char pad_24[24];  // 0x18 (0x18)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
// Size: 0x60(Inherited: 0x8)
struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct
{
	struct FVector Location;  // 0x8 (0x8)
	struct FRotator Rotation;  // 0x20 (0x20)
	struct FVector3f Scale;  // 0x38 (0x38)
	struct FFrameNumber Time;  // 0x44 (0x44)
	char pad_72[24];  // 0x48 (0x48)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneCVarOverrides
struct FMovieSceneCVarOverrides
{
	struct TMap<struct FString, struct FString> ValuesByCVar;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneVector3fKeyStruct
// Size: 0x38(Inherited: 0x28)
struct FMovieSceneVector3fKeyStruct : FMovieSceneFloatVectorKeyStructBase
{
	struct FVector3f Vector;  // 0x28 (0x28)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneVector4dKeyStruct
// Size: 0x50(Inherited: 0x28)
struct FMovieSceneVector4dKeyStruct : FMovieSceneDoubleVectorKeyStructBase
{
	char pad_40[8];  // 0x28 (0x28)
	struct FVector4d Vector;  // 0x30 (0x30)


}; 
 
 // ScriptStruct MovieSceneTracks.MovieSceneEventTriggerData
struct FMovieSceneEventTriggerData
{
	struct FMovieSceneEventPtrs Ptrs;  // 0x0 (0x0)
	struct FGuid ObjectBindingID;  // 0x28 (0x28)
	char pad_56[16];  // 0x38 (0x38)


}; 
 
 // Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey
struct FAddBoolParameterKey
{
	struct FName InParameterName;  // 0x0 (0x0)
	struct FFrameNumber InTime;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool InValue : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey
struct FAddColorParameterKey
{
	struct FName InParameterName;  // 0x0 (0x0)
	struct FFrameNumber InTime;  // 0x8 (0x8)
	struct FLinearColor InValue;  // 0xC (0xC)


}; 
 
 // Function MovieSceneTracks.MovieSceneAudioSection.GetSound
struct FGetSound
{
	struct USoundBase* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey
struct FAddScalarParameterKey
{
	struct FName InParameterName;  // 0x0 (0x0)
	struct FFrameNumber InTime;  // 0x8 (0x8)
	float InValue;  // 0xC (0xC)


}; 
 
 // Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey
struct FAddTransformParameterKey
{
	struct FName InParameterName;  // 0x0 (0x0)
	struct FFrameNumber InTime;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FTransform InValue;  // 0x10 (0x10)


}; 
 
 // Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey
struct FAddVector2DParameterKey
{
	struct FName InParameterName;  // 0x0 (0x0)
	struct FFrameNumber InTime;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FVector2D InValue;  // 0x10 (0x10)


}; 
 
 // Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey
struct FAddVectorParameterKey
{
	struct FName InParameterName;  // 0x0 (0x0)
	struct FFrameNumber InTime;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FVector InValue;  // 0x10 (0x10)


}; 
 
 // Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames
struct FGetParameterNames
{
	struct TSet<struct FName> ParameterNames;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter
struct FRemoveBoolParameter
{
	struct FName InParameterName;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter
struct FRemoveColorParameter
{
	struct FName InParameterName;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter
struct FRemoveScalarParameter
{
	struct FName InParameterName;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter
struct FRemoveTransformParameter
{
	struct FName InParameterName;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter
struct FRemoveVector2DParameter
{
	struct FName InParameterName;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter
struct FRemoveVectorParameter
{
	struct FName InParameterName;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
struct FGetConstraintBindingID
{
	struct FMovieSceneObjectBindingID ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
struct FSetConstraintBindingID
{
	struct FMovieSceneObjectBindingID InConstraintBindingID;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneTracks.MovieSceneAudioSection.SetSound
struct FSetSound
{
	struct USoundBase* InSound;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
struct FSetStartOffset
{
	struct FFrameNumber InStartOffset;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
struct FGetCameraBindingID
{
	struct FMovieSceneObjectBindingID ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
struct FGetShotDisplayName
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneTracks.MovieSceneCVarSection.GetString
struct FGetString
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneTracks.MovieSceneCVarSection.SetFromString
struct FSetFromString
{
	struct FString InString;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneTracks.MovieSceneDataLayerSection.GetDataLayerAssets
struct FGetDataLayerAssets
{
	struct TArray<struct UDataLayerAsset*> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneTracks.MovieSceneDataLayerSection.GetDataLayers
struct FGetDataLayers
{
	struct TArray<struct FActorDataLayer> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneTracks.MovieSceneDataLayerSection.GetDesiredState
struct FGetDesiredState
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneTracks.MovieSceneDataLayerSection.GetFlushOnUnload
struct FGetFlushOnUnload
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneTracks.MovieSceneDataLayerSection.GetPrerollState
struct FGetPrerollState
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneTracks.MovieSceneDataLayerSection.SetDataLayerAssets
struct FSetDataLayerAssets
{
	struct TArray<struct UDataLayerAsset*> InDataLayerAssets;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneTracks.MovieSceneDataLayerSection.SetDataLayers
struct FSetDataLayers
{
	struct TArray<struct FActorDataLayer> InDataLayers;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneTracks.MovieSceneDataLayerSection.SetDesiredState
struct FSetDesiredState
{
	uint8_t InDesiredState;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneTracks.MovieSceneDataLayerSection.SetFlushOnUnload
struct FSetFlushOnUnload
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bFlushOnUnload : 1;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneTracks.MovieSceneDataLayerSection.SetPrerollState
struct FSetPrerollState
{
	uint8_t InPrerollState;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
struct FGetLevelNames
{
	struct TArray<struct FName> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
struct FGetVisibility
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
struct FSetLevelNames
{
	struct TArray<struct FName> InLevelNames;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
struct FSetVisibility
{
	uint8_t Invisibility;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictLocalTransformAtFrame
struct FPredictLocalTransformAtFrame
{
	struct UMovieSceneSequencePlayer* Player;  // 0x0 (0x0)
	struct USceneComponent* TargetComponent;  // 0x8 (0x8)
	struct FFrameTime FrameTime;  // 0x10 (0x10)
	struct UMovieSceneAsyncAction_SequencePrediction* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictLocalTransformAtTime
struct FPredictLocalTransformAtTime
{
	struct UMovieSceneSequencePlayer* Player;  // 0x0 (0x0)
	struct USceneComponent* TargetComponent;  // 0x8 (0x8)
	float TimeInSeconds;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct UMovieSceneAsyncAction_SequencePrediction* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictWorldTransformAtFrame
struct FPredictWorldTransformAtFrame
{
	struct UMovieSceneSequencePlayer* Player;  // 0x0 (0x0)
	struct USceneComponent* TargetComponent;  // 0x8 (0x8)
	struct FFrameTime FrameTime;  // 0x10 (0x10)
	struct UMovieSceneAsyncAction_SequencePrediction* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictWorldTransformAtTime
struct FPredictWorldTransformAtTime
{
	struct UMovieSceneSequencePlayer* Player;  // 0x0 (0x0)
	struct USceneComponent* TargetComponent;  // 0x8 (0x8)
	float TimeInSeconds;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct UMovieSceneAsyncAction_SequencePrediction* ReturnValue;  // 0x18 (0x18)


}; 
 
 