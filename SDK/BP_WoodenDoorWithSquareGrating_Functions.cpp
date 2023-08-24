#include "pch.h"
#include "SDK.h"

void ABP_WoodenDoorWithSquareGrating_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_WoodenDoorWithSquareGrating.BP_WoodenDoorWithSquareGrating_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_WoodenDoorWithSquareGrating_C::DestructClient(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_WoodenDoorWithSquareGrating.BP_WoodenDoorWithSquareGrating_C.DestructClient");

	FDestructClient parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_WoodenDoorWithSquareGrating_C::ExecuteUbergraph_BP_WoodenDoorWithSquareGrating(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_WoodenDoorWithSquareGrating.BP_WoodenDoorWithSquareGrating_C.ExecuteUbergraph_BP_WoodenDoorWithSquareGrating");

	FExecuteUbergraph_BP_WoodenDoorWithSquareGrating parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

