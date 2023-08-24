#include "pch.h"
#include "SDK.h"

void UGA_LichFrenzy_C::EventReceived_44DA495744C99059797555AA364D6978(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichFrenzy.GA_LichFrenzy_C.EventReceived_44DA495744C99059797555AA364D6978");

	FEventReceived_44DA495744C99059797555AA364D6978 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_LichFrenzy_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichFrenzy.GA_LichFrenzy_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_LichFrenzy_C::ExecuteUbergraph_GA_LichFrenzy(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichFrenzy.GA_LichFrenzy_C.ExecuteUbergraph_GA_LichFrenzy");

	FExecuteUbergraph_GA_LichFrenzy parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

