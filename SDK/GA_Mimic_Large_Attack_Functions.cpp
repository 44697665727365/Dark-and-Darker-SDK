#include "pch.h"
#include "SDK.h"

void UGA_Mimic_Large_Attack_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Mimic_Large_Attack.GA_Mimic_Large_Attack_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_Mimic_Large_Attack_C::ExecuteUbergraph_GA_Mimic_Large_Attack(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Mimic_Large_Attack.GA_Mimic_Large_Attack_C.ExecuteUbergraph_GA_Mimic_Large_Attack");

	FExecuteUbergraph_GA_Mimic_Large_Attack parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

