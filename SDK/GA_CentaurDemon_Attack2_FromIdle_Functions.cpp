#include "pch.h"
#include "SDK.h"

void UGA_CentaurDemon_Attack2_FromIdle_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CentaurDemon_Attack2_FromIdle.GA_CentaurDemon_Attack2_FromIdle_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_CentaurDemon_Attack2_FromIdle_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CentaurDemon_Attack2_FromIdle.GA_CentaurDemon_Attack2_FromIdle_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_CentaurDemon_Attack2_FromIdle_C::ExecuteUbergraph_GA_CentaurDemon_Attack2_FromIdle(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CentaurDemon_Attack2_FromIdle.GA_CentaurDemon_Attack2_FromIdle_C.ExecuteUbergraph_GA_CentaurDemon_Attack2_FromIdle");

	FExecuteUbergraph_GA_CentaurDemon_Attack2_FromIdle parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

