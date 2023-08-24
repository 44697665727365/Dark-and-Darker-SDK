#include "pch.h"
#include "SDK.h"

void UGA_DemonBat_HangToFlying_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonBat_HangToFlying.GA_DemonBat_HangToFlying_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_DemonBat_HangToFlying_C::ExecuteUbergraph_GA_DemonBat_HangToFlying(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonBat_HangToFlying.GA_DemonBat_HangToFlying_C.ExecuteUbergraph_GA_DemonBat_HangToFlying");

	FExecuteUbergraph_GA_DemonBat_HangToFlying parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

