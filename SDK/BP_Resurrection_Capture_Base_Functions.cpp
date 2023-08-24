#include "pch.h"
#include "SDK.h"

void ABP_Resurrection_Capture_Base_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Resurrection_Capture_Base.BP_Resurrection_Capture_Base_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Resurrection_Capture_Base_C::ExecuteUbergraph_BP_Resurrection_Capture_Base(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Resurrection_Capture_Base.BP_Resurrection_Capture_Base_C.ExecuteUbergraph_BP_Resurrection_Capture_Base");

	FExecuteUbergraph_BP_Resurrection_Capture_Base parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

