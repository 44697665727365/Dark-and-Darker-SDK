#include "pch.h"
#include "SDK.h"

void UActorSequenceComponent::StopSequence(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ActorSequence.ActorSequenceComponent.StopSequence");

	FStopSequence parms{};	

	ProcessEvent(fn, &parms);
}

void UActorSequenceComponent::PlaySequence(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ActorSequence.ActorSequenceComponent.PlaySequence");

	FPlaySequence parms{};	

	ProcessEvent(fn, &parms);
}

void UActorSequenceComponent::PauseSequence(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ActorSequence.ActorSequenceComponent.PauseSequence");

	FPauseSequence parms{};	

	ProcessEvent(fn, &parms);
}

