#include "pch.h"
#include "SDK.h"

void ABP_SimpleChestSmall_HR_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SimpleChestSmall_HR.BP_SimpleChestSmall_HR_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SimpleChestSmall_HR_C::ExecuteUbergraph_BP_SimpleChestSmall_HR(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SimpleChestSmall_HR.BP_SimpleChestSmall_HR_C.ExecuteUbergraph_BP_SimpleChestSmall_HR");

	FExecuteUbergraph_BP_SimpleChestSmall_HR parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

