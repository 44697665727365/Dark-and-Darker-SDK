#include "pch.h"
#include "SDK.h"

void ABP_DestructionField_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DestructionField.BP_DestructionField_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DestructionField_C::ExecuteUbergraph_BP_DestructionField(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DestructionField.BP_DestructionField_C.ExecuteUbergraph_BP_DestructionField");

	FExecuteUbergraph_BP_DestructionField parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

