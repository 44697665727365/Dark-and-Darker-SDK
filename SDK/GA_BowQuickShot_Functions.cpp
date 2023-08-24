#include "pch.h"
#include "SDK.h"

void UGA_BowQuickShot_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_BowQuickShot.GA_BowQuickShot_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_BowQuickShot_C::ExecuteUbergraph_GA_BowQuickShot(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_BowQuickShot.GA_BowQuickShot_C.ExecuteUbergraph_GA_BowQuickShot");

	FExecuteUbergraph_GA_BowQuickShot parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

