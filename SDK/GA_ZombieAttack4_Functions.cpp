#include "pch.h"
#include "SDK.h"

void UGA_ZombieAttack4_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ZombieAttack4.GA_ZombieAttack4_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_ZombieAttack4_C::ExecuteUbergraph_GA_ZombieAttack4(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ZombieAttack4.GA_ZombieAttack4_C.ExecuteUbergraph_GA_ZombieAttack4");

	FExecuteUbergraph_GA_ZombieAttack4 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

