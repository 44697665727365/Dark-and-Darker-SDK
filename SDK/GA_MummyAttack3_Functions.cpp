#include "pch.h"
#include "SDK.h"

void UGA_MummyAttack3_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MummyAttack3.GA_MummyAttack3_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_MummyAttack3_C::ExecuteUbergraph_GA_MummyAttack3(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MummyAttack3.GA_MummyAttack3_C.ExecuteUbergraph_GA_MummyAttack3");

	FExecuteUbergraph_GA_MummyAttack3 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

