#include "pch.h"
#include "SDK.h"

void UGA_Mimic_Small_DashAttack_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Mimic_Small_DashAttack.GA_Mimic_Small_DashAttack_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_Mimic_Small_DashAttack_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Mimic_Small_DashAttack.GA_Mimic_Small_DashAttack_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_Mimic_Small_DashAttack_C::ExecuteUbergraph_GA_Mimic_Small_DashAttack(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Mimic_Small_DashAttack.GA_Mimic_Small_DashAttack_C.ExecuteUbergraph_GA_Mimic_Small_DashAttack");

	FExecuteUbergraph_GA_Mimic_Small_DashAttack parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

