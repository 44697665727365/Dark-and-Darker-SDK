#include "pch.h"
#include "SDK.h"

void ULevelSequence::RemoveMetaDataByClass(UObject* InClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.RemoveMetaDataByClass");

	FRemoveMetaDataByClass parms{};	
	parms.InClass = InClass;

	ProcessEvent(fn, &parms);
}

struct UObject* ULevelSequence::FindOrAddMetaDataByClass(UObject* InClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass");

	FFindOrAddMetaDataByClass parms{};	
	parms.InClass = InClass;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UObject* ULevelSequence::FindMetaDataByClass(UObject* InClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.FindMetaDataByClass");

	FFindMetaDataByClass parms{};	
	parms.InClass = InClass;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UObject* ULevelSequence::CopyMetaData(struct UObject* InMetaData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.CopyMetaData");

	FCopyMetaData parms{};	
	parms.InMetaData = InMetaData;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ALevelSequenceActor::ShowBurnin(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ShowBurnin");

	FShowBurnin parms{};	

	ProcessEvent(fn, &parms);
}

void ALevelSequenceActor::SetSequence(struct ULevelSequence* InSequence){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetSequence");

	FSetSequence parms{};	
	parms.InSequence = InSequence;

	ProcessEvent(fn, &parms);
}

void ALevelSequenceActor::SetReplicatePlayback(bool ReplicatePlayback){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetReplicatePlayback");

	FSetReplicatePlayback parms{};	
	parms.ReplicatePlayback = ReplicatePlayback;

	ProcessEvent(fn, &parms);
}

void ALevelSequenceActor::SetBindingByTag(struct FName BindingTag, struct TArray<struct AActor*>& Actors, bool bAllowBindingsFromAsset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetBindingByTag");

	FSetBindingByTag parms{};	
	parms.BindingTag = BindingTag;
	parms.Actors = Actors;
	parms.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	ProcessEvent(fn, &parms);
}

void ALevelSequenceActor::SetBinding(struct FMovieSceneObjectBindingID Binding, struct TArray<struct AActor*>& Actors, bool bAllowBindingsFromAsset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetBinding");

	FSetBinding parms{};	
	parms.Binding = Binding;
	parms.Actors = Actors;
	parms.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	ProcessEvent(fn, &parms);
}

void ALevelSequenceActor::ResetBindings(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ResetBindings");

	FResetBindings parms{};	

	ProcessEvent(fn, &parms);
}

void ALevelSequenceActor::ResetBinding(struct FMovieSceneObjectBindingID Binding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ResetBinding");

	FResetBinding parms{};	
	parms.Binding = Binding;

	ProcessEvent(fn, &parms);
}

void ALevelSequenceActor::RemoveBindingByTag(struct FName Tag, struct AActor* Actor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.RemoveBindingByTag");

	FRemoveBindingByTag parms{};	
	parms.Tag = Tag;
	parms.Actor = Actor;

	ProcessEvent(fn, &parms);
}

void ALevelSequenceActor::RemoveBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.RemoveBinding");

	FRemoveBinding parms{};	
	parms.Binding = Binding;
	parms.Actor = Actor;

	ProcessEvent(fn, &parms);
}

void ALevelSequenceActor::OnLevelSequenceLoaded__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature");

	FOnLevelSequenceLoaded__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

struct ULevelSequence* ALevelSequenceActor::LoadSequence(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.LoadSequence");

	FLoadSequence parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ALevelSequenceActor::HideBurnin(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.HideBurnin");

	FHideBurnin parms{};	

	ProcessEvent(fn, &parms);
}

struct ULevelSequencePlayer* ALevelSequenceActor::GetSequencePlayer(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.GetSequencePlayer");

	FGetSequencePlayer parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct ULevelSequence* ALevelSequenceActor::GetSequence(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.GetSequence");

	FGetSequence parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FMovieSceneObjectBindingID> ALevelSequenceActor::FindNamedBindings(struct FName Tag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.FindNamedBindings");

	FFindNamedBindings parms{};	
	parms.Tag = Tag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FMovieSceneObjectBindingID ALevelSequenceActor::FindNamedBinding(struct FName Tag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.FindNamedBinding");

	FFindNamedBinding parms{};	
	parms.Tag = Tag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ALevelSequenceActor::AddBindingByTag(struct FName BindingTag, struct AActor* Actor, bool bAllowBindingsFromAsset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.AddBindingByTag");

	FAddBindingByTag parms{};	
	parms.BindingTag = BindingTag;
	parms.Actor = Actor;
	parms.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	ProcessEvent(fn, &parms);
}

void ALevelSequenceActor::AddBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor, bool bAllowBindingsFromAsset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.AddBinding");

	FAddBinding parms{};	
	parms.Binding = Binding;
	parms.Actor = Actor;
	parms.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	ProcessEvent(fn, &parms);
}

void ULevelSequenceBurnInOptions::SetBurnIn(struct FSoftClassPath InBurnInClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn");

	FSetBurnIn parms{};	
	parms.InBurnInClass = InBurnInClass;

	ProcessEvent(fn, &parms);
}

void ULevelSequenceBurnIn::SetSettings(struct UObject* InSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnIn.SetSettings");

	FSetSettings parms{};	
	parms.InSettings = InSettings;

	ProcessEvent(fn, &parms);
}

ULevelSequenceBurnInInitSettings* ULevelSequenceBurnIn::GetSettingsClass(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass");

	FGetSettingsClass parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ULevelSequenceDirector::OnCreated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceDirector.OnCreated");

	FOnCreated parms{};	

	ProcessEvent(fn, &parms);
}

struct UMovieSceneSequence* ULevelSequenceDirector::GetSequence(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceDirector.GetSequence");

	FGetSequence parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FQualifiedFrameTime ULevelSequenceDirector::GetMasterSequenceTime(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceDirector.GetMasterSequenceTime");

	FGetMasterSequenceTime parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FQualifiedFrameTime ULevelSequenceDirector::GetCurrentTime(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceDirector.GetCurrentTime");

	FGetCurrentTime parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UObject*> ULevelSequenceDirector::GetBoundObjects(struct FMovieSceneObjectBindingID ObjectBinding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceDirector.GetBoundObjects");

	FGetBoundObjects parms{};	
	parms.ObjectBinding = ObjectBinding;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UObject* ULevelSequenceDirector::GetBoundObject(struct FMovieSceneObjectBindingID ObjectBinding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceDirector.GetBoundObject");

	FGetBoundObject parms{};	
	parms.ObjectBinding = ObjectBinding;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct AActor*> ULevelSequenceDirector::GetBoundActors(struct FMovieSceneObjectBindingID ObjectBinding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceDirector.GetBoundActors");

	FGetBoundActors parms{};	
	parms.ObjectBinding = ObjectBinding;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct AActor* ULevelSequenceDirector::GetBoundActor(struct FMovieSceneObjectBindingID ObjectBinding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceDirector.GetBoundActor");

	FGetBoundActor parms{};	
	parms.ObjectBinding = ObjectBinding;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UCameraComponent* ULevelSequencePlayer::GetActiveCameraComponent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent");

	FGetActiveCameraComponent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct ULevelSequencePlayer* ULevelSequencePlayer::CreateLevelSequencePlayer(struct UObject* WorldContextObject, struct ULevelSequence* LevelSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ALevelSequenceActor*& OutActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer");

	FCreateLevelSequencePlayer parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.LevelSequence = LevelSequence;
	parms.Settings = Settings;
	parms.OutActor = OutActor;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ALevelSequenceMediaController::SynchronizeToServer(float DesyncThresholdSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer");

	FSynchronizeToServer parms{};	
	parms.DesyncThresholdSeconds = DesyncThresholdSeconds;

	ProcessEvent(fn, &parms);
}

void ALevelSequenceMediaController::Play(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceMediaController.Play");

	FPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ALevelSequenceMediaController::OnRep_ServerStartTimeSeconds(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds");

	FOnRep_ServerStartTimeSeconds parms{};	

	ProcessEvent(fn, &parms);
}

struct ALevelSequenceActor* ALevelSequenceMediaController::GetSequence(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceMediaController.GetSequence");

	FGetSequence parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMediaComponent* ALevelSequenceMediaController::GetMediaComponent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceMediaController.GetMediaComponent");

	FGetMediaComponent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

