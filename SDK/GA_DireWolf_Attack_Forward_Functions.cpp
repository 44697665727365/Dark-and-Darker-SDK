#include "pch.h"
#include "SDK.h"

void UGA_DireWolf_Attack_Forward_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DireWolf_Attack_Forward.GA_DireWolf_Attack_Forward_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_DireWolf_Attack_Forward_C::ExecuteUbergraph_GA_DireWolf_Attack_Forward(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DireWolf_Attack_Forward.GA_DireWolf_Attack_Forward_C.ExecuteUbergraph_GA_DireWolf_Attack_Forward");

	FExecuteUbergraph_GA_DireWolf_Attack_Forward parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

