#include "pch.h"
#include "SDK.h"

void UGA_SkeweredFoodRest_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeweredFoodRest.GA_SkeweredFoodRest_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_SkeweredFoodRest_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeweredFoodRest.GA_SkeweredFoodRest_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeweredFoodRest_C::ExecuteUbergraph_GA_SkeweredFoodRest(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeweredFoodRest.GA_SkeweredFoodRest_C.ExecuteUbergraph_GA_SkeweredFoodRest");

	FExecuteUbergraph_GA_SkeweredFoodRest parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

