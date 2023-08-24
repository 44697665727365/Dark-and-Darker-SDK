#include "pch.h"
#include "SDK.h"

void UGA_Slime_Attack_Up_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Slime_Attack_Up.GA_Slime_Attack_Up_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_Slime_Attack_Up_C::ExecuteUbergraph_GA_Slime_Attack_Up(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Slime_Attack_Up.GA_Slime_Attack_Up_C.ExecuteUbergraph_GA_Slime_Attack_Up");

	FExecuteUbergraph_GA_Slime_Attack_Up parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

