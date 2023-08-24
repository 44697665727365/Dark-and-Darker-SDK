#include "pch.h"
#include "SDK.h"

void ABP_FootTrace_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FootTrace.BP_FootTrace_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_FootTrace_C::ReceiveTick(float DeltaSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FootTrace.BP_FootTrace_C.ReceiveTick");

	FReceiveTick parms{};	
	parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(fn, &parms);
}

void ABP_FootTrace_C::BndEvt__BP_Footprint_DCTagCollisionDetector_K2Node_ComponentBoundEvent_0_GameplayTagCollisionDetectedSignature__DelegateSignature(bool bDetected, struct FAccountDataReplication AccountDataReplication){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FootTrace.BP_FootTrace_C.BndEvt__BP_Footprint_DCTagCollisionDetector_K2Node_ComponentBoundEvent_0_GameplayTagCollisionDetectedSignature__DelegateSignature");

	FBndEvt__BP_Footprint_DCTagCollisionDetector_K2Node_ComponentBoundEvent_0_GameplayTagCollisionDetectedSignature__DelegateSignature parms{};	
	parms.bDetected = bDetected;
	parms.AccountDataReplication = AccountDataReplication;

	ProcessEvent(fn, &parms);
}

void ABP_FootTrace_C::ExecuteUbergraph_BP_FootTrace(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FootTrace.BP_FootTrace_C.ExecuteUbergraph_BP_FootTrace");

	FExecuteUbergraph_BP_FootTrace parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

