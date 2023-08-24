#include "pch.h"
#include "SDK.h"

void ABP_Wraith_Elite_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Wraith_Elite.BP_Wraith_Elite_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Wraith_Elite_C::ExecuteUbergraph_BP_Wraith_Elite(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Wraith_Elite.BP_Wraith_Elite_C.ExecuteUbergraph_BP_Wraith_Elite");

	FExecuteUbergraph_BP_Wraith_Elite parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

