#include "pch.h"
#include "SDK.h"

void ABP_WoodenDoorArched_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_WoodenDoorArched.BP_WoodenDoorArched_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_WoodenDoorArched_C::ExecuteUbergraph_BP_WoodenDoorArched(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_WoodenDoorArched.BP_WoodenDoorArched_C.ExecuteUbergraph_BP_WoodenDoorArched");

	FExecuteUbergraph_BP_WoodenDoorArched parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

