#include "pch.h"
#include "SDK.h"

void UGA_OreDestruction_C::K2_ActivateAbility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_OreDestruction.GA_OreDestruction_C.K2_ActivateAbility");

	FK2_ActivateAbility parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_OreDestruction_C::ExecuteUbergraph_GA_OreDestruction(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_OreDestruction.GA_OreDestruction_C.ExecuteUbergraph_GA_OreDestruction");

	FExecuteUbergraph_GA_OreDestruction parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

