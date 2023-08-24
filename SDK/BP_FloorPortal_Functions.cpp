#include "pch.h"
#include "SDK.h"

void ABP_FloorPortal_C::UserConstructionScript(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FloorPortal.BP_FloorPortal_C.UserConstructionScript");

	FUserConstructionScript parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_FloorPortal_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FloorPortal.BP_FloorPortal_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_FloorPortal_C::ExecuteUbergraph_BP_FloorPortal(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FloorPortal.BP_FloorPortal_C.ExecuteUbergraph_BP_FloorPortal");

	FExecuteUbergraph_BP_FloorPortal parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

