#include "pch.h"
#include "SDK.h"

void UBP_GameInstance_C::ReceiveInit(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.ReceiveInit");

	FReceiveInit parms{};	

	ProcessEvent(fn, &parms);
}

void UBP_GameInstance_C::ExecuteUbergraph_BP_GameInstance(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.ExecuteUbergraph_BP_GameInstance");

	FExecuteUbergraph_BP_GameInstance parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

