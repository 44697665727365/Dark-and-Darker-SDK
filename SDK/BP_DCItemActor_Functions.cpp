#include "pch.h"
#include "SDK.h"

void ABP_DCItemActor_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCItemActor.BP_DCItemActor_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DCItemActor_C::ReceiveTick(float DeltaSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCItemActor.BP_DCItemActor_C.ReceiveTick");

	FReceiveTick parms{};	
	parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(fn, &parms);
}

void ABP_DCItemActor_C::ExecuteUbergraph_BP_DCItemActor(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCItemActor.BP_DCItemActor_C.ExecuteUbergraph_BP_DCItemActor");

	FExecuteUbergraph_BP_DCItemActor parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

