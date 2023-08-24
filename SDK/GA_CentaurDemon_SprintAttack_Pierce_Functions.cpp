#include "pch.h"
#include "SDK.h"

void UGA_CentaurDemon_SprintAttack_Pierce_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CentaurDemon_SprintAttack_Pierce.GA_CentaurDemon_SprintAttack_Pierce_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_CentaurDemon_SprintAttack_Pierce_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CentaurDemon_SprintAttack_Pierce.GA_CentaurDemon_SprintAttack_Pierce_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_CentaurDemon_SprintAttack_Pierce_C::ExecuteUbergraph_GA_CentaurDemon_SprintAttack_Pierce(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CentaurDemon_SprintAttack_Pierce.GA_CentaurDemon_SprintAttack_Pierce_C.ExecuteUbergraph_GA_CentaurDemon_SprintAttack_Pierce");

	FExecuteUbergraph_GA_CentaurDemon_SprintAttack_Pierce parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

