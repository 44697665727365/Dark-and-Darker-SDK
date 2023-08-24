#include "pch.h"
#include "SDK.h"

void ABP_TrapBase_C::OnTrapDetectingByInteract(bool IsDetecting){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TrapBase.BP_TrapBase_C.OnTrapDetectingByInteract");

	FOnTrapDetectingByInteract parms{};	
	parms.IsDetecting = IsDetecting;

	ProcessEvent(fn, &parms);
}

void ABP_TrapBase_C::OffTrapDetecting(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TrapBase.BP_TrapBase_C.OffTrapDetecting");

	FOffTrapDetecting parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_TrapBase_C::OnTrapDetecting(bool IsDetecting, struct FAccountDataReplication AccountDataReplication){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TrapBase.BP_TrapBase_C.OnTrapDetecting");

	FOnTrapDetecting parms{};	
	parms.IsDetecting = IsDetecting;
	parms.AccountDataReplication = AccountDataReplication;

	ProcessEvent(fn, &parms);
}

void ABP_TrapBase_C::UpdateInteractDepthValue(int32_t DepthValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TrapBase.BP_TrapBase_C.UpdateInteractDepthValue");

	FUpdateInteractDepthValue parms{};	
	parms.DepthValue = DepthValue;

	ProcessEvent(fn, &parms);
}

void ABP_TrapBase_C::BndEvt__BP_HuntingTrapProp_DCTagCollisionDetector_K2Node_ComponentBoundEvent_3_GameplayTagCollisionDetectedSignature__DelegateSignature(bool bDetected, struct FAccountDataReplication AccountDataReplication){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TrapBase.BP_TrapBase_C.BndEvt__BP_HuntingTrapProp_DCTagCollisionDetector_K2Node_ComponentBoundEvent_3_GameplayTagCollisionDetectedSignature__DelegateSignature");

	FBndEvt__BP_HuntingTrapProp_DCTagCollisionDetector_K2Node_ComponentBoundEvent_3_GameplayTagCollisionDetectedSignature__DelegateSignature parms{};	
	parms.bDetected = bDetected;
	parms.AccountDataReplication = AccountDataReplication;

	ProcessEvent(fn, &parms);
}

void ABP_TrapBase_C::ExecuteUbergraph_BP_TrapBase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TrapBase.BP_TrapBase_C.ExecuteUbergraph_BP_TrapBase");

	FExecuteUbergraph_BP_TrapBase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

