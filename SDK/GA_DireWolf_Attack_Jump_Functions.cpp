#include "pch.h"
#include "SDK.h"

void UGA_DireWolf_Attack_Jump_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DireWolf_Attack_Jump.GA_DireWolf_Attack_Jump_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_DireWolf_Attack_Jump_C::ExecuteUbergraph_GA_DireWolf_Attack_Jump(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DireWolf_Attack_Jump.GA_DireWolf_Attack_Jump_C.ExecuteUbergraph_GA_DireWolf_Attack_Jump");

	FExecuteUbergraph_GA_DireWolf_Attack_Jump parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

