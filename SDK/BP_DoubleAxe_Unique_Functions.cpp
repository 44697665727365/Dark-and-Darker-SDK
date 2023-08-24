#include "pch.h"
#include "SDK.h"

void ABP_DoubleAxe_Unique_C::Activate(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DoubleAxe_Unique.BP_DoubleAxe_Unique_C.Activate");

	FActivate parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DoubleAxe_Unique_C::Deactivate(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DoubleAxe_Unique.BP_DoubleAxe_Unique_C.Deactivate");

	FDeactivate parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DoubleAxe_Unique_C::ExecuteUbergraph_BP_DoubleAxe_Unique(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DoubleAxe_Unique.BP_DoubleAxe_Unique_C.ExecuteUbergraph_BP_DoubleAxe_Unique");

	FExecuteUbergraph_BP_DoubleAxe_Unique parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

