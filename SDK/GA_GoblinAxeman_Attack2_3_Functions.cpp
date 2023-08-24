#include "pch.h"
#include "SDK.h"

void UGA_GoblinAxeman_Attack2_2_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinAxeman_Attack2_3.GA_GoblinAxeman_Attack2_2_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinAxeman_Attack2_2_C::ExecuteUbergraph_GA_GoblinAxeman_Attack2_3(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinAxeman_Attack2_3.GA_GoblinAxeman_Attack2_2_C.ExecuteUbergraph_GA_GoblinAxeman_Attack2_3");

	FExecuteUbergraph_GA_GoblinAxeman_Attack2_3 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

