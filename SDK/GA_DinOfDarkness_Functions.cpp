#include "pch.h"
#include "SDK.h"

void UGA_DinOfDarkness_C::EventReceived_AC2364DD4838A9717F249F969D173499(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DinOfDarkness.GA_DinOfDarkness_C.EventReceived_AC2364DD4838A9717F249F969D173499");

	FEventReceived_AC2364DD4838A9717F249F969D173499 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_DinOfDarkness_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DinOfDarkness.GA_DinOfDarkness_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_DinOfDarkness_C::ExecuteUbergraph_GA_DinOfDarkness(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DinOfDarkness.GA_DinOfDarkness_C.ExecuteUbergraph_GA_DinOfDarkness");

	FExecuteUbergraph_GA_DinOfDarkness parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

