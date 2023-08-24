#include "pch.h"
#include "SDK.h"

void ABP_OrnateChestMedium_HR2_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_OrnateChestMedium_HR2.BP_OrnateChestMedium_HR2_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_OrnateChestMedium_HR2_C::ExecuteUbergraph_BP_OrnateChestMedium_HR2(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_OrnateChestMedium_HR2.BP_OrnateChestMedium_HR2_C.ExecuteUbergraph_BP_OrnateChestMedium_HR2");

	FExecuteUbergraph_BP_OrnateChestMedium_HR2 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

