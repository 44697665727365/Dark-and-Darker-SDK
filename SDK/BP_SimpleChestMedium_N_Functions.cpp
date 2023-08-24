#include "pch.h"
#include "SDK.h"

void ABP_SimpleChestMedium_N_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SimpleChestMedium_N.BP_SimpleChestMedium_N_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SimpleChestMedium_N_C::ExecuteUbergraph_BP_SimpleChestMedium_N(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SimpleChestMedium_N.BP_SimpleChestMedium_N_C.ExecuteUbergraph_BP_SimpleChestMedium_N");

	FExecuteUbergraph_BP_SimpleChestMedium_N parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

