#include "pch.h"
#include "SDK.h"

void UGA_Otto_Base_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Otto_Base.GA_Otto_Base_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_Otto_Base_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Otto_Base.GA_Otto_Base_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_Otto_Base_C::ExecuteUbergraph_GA_Otto_Base(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Otto_Base.GA_Otto_Base_C.ExecuteUbergraph_GA_Otto_Base");

	FExecuteUbergraph_GA_Otto_Base parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

