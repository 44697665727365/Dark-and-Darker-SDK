#include "pch.h"
#include "SDK.h"

void UGA_ReloadAmmo_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ReloadAmmo.GA_ReloadAmmo_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_ReloadAmmo_C::ExecuteUbergraph_GA_ReloadAmmo(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ReloadAmmo.GA_ReloadAmmo_C.ExecuteUbergraph_GA_ReloadAmmo");

	FExecuteUbergraph_GA_ReloadAmmo parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

