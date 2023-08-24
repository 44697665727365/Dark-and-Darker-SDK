#include "pch.h"
#include "SDK.h"

void ABP_WoodChestSmall_HR_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_WoodChestSmall_HR.BP_WoodChestSmall_HR_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_WoodChestSmall_HR_C::ExecuteUbergraph_BP_WoodChestSmall_HR(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_WoodChestSmall_HR.BP_WoodChestSmall_HR_C.ExecuteUbergraph_BP_WoodChestSmall_HR");

	FExecuteUbergraph_BP_WoodChestSmall_HR parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

