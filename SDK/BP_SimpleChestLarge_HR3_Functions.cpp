#include "pch.h"
#include "SDK.h"

void ABP_SimpleChestLarge_HR3_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SimpleChestLarge_HR3.BP_SimpleChestLarge_HR3_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SimpleChestLarge_HR3_C::ExecuteUbergraph_BP_SimpleChestLarge_HR3(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SimpleChestLarge_HR3.BP_SimpleChestLarge_HR3_C.ExecuteUbergraph_BP_SimpleChestLarge_HR3");

	FExecuteUbergraph_BP_SimpleChestLarge_HR3 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

