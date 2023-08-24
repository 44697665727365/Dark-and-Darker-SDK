#include "pch.h"
#include "SDK.h"

void UGA_GiantWorm_Attack_SwingBody_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantWorm_Attack_SwingBody.GA_GiantWorm_Attack_SwingBody_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GiantWorm_Attack_SwingBody_C::ExecuteUbergraph_GA_GiantWorm_Attack_SwingBody(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantWorm_Attack_SwingBody.GA_GiantWorm_Attack_SwingBody_C.ExecuteUbergraph_GA_GiantWorm_Attack_SwingBody");

	FExecuteUbergraph_GA_GiantWorm_Attack_SwingBody parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

