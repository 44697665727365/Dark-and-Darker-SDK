#include "pch.h"
#include "SDK.h"

void ABP_OrnateChestLarge_N_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_OrnateChestLarge_N.BP_OrnateChestLarge_N_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_OrnateChestLarge_N_C::ExecuteUbergraph_BP_OrnateChestLarge_N(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_OrnateChestLarge_N.BP_OrnateChestLarge_N_C.ExecuteUbergraph_BP_OrnateChestLarge_N");

	FExecuteUbergraph_BP_OrnateChestLarge_N parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

