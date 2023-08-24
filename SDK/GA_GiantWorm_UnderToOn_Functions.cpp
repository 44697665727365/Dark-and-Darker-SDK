#include "pch.h"
#include "SDK.h"

void UGA_GiantWorm_UnderToOn_C::EventReceived_9E4376F04A212FECF0631BBF0ADFF69C(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantWorm_UnderToOn.GA_GiantWorm_UnderToOn_C.EventReceived_9E4376F04A212FECF0631BBF0ADFF69C");

	FEventReceived_9E4376F04A212FECF0631BBF0ADFF69C parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GiantWorm_UnderToOn_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantWorm_UnderToOn.GA_GiantWorm_UnderToOn_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GiantWorm_UnderToOn_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantWorm_UnderToOn.GA_GiantWorm_UnderToOn_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GiantWorm_UnderToOn_C::ExecuteUbergraph_GA_GiantWorm_UnderToOn(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantWorm_UnderToOn.GA_GiantWorm_UnderToOn_C.ExecuteUbergraph_GA_GiantWorm_UnderToOn");

	FExecuteUbergraph_GA_GiantWorm_UnderToOn parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

