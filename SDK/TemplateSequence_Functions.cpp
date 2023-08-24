#include "pch.h"
#include "SDK.h"

void ATemplateSequenceActor::SetSequence(struct UTemplateSequence* InSequence){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequenceActor.SetSequence");

	FSetSequence parms{};	
	parms.InSequence = InSequence;

	ProcessEvent(fn, &parms);
}

void ATemplateSequenceActor::SetBinding(struct AActor* Actor, bool bOverridesDefault){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequenceActor.SetBinding");

	FSetBinding parms{};	
	parms.Actor = Actor;
	parms.bOverridesDefault = bOverridesDefault;

	ProcessEvent(fn, &parms);
}

struct UTemplateSequence* ATemplateSequenceActor::LoadSequence(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequenceActor.LoadSequence");

	FLoadSequence parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UTemplateSequencePlayer* ATemplateSequenceActor::GetSequencePlayer(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer");

	FGetSequencePlayer parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UTemplateSequence* ATemplateSequenceActor::GetSequence(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequenceActor.GetSequence");

	FGetSequence parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UTemplateSequencePlayer* UTemplateSequencePlayer::CreateTemplateSequencePlayer(struct UObject* WorldContextObject, struct UTemplateSequence* TemplateSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ATemplateSequenceActor*& OutActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer");

	FCreateTemplateSequencePlayer parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.TemplateSequence = TemplateSequence;
	parms.Settings = Settings;
	parms.OutActor = OutActor;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool USequenceCameraShakeTestUtil::GetPostProcessBlendCache(struct APlayerController* PlayerController, int32_t PPIndex, struct FPostProcessSettings& OutPPSettings, float& OutPPBlendWeight){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TemplateSequence.SequenceCameraShakeTestUtil.GetPostProcessBlendCache");

	FGetPostProcessBlendCache parms{};	
	parms.PlayerController = PlayerController;
	parms.PPIndex = PPIndex;
	parms.OutPPSettings = OutPPSettings;
	parms.OutPPBlendWeight = OutPPBlendWeight;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FMinimalViewInfo USequenceCameraShakeTestUtil::GetLastFrameCameraCachePOV(struct APlayerController* PlayerController){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TemplateSequence.SequenceCameraShakeTestUtil.GetLastFrameCameraCachePOV");

	FGetLastFrameCameraCachePOV parms{};	
	parms.PlayerController = PlayerController;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FMinimalViewInfo USequenceCameraShakeTestUtil::GetCameraCachePOV(struct APlayerController* PlayerController){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TemplateSequence.SequenceCameraShakeTestUtil.GetCameraCachePOV");

	FGetCameraCachePOV parms{};	
	parms.PlayerController = PlayerController;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

