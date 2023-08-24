#include "pch.h"
#include "SDK.h"

void UGA_CupOfCoffeeRest_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CupOfCoffeeRest.GA_CupOfCoffeeRest_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_CupOfCoffeeRest_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CupOfCoffeeRest.GA_CupOfCoffeeRest_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_CupOfCoffeeRest_C::ExecuteUbergraph_GA_CupOfCoffeeRest(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CupOfCoffeeRest.GA_CupOfCoffeeRest_C.ExecuteUbergraph_GA_CupOfCoffeeRest");

	FExecuteUbergraph_GA_CupOfCoffeeRest parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

