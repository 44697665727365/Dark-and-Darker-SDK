#include "pch.h"
#include "SDK.h"

void ABP_OrnateChestSmall_HR2_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_OrnateChestSmall_HR2.BP_OrnateChestSmall_HR2_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_OrnateChestSmall_HR2_C::ExecuteUbergraph_BP_OrnateChestSmall_HR2(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_OrnateChestSmall_HR2.BP_OrnateChestSmall_HR2_C.ExecuteUbergraph_BP_OrnateChestSmall_HR2");

	FExecuteUbergraph_BP_OrnateChestSmall_HR2 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

