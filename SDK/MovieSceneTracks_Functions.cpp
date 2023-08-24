#include "pch.h"
#include "SDK.h"

bool UMovieSceneParameterSection::RemoveVectorParameter(struct FName InParameterName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter");

	FRemoveVectorParameter parms{};	
	parms.InParameterName = InParameterName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMovieSceneParameterSection::RemoveVector2DParameter(struct FName InParameterName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter");

	FRemoveVector2DParameter parms{};	
	parms.InParameterName = InParameterName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMovieSceneParameterSection::RemoveTransformParameter(struct FName InParameterName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter");

	FRemoveTransformParameter parms{};	
	parms.InParameterName = InParameterName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMovieSceneParameterSection::RemoveScalarParameter(struct FName InParameterName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter");

	FRemoveScalarParameter parms{};	
	parms.InParameterName = InParameterName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMovieSceneParameterSection::RemoveColorParameter(struct FName InParameterName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter");

	FRemoveColorParameter parms{};	
	parms.InParameterName = InParameterName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMovieSceneParameterSection::RemoveBoolParameter(struct FName InParameterName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter");

	FRemoveBoolParameter parms{};	
	parms.InParameterName = InParameterName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneParameterSection::GetParameterNames(struct TSet<struct FName>& ParameterNames){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames");

	FGetParameterNames parms{};	
	parms.ParameterNames = ParameterNames;

	ProcessEvent(fn, &parms);
}

void UMovieSceneParameterSection::AddVectorParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FVector InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey");

	FAddVectorParameterKey parms{};	
	parms.InParameterName = InParameterName;
	parms.InTime = InTime;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UMovieSceneParameterSection::AddVector2DParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FVector2D InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey");

	FAddVector2DParameterKey parms{};	
	parms.InParameterName = InParameterName;
	parms.InTime = InTime;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UMovieSceneParameterSection::AddTransformParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FTransform& InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey");

	FAddTransformParameterKey parms{};	
	parms.InParameterName = InParameterName;
	parms.InTime = InTime;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UMovieSceneParameterSection::AddScalarParameterKey(struct FName InParameterName, struct FFrameNumber InTime, float InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey");

	FAddScalarParameterKey parms{};	
	parms.InParameterName = InParameterName;
	parms.InTime = InTime;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UMovieSceneParameterSection::AddColorParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FLinearColor InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey");

	FAddColorParameterKey parms{};	
	parms.InParameterName = InParameterName;
	parms.InTime = InTime;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UMovieSceneParameterSection::AddBoolParameterKey(struct FName InParameterName, struct FFrameNumber InTime, bool InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey");

	FAddBoolParameterKey parms{};	
	parms.InParameterName = InParameterName;
	parms.InTime = InTime;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

struct FTransform UMovieSceneTransformOrigin::BP_GetTransformOrigin(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin");

	FBP_GetTransformOrigin parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieScene3DConstraintSection::SetConstraintBindingID(struct FMovieSceneObjectBindingID& InConstraintBindingID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID");

	FSetConstraintBindingID parms{};	
	parms.InConstraintBindingID = InConstraintBindingID;

	ProcessEvent(fn, &parms);
}

struct FMovieSceneObjectBindingID UMovieScene3DConstraintSection::GetConstraintBindingID(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID");

	FGetConstraintBindingID parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneLevelVisibilitySection::SetVisibility(uint8_t Invisibility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility");

	FSetVisibility parms{};	
	parms.Invisibility = Invisibility;

	ProcessEvent(fn, &parms);
}

void UMovieSceneLevelVisibilitySection::SetLevelNames(struct TArray<struct FName>& InLevelNames){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames");

	FSetLevelNames parms{};	
	parms.InLevelNames = InLevelNames;

	ProcessEvent(fn, &parms);
}

uint8_t UMovieSceneLevelVisibilitySection::GetVisibility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility");

	FGetVisibility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FName> UMovieSceneLevelVisibilitySection::GetLevelNames(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames");

	FGetLevelNames parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneAudioSection::SetStartOffset(struct FFrameNumber InStartOffset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset");

	FSetStartOffset parms{};	
	parms.InStartOffset = InStartOffset;

	ProcessEvent(fn, &parms);
}

void UMovieSceneAudioSection::SetSound(struct USoundBase* InSound){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.SetSound");

	FSetSound parms{};	
	parms.InSound = InSound;

	ProcessEvent(fn, &parms);
}

struct FFrameNumber UMovieSceneAudioSection::GetStartOffset(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset");

	FGetStartOffset parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct USoundBase* UMovieSceneAudioSection::GetSound(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.GetSound");

	FGetSound parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneCVarSection::SetFromString(struct FString InString){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCVarSection.SetFromString");

	FSetFromString parms{};	
	parms.InString = InString;

	ProcessEvent(fn, &parms);
}

struct FString UMovieSceneCVarSection::GetString(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCVarSection.GetString");

	FGetString parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneCinematicShotSection::SetShotDisplayName(struct FString InShotDisplayName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName");

	FSetShotDisplayName parms{};	
	parms.InShotDisplayName = InShotDisplayName;

	ProcessEvent(fn, &parms);
}

struct FString UMovieSceneCinematicShotSection::GetShotDisplayName(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName");

	FGetShotDisplayName parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneCameraCutSection::SetCameraBindingID(struct FMovieSceneObjectBindingID& InCameraBindingID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID");

	FSetCameraBindingID parms{};	
	parms.InCameraBindingID = InCameraBindingID;

	ProcessEvent(fn, &parms);
}

struct FMovieSceneObjectBindingID UMovieSceneCameraCutSection::GetCameraBindingID(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID");

	FGetCameraBindingID parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneDataLayerSection::SetPrerollState(uint8_t InPrerollState){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneDataLayerSection.SetPrerollState");

	FSetPrerollState parms{};	
	parms.InPrerollState = InPrerollState;

	ProcessEvent(fn, &parms);
}

void UMovieSceneDataLayerSection::SetFlushOnUnload(bool bFlushOnUnload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneDataLayerSection.SetFlushOnUnload");

	FSetFlushOnUnload parms{};	
	parms.bFlushOnUnload = bFlushOnUnload;

	ProcessEvent(fn, &parms);
}

void UMovieSceneDataLayerSection::SetDesiredState(uint8_t InDesiredState){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneDataLayerSection.SetDesiredState");

	FSetDesiredState parms{};	
	parms.InDesiredState = InDesiredState;

	ProcessEvent(fn, &parms);
}

void UMovieSceneDataLayerSection::SetDataLayers(struct TArray<struct FActorDataLayer>& InDataLayers){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneDataLayerSection.SetDataLayers");

	FSetDataLayers parms{};	
	parms.InDataLayers = InDataLayers;

	ProcessEvent(fn, &parms);
}

void UMovieSceneDataLayerSection::SetDataLayerAssets(struct TArray<struct UDataLayerAsset*>& InDataLayerAssets){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneDataLayerSection.SetDataLayerAssets");

	FSetDataLayerAssets parms{};	
	parms.InDataLayerAssets = InDataLayerAssets;

	ProcessEvent(fn, &parms);
}

uint8_t UMovieSceneDataLayerSection::GetPrerollState(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneDataLayerSection.GetPrerollState");

	FGetPrerollState parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMovieSceneDataLayerSection::GetFlushOnUnload(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneDataLayerSection.GetFlushOnUnload");

	FGetFlushOnUnload parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UMovieSceneDataLayerSection::GetDesiredState(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneDataLayerSection.GetDesiredState");

	FGetDesiredState parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FActorDataLayer> UMovieSceneDataLayerSection::GetDataLayers(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneDataLayerSection.GetDataLayers");

	FGetDataLayers parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UDataLayerAsset*> UMovieSceneDataLayerSection::GetDataLayerAssets(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneDataLayerSection.GetDataLayerAssets");

	FGetDataLayerAssets parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMovieSceneAsyncAction_SequencePrediction* UMovieSceneAsyncAction_SequencePrediction::PredictWorldTransformAtTime(struct UMovieSceneSequencePlayer* Player, struct USceneComponent* TargetComponent, float TimeInSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictWorldTransformAtTime");

	FPredictWorldTransformAtTime parms{};	
	parms.Player = Player;
	parms.TargetComponent = TargetComponent;
	parms.TimeInSeconds = TimeInSeconds;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMovieSceneAsyncAction_SequencePrediction* UMovieSceneAsyncAction_SequencePrediction::PredictWorldTransformAtFrame(struct UMovieSceneSequencePlayer* Player, struct USceneComponent* TargetComponent, struct FFrameTime FrameTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictWorldTransformAtFrame");

	FPredictWorldTransformAtFrame parms{};	
	parms.Player = Player;
	parms.TargetComponent = TargetComponent;
	parms.FrameTime = FrameTime;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMovieSceneAsyncAction_SequencePrediction* UMovieSceneAsyncAction_SequencePrediction::PredictLocalTransformAtTime(struct UMovieSceneSequencePlayer* Player, struct USceneComponent* TargetComponent, float TimeInSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictLocalTransformAtTime");

	FPredictLocalTransformAtTime parms{};	
	parms.Player = Player;
	parms.TargetComponent = TargetComponent;
	parms.TimeInSeconds = TimeInSeconds;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMovieSceneAsyncAction_SequencePrediction* UMovieSceneAsyncAction_SequencePrediction::PredictLocalTransformAtFrame(struct UMovieSceneSequencePlayer* Player, struct USceneComponent* TargetComponent, struct FFrameTime FrameTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictLocalTransformAtFrame");

	FPredictLocalTransformAtFrame parms{};	
	parms.Player = Player;
	parms.TargetComponent = TargetComponent;
	parms.FrameTime = FrameTime;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

