#include "pch.h"
#include "SDK.h"

void UGA_HandCrossbowReload_C::SetEquippedItemsHidden(bool IsHide){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HandCrossbowReload.GA_HandCrossbowReload_C.SetEquippedItemsHidden");

	FSetEquippedItemsHidden parms{};	
	parms.IsHide = IsHide;

	ProcessEvent(fn, &parms);
}

void UGA_HandCrossbowReload_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HandCrossbowReload.GA_HandCrossbowReload_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_HandCrossbowReload_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HandCrossbowReload.GA_HandCrossbowReload_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_HandCrossbowReload_C::ExecuteUbergraph_GA_HandCrossbowReload(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HandCrossbowReload.GA_HandCrossbowReload_C.ExecuteUbergraph_GA_HandCrossbowReload");

	FExecuteUbergraph_GA_HandCrossbowReload parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

