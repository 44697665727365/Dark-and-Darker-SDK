#include "pch.h"
#include "SDK.h"

void UGA_ActivateItem_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ActivateItem.GA_ActivateItem_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_ActivateItem_C::ExecuteUbergraph_GA_ActivateItem(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ActivateItem.GA_ActivateItem_C.ExecuteUbergraph_GA_ActivateItem");

	FExecuteUbergraph_GA_ActivateItem parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

