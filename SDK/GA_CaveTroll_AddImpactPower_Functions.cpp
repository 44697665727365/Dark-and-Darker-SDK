#include "pch.h"
#include "SDK.h"

void UGA_CaveTroll_AddImpactPower_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_AddImpactPower.GA_CaveTroll_AddImpactPower_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_AddImpactPower_C::ExecuteUbergraph_GA_CaveTroll_AddImpactPower(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_AddImpactPower.GA_CaveTroll_AddImpactPower_C.ExecuteUbergraph_GA_CaveTroll_AddImpactPower");

	FExecuteUbergraph_GA_CaveTroll_AddImpactPower parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

