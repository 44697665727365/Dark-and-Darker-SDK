#include "pch.h"
#include "SDK.h"

void UGA_GloblinWarrior_Attack_1_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GloblinWarrior_Attack_2.GA_GloblinWarrior_Attack_1_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GloblinWarrior_Attack_1_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GloblinWarrior_Attack_2.GA_GloblinWarrior_Attack_1_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GloblinWarrior_Attack_1_C::ExecuteUbergraph_GA_GloblinWarrior_Attack_2(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GloblinWarrior_Attack_2.GA_GloblinWarrior_Attack_1_C.ExecuteUbergraph_GA_GloblinWarrior_Attack_2");

	FExecuteUbergraph_GA_GloblinWarrior_Attack_2 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

