#include "pch.h"
#include "SDK.h"

void UGA_ResurrectionBless_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ResurrectionBless.GA_ResurrectionBless_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_ResurrectionBless_C::ExecuteUbergraph_GA_ResurrectionBless(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ResurrectionBless.GA_ResurrectionBless_C.ExecuteUbergraph_GA_ResurrectionBless");

	FExecuteUbergraph_GA_ResurrectionBless parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

