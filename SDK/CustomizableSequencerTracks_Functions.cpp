#include "pch.h"
#include "SDK.h"

void USequencerTrackInstanceBP::K2_OnUpdate(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CustomizableSequencerTracks.SequencerTrackInstanceBP.K2_OnUpdate");

	FK2_OnUpdate parms{};	

	ProcessEvent(fn, &parms);
}

void USequencerTrackInstanceBP::K2_OnInputRemoved(struct FSequencerTrackInstanceInput Input){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CustomizableSequencerTracks.SequencerTrackInstanceBP.K2_OnInputRemoved");

	FK2_OnInputRemoved parms{};	
	parms.Input = Input;

	ProcessEvent(fn, &parms);
}

void USequencerTrackInstanceBP::K2_OnInputAdded(struct FSequencerTrackInstanceInput Input){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CustomizableSequencerTracks.SequencerTrackInstanceBP.K2_OnInputAdded");

	FK2_OnInputAdded parms{};	
	parms.Input = Input;

	ProcessEvent(fn, &parms);
}

void USequencerTrackInstanceBP::K2_OnInitialize(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CustomizableSequencerTracks.SequencerTrackInstanceBP.K2_OnInitialize");

	FK2_OnInitialize parms{};	

	ProcessEvent(fn, &parms);
}

void USequencerTrackInstanceBP::K2_OnEndUpdateInputs(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CustomizableSequencerTracks.SequencerTrackInstanceBP.K2_OnEndUpdateInputs");

	FK2_OnEndUpdateInputs parms{};	

	ProcessEvent(fn, &parms);
}

void USequencerTrackInstanceBP::K2_OnDestroyed(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CustomizableSequencerTracks.SequencerTrackInstanceBP.K2_OnDestroyed");

	FK2_OnDestroyed parms{};	

	ProcessEvent(fn, &parms);
}

void USequencerTrackInstanceBP::K2_OnBeginUpdateInputs(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CustomizableSequencerTracks.SequencerTrackInstanceBP.K2_OnBeginUpdateInputs");

	FK2_OnBeginUpdateInputs parms{};	

	ProcessEvent(fn, &parms);
}

int32_t USequencerTrackInstanceBP::GetNumInputs(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CustomizableSequencerTracks.SequencerTrackInstanceBP.GetNumInputs");

	FGetNumInputs parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FSequencerTrackInstanceInput> USequencerTrackInstanceBP::GetInputs(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CustomizableSequencerTracks.SequencerTrackInstanceBP.GetInputs");

	FGetInputs parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FSequencerTrackInstanceInput USequencerTrackInstanceBP::GetInput(int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CustomizableSequencerTracks.SequencerTrackInstanceBP.GetInput");

	FGetInput parms{};	
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UObject* USequencerTrackInstanceBP::GetAnimatedObject(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CustomizableSequencerTracks.SequencerTrackInstanceBP.GetAnimatedObject");

	FGetAnimatedObject parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

