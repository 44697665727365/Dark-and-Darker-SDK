#include "pch.h"
#include "SDK.h"

void UGA_GiantBat_HangToFlying_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantBat_HangToFlying.GA_GiantBat_HangToFlying_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GiantBat_HangToFlying_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantBat_HangToFlying.GA_GiantBat_HangToFlying_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GiantBat_HangToFlying_C::Rotation(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantBat_HangToFlying.GA_GiantBat_HangToFlying_C.Rotation");

	FRotation parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_GiantBat_HangToFlying_C::ExecuteUbergraph_GA_GiantBat_HangToFlying(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantBat_HangToFlying.GA_GiantBat_HangToFlying_C.ExecuteUbergraph_GA_GiantBat_HangToFlying");

	FExecuteUbergraph_GA_GiantBat_HangToFlying parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

