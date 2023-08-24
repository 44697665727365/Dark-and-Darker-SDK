#include "pch.h"
#include "SDK.h"

void UGA_GiantBat_FlyToHanging_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantBat_FlyToHanging.GA_GiantBat_FlyToHanging_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GiantBat_FlyToHanging_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantBat_FlyToHanging.GA_GiantBat_FlyToHanging_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GiantBat_FlyToHanging_C::ExecuteUbergraph_GA_GiantBat_FlyToHanging(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantBat_FlyToHanging.GA_GiantBat_FlyToHanging_C.ExecuteUbergraph_GA_GiantBat_FlyToHanging");

	FExecuteUbergraph_GA_GiantBat_FlyToHanging parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

