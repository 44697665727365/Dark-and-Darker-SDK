#include "pch.h"
#include "SDK.h"

void UGA_SpawnAoe_C::K2_ActivateAbility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SpawnAoe.GA_SpawnAoe_C.K2_ActivateAbility");

	FK2_ActivateAbility parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_SpawnAoe_C::ExecuteUbergraph_GA_SpawnAoe(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SpawnAoe.GA_SpawnAoe_C.ExecuteUbergraph_GA_SpawnAoe");

	FExecuteUbergraph_GA_SpawnAoe parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

