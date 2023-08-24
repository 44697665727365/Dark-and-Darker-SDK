#include "pch.h"
#include "SDK.h"

void ABP_DoubleWoodenDoor_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DoubleWoodenDoor.BP_DoubleWoodenDoor_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DoubleWoodenDoor_C::ExecuteUbergraph_BP_DoubleWoodenDoor(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DoubleWoodenDoor.BP_DoubleWoodenDoor_C.ExecuteUbergraph_BP_DoubleWoodenDoor");

	FExecuteUbergraph_BP_DoubleWoodenDoor parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

