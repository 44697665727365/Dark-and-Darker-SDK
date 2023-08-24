#include "pch.h"
#include "SDK.h"

void UGA_DemonBerserker_Attack3FromIdle_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonBerserker_Attack3FromIdle.GA_DemonBerserker_Attack3FromIdle_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_DemonBerserker_Attack3FromIdle_C::ExecuteUbergraph_GA_DemonBerserker_Attack3FromIdle(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonBerserker_Attack3FromIdle.GA_DemonBerserker_Attack3FromIdle_C.ExecuteUbergraph_GA_DemonBerserker_Attack3FromIdle");

	FExecuteUbergraph_GA_DemonBerserker_Attack3FromIdle parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

