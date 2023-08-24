#include "pch.h"
#include "SDK.h"

void UGA_Otto_Sit_To_Stand_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Otto_Sit_To_Stand.GA_Otto_Sit_To_Stand_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_Otto_Sit_To_Stand_C::ExecuteUbergraph_GA_Otto_Sit_To_Stand(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Otto_Sit_To_Stand.GA_Otto_Sit_To_Stand_C.ExecuteUbergraph_GA_Otto_Sit_To_Stand");

	FExecuteUbergraph_GA_Otto_Sit_To_Stand parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

