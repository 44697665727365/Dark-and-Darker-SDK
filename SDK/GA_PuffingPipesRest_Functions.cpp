#include "pch.h"
#include "SDK.h"

void UGA_PuffingPipesRest_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PuffingPipesRest.GA_PuffingPipesRest_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_PuffingPipesRest_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PuffingPipesRest.GA_PuffingPipesRest_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PuffingPipesRest_C::ExecuteUbergraph_GA_PuffingPipesRest(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PuffingPipesRest.GA_PuffingPipesRest_C.ExecuteUbergraph_GA_PuffingPipesRest");

	FExecuteUbergraph_GA_PuffingPipesRest parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

