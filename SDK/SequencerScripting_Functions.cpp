#include "pch.h"
#include "SDK.h"

void UMovieSceneScriptingStringChannel::SetDefault(struct FString InDefaultValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingStringChannel.SetDefault");

	FSetDefault parms{};	
	parms.InDefaultValue = InDefaultValue;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingStringChannel::RemoveKey(struct UMovieSceneScriptingKey* Key){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveKey");

	FRemoveKey parms{};	
	parms.Key = Key;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingStringChannel::RemoveDefault(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveDefault");

	FRemoveDefault parms{};	

	ProcessEvent(fn, &parms);
}

bool UMovieSceneScriptingStringChannel::HasDefault(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingStringChannel.HasDefault");

	FHasDefault parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UMovieSceneScriptingKey*> UMovieSceneScriptingStringChannel::GetKeys(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingStringChannel.GetKeys");

	FGetKeys parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UMovieSceneScriptingStringChannel::GetDefault(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingStringChannel.GetDefault");

	FGetDefault parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMovieSceneScriptingStringKey* UMovieSceneScriptingStringChannel::AddKey(struct FFrameNumber& InTime, struct FString NewValue, float SubFrame, uint8_t TimeUnit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingStringChannel.AddKey");

	FAddKey parms{};	
	parms.InTime = InTime;
	parms.NewValue = NewValue;
	parms.SubFrame = SubFrame;
	parms.TimeUnit = TimeUnit;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneScriptingDoubleChannel::SetPreInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetPreInfinityExtrapolation");

	FSetPreInfinityExtrapolation parms{};	
	parms.InExtrapolation = InExtrapolation;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingDoubleChannel::SetPostInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetPostInfinityExtrapolation");

	FSetPostInfinityExtrapolation parms{};	
	parms.InExtrapolation = InExtrapolation;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingDoubleChannel::SetDefault(double InDefaultValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetDefault");

	FSetDefault parms{};	
	parms.InDefaultValue = InDefaultValue;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingDoubleChannel::RemoveKey(struct UMovieSceneScriptingKey* Key){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveKey");

	FRemoveKey parms{};	
	parms.Key = Key;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingDoubleChannel::RemoveDefault(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveDefault");

	FRemoveDefault parms{};	

	ProcessEvent(fn, &parms);
}

bool UMovieSceneScriptingDoubleChannel::HasDefault(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleChannel.HasDefault");

	FHasDefault parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

enum class ERichCurveExtrapolation UMovieSceneScriptingDoubleChannel::GetPreInfinityExtrapolation(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetPreInfinityExtrapolation");

	FGetPreInfinityExtrapolation parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

enum class ERichCurveExtrapolation UMovieSceneScriptingDoubleChannel::GetPostInfinityExtrapolation(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetPostInfinityExtrapolation");

	FGetPostInfinityExtrapolation parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMovieSceneScriptingDoubleChannel::GetNumKeys(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetNumKeys");

	FGetNumKeys parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UMovieSceneScriptingKey*> UMovieSceneScriptingDoubleChannel::GetKeys(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetKeys");

	FGetKeys parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

double UMovieSceneScriptingDoubleChannel::GetDefault(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetDefault");

	FGetDefault parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<double> UMovieSceneScriptingDoubleChannel::EvaluateKeys(struct FSequencerScriptingRange Range, struct FFrameRate FrameRate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleChannel.EvaluateKeys");

	FEvaluateKeys parms{};	
	parms.Range = Range;
	parms.FrameRate = FrameRate;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FSequencerScriptingRange UMovieSceneScriptingDoubleChannel::ComputeEffectiveRange(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleChannel.ComputeEffectiveRange");

	FComputeEffectiveRange parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMovieSceneScriptingDoubleKey* UMovieSceneScriptingDoubleChannel::AddKey(struct FFrameNumber& InTime, double NewValue, float SubFrame, uint8_t TimeUnit, uint8_t InInterpolation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleChannel.AddKey");

	FAddKey parms{};	
	parms.InTime = InTime;
	parms.NewValue = NewValue;
	parms.SubFrame = SubFrame;
	parms.TimeUnit = TimeUnit;
	parms.InInterpolation = InInterpolation;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneScriptingActorReferenceKey::SetValue(struct FMovieSceneObjectBindingID& InNewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingActorReferenceKey.SetValue");

	FSetValue parms{};	
	parms.InNewValue = InNewValue;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingActorReferenceKey::SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, uint8_t TimeUnit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingActorReferenceKey.SetTime");

	FSetTime parms{};	
	parms.NewFrameNumber = NewFrameNumber;
	parms.SubFrame = SubFrame;
	parms.TimeUnit = TimeUnit;

	ProcessEvent(fn, &parms);
}

struct FMovieSceneObjectBindingID UMovieSceneScriptingActorReferenceKey::GetValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingActorReferenceKey.GetValue");

	FGetValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FFrameTime UMovieSceneScriptingActorReferenceKey::GetTime(uint8_t TimeUnit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingActorReferenceKey.GetTime");

	FGetTime parms{};	
	parms.TimeUnit = TimeUnit;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneScriptingByteKey::SetValue(char InNewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingByteKey.SetValue");

	FSetValue parms{};	
	parms.InNewValue = InNewValue;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingByteKey::SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, uint8_t TimeUnit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingByteKey.SetTime");

	FSetTime parms{};	
	parms.NewFrameNumber = NewFrameNumber;
	parms.SubFrame = SubFrame;
	parms.TimeUnit = TimeUnit;

	ProcessEvent(fn, &parms);
}

char UMovieSceneScriptingByteKey::GetValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingByteKey.GetValue");

	FGetValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FFrameTime UMovieSceneScriptingByteKey::GetTime(uint8_t TimeUnit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingByteKey.GetTime");

	FGetTime parms{};	
	parms.TimeUnit = TimeUnit;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneScriptingActorReferenceChannel::SetDefault(struct FMovieSceneObjectBindingID InDefaultValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.SetDefault");

	FSetDefault parms{};	
	parms.InDefaultValue = InDefaultValue;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingActorReferenceChannel::RemoveKey(struct UMovieSceneScriptingKey* Key){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveKey");

	FRemoveKey parms{};	
	parms.Key = Key;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingActorReferenceChannel::RemoveDefault(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveDefault");

	FRemoveDefault parms{};	

	ProcessEvent(fn, &parms);
}

bool UMovieSceneScriptingActorReferenceChannel::HasDefault(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.HasDefault");

	FHasDefault parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UMovieSceneScriptingKey*> UMovieSceneScriptingActorReferenceChannel::GetKeys(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetKeys");

	FGetKeys parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FMovieSceneObjectBindingID UMovieSceneScriptingActorReferenceChannel::GetDefault(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetDefault");

	FGetDefault parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMovieSceneScriptingActorReferenceKey* UMovieSceneScriptingActorReferenceChannel::AddKey(struct FFrameNumber InTime, struct FMovieSceneObjectBindingID NewValue, float SubFrame, uint8_t TimeUnit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.AddKey");

	FAddKey parms{};	
	parms.InTime = InTime;
	parms.NewValue = NewValue;
	parms.SubFrame = SubFrame;
	parms.TimeUnit = TimeUnit;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneScriptingByteChannel::SetDefault(char InDefaultValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingByteChannel.SetDefault");

	FSetDefault parms{};	
	parms.InDefaultValue = InDefaultValue;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingByteChannel::RemoveKey(struct UMovieSceneScriptingKey* Key){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingByteChannel.RemoveKey");

	FRemoveKey parms{};	
	parms.Key = Key;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingByteChannel::RemoveDefault(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingByteChannel.RemoveDefault");

	FRemoveDefault parms{};	

	ProcessEvent(fn, &parms);
}

bool UMovieSceneScriptingByteChannel::HasDefault(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingByteChannel.HasDefault");

	FHasDefault parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UMovieSceneScriptingKey*> UMovieSceneScriptingByteChannel::GetKeys(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingByteChannel.GetKeys");

	FGetKeys parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

char UMovieSceneScriptingByteChannel::GetDefault(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingByteChannel.GetDefault");

	FGetDefault parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMovieSceneScriptingByteKey* UMovieSceneScriptingByteChannel::AddKey(struct FFrameNumber& InTime, char NewValue, float SubFrame, uint8_t TimeUnit, uint8_t InInterpolation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingByteChannel.AddKey");

	FAddKey parms{};	
	parms.InTime = InTime;
	parms.NewValue = NewValue;
	parms.SubFrame = SubFrame;
	parms.TimeUnit = TimeUnit;
	parms.InInterpolation = InInterpolation;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneScriptingBoolKey::SetValue(bool InNewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingBoolKey.SetValue");

	FSetValue parms{};	
	parms.InNewValue = InNewValue;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingBoolKey::SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, uint8_t TimeUnit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingBoolKey.SetTime");

	FSetTime parms{};	
	parms.NewFrameNumber = NewFrameNumber;
	parms.SubFrame = SubFrame;
	parms.TimeUnit = TimeUnit;

	ProcessEvent(fn, &parms);
}

bool UMovieSceneScriptingBoolKey::GetValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingBoolKey.GetValue");

	FGetValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FFrameTime UMovieSceneScriptingBoolKey::GetTime(uint8_t TimeUnit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingBoolKey.GetTime");

	FGetTime parms{};	
	parms.TimeUnit = TimeUnit;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneScriptingObjectPathKey::SetValue(struct UObject* InNewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingObjectPathKey.SetValue");

	FSetValue parms{};	
	parms.InNewValue = InNewValue;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingObjectPathKey::SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, uint8_t TimeUnit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingObjectPathKey.SetTime");

	FSetTime parms{};	
	parms.NewFrameNumber = NewFrameNumber;
	parms.SubFrame = SubFrame;
	parms.TimeUnit = TimeUnit;

	ProcessEvent(fn, &parms);
}

struct UObject* UMovieSceneScriptingObjectPathKey::GetValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingObjectPathKey.GetValue");

	FGetValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FFrameTime UMovieSceneScriptingObjectPathKey::GetTime(uint8_t TimeUnit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingObjectPathKey.GetTime");

	FGetTime parms{};	
	parms.TimeUnit = TimeUnit;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneScriptingBoolChannel::SetDefault(bool InDefaultValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingBoolChannel.SetDefault");

	FSetDefault parms{};	
	parms.InDefaultValue = InDefaultValue;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingBoolChannel::RemoveKey(struct UMovieSceneScriptingKey* Key){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingBoolChannel.RemoveKey");

	FRemoveKey parms{};	
	parms.Key = Key;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingBoolChannel::RemoveDefault(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingBoolChannel.RemoveDefault");

	FRemoveDefault parms{};	

	ProcessEvent(fn, &parms);
}

bool UMovieSceneScriptingBoolChannel::HasDefault(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingBoolChannel.HasDefault");

	FHasDefault parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMovieSceneScriptingBoolChannel::GetNumKeys(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingBoolChannel.GetNumKeys");

	FGetNumKeys parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UMovieSceneScriptingKey*> UMovieSceneScriptingBoolChannel::GetKeys(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingBoolChannel.GetKeys");

	FGetKeys parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMovieSceneScriptingBoolChannel::GetDefault(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingBoolChannel.GetDefault");

	FGetDefault parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<bool> UMovieSceneScriptingBoolChannel::EvaluateKeys(struct FSequencerScriptingRange Range, struct FFrameRate FrameRate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingBoolChannel.EvaluateKeys");

	FEvaluateKeys parms{};	
	parms.Range = Range;
	parms.FrameRate = FrameRate;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FSequencerScriptingRange UMovieSceneScriptingBoolChannel::ComputeEffectiveRange(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingBoolChannel.ComputeEffectiveRange");

	FComputeEffectiveRange parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMovieSceneScriptingBoolKey* UMovieSceneScriptingBoolChannel::AddKey(struct FFrameNumber& InTime, bool NewValue, float SubFrame, uint8_t TimeUnit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingBoolChannel.AddKey");

	FAddKey parms{};	
	parms.InTime = InTime;
	parms.NewValue = NewValue;
	parms.SubFrame = SubFrame;
	parms.TimeUnit = TimeUnit;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneScriptingStringKey::SetValue(struct FString InNewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingStringKey.SetValue");

	FSetValue parms{};	
	parms.InNewValue = InNewValue;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingStringKey::SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, uint8_t TimeUnit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingStringKey.SetTime");

	FSetTime parms{};	
	parms.NewFrameNumber = NewFrameNumber;
	parms.SubFrame = SubFrame;
	parms.TimeUnit = TimeUnit;

	ProcessEvent(fn, &parms);
}

struct FString UMovieSceneScriptingStringKey::GetValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingStringKey.GetValue");

	FGetValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FFrameTime UMovieSceneScriptingStringKey::GetTime(uint8_t TimeUnit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingStringKey.GetTime");

	FGetTime parms{};	
	parms.TimeUnit = TimeUnit;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneScriptingDoubleKey::SetValue(double InNewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.SetValue");

	FSetValue parms{};	
	parms.InNewValue = InNewValue;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingDoubleKey::SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, uint8_t TimeUnit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTime");

	FSetTime parms{};	
	parms.NewFrameNumber = NewFrameNumber;
	parms.SubFrame = SubFrame;
	parms.TimeUnit = TimeUnit;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingDoubleKey::SetTangentWeightMode(enum class ERichCurveTangentWeightMode InNewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentWeightMode");

	FSetTangentWeightMode parms{};	
	parms.InNewValue = InNewValue;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingDoubleKey::SetTangentMode(enum class ERichCurveTangentMode InNewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentMode");

	FSetTangentMode parms{};	
	parms.InNewValue = InNewValue;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingDoubleKey::SetLeaveTangentWeight(float InNewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangentWeight");

	FSetLeaveTangentWeight parms{};	
	parms.InNewValue = InNewValue;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingDoubleKey::SetLeaveTangent(float InNewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangent");

	FSetLeaveTangent parms{};	
	parms.InNewValue = InNewValue;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingDoubleKey::SetInterpolationMode(enum class ERichCurveInterpMode InNewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.SetInterpolationMode");

	FSetInterpolationMode parms{};	
	parms.InNewValue = InNewValue;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingDoubleKey::SetArriveTangentWeight(float InNewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangentWeight");

	FSetArriveTangentWeight parms{};	
	parms.InNewValue = InNewValue;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingDoubleKey::SetArriveTangent(float InNewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangent");

	FSetArriveTangent parms{};	
	parms.InNewValue = InNewValue;

	ProcessEvent(fn, &parms);
}

double UMovieSceneScriptingDoubleKey::GetValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.GetValue");

	FGetValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FFrameTime UMovieSceneScriptingDoubleKey::GetTime(uint8_t TimeUnit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTime");

	FGetTime parms{};	
	parms.TimeUnit = TimeUnit;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

enum class ERichCurveTangentWeightMode UMovieSceneScriptingDoubleKey::GetTangentWeightMode(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentWeightMode");

	FGetTangentWeightMode parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

enum class ERichCurveTangentMode UMovieSceneScriptingDoubleKey::GetTangentMode(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentMode");

	FGetTangentMode parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMovieSceneScriptingDoubleKey::GetLeaveTangentWeight(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangentWeight");

	FGetLeaveTangentWeight parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMovieSceneScriptingDoubleKey::GetLeaveTangent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangent");

	FGetLeaveTangent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

enum class ERichCurveInterpMode UMovieSceneScriptingDoubleKey::GetInterpolationMode(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.GetInterpolationMode");

	FGetInterpolationMode parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMovieSceneScriptingDoubleKey::GetArriveTangentWeight(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangentWeight");

	FGetArriveTangentWeight parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMovieSceneScriptingDoubleKey::GetArriveTangent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangent");

	FGetArriveTangent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneScriptingEventKey::SetValue(struct FMovieSceneEvent& InNewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingEventKey.SetValue");

	FSetValue parms{};	
	parms.InNewValue = InNewValue;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingEventKey::SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, uint8_t TimeUnit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingEventKey.SetTime");

	FSetTime parms{};	
	parms.NewFrameNumber = NewFrameNumber;
	parms.SubFrame = SubFrame;
	parms.TimeUnit = TimeUnit;

	ProcessEvent(fn, &parms);
}

struct FMovieSceneEvent UMovieSceneScriptingEventKey::GetValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingEventKey.GetValue");

	FGetValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FFrameTime UMovieSceneScriptingEventKey::GetTime(uint8_t TimeUnit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingEventKey.GetTime");

	FGetTime parms{};	
	parms.TimeUnit = TimeUnit;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneScriptingEventChannel::RemoveKey(struct UMovieSceneScriptingKey* Key){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingEventChannel.RemoveKey");

	FRemoveKey parms{};	
	parms.Key = Key;

	ProcessEvent(fn, &parms);
}

struct TArray<struct UMovieSceneScriptingKey*> UMovieSceneScriptingEventChannel::GetKeys(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingEventChannel.GetKeys");

	FGetKeys parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMovieSceneScriptingEventKey* UMovieSceneScriptingEventChannel::AddKey(struct FFrameNumber& InTime, struct FMovieSceneEvent NewValue, float SubFrame, uint8_t TimeUnit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingEventChannel.AddKey");

	FAddKey parms{};	
	parms.InTime = InTime;
	parms.NewValue = NewValue;
	parms.SubFrame = SubFrame;
	parms.TimeUnit = TimeUnit;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMovieSceneFolderExtensions::SetFolderName(struct UMovieSceneFolder* Folder, struct FName InFolderName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.SetFolderName");

	FSetFolderName parms{};	
	parms.Folder = Folder;
	parms.InFolderName = InFolderName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMovieSceneFolderExtensions::SetFolderColor(struct UMovieSceneFolder* Folder, struct FColor InFolderColor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.SetFolderColor");

	FSetFolderColor parms{};	
	parms.Folder = Folder;
	parms.InFolderColor = InFolderColor;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMovieSceneFolderExtensions::RemoveChildObjectBinding(struct UMovieSceneFolder* Folder, struct FMovieSceneBindingProxy InObjectBinding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildObjectBinding");

	FRemoveChildObjectBinding parms{};	
	parms.Folder = Folder;
	parms.InObjectBinding = InObjectBinding;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMovieSceneFolderExtensions::RemoveChildMasterTrack(struct UMovieSceneFolder* Folder, struct UMovieSceneTrack* InMasterTrack){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildMasterTrack");

	FRemoveChildMasterTrack parms{};	
	parms.Folder = Folder;
	parms.InMasterTrack = InMasterTrack;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMovieSceneFolderExtensions::RemoveChildFolder(struct UMovieSceneFolder* TargetFolder, struct UMovieSceneFolder* FolderToRemove){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildFolder");

	FRemoveChildFolder parms{};	
	parms.TargetFolder = TargetFolder;
	parms.FolderToRemove = FolderToRemove;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FName UMovieSceneFolderExtensions::GetFolderName(struct UMovieSceneFolder* Folder){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.GetFolderName");

	FGetFolderName parms{};	
	parms.Folder = Folder;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FColor UMovieSceneFolderExtensions::GetFolderColor(struct UMovieSceneFolder* Folder){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.GetFolderColor");

	FGetFolderColor parms{};	
	parms.Folder = Folder;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FMovieSceneBindingProxy> UMovieSceneFolderExtensions::GetChildObjectBindings(struct UMovieSceneFolder* Folder){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.GetChildObjectBindings");

	FGetChildObjectBindings parms{};	
	parms.Folder = Folder;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UMovieSceneTrack*> UMovieSceneFolderExtensions::GetChildMasterTracks(struct UMovieSceneFolder* Folder){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.GetChildMasterTracks");

	FGetChildMasterTracks parms{};	
	parms.Folder = Folder;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UMovieSceneFolder*> UMovieSceneFolderExtensions::GetChildFolders(struct UMovieSceneFolder* Folder){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.GetChildFolders");

	FGetChildFolders parms{};	
	parms.Folder = Folder;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMovieSceneFolderExtensions::AddChildObjectBinding(struct UMovieSceneFolder* Folder, struct FMovieSceneBindingProxy InObjectBinding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.AddChildObjectBinding");

	FAddChildObjectBinding parms{};	
	parms.Folder = Folder;
	parms.InObjectBinding = InObjectBinding;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMovieSceneFolderExtensions::AddChildMasterTrack(struct UMovieSceneFolder* Folder, struct UMovieSceneTrack* InMasterTrack){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.AddChildMasterTrack");

	FAddChildMasterTrack parms{};	
	parms.Folder = Folder;
	parms.InMasterTrack = InMasterTrack;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMovieSceneFolderExtensions::AddChildFolder(struct UMovieSceneFolder* TargetFolder, struct UMovieSceneFolder* FolderToAdd){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFolderExtensions.AddChildFolder");

	FAddChildFolder parms{};	
	parms.TargetFolder = TargetFolder;
	parms.FolderToAdd = FolderToAdd;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneScriptingFloatKey::SetValue(float InNewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.SetValue");

	FSetValue parms{};	
	parms.InNewValue = InNewValue;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingFloatKey::SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, uint8_t TimeUnit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.SetTime");

	FSetTime parms{};	
	parms.NewFrameNumber = NewFrameNumber;
	parms.SubFrame = SubFrame;
	parms.TimeUnit = TimeUnit;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingFloatKey::SetTangentWeightMode(enum class ERichCurveTangentWeightMode InNewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentWeightMode");

	FSetTangentWeightMode parms{};	
	parms.InNewValue = InNewValue;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingFloatKey::SetTangentMode(enum class ERichCurveTangentMode InNewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentMode");

	FSetTangentMode parms{};	
	parms.InNewValue = InNewValue;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingFloatKey::SetLeaveTangentWeight(float InNewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangentWeight");

	FSetLeaveTangentWeight parms{};	
	parms.InNewValue = InNewValue;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingFloatKey::SetLeaveTangent(float InNewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangent");

	FSetLeaveTangent parms{};	
	parms.InNewValue = InNewValue;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingFloatKey::SetInterpolationMode(enum class ERichCurveInterpMode InNewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.SetInterpolationMode");

	FSetInterpolationMode parms{};	
	parms.InNewValue = InNewValue;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingFloatKey::SetArriveTangentWeight(float InNewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangentWeight");

	FSetArriveTangentWeight parms{};	
	parms.InNewValue = InNewValue;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingFloatKey::SetArriveTangent(float InNewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangent");

	FSetArriveTangent parms{};	
	parms.InNewValue = InNewValue;

	ProcessEvent(fn, &parms);
}

float UMovieSceneScriptingFloatKey::GetValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.GetValue");

	FGetValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FFrameTime UMovieSceneScriptingFloatKey::GetTime(uint8_t TimeUnit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.GetTime");

	FGetTime parms{};	
	parms.TimeUnit = TimeUnit;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

enum class ERichCurveTangentWeightMode UMovieSceneScriptingFloatKey::GetTangentWeightMode(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentWeightMode");

	FGetTangentWeightMode parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

enum class ERichCurveTangentMode UMovieSceneScriptingFloatKey::GetTangentMode(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentMode");

	FGetTangentMode parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMovieSceneScriptingFloatKey::GetLeaveTangentWeight(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangentWeight");

	FGetLeaveTangentWeight parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMovieSceneScriptingFloatKey::GetLeaveTangent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangent");

	FGetLeaveTangent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

enum class ERichCurveInterpMode UMovieSceneScriptingFloatKey::GetInterpolationMode(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.GetInterpolationMode");

	FGetInterpolationMode parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMovieSceneScriptingFloatKey::GetArriveTangentWeight(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangentWeight");

	FGetArriveTangentWeight parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMovieSceneScriptingFloatKey::GetArriveTangent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangent");

	FGetArriveTangent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneScriptingObjectPathChannel::SetDefault(struct UObject* InDefaultValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingObjectPathChannel.SetDefault");

	FSetDefault parms{};	
	parms.InDefaultValue = InDefaultValue;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingObjectPathChannel::RemoveKey(struct UMovieSceneScriptingKey* Key){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveKey");

	FRemoveKey parms{};	
	parms.Key = Key;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingObjectPathChannel::RemoveDefault(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveDefault");

	FRemoveDefault parms{};	

	ProcessEvent(fn, &parms);
}

bool UMovieSceneScriptingObjectPathChannel::HasDefault(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingObjectPathChannel.HasDefault");

	FHasDefault parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UMovieSceneScriptingKey*> UMovieSceneScriptingObjectPathChannel::GetKeys(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetKeys");

	FGetKeys parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UObject* UMovieSceneScriptingObjectPathChannel::GetDefault(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetDefault");

	FGetDefault parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMovieSceneScriptingObjectPathKey* UMovieSceneScriptingObjectPathChannel::AddKey(struct FFrameNumber InTime, struct UObject* NewValue, float SubFrame, uint8_t TimeUnit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingObjectPathChannel.AddKey");

	FAddKey parms{};	
	parms.InTime = InTime;
	parms.NewValue = NewValue;
	parms.SubFrame = SubFrame;
	parms.TimeUnit = TimeUnit;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneSequenceExtensions::SortMarkedFrames(struct UMovieSceneSequence* Sequence){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SortMarkedFrames");

	FSortMarkedFrames parms{};	
	parms.Sequence = Sequence;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequenceExtensions::SetWorkRangeStart(struct UMovieSceneSequence* InSequence, float StartTimeInSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeStart");

	FSetWorkRangeStart parms{};	
	parms.InSequence = InSequence;
	parms.StartTimeInSeconds = StartTimeInSeconds;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequenceExtensions::SetWorkRangeEnd(struct UMovieSceneSequence* InSequence, float EndTimeInSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeEnd");

	FSetWorkRangeEnd parms{};	
	parms.InSequence = InSequence;
	parms.EndTimeInSeconds = EndTimeInSeconds;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequenceExtensions::SetViewRangeStart(struct UMovieSceneSequence* InSequence, float StartTimeInSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeStart");

	FSetViewRangeStart parms{};	
	parms.InSequence = InSequence;
	parms.StartTimeInSeconds = StartTimeInSeconds;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequenceExtensions::SetViewRangeEnd(struct UMovieSceneSequence* InSequence, float EndTimeInSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeEnd");

	FSetViewRangeEnd parms{};	
	parms.InSequence = InSequence;
	parms.EndTimeInSeconds = EndTimeInSeconds;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequenceExtensions::SetTickResolutionDirectly(struct UMovieSceneSequence* Sequence, struct FFrameRate TickResolution){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolutionDirectly");

	FSetTickResolutionDirectly parms{};	
	parms.Sequence = Sequence;
	parms.TickResolution = TickResolution;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequenceExtensions::SetTickResolution(struct UMovieSceneSequence* Sequence, struct FFrameRate TickResolution){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolution");

	FSetTickResolution parms{};	
	parms.Sequence = Sequence;
	parms.TickResolution = TickResolution;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequenceExtensions::SetReadOnly(struct UMovieSceneSequence* Sequence, bool bInReadOnly){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetReadOnly");

	FSetReadOnly parms{};	
	parms.Sequence = Sequence;
	parms.bInReadOnly = bInReadOnly;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequenceExtensions::SetPlaybackStartSeconds(struct UMovieSceneSequence* Sequence, float StartTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStartSeconds");

	FSetPlaybackStartSeconds parms{};	
	parms.Sequence = Sequence;
	parms.StartTime = StartTime;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequenceExtensions::SetPlaybackStart(struct UMovieSceneSequence* Sequence, int32_t StartFrame){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStart");

	FSetPlaybackStart parms{};	
	parms.Sequence = Sequence;
	parms.StartFrame = StartFrame;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequenceExtensions::SetPlaybackEndSeconds(struct UMovieSceneSequence* Sequence, float EndTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEndSeconds");

	FSetPlaybackEndSeconds parms{};	
	parms.Sequence = Sequence;
	parms.EndTime = EndTime;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequenceExtensions::SetPlaybackEnd(struct UMovieSceneSequence* Sequence, int32_t EndFrame){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEnd");

	FSetPlaybackEnd parms{};	
	parms.Sequence = Sequence;
	parms.EndFrame = EndFrame;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequenceExtensions::SetMarkedFrame(struct UMovieSceneSequence* Sequence, int32_t InMarkIndex, struct FFrameNumber InFrameNumber){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFrame");

	FSetMarkedFrame parms{};	
	parms.Sequence = Sequence;
	parms.InMarkIndex = InMarkIndex;
	parms.InFrameNumber = InFrameNumber;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequenceExtensions::SetEvaluationType(struct UMovieSceneSequence* InSequence, uint8_t InEvaluationType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetEvaluationType");

	FSetEvaluationType parms{};	
	parms.InSequence = InSequence;
	parms.InEvaluationType = InEvaluationType;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequenceExtensions::SetDisplayRate(struct UMovieSceneSequence* Sequence, struct FFrameRate DisplayRate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetDisplayRate");

	FSetDisplayRate parms{};	
	parms.Sequence = Sequence;
	parms.DisplayRate = DisplayRate;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequenceExtensions::SetClockSource(struct UMovieSceneSequence* InSequence, uint8_t InClockSource){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.SetClockSource");

	FSetClockSource parms{};	
	parms.InSequence = InSequence;
	parms.InClockSource = InClockSource;

	ProcessEvent(fn, &parms);
}

struct FMovieSceneBindingProxy UMovieSceneSequenceExtensions::ResolveBindingID(struct UMovieSceneSequence* MasterSequence, struct FMovieSceneObjectBindingID InObjectBindingID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.ResolveBindingID");

	FResolveBindingID parms{};	
	parms.MasterSequence = MasterSequence;
	parms.InObjectBindingID = InObjectBindingID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneSequenceExtensions::RemoveRootFolderFromSequence(struct UMovieSceneSequence* Sequence, struct UMovieSceneFolder* Folder){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.RemoveRootFolderFromSequence");

	FRemoveRootFolderFromSequence parms{};	
	parms.Sequence = Sequence;
	parms.Folder = Folder;

	ProcessEvent(fn, &parms);
}

bool UMovieSceneSequenceExtensions::RemoveMasterTrack(struct UMovieSceneSequence* Sequence, struct UMovieSceneTrack* MasterTrack){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.RemoveMasterTrack");

	FRemoveMasterTrack parms{};	
	parms.Sequence = Sequence;
	parms.MasterTrack = MasterTrack;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FSequencerScriptingRange UMovieSceneSequenceExtensions::MakeRangeSeconds(struct UMovieSceneSequence* Sequence, float StartTime, float Duration){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.MakeRangeSeconds");

	FMakeRangeSeconds parms{};	
	parms.Sequence = Sequence;
	parms.StartTime = StartTime;
	parms.Duration = Duration;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FSequencerScriptingRange UMovieSceneSequenceExtensions::MakeRange(struct UMovieSceneSequence* Sequence, int32_t StartFrame, int32_t Duration){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.MakeRange");

	FMakeRange parms{};	
	parms.Sequence = Sequence;
	parms.StartFrame = StartFrame;
	parms.Duration = Duration;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FMovieSceneObjectBindingID UMovieSceneSequenceExtensions::MakeBindingID(struct UMovieSceneSequence* MasterSequence, struct FMovieSceneBindingProxy& InBinding, uint8_t Space){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.MakeBindingID");

	FMakeBindingID parms{};	
	parms.MasterSequence = MasterSequence;
	parms.InBinding = InBinding;
	parms.Space = Space;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UObject*> UMovieSceneSequenceExtensions::LocateBoundObjects(struct UMovieSceneSequence* Sequence, struct FMovieSceneBindingProxy& InBinding, struct UObject* Context){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.LocateBoundObjects");

	FLocateBoundObjects parms{};	
	parms.Sequence = Sequence;
	parms.InBinding = InBinding;
	parms.Context = Context;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMovieSceneSequenceExtensions::IsReadOnly(struct UMovieSceneSequence* Sequence){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.IsReadOnly");

	FIsReadOnly parms{};	
	parms.Sequence = Sequence;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMovieSceneSequenceExtensions::GetWorkRangeStart(struct UMovieSceneSequence* InSequence){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeStart");

	FGetWorkRangeStart parms{};	
	parms.InSequence = InSequence;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMovieSceneSequenceExtensions::GetWorkRangeEnd(struct UMovieSceneSequence* InSequence){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeEnd");

	FGetWorkRangeEnd parms{};	
	parms.InSequence = InSequence;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMovieSceneSequenceExtensions::GetViewRangeStart(struct UMovieSceneSequence* InSequence){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeStart");

	FGetViewRangeStart parms{};	
	parms.InSequence = InSequence;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMovieSceneSequenceExtensions::GetViewRangeEnd(struct UMovieSceneSequence* InSequence){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeEnd");

	FGetViewRangeEnd parms{};	
	parms.InSequence = InSequence;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTimecode UMovieSceneSequenceExtensions::GetTimecodeSource(struct UMovieSceneSequence* Sequence){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetTimecodeSource");

	FGetTimecodeSource parms{};	
	parms.Sequence = Sequence;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FFrameRate UMovieSceneSequenceExtensions::GetTickResolution(struct UMovieSceneSequence* Sequence){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetTickResolution");

	FGetTickResolution parms{};	
	parms.Sequence = Sequence;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FMovieSceneBindingProxy> UMovieSceneSequenceExtensions::GetSpawnables(struct UMovieSceneSequence* Sequence){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetSpawnables");

	FGetSpawnables parms{};	
	parms.Sequence = Sequence;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UMovieSceneFolder*> UMovieSceneSequenceExtensions::GetRootFoldersInSequence(struct UMovieSceneSequence* Sequence){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetRootFoldersInSequence");

	FGetRootFoldersInSequence parms{};	
	parms.Sequence = Sequence;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FMovieSceneBindingProxy> UMovieSceneSequenceExtensions::GetPossessables(struct UMovieSceneSequence* Sequence){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetPossessables");

	FGetPossessables parms{};	
	parms.Sequence = Sequence;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FMovieSceneObjectBindingID UMovieSceneSequenceExtensions::GetPortableBindingID(struct UMovieSceneSequence* MasterSequence, struct UMovieSceneSequence* DestinationSequence, struct FMovieSceneBindingProxy& InBinding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetPortableBindingID");

	FGetPortableBindingID parms{};	
	parms.MasterSequence = MasterSequence;
	parms.DestinationSequence = DestinationSequence;
	parms.InBinding = InBinding;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMovieSceneSequenceExtensions::GetPlaybackStartSeconds(struct UMovieSceneSequence* Sequence){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStartSeconds");

	FGetPlaybackStartSeconds parms{};	
	parms.Sequence = Sequence;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMovieSceneSequenceExtensions::GetPlaybackStart(struct UMovieSceneSequence* Sequence){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStart");

	FGetPlaybackStart parms{};	
	parms.Sequence = Sequence;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FSequencerScriptingRange UMovieSceneSequenceExtensions::GetPlaybackRange(struct UMovieSceneSequence* Sequence){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackRange");

	FGetPlaybackRange parms{};	
	parms.Sequence = Sequence;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMovieSceneSequenceExtensions::GetPlaybackEndSeconds(struct UMovieSceneSequence* Sequence){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEndSeconds");

	FGetPlaybackEndSeconds parms{};	
	parms.Sequence = Sequence;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMovieSceneSequenceExtensions::GetPlaybackEnd(struct UMovieSceneSequence* Sequence){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEnd");

	FGetPlaybackEnd parms{};	
	parms.Sequence = Sequence;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMovieScene* UMovieSceneSequenceExtensions::GetMovieScene(struct UMovieSceneSequence* Sequence){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetMovieScene");

	FGetMovieScene parms{};	
	parms.Sequence = Sequence;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UMovieSceneTrack*> UMovieSceneSequenceExtensions::GetMasterTracks(struct UMovieSceneSequence* Sequence){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetMasterTracks");

	FGetMasterTracks parms{};	
	parms.Sequence = Sequence;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FMovieSceneMarkedFrame> UMovieSceneSequenceExtensions::GetMarkedFrames(struct UMovieSceneSequence* Sequence){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetMarkedFrames");

	FGetMarkedFrames parms{};	
	parms.Sequence = Sequence;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UMovieSceneSequenceExtensions::GetEvaluationType(struct UMovieSceneSequence* InSequence){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetEvaluationType");

	FGetEvaluationType parms{};	
	parms.InSequence = InSequence;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FFrameRate UMovieSceneSequenceExtensions::GetDisplayRate(struct UMovieSceneSequence* Sequence){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetDisplayRate");

	FGetDisplayRate parms{};	
	parms.Sequence = Sequence;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UMovieSceneSequenceExtensions::GetClockSource(struct UMovieSceneSequence* InSequence){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetClockSource");

	FGetClockSource parms{};	
	parms.InSequence = InSequence;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FMovieSceneBindingProxy> UMovieSceneSequenceExtensions::GetBindings(struct UMovieSceneSequence* Sequence){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetBindings");

	FGetBindings parms{};	
	parms.Sequence = Sequence;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FMovieSceneObjectBindingID UMovieSceneSequenceExtensions::GetBindingID(struct FMovieSceneBindingProxy& InBinding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.GetBindingID");

	FGetBindingID parms{};	
	parms.InBinding = InBinding;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMovieSceneSequenceExtensions::FindNextMarkedFrame(struct UMovieSceneSequence* Sequence, struct FFrameNumber InFrameNumber, bool bForward){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.FindNextMarkedFrame");

	FFindNextMarkedFrame parms{};	
	parms.Sequence = Sequence;
	parms.InFrameNumber = InFrameNumber;
	parms.bForward = bForward;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UMovieSceneTrack*> UMovieSceneSequenceExtensions::FindMasterTracksByType(struct UMovieSceneSequence* Sequence, UMovieSceneTrack* TrackType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByType");

	FFindMasterTracksByType parms{};	
	parms.Sequence = Sequence;
	parms.TrackType = TrackType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UMovieSceneTrack*> UMovieSceneSequenceExtensions::FindMasterTracksByExactType(struct UMovieSceneSequence* Sequence, UMovieSceneTrack* TrackType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByExactType");

	FFindMasterTracksByExactType parms{};	
	parms.Sequence = Sequence;
	parms.TrackType = TrackType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMovieSceneSequenceExtensions::FindMarkedFrameByLabel(struct UMovieSceneSequence* Sequence, struct FString InLabel){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByLabel");

	FFindMarkedFrameByLabel parms{};	
	parms.Sequence = Sequence;
	parms.InLabel = InLabel;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMovieSceneSequenceExtensions::FindMarkedFrameByFrameNumber(struct UMovieSceneSequence* Sequence, struct FFrameNumber InFrameNumber){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByFrameNumber");

	FFindMarkedFrameByFrameNumber parms{};	
	parms.Sequence = Sequence;
	parms.InFrameNumber = InFrameNumber;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FMovieSceneBindingProxy UMovieSceneSequenceExtensions::FindBindingByName(struct UMovieSceneSequence* Sequence, struct FString Name){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingByName");

	FFindBindingByName parms{};	
	parms.Sequence = Sequence;
	parms.Name = Name;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FMovieSceneBindingProxy UMovieSceneSequenceExtensions::FindBindingById(struct UMovieSceneSequence* Sequence, struct FGuid BindingID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingById");

	FFindBindingById parms{};	
	parms.Sequence = Sequence;
	parms.BindingID = BindingID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneSequenceExtensions::DeleteMarkedFrames(struct UMovieSceneSequence* Sequence){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrames");

	FDeleteMarkedFrames parms{};	
	parms.Sequence = Sequence;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSequenceExtensions::DeleteMarkedFrame(struct UMovieSceneSequence* Sequence, int32_t DeleteIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrame");

	FDeleteMarkedFrame parms{};	
	parms.Sequence = Sequence;
	parms.DeleteIndex = DeleteIndex;

	ProcessEvent(fn, &parms);
}

struct FMovieSceneBindingProxy UMovieSceneSequenceExtensions::AddSpawnableFromInstance(struct UMovieSceneSequence* Sequence, struct UObject* ObjectToSpawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromInstance");

	FAddSpawnableFromInstance parms{};	
	parms.Sequence = Sequence;
	parms.ObjectToSpawn = ObjectToSpawn;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FMovieSceneBindingProxy UMovieSceneSequenceExtensions::AddSpawnableFromClass(struct UMovieSceneSequence* Sequence, UObject* ClassToSpawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromClass");

	FAddSpawnableFromClass parms{};	
	parms.Sequence = Sequence;
	parms.ClassToSpawn = ClassToSpawn;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMovieSceneFolder* UMovieSceneSequenceExtensions::AddRootFolderToSequence(struct UMovieSceneSequence* Sequence, struct FString NewFolderName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.AddRootFolderToSequence");

	FAddRootFolderToSequence parms{};	
	parms.Sequence = Sequence;
	parms.NewFolderName = NewFolderName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FMovieSceneBindingProxy UMovieSceneSequenceExtensions::AddPossessable(struct UMovieSceneSequence* Sequence, struct UObject* ObjectToPossess){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.AddPossessable");

	FAddPossessable parms{};	
	parms.Sequence = Sequence;
	parms.ObjectToPossess = ObjectToPossess;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMovieSceneTrack* UMovieSceneSequenceExtensions::AddMasterTrack(struct UMovieSceneSequence* Sequence, UMovieSceneTrack* TrackType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.AddMasterTrack");

	FAddMasterTrack parms{};	
	parms.Sequence = Sequence;
	parms.TrackType = TrackType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMovieSceneSequenceExtensions::AddMarkedFrame(struct UMovieSceneSequence* Sequence, struct FMovieSceneMarkedFrame& InMarkedFrame){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSequenceExtensions.AddMarkedFrame");

	FAddMarkedFrame parms{};	
	parms.Sequence = Sequence;
	parms.InMarkedFrame = InMarkedFrame;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieScenePropertyTrackExtensions::SetPropertyNameAndPath(struct UMovieScenePropertyTrack* Track, struct FName& InPropertyName, struct FString InPropertyPath){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieScenePropertyTrackExtensions.SetPropertyNameAndPath");

	FSetPropertyNameAndPath parms{};	
	parms.Track = Track;
	parms.InPropertyName = InPropertyName;
	parms.InPropertyPath = InPropertyPath;

	ProcessEvent(fn, &parms);
}

void UMovieScenePropertyTrackExtensions::SetObjectPropertyClass(struct UMovieSceneObjectPropertyTrack* Track, UObject* PropertyClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieScenePropertyTrackExtensions.SetObjectPropertyClass");

	FSetObjectPropertyClass parms{};	
	parms.Track = Track;
	parms.PropertyClass = PropertyClass;

	ProcessEvent(fn, &parms);
}

void UMovieScenePropertyTrackExtensions::SetByteTrackEnum(struct UMovieSceneByteTrack* Track, struct UEnum* InEnum){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieScenePropertyTrackExtensions.SetByteTrackEnum");

	FSetByteTrackEnum parms{};	
	parms.Track = Track;
	parms.InEnum = InEnum;

	ProcessEvent(fn, &parms);
}

struct FName UMovieScenePropertyTrackExtensions::GetUniqueTrackName(struct UMovieScenePropertyTrack* Track){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieScenePropertyTrackExtensions.GetUniqueTrackName");

	FGetUniqueTrackName parms{};	
	parms.Track = Track;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UMovieScenePropertyTrackExtensions::GetPropertyPath(struct UMovieScenePropertyTrack* Track){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyPath");

	FGetPropertyPath parms{};	
	parms.Track = Track;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FName UMovieScenePropertyTrackExtensions::GetPropertyName(struct UMovieScenePropertyTrack* Track){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyName");

	FGetPropertyName parms{};	
	parms.Track = Track;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

UObject* UMovieScenePropertyTrackExtensions::GetObjectPropertyClass(struct UMovieSceneObjectPropertyTrack* Track){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieScenePropertyTrackExtensions.GetObjectPropertyClass");

	FGetObjectPropertyClass parms{};	
	parms.Track = Track;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UEnum* UMovieScenePropertyTrackExtensions::GetByteTrackEnum(struct UMovieSceneByteTrack* Track){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieScenePropertyTrackExtensions.GetByteTrackEnum");

	FGetByteTrackEnum parms{};	
	parms.Track = Track;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneScriptingFloatChannel::SetPreInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPreInfinityExtrapolation");

	FSetPreInfinityExtrapolation parms{};	
	parms.InExtrapolation = InExtrapolation;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingFloatChannel::SetPostInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPostInfinityExtrapolation");

	FSetPostInfinityExtrapolation parms{};	
	parms.InExtrapolation = InExtrapolation;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingFloatChannel::SetDefault(float InDefaultValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.SetDefault");

	FSetDefault parms{};	
	parms.InDefaultValue = InDefaultValue;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingFloatChannel::RemoveKey(struct UMovieSceneScriptingKey* Key){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.RemoveKey");

	FRemoveKey parms{};	
	parms.Key = Key;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingFloatChannel::RemoveDefault(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.RemoveDefault");

	FRemoveDefault parms{};	

	ProcessEvent(fn, &parms);
}

bool UMovieSceneScriptingFloatChannel::HasDefault(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.HasDefault");

	FHasDefault parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

enum class ERichCurveExtrapolation UMovieSceneScriptingFloatChannel::GetPreInfinityExtrapolation(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPreInfinityExtrapolation");

	FGetPreInfinityExtrapolation parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

enum class ERichCurveExtrapolation UMovieSceneScriptingFloatChannel::GetPostInfinityExtrapolation(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPostInfinityExtrapolation");

	FGetPostInfinityExtrapolation parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMovieSceneScriptingFloatChannel::GetNumKeys(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.GetNumKeys");

	FGetNumKeys parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UMovieSceneScriptingKey*> UMovieSceneScriptingFloatChannel::GetKeys(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.GetKeys");

	FGetKeys parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMovieSceneScriptingFloatChannel::GetDefault(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.GetDefault");

	FGetDefault parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<float> UMovieSceneScriptingFloatChannel::EvaluateKeys(struct FSequencerScriptingRange Range, struct FFrameRate FrameRate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.EvaluateKeys");

	FEvaluateKeys parms{};	
	parms.Range = Range;
	parms.FrameRate = FrameRate;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FSequencerScriptingRange UMovieSceneScriptingFloatChannel::ComputeEffectiveRange(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.ComputeEffectiveRange");

	FComputeEffectiveRange parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMovieSceneScriptingFloatKey* UMovieSceneScriptingFloatChannel::AddKey(struct FFrameNumber& InTime, float NewValue, float SubFrame, uint8_t TimeUnit, uint8_t InInterpolation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingFloatChannel.AddKey");

	FAddKey parms{};	
	parms.InTime = InTime;
	parms.NewValue = NewValue;
	parms.SubFrame = SubFrame;
	parms.TimeUnit = TimeUnit;
	parms.InInterpolation = InInterpolation;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneScriptingIntegerKey::SetValue(int32_t InNewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingIntegerKey.SetValue");

	FSetValue parms{};	
	parms.InNewValue = InNewValue;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingIntegerKey::SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, uint8_t TimeUnit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingIntegerKey.SetTime");

	FSetTime parms{};	
	parms.NewFrameNumber = NewFrameNumber;
	parms.SubFrame = SubFrame;
	parms.TimeUnit = TimeUnit;

	ProcessEvent(fn, &parms);
}

int32_t UMovieSceneScriptingIntegerKey::GetValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingIntegerKey.GetValue");

	FGetValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FFrameTime UMovieSceneScriptingIntegerKey::GetTime(uint8_t TimeUnit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingIntegerKey.GetTime");

	FGetTime parms{};	
	parms.TimeUnit = TimeUnit;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneScriptingIntegerChannel::SetDefault(int32_t InDefaultValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingIntegerChannel.SetDefault");

	FSetDefault parms{};	
	parms.InDefaultValue = InDefaultValue;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingIntegerChannel::RemoveKey(struct UMovieSceneScriptingKey* Key){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveKey");

	FRemoveKey parms{};	
	parms.Key = Key;

	ProcessEvent(fn, &parms);
}

void UMovieSceneScriptingIntegerChannel::RemoveDefault(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveDefault");

	FRemoveDefault parms{};	

	ProcessEvent(fn, &parms);
}

bool UMovieSceneScriptingIntegerChannel::HasDefault(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingIntegerChannel.HasDefault");

	FHasDefault parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UMovieSceneScriptingKey*> UMovieSceneScriptingIntegerChannel::GetKeys(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetKeys");

	FGetKeys parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMovieSceneScriptingIntegerChannel::GetDefault(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetDefault");

	FGetDefault parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMovieSceneScriptingIntegerKey* UMovieSceneScriptingIntegerChannel::AddKey(struct FFrameNumber& InTime, int32_t NewValue, float SubFrame, uint8_t TimeUnit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneScriptingIntegerChannel.AddKey");

	FAddKey parms{};	
	parms.InTime = InTime;
	parms.NewValue = NewValue;
	parms.SubFrame = SubFrame;
	parms.TimeUnit = TimeUnit;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneBindingExtensions::SetParent(struct FMovieSceneBindingProxy& InBinding, struct FMovieSceneBindingProxy& InParentBinding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.SetParent");

	FSetParent parms{};	
	parms.InBinding = InBinding;
	parms.InParentBinding = InParentBinding;

	ProcessEvent(fn, &parms);
}

void UMovieSceneBindingExtensions::SetName(struct FMovieSceneBindingProxy& InBinding, struct FString InName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.SetName");

	FSetName parms{};	
	parms.InBinding = InBinding;
	parms.InName = InName;

	ProcessEvent(fn, &parms);
}

void UMovieSceneBindingExtensions::SetDisplayName(struct FMovieSceneBindingProxy& InBinding, struct FText& InDisplayName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.SetDisplayName");

	FSetDisplayName parms{};	
	parms.InBinding = InBinding;
	parms.InDisplayName = InDisplayName;

	ProcessEvent(fn, &parms);
}

void UMovieSceneBindingExtensions::RemoveTrack(struct FMovieSceneBindingProxy& InBinding, struct UMovieSceneTrack* TrackToRemove){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.RemoveTrack");

	FRemoveTrack parms{};	
	parms.InBinding = InBinding;
	parms.TrackToRemove = TrackToRemove;

	ProcessEvent(fn, &parms);
}

void UMovieSceneBindingExtensions::Remove(struct FMovieSceneBindingProxy& InBinding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.Remove");

	FRemove parms{};	
	parms.InBinding = InBinding;

	ProcessEvent(fn, &parms);
}

void UMovieSceneBindingExtensions::MoveBindingContents(struct FMovieSceneBindingProxy& SourceBindingId, struct FMovieSceneBindingProxy& DestinationBindingId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.MoveBindingContents");

	FMoveBindingContents parms{};	
	parms.SourceBindingId = SourceBindingId;
	parms.DestinationBindingId = DestinationBindingId;

	ProcessEvent(fn, &parms);
}

bool UMovieSceneBindingExtensions::IsValid(struct FMovieSceneBindingProxy& InBinding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.IsValid");

	FIsValid parms{};	
	parms.InBinding = InBinding;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UMovieSceneTrack*> UMovieSceneBindingExtensions::GetTracks(struct FMovieSceneBindingProxy& InBinding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.GetTracks");

	FGetTracks parms{};	
	parms.InBinding = InBinding;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

UObject* UMovieSceneBindingExtensions::GetPossessedObjectClass(struct FMovieSceneBindingProxy& InBinding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.GetPossessedObjectClass");

	FGetPossessedObjectClass parms{};	
	parms.InBinding = InBinding;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FMovieSceneBindingProxy UMovieSceneBindingExtensions::GetParent(struct FMovieSceneBindingProxy& InBinding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.GetParent");

	FGetParent parms{};	
	parms.InBinding = InBinding;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UObject* UMovieSceneBindingExtensions::GetObjectTemplate(struct FMovieSceneBindingProxy& InBinding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.GetObjectTemplate");

	FGetObjectTemplate parms{};	
	parms.InBinding = InBinding;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UMovieSceneBindingExtensions::GetName(struct FMovieSceneBindingProxy& InBinding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.GetName");

	FGetName parms{};	
	parms.InBinding = InBinding;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGuid UMovieSceneBindingExtensions::GetId(struct FMovieSceneBindingProxy& InBinding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.GetId");

	FGetId parms{};	
	parms.InBinding = InBinding;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FText UMovieSceneBindingExtensions::GetDisplayName(struct FMovieSceneBindingProxy& InBinding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.GetDisplayName");

	FGetDisplayName parms{};	
	parms.InBinding = InBinding;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FMovieSceneBindingProxy> UMovieSceneBindingExtensions::GetChildPossessables(struct FMovieSceneBindingProxy& InBinding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.GetChildPossessables");

	FGetChildPossessables parms{};	
	parms.InBinding = InBinding;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UMovieSceneTrack*> UMovieSceneBindingExtensions::FindTracksByType(struct FMovieSceneBindingProxy& InBinding, UMovieSceneTrack* TrackType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByType");

	FFindTracksByType parms{};	
	parms.InBinding = InBinding;
	parms.TrackType = TrackType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UMovieSceneTrack*> UMovieSceneBindingExtensions::FindTracksByExactType(struct FMovieSceneBindingProxy& InBinding, UMovieSceneTrack* TrackType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByExactType");

	FFindTracksByExactType parms{};	
	parms.InBinding = InBinding;
	parms.TrackType = TrackType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMovieSceneTrack* UMovieSceneBindingExtensions::AddTrack(struct FMovieSceneBindingProxy& InBinding, UMovieSceneTrack* TrackType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneBindingExtensions.AddTrack");

	FAddTrack parms{};	
	parms.InBinding = InBinding;
	parms.TrackType = TrackType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

UObject* UMovieSceneEventTrackExtensions::GetBoundObjectPropertyClass(struct FMovieSceneEvent& EventKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneEventTrackExtensions.GetBoundObjectPropertyClass");

	FGetBoundObjectPropertyClass parms{};	
	parms.EventKey = EventKey;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMovieSceneEventTriggerSection* UMovieSceneEventTrackExtensions::AddEventTriggerSection(struct UMovieSceneEventTrack* InTrack){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventTriggerSection");

	FAddEventTriggerSection parms{};	
	parms.InTrack = InTrack;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMovieSceneEventRepeaterSection* UMovieSceneEventTrackExtensions::AddEventRepeaterSection(struct UMovieSceneEventTrack* InTrack){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventRepeaterSection");

	FAddEventRepeaterSection parms{};	
	parms.InTrack = InTrack;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneFloatVectorTrackExtensions::SetNumChannelsUsed(struct UMovieSceneFloatVectorTrack* Track, int32_t InNumChannelsUsed){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFloatVectorTrackExtensions.SetNumChannelsUsed");

	FSetNumChannelsUsed parms{};	
	parms.Track = Track;
	parms.InNumChannelsUsed = InNumChannelsUsed;

	ProcessEvent(fn, &parms);
}

int32_t UMovieSceneFloatVectorTrackExtensions::GetNumChannelsUsed(struct UMovieSceneFloatVectorTrack* Track){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneFloatVectorTrackExtensions.GetNumChannelsUsed");

	FGetNumChannelsUsed parms{};	
	parms.Track = Track;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneMaterialTrackExtensions::SetMaterialIndex(struct UMovieSceneComponentMaterialTrack* Track, int32_t MaterialIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneMaterialTrackExtensions.SetMaterialIndex");

	FSetMaterialIndex parms{};	
	parms.Track = Track;
	parms.MaterialIndex = MaterialIndex;

	ProcessEvent(fn, &parms);
}

int32_t UMovieSceneMaterialTrackExtensions::GetMaterialIndex(struct UMovieSceneComponentMaterialTrack* Track){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneMaterialTrackExtensions.GetMaterialIndex");

	FGetMaterialIndex parms{};	
	parms.Track = Track;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieScenePrimitiveMaterialTrackExtensions::SetMaterialIndex(struct UMovieScenePrimitiveMaterialTrack* Track, int32_t MaterialIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions.SetMaterialIndex");

	FSetMaterialIndex parms{};	
	parms.Track = Track;
	parms.MaterialIndex = MaterialIndex;

	ProcessEvent(fn, &parms);
}

int32_t UMovieScenePrimitiveMaterialTrackExtensions::GetMaterialIndex(struct UMovieScenePrimitiveMaterialTrack* Track){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions.GetMaterialIndex");

	FGetMaterialIndex parms{};	
	parms.Track = Track;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneSectionExtensions::SetStartFrameSeconds(struct UMovieSceneSection* Section, float StartTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameSeconds");

	FSetStartFrameSeconds parms{};	
	parms.Section = Section;
	parms.StartTime = StartTime;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSectionExtensions::SetStartFrameBounded(struct UMovieSceneSection* Section, bool bIsBounded){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameBounded");

	FSetStartFrameBounded parms{};	
	parms.Section = Section;
	parms.bIsBounded = bIsBounded;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSectionExtensions::SetStartFrame(struct UMovieSceneSection* Section, int32_t StartFrame){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrame");

	FSetStartFrame parms{};	
	parms.Section = Section;
	parms.StartFrame = StartFrame;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSectionExtensions::SetRangeSeconds(struct UMovieSceneSection* Section, float StartTime, float EndTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.SetRangeSeconds");

	FSetRangeSeconds parms{};	
	parms.Section = Section;
	parms.StartTime = StartTime;
	parms.EndTime = EndTime;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSectionExtensions::SetRange(struct UMovieSceneSection* Section, int32_t StartFrame, int32_t EndFrame){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.SetRange");

	FSetRange parms{};	
	parms.Section = Section;
	parms.StartFrame = StartFrame;
	parms.EndFrame = EndFrame;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSectionExtensions::SetEndFrameSeconds(struct UMovieSceneSection* Section, float EndTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameSeconds");

	FSetEndFrameSeconds parms{};	
	parms.Section = Section;
	parms.EndTime = EndTime;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSectionExtensions::SetEndFrameBounded(struct UMovieSceneSection* Section, bool bIsBounded){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameBounded");

	FSetEndFrameBounded parms{};	
	parms.Section = Section;
	parms.bIsBounded = bIsBounded;

	ProcessEvent(fn, &parms);
}

void UMovieSceneSectionExtensions::SetEndFrame(struct UMovieSceneSection* Section, int32_t EndFrame){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrame");

	FSetEndFrame parms{};	
	parms.Section = Section;
	parms.EndFrame = EndFrame;

	ProcessEvent(fn, &parms);
}

bool UMovieSceneSectionExtensions::HasStartFrame(struct UMovieSceneSection* Section){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.HasStartFrame");

	FHasStartFrame parms{};	
	parms.Section = Section;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMovieSceneSectionExtensions::HasEndFrame(struct UMovieSceneSection* Section){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.HasEndFrame");

	FHasEndFrame parms{};	
	parms.Section = Section;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMovieSceneSectionExtensions::GetStartFrameSeconds(struct UMovieSceneSection* Section){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrameSeconds");

	FGetStartFrameSeconds parms{};	
	parms.Section = Section;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMovieSceneSectionExtensions::GetStartFrame(struct UMovieSceneSection* Section){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrame");

	FGetStartFrame parms{};	
	parms.Section = Section;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMovieSceneSectionExtensions::GetParentSequenceFrame(struct UMovieSceneSubSection* Section, int32_t InFrame, struct UMovieSceneSequence* ParentSequence){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.GetParentSequenceFrame");

	FGetParentSequenceFrame parms{};	
	parms.Section = Section;
	parms.InFrame = InFrame;
	parms.ParentSequence = ParentSequence;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMovieSceneSectionExtensions::GetEndFrameSeconds(struct UMovieSceneSection* Section){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrameSeconds");

	FGetEndFrameSeconds parms{};	
	parms.Section = Section;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMovieSceneSectionExtensions::GetEndFrame(struct UMovieSceneSection* Section){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrame");

	FGetEndFrame parms{};	
	parms.Section = Section;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UMovieSceneScriptingChannel*> UMovieSceneSectionExtensions::GetChannelsByType(struct UMovieSceneSection* Section, UMovieSceneScriptingChannel* ChannelType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.GetChannelsByType");

	FGetChannelsByType parms{};	
	parms.Section = Section;
	parms.ChannelType = ChannelType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UMovieSceneScriptingChannel*> UMovieSceneSectionExtensions::GetChannels(struct UMovieSceneSection* Section){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.GetChannels");

	FGetChannels parms{};	
	parms.Section = Section;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMovieSceneSectionExtensions::GetAutoSizeStartFrameSeconds(struct UMovieSceneSection* Section){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeStartFrameSeconds");

	FGetAutoSizeStartFrameSeconds parms{};	
	parms.Section = Section;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMovieSceneSectionExtensions::GetAutoSizeStartFrame(struct UMovieSceneSection* Section){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeStartFrame");

	FGetAutoSizeStartFrame parms{};	
	parms.Section = Section;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMovieSceneSectionExtensions::GetAutoSizeHasStartFrame(struct UMovieSceneSection* Section){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeHasStartFrame");

	FGetAutoSizeHasStartFrame parms{};	
	parms.Section = Section;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMovieSceneSectionExtensions::GetAutoSizeHasEndFrame(struct UMovieSceneSection* Section){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeHasEndFrame");

	FGetAutoSizeHasEndFrame parms{};	
	parms.Section = Section;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMovieSceneSectionExtensions::GetAutoSizeEndFrameSeconds(struct UMovieSceneSection* Section){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeEndFrameSeconds");

	FGetAutoSizeEndFrameSeconds parms{};	
	parms.Section = Section;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMovieSceneSectionExtensions::GetAutoSizeEndFrame(struct UMovieSceneSection* Section){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeEndFrame");

	FGetAutoSizeEndFrame parms{};	
	parms.Section = Section;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UMovieSceneScriptingChannel*> UMovieSceneSectionExtensions::GetAllChannels(struct UMovieSceneSection* Section){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.GetAllChannels");

	FGetAllChannels parms{};	
	parms.Section = Section;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UMovieSceneScriptingChannel*> UMovieSceneSectionExtensions::FindChannelsByType(struct UMovieSceneSection* Section, UMovieSceneScriptingChannel* ChannelType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneSectionExtensions.FindChannelsByType");

	FFindChannelsByType parms{};	
	parms.Section = Section;
	parms.ChannelType = ChannelType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneTrackExtensions::SetTrackRowDisplayName(struct UMovieSceneTrack* Track, struct FText& InName, int32_t RowIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.SetTrackRowDisplayName");

	FSetTrackRowDisplayName parms{};	
	parms.Track = Track;
	parms.InName = InName;
	parms.RowIndex = RowIndex;

	ProcessEvent(fn, &parms);
}

void UMovieSceneTrackExtensions::SetSortingOrder(struct UMovieSceneTrack* Track, int32_t SortingOrder){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.SetSortingOrder");

	FSetSortingOrder parms{};	
	parms.Track = Track;
	parms.SortingOrder = SortingOrder;

	ProcessEvent(fn, &parms);
}

void UMovieSceneTrackExtensions::SetSectionToKey(struct UMovieSceneTrack* Track, struct UMovieSceneSection* Section){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.SetSectionToKey");

	FSetSectionToKey parms{};	
	parms.Track = Track;
	parms.Section = Section;

	ProcessEvent(fn, &parms);
}

void UMovieSceneTrackExtensions::SetDisplayName(struct UMovieSceneTrack* Track, struct FText& InName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.SetDisplayName");

	FSetDisplayName parms{};	
	parms.Track = Track;
	parms.InName = InName;

	ProcessEvent(fn, &parms);
}

void UMovieSceneTrackExtensions::SetColorTint(struct UMovieSceneTrack* Track, struct FColor& ColorTint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.SetColorTint");

	FSetColorTint parms{};	
	parms.Track = Track;
	parms.ColorTint = ColorTint;

	ProcessEvent(fn, &parms);
}

void UMovieSceneTrackExtensions::RemoveSection(struct UMovieSceneTrack* Track, struct UMovieSceneSection* Section){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.RemoveSection");

	FRemoveSection parms{};	
	parms.Track = Track;
	parms.Section = Section;

	ProcessEvent(fn, &parms);
}

struct FText UMovieSceneTrackExtensions::GetTrackRowDisplayName(struct UMovieSceneTrack* Track, int32_t RowIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.GetTrackRowDisplayName");

	FGetTrackRowDisplayName parms{};	
	parms.Track = Track;
	parms.RowIndex = RowIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMovieSceneTrackExtensions::GetSortingOrder(struct UMovieSceneTrack* Track){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.GetSortingOrder");

	FGetSortingOrder parms{};	
	parms.Track = Track;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMovieSceneSection* UMovieSceneTrackExtensions::GetSectionToKey(struct UMovieSceneTrack* Track){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.GetSectionToKey");

	FGetSectionToKey parms{};	
	parms.Track = Track;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UMovieSceneSection*> UMovieSceneTrackExtensions::GetSections(struct UMovieSceneTrack* Track){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.GetSections");

	FGetSections parms{};	
	parms.Track = Track;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FText UMovieSceneTrackExtensions::GetDisplayName(struct UMovieSceneTrack* Track){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.GetDisplayName");

	FGetDisplayName parms{};	
	parms.Track = Track;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FColor UMovieSceneTrackExtensions::GetColorTint(struct UMovieSceneTrack* Track){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.GetColorTint");

	FGetColorTint parms{};	
	parms.Track = Track;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMovieSceneSection* UMovieSceneTrackExtensions::AddSection(struct UMovieSceneTrack* Track){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneTrackExtensions.AddSection");

	FAddSection parms{};	
	parms.Track = Track;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneDoubleVectorTrackExtensions::SetNumChannelsUsed(struct UMovieSceneDoubleVectorTrack* Track, int32_t InNumChannelsUsed){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneDoubleVectorTrackExtensions.SetNumChannelsUsed");

	FSetNumChannelsUsed parms{};	
	parms.Track = Track;
	parms.InNumChannelsUsed = InNumChannelsUsed;

	ProcessEvent(fn, &parms);
}

int32_t UMovieSceneDoubleVectorTrackExtensions::GetNumChannelsUsed(struct UMovieSceneDoubleVectorTrack* Track){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.MovieSceneDoubleVectorTrackExtensions.GetNumChannelsUsed");

	FGetNumChannelsUsed parms{};	
	parms.Track = Track;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USequencerScriptingRangeExtensions::SetStartSeconds(struct FSequencerScriptingRange& Range, float Start){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartSeconds");

	FSetStartSeconds parms{};	
	parms.Range = Range;
	parms.Start = Start;

	ProcessEvent(fn, &parms);
}

void USequencerScriptingRangeExtensions::SetStartFrame(struct FSequencerScriptingRange& Range, int32_t Start){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartFrame");

	FSetStartFrame parms{};	
	parms.Range = Range;
	parms.Start = Start;

	ProcessEvent(fn, &parms);
}

void USequencerScriptingRangeExtensions::SetEndSeconds(struct FSequencerScriptingRange& Range, float End){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndSeconds");

	FSetEndSeconds parms{};	
	parms.Range = Range;
	parms.End = End;

	ProcessEvent(fn, &parms);
}

void USequencerScriptingRangeExtensions::SetEndFrame(struct FSequencerScriptingRange& Range, int32_t End){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndFrame");

	FSetEndFrame parms{};	
	parms.Range = Range;
	parms.End = End;

	ProcessEvent(fn, &parms);
}

void USequencerScriptingRangeExtensions::RemoveStart(struct FSequencerScriptingRange& Range){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveStart");

	FRemoveStart parms{};	
	parms.Range = Range;

	ProcessEvent(fn, &parms);
}

void USequencerScriptingRangeExtensions::RemoveEnd(struct FSequencerScriptingRange& Range){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveEnd");

	FRemoveEnd parms{};	
	parms.Range = Range;

	ProcessEvent(fn, &parms);
}

bool USequencerScriptingRangeExtensions::HasStart(struct FSequencerScriptingRange& Range){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.HasStart");

	FHasStart parms{};	
	parms.Range = Range;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool USequencerScriptingRangeExtensions::HasEnd(struct FSequencerScriptingRange& Range){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.HasEnd");

	FHasEnd parms{};	
	parms.Range = Range;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float USequencerScriptingRangeExtensions::GetStartSeconds(struct FSequencerScriptingRange& Range){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartSeconds");

	FGetStartSeconds parms{};	
	parms.Range = Range;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t USequencerScriptingRangeExtensions::GetStartFrame(struct FSequencerScriptingRange& Range){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartFrame");

	FGetStartFrame parms{};	
	parms.Range = Range;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float USequencerScriptingRangeExtensions::GetEndSeconds(struct FSequencerScriptingRange& Range){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndSeconds");

	FGetEndSeconds parms{};	
	parms.Range = Range;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t USequencerScriptingRangeExtensions::GetEndFrame(struct FSequencerScriptingRange& Range){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndFrame");

	FGetEndFrame parms{};	
	parms.Range = Range;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

