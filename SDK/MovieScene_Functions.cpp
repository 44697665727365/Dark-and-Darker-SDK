#include "pch.h"
#include "SDK.h"

void UMovieSceneSection::SetRowIndex(int32_t NewRowIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetRowIndex");

	FSetRowIndex parms{};	
	parms.NewRowIndex = NewRowIndex;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSection::SetPreRollFrames(int32_t InPreRollFrames){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetPreRollFrames");

	FSetPreRollFrames parms{};	
	parms.InPreRollFrames = InPreRollFrames;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSection::SetPostRollFrames(int32_t InPostRollFrames){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetPostRollFrames");

	FSetPostRollFrames parms{};	
	parms.InPostRollFrames = InPostRollFrames;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSection::SetOverlapPriority(int32_t NewPriority){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetOverlapPriority");

	FSetOverlapPriority parms{};	
	parms.NewPriority = NewPriority;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSection::SetIsLocked(bool bInIsLocked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetIsLocked");

	FSetIsLocked parms{};	
	parms.bInIsLocked = bInIsLocked;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSection::SetIsActive(bool bInIsActive){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetIsActive");

	FSetIsActive parms{};	
	parms.bInIsActive = bInIsActive;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSection::SetCompletionMode(uint8_t InCompletionMode){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetCompletionMode");

	FSetCompletionMode parms{};	
	parms.InCompletionMode = InCompletionMode;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSection::SetBlendType(uint8_t InBlendType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetBlendType");

	FSetBlendType parms{};	
	parms.InBlendType = InBlendType;

	ProcessEvent(fn, &parms);
}

bool UMovieSceneSection::IsLocked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.IsLocked");

	FIsLocked parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMovieSceneSection::IsActive(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.IsActive");

	FIsActive parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMovieSceneSection::GetRowIndex(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetRowIndex");

	FGetRowIndex parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMovieSceneSection::GetPreRollFrames(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetPreRollFrames");

	FGetPreRollFrames parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMovieSceneSection::GetPostRollFrames(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetPostRollFrames");

	FGetPostRollFrames parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMovieSceneSection::GetOverlapPriority(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetOverlapPriority");

	FGetOverlapPriority parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UMovieSceneSection::GetCompletionMode(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetCompletionMode");

	FGetCompletionMode parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FOptionalMovieSceneBlendType UMovieSceneSection::GetBlendType(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetBlendType");

	FGetBlendType parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FMovieSceneTimecodeSource UMovieSceneSequence::GetEarliestTimecodeSource(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequence.GetEarliestTimecodeSource");

	FGetEarliestTimecodeSource parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FMovieSceneObjectBindingID> UMovieSceneSequence::FindBindingsByTag(struct FName InBindingName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequence.FindBindingsByTag");

	FFindBindingsByTag parms{};	
	parms.InBindingName = InBindingName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FMovieSceneObjectBindingID UMovieSceneSequence::FindBindingByTag(struct FName InBindingName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequence.FindBindingByTag");

	FFindBindingByTag parms{};	
	parms.InBindingName = InBindingName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneSubSection::SetSequence(struct UMovieSceneSequence* Sequence){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSubSection.SetSequence");

	FSetSequence parms{};	
	parms.Sequence = Sequence;

	ProcessEvent(fn, &parms);
}

struct UMovieSceneSequence* UMovieSceneSubSection::GetSequence(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSubSection.GetSequence");

	FGetSequence parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneSequencePlayer::StopAtCurrentTime(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime");

	FStopAtCurrentTime parms{};	

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequencePlayer::Stop(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Stop");

	FStop parms{};	

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequencePlayer::SetTimeRange(float StartTime, float Duration){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetTimeRange");

	FSetTimeRange parms{};	
	parms.StartTime = StartTime;
	parms.Duration = Duration;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequencePlayer::SetPlayRate(float PlayRate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetPlayRate");

	FSetPlayRate parms{};	
	parms.PlayRate = PlayRate;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequencePlayer::SetPlaybackPosition(struct FMovieSceneSequencePlaybackParams PlaybackParams){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition");

	FSetPlaybackPosition parms{};	
	parms.PlaybackParams = PlaybackParams;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequencePlayer::SetFrameRate(struct FFrameRate FrameRate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetFrameRate");

	FSetFrameRate parms{};	
	parms.FrameRate = FrameRate;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequencePlayer::SetFrameRange(int32_t StartFrame, int32_t Duration, float SubFrames){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetFrameRange");

	FSetFrameRange parms{};	
	parms.StartFrame = StartFrame;
	parms.Duration = Duration;
	parms.SubFrames = SubFrames;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequencePlayer::SetDisableCameraCuts(bool bInDisableCameraCuts){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts");

	FSetDisableCameraCuts parms{};	
	parms.bInDisableCameraCuts = bInDisableCameraCuts;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequencePlayer::ScrubToSeconds(float TimeInSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds");

	FScrubToSeconds parms{};	
	parms.TimeInSeconds = TimeInSeconds;

	ProcessEvent(fn, &parms);
}

bool UMovieSceneSequencePlayer::ScrubToMarkedFrame(struct FString InLabel){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame");

	FScrubToMarkedFrame parms{};	
	parms.InLabel = InLabel;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneSequencePlayer::ScrubToFrame(struct FFrameTime NewPosition){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame");

	FScrubToFrame parms{};	
	parms.NewPosition = NewPosition;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequencePlayer::Scrub(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Scrub");

	FScrub parms{};	

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequencePlayer::RPC_OnStopEvent(struct FFrameTime StoppedTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent");

	FRPC_OnStopEvent parms{};	
	parms.StoppedTime = StoppedTime;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequencePlayer::RPC_OnFinishPlaybackEvent(struct FFrameTime StoppedTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.RPC_OnFinishPlaybackEvent");

	FRPC_OnFinishPlaybackEvent parms{};	
	parms.StoppedTime = StoppedTime;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequencePlayer::RPC_ExplicitServerUpdateEvent(uint8_t Method, struct FFrameTime RelevantTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent");

	FRPC_ExplicitServerUpdateEvent parms{};	
	parms.Method = Method;
	parms.RelevantTime = RelevantTime;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequencePlayer::RestoreState(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.RestoreState");

	FRestoreState parms{};	

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequencePlayer::PlayToSeconds(float TimeInSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds");

	FPlayToSeconds parms{};	
	parms.TimeInSeconds = TimeInSeconds;

	ProcessEvent(fn, &parms);
}

bool UMovieSceneSequencePlayer::PlayToMarkedFrame(struct FString InLabel){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame");

	FPlayToMarkedFrame parms{};	
	parms.InLabel = InLabel;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneSequencePlayer::PlayToFrame(struct FFrameTime NewPosition){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayToFrame");

	FPlayToFrame parms{};	
	parms.NewPosition = NewPosition;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequencePlayer::PlayTo(struct FMovieSceneSequencePlaybackParams PlaybackParams, struct FMovieSceneSequencePlayToParams PlayToParams){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayTo");

	FPlayTo parms{};	
	parms.PlaybackParams = PlaybackParams;
	parms.PlayToParams = PlayToParams;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequencePlayer::PlayReverse(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayReverse");

	FPlayReverse parms{};	

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequencePlayer::PlayLooping(int32_t NumLoops){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayLooping");

	FPlayLooping parms{};	
	parms.NumLoops = NumLoops;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequencePlayer::Play(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Play");

	FPlay parms{};	

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequencePlayer::Pause(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Pause");

	FPause parms{};	

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequencePlayer::JumpToSeconds(float TimeInSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds");

	FJumpToSeconds parms{};	
	parms.TimeInSeconds = TimeInSeconds;

	ProcessEvent(fn, &parms);
}

bool UMovieSceneSequencePlayer::JumpToMarkedFrame(struct FString InLabel){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame");

	FJumpToMarkedFrame parms{};	
	parms.InLabel = InLabel;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneSequencePlayer::JumpToFrame(struct FFrameTime NewPosition){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToFrame");

	FJumpToFrame parms{};	
	parms.NewPosition = NewPosition;

	ProcessEvent(fn, &parms);
}

bool UMovieSceneSequencePlayer::IsReversed(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.IsReversed");

	FIsReversed parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMovieSceneSequencePlayer::IsPlaying(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.IsPlaying");

	FIsPlaying parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMovieSceneSequencePlayer::IsPaused(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.IsPaused");

	FIsPaused parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneSequencePlayer::GoToEndAndStop(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop");

	FGoToEndAndStop parms{};	

	ProcessEvent(fn, &parms);
}

struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetStartTime(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetStartTime");

	FGetStartTime parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UMovieSceneSequencePlayer::GetSequenceName(bool bAddClientInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetSequenceName");

	FGetSequenceName parms{};	
	parms.bAddClientInfo = bAddClientInfo;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMovieSceneSequence* UMovieSceneSequencePlayer::GetSequence(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetSequence");

	FGetSequence parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMovieSceneSequencePlayer::GetPlayRate(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlayRate");

	FGetPlayRate parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FMovieSceneObjectBindingID> UMovieSceneSequencePlayer::GetObjectBindings(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings");

	FGetObjectBindings parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FFrameRate UMovieSceneSequencePlayer::GetFrameRate(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetFrameRate");

	FGetFrameRate parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMovieSceneSequencePlayer::GetFrameDuration(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration");

	FGetFrameDuration parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetEndTime(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetEndTime");

	FGetEndTime parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetDuration(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetDuration");

	FGetDuration parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMovieSceneSequencePlayer::GetDisableCameraCuts(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts");

	FGetDisableCameraCuts parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetCurrentTime(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime");

	FGetCurrentTime parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UObject*> UMovieSceneSequencePlayer::GetBoundObjects(struct FMovieSceneObjectBindingID ObjectBinding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects");

	FGetBoundObjects parms{};	
	parms.ObjectBinding = ObjectBinding;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneSequencePlayer::ChangePlaybackDirection(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection");

	FChangePlaybackDirection parms{};	

	ProcessEvent(fn, &parms);
}

float UMovieSceneEasingFunction::OnEvaluate(float Interp){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneEasingFunction.OnEvaluate");

	FOnEvaluate parms{};	
	parms.Interp = Interp;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneCustomClockSource::OnTick(float DeltaSeconds, float InPlayRate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneCustomClockSource.OnTick");

	FOnTick parms{};	
	parms.DeltaSeconds = DeltaSeconds;
	parms.InPlayRate = InPlayRate;

	ProcessEvent(fn, &parms);
}

void UMovieSceneCustomClockSource::OnStopPlaying(struct FQualifiedFrameTime& InStopTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneCustomClockSource.OnStopPlaying");

	FOnStopPlaying parms{};	
	parms.InStopTime = InStopTime;

	ProcessEvent(fn, &parms);
}

void UMovieSceneCustomClockSource::OnStartPlaying(struct FQualifiedFrameTime& InStartTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneCustomClockSource.OnStartPlaying");

	FOnStartPlaying parms{};	
	parms.InStartTime = InStartTime;

	ProcessEvent(fn, &parms);
}

struct FFrameTime UMovieSceneCustomClockSource::OnRequestCurrentTime(struct FQualifiedFrameTime& InCurrentTime, float InPlayRate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime");

	FOnRequestCurrentTime parms{};	
	parms.InCurrentTime = InCurrentTime;
	parms.InPlayRate = InPlayRate;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

