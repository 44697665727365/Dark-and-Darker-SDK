#include "pch.h"
#include "SDK.h"

void UGA_MummyAttack2_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MummyAttack2.GA_MummyAttack2_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_MummyAttack2_C::ExecuteUbergraph_GA_MummyAttack2(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MummyAttack2.GA_MummyAttack2_C.ExecuteUbergraph_GA_MummyAttack2");

	FExecuteUbergraph_GA_MummyAttack2 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

