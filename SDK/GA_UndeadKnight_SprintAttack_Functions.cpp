#include "pch.h"
#include "SDK.h"

void UGA_UndeadKnight_SprintAttack_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UndeadKnight_SprintAttack.GA_UndeadKnight_SprintAttack_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_UndeadKnight_SprintAttack_C::ExecuteUbergraph_GA_UndeadKnight_SprintAttack(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UndeadKnight_SprintAttack.GA_UndeadKnight_SprintAttack_C.ExecuteUbergraph_GA_UndeadKnight_SprintAttack");

	FExecuteUbergraph_GA_UndeadKnight_SprintAttack parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

