#include "pch.h"
#include "SDK.h"

void ABP_PropsVolume_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PropsVolume.BP_PropsVolume_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_PropsVolume_C::OnBegin(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PropsVolume.BP_PropsVolume_C.OnBegin");

	FOnBegin parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_PropsVolume_C::ExecuteUbergraph_BP_PropsVolume(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PropsVolume.BP_PropsVolume_C.ExecuteUbergraph_BP_PropsVolume");

	FExecuteUbergraph_BP_PropsVolume parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

