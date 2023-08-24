#include "pch.h"
#include "SDK.h"

void ABP_WoodChestSmall_N2_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_WoodChestSmall_N2.BP_WoodChestSmall_N2_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_WoodChestSmall_N2_C::ExecuteUbergraph_BP_WoodChestSmall_N2(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_WoodChestSmall_N2.BP_WoodChestSmall_N2_C.ExecuteUbergraph_BP_WoodChestSmall_N2");

	FExecuteUbergraph_BP_WoodChestSmall_N2 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

