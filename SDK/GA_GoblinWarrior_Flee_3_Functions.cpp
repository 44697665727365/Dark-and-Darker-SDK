#include "pch.h"
#include "SDK.h"

void UGA_GoblinWarrior_Flee_2_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinWarrior_Flee_3.GA_GoblinWarrior_Flee_2_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinWarrior_Flee_2_C::ExecuteUbergraph_GA_GoblinWarrior_Flee_3(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinWarrior_Flee_3.GA_GoblinWarrior_Flee_2_C.ExecuteUbergraph_GA_GoblinWarrior_Flee_3");

	FExecuteUbergraph_GA_GoblinWarrior_Flee_3 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

