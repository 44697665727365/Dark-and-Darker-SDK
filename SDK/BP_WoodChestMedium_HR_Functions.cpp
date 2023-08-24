#include "pch.h"
#include "SDK.h"

void ABP_WoodChestMedium_HR_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_WoodChestMedium_HR.BP_WoodChestMedium_HR_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_WoodChestMedium_HR_C::ExecuteUbergraph_BP_WoodChestMedium_HR(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_WoodChestMedium_HR.BP_WoodChestMedium_HR_C.ExecuteUbergraph_BP_WoodChestMedium_HR");

	FExecuteUbergraph_BP_WoodChestMedium_HR parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

