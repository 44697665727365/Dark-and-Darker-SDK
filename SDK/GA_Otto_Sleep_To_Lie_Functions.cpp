#include "pch.h"
#include "SDK.h"

void UGA_Otto_Sleep_To_Lie_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Otto_Sleep_To_Lie.GA_Otto_Sleep_To_Lie_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_Otto_Sleep_To_Lie_C::ExecuteUbergraph_GA_Otto_Sleep_To_Lie(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Otto_Sleep_To_Lie.GA_Otto_Sleep_To_Lie_C.ExecuteUbergraph_GA_Otto_Sleep_To_Lie");

	FExecuteUbergraph_GA_Otto_Sleep_To_Lie parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

