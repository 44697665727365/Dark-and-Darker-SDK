#include "pch.h"
#include "SDK.h"

void UGA_Otto_Lie_To_Sleep_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Otto_Lie_To_Sleep.GA_Otto_Lie_To_Sleep_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_Otto_Lie_To_Sleep_C::ExecuteUbergraph_GA_Otto_Lie_To_Sleep(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Otto_Lie_To_Sleep.GA_Otto_Lie_To_Sleep_C.ExecuteUbergraph_GA_Otto_Lie_To_Sleep");

	FExecuteUbergraph_GA_Otto_Lie_To_Sleep parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

