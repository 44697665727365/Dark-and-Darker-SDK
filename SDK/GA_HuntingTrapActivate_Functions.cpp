#include "pch.h"
#include "SDK.h"

void UGA_HuntingTrapActivate_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HuntingTrapActivate.GA_HuntingTrapActivate_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_HuntingTrapActivate_C::ExecuteUbergraph_GA_HuntingTrapActivate(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HuntingTrapActivate.GA_HuntingTrapActivate_C.ExecuteUbergraph_GA_HuntingTrapActivate");

	FExecuteUbergraph_GA_HuntingTrapActivate parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

