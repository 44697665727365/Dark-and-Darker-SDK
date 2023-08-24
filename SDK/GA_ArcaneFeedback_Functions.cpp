#include "pch.h"
#include "SDK.h"

void UGA_ArcaneFeedback_C::EventReceived_FEC06BF8418516612E978591E8FA44BB(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ArcaneFeedback.GA_ArcaneFeedback_C.EventReceived_FEC06BF8418516612E978591E8FA44BB");

	FEventReceived_FEC06BF8418516612E978591E8FA44BB parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_ArcaneFeedback_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ArcaneFeedback.GA_ArcaneFeedback_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_ArcaneFeedback_C::ExecuteUbergraph_GA_ArcaneFeedback(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ArcaneFeedback.GA_ArcaneFeedback_C.ExecuteUbergraph_GA_ArcaneFeedback");

	FExecuteUbergraph_GA_ArcaneFeedback parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

