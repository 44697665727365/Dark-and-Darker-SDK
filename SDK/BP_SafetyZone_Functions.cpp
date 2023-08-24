#include "pch.h"
#include "SDK.h"

void ABP_SafetyZone_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SafetyZone.BP_SafetyZone_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SafetyZone_C::OnBegin(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SafetyZone.BP_SafetyZone_C.OnBegin");

	FOnBegin parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SafetyZone_C::ExecuteUbergraph_BP_SafetyZone(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SafetyZone.BP_SafetyZone_C.ExecuteUbergraph_BP_SafetyZone");

	FExecuteUbergraph_BP_SafetyZone parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

