#include "pch.h"
#include "SDK.h"

void UGA_ExplosionBottle_Area_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ExplosionBottle_Area.GA_ExplosionBottle_Area_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_ExplosionBottle_Area_C::ExecuteUbergraph_GA_ExplosionBottle_Area(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ExplosionBottle_Area.GA_ExplosionBottle_Area_C.ExecuteUbergraph_GA_ExplosionBottle_Area");

	FExecuteUbergraph_GA_ExplosionBottle_Area parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

