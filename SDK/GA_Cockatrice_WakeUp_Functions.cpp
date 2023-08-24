#include "pch.h"
#include "SDK.h"

void UGA_Cockatrice_WakeUp_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Cockatrice_WakeUp.GA_Cockatrice_WakeUp_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_Cockatrice_WakeUp_C::ExecuteUbergraph_GA_Cockatrice_WakeUp(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Cockatrice_WakeUp.GA_Cockatrice_WakeUp_C.ExecuteUbergraph_GA_Cockatrice_WakeUp");

	FExecuteUbergraph_GA_Cockatrice_WakeUp parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

