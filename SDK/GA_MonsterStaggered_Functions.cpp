#include "pch.h"
#include "SDK.h"

void UGA_MonsterStaggered_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterStaggered.GA_MonsterStaggered_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterStaggered_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterStaggered.GA_MonsterStaggered_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterStaggered_C::ExecuteUbergraph_GA_MonsterStaggered(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterStaggered.GA_MonsterStaggered_C.ExecuteUbergraph_GA_MonsterStaggered");

	FExecuteUbergraph_GA_MonsterStaggered parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

