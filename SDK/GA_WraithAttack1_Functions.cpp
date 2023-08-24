#include "pch.h"
#include "SDK.h"

void UGA_WraithAttack1_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_WraithAttack1.GA_WraithAttack1_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_WraithAttack1_C::ExecuteUbergraph_GA_WraithAttack1(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_WraithAttack1.GA_WraithAttack1_C.ExecuteUbergraph_GA_WraithAttack1");

	FExecuteUbergraph_GA_WraithAttack1 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

