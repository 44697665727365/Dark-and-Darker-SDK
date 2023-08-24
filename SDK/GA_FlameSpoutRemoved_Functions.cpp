#include "pch.h"
#include "SDK.h"

void UGA_FlameSpoutRemoved_C::K2_ActivateAbility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_FlameSpoutRemoved.GA_FlameSpoutRemoved_C.K2_ActivateAbility");

	FK2_ActivateAbility parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_FlameSpoutRemoved_C::ExecuteUbergraph_GA_FlameSpoutRemoved(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_FlameSpoutRemoved.GA_FlameSpoutRemoved_C.ExecuteUbergraph_GA_FlameSpoutRemoved");

	FExecuteUbergraph_GA_FlameSpoutRemoved parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

