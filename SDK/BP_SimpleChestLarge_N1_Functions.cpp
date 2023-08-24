#include "pch.h"
#include "SDK.h"

void ABP_SimpleChestLarge_N1_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SimpleChestLarge_N1.BP_SimpleChestLarge_N1_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SimpleChestLarge_N1_C::ExecuteUbergraph_BP_SimpleChestLarge_N1(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SimpleChestLarge_N1.BP_SimpleChestLarge_N1_C.ExecuteUbergraph_BP_SimpleChestLarge_N1");

	FExecuteUbergraph_BP_SimpleChestLarge_N1 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

