#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
struct FCreateTemplateSequencePlayer
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UTemplateSequence* TemplateSequence;  // 0x8 (0x8)
	struct FMovieSceneSequencePlaybackSettings Settings;  // 0x10 (0x10)
	struct ATemplateSequenceActor* OutActor;  // 0x30 (0x30)
	struct UTemplateSequencePlayer* ReturnValue;  // 0x38 (0x38)


}; 
 
 // ScriptStruct TemplateSequence.TemplateSectionPropertyScale
struct FTemplateSectionPropertyScale
{
	struct FGuid ObjectBinding;  // 0x0 (0x0)
	struct FMovieScenePropertyBinding PropertyBinding;  // 0x10 (0x10)
	uint8_t PropertyScaleType;  // 0x24 (0x24)
	struct FMovieSceneFloatChannel FloatChannel;  // 0x28 (0x28)


}; 
 
 // Function TemplateSequence.SequenceCameraShakeTestUtil.GetCameraCachePOV
struct FGetCameraCachePOV
{
	struct APlayerController* PlayerController;  // 0x0 (0x0)
	char pad_8[8];  // 0x8 (0x8)
	struct FMinimalViewInfo ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer
struct FGetSequencePlayer
{
	struct UTemplateSequencePlayer* ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct TemplateSequence.TemplateSequenceBindingOverrideData
struct FTemplateSequenceBindingOverrideData
{
	struct TWeakObjectPtr<UObject> Object;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bOverridesDefault : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function TemplateSequence.TemplateSequenceActor.GetSequence
struct FGetSequence
{
	struct UTemplateSequence* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function TemplateSequence.TemplateSequenceActor.SetBinding
struct FSetBinding
{
	struct AActor* Actor;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bOverridesDefault : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function TemplateSequence.TemplateSequenceActor.LoadSequence
struct FLoadSequence
{
	struct UTemplateSequence* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function TemplateSequence.TemplateSequenceActor.SetSequence
struct FSetSequence
{
	struct UTemplateSequence* InSequence;  // 0x0 (0x0)


}; 
 
 // Function TemplateSequence.SequenceCameraShakeTestUtil.GetLastFrameCameraCachePOV
struct FGetLastFrameCameraCachePOV
{
	struct APlayerController* PlayerController;  // 0x0 (0x0)
	char pad_8[8];  // 0x8 (0x8)
	struct FMinimalViewInfo ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function TemplateSequence.SequenceCameraShakeTestUtil.GetPostProcessBlendCache
struct FGetPostProcessBlendCache
{
	struct APlayerController* PlayerController;  // 0x0 (0x0)
	int32_t PPIndex;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FPostProcessSettings OutPPSettings;  // 0x10 (0x10)
	float OutPPBlendWeight;  // 0x6F0 (0x6F0)
	char pad_1780_1 : 7;  // 0x6F4 (0x6F4)
	bool ReturnValue : 1;  // 0x6F4 (0x6F4)
	char pad_1781[11];  // 0x6F5 (0x6F5)


}; 
 
 