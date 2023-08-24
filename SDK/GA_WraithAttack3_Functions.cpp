#include "pch.h"
#include "SDK.h"

void UGA_WraithAttack3_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_WraithAttack3.GA_WraithAttack3_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_WraithAttack3_C::ExecuteUbergraph_GA_WraithAttack3(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_WraithAttack3.GA_WraithAttack3_C.ExecuteUbergraph_GA_WraithAttack3");

	FExecuteUbergraph_GA_WraithAttack3 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

