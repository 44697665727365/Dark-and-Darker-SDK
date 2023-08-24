#include "pch.h"
#include "SDK.h"

void UGA_Sanctuary_C::AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Sanctuary.GA_Sanctuary_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;
	parms.bIsSocketSightBlocked = bIsSocketSightBlocked;

	ProcessEvent(fn, &parms);
}

void UGA_Sanctuary_C::ExecuteUbergraph_GA_Sanctuary(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Sanctuary.GA_Sanctuary_C.ExecuteUbergraph_GA_Sanctuary");

	FExecuteUbergraph_GA_Sanctuary parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

