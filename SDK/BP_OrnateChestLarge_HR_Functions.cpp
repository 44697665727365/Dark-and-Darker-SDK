#include "pch.h"
#include "SDK.h"

void ABP_OrnateChestLarge_HR_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_OrnateChestLarge_HR.BP_OrnateChestLarge_HR_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_OrnateChestLarge_HR_C::ExecuteUbergraph_BP_OrnateChestLarge_HR(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_OrnateChestLarge_HR.BP_OrnateChestLarge_HR_C.ExecuteUbergraph_BP_OrnateChestLarge_HR");

	FExecuteUbergraph_BP_OrnateChestLarge_HR parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

