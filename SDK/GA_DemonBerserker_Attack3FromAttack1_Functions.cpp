#include "pch.h"
#include "SDK.h"

void UGA_DemonBerserker_Attack3FromAttack1_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonBerserker_Attack3FromAttack1.GA_DemonBerserker_Attack3FromAttack1_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_DemonBerserker_Attack3FromAttack1_C::ExecuteUbergraph_GA_DemonBerserker_Attack3FromAttack1(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonBerserker_Attack3FromAttack1.GA_DemonBerserker_Attack3FromAttack1_C.ExecuteUbergraph_GA_DemonBerserker_Attack3FromAttack1");

	FExecuteUbergraph_GA_DemonBerserker_Attack3FromAttack1 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

