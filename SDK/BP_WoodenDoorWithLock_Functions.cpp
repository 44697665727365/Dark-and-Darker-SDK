#include "pch.h"
#include "SDK.h"

void ABP_WoodenDoorWithLock_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_WoodenDoorWithLock.BP_WoodenDoorWithLock_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_WoodenDoorWithLock_C::ExecuteUbergraph_BP_WoodenDoorWithLock(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_WoodenDoorWithLock.BP_WoodenDoorWithLock_C.ExecuteUbergraph_BP_WoodenDoorWithLock");

	FExecuteUbergraph_BP_WoodenDoorWithLock parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

