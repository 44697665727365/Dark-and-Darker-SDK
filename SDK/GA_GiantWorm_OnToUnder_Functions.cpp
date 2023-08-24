#include "pch.h"
#include "SDK.h"

void UGA_GiantWorm_OnToUnder_C::EventReceived_86C180884578AEE1E4F568AF696F6482(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantWorm_OnToUnder.GA_GiantWorm_OnToUnder_C.EventReceived_86C180884578AEE1E4F568AF696F6482");

	FEventReceived_86C180884578AEE1E4F568AF696F6482 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GiantWorm_OnToUnder_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantWorm_OnToUnder.GA_GiantWorm_OnToUnder_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GiantWorm_OnToUnder_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantWorm_OnToUnder.GA_GiantWorm_OnToUnder_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GiantWorm_OnToUnder_C::ExecuteUbergraph_GA_GiantWorm_OnToUnder(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantWorm_OnToUnder.GA_GiantWorm_OnToUnder_C.ExecuteUbergraph_GA_GiantWorm_OnToUnder");

	FExecuteUbergraph_GA_GiantWorm_OnToUnder parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

