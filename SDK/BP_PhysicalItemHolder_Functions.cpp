#include "pch.h"
#include "SDK.h"

void ABP_PhysicalItemHolder_C::UserConstructionScript(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PhysicalItemHolder.BP_PhysicalItemHolder_C.UserConstructionScript");

	FUserConstructionScript parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_PhysicalItemHolder_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PhysicalItemHolder.BP_PhysicalItemHolder_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_PhysicalItemHolder_C::ExecuteUbergraph_BP_PhysicalItemHolder(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PhysicalItemHolder.BP_PhysicalItemHolder_C.ExecuteUbergraph_BP_PhysicalItemHolder");

	FExecuteUbergraph_BP_PhysicalItemHolder parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

