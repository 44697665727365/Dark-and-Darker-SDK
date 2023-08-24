#include "pch.h"
#include "SDK.h"

void ABP_TrapBase_StaticMesh_C::OnTrapDetectingByInteract(bool IsDetecting){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TrapBase_StaticMesh.BP_TrapBase_StaticMesh_C.OnTrapDetectingByInteract");

	FOnTrapDetectingByInteract parms{};	
	parms.IsDetecting = IsDetecting;

	ProcessEvent(fn, &parms);
}

void ABP_TrapBase_StaticMesh_C::OffTrapDetecting(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TrapBase_StaticMesh.BP_TrapBase_StaticMesh_C.OffTrapDetecting");

	FOffTrapDetecting parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_TrapBase_StaticMesh_C::OnTrapDetecting(bool IsDetecting, struct FAccountDataReplication AccountDataReplication){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TrapBase_StaticMesh.BP_TrapBase_StaticMesh_C.OnTrapDetecting");

	FOnTrapDetecting parms{};	
	parms.IsDetecting = IsDetecting;
	parms.AccountDataReplication = AccountDataReplication;

	ProcessEvent(fn, &parms);
}

void ABP_TrapBase_StaticMesh_C::UpdateInteractDepthValue(int32_t DepthValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TrapBase_StaticMesh.BP_TrapBase_StaticMesh_C.UpdateInteractDepthValue");

	FUpdateInteractDepthValue parms{};	
	parms.DepthValue = DepthValue;

	ProcessEvent(fn, &parms);
}

void ABP_TrapBase_StaticMesh_C::BndEvt__BP_HuntingTrapProp_DCTagCollisionDetector_K2Node_ComponentBoundEvent_3_GameplayTagCollisionDetectedSignature__DelegateSignature(bool bDetected, struct FAccountDataReplication AccountDataReplication){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TrapBase_StaticMesh.BP_TrapBase_StaticMesh_C.BndEvt__BP_HuntingTrapProp_DCTagCollisionDetector_K2Node_ComponentBoundEvent_3_GameplayTagCollisionDetectedSignature__DelegateSignature");

	FBndEvt__BP_HuntingTrapProp_DCTagCollisionDetector_K2Node_ComponentBoundEvent_3_GameplayTagCollisionDetectedSignature__DelegateSignature parms{};	
	parms.bDetected = bDetected;
	parms.AccountDataReplication = AccountDataReplication;

	ProcessEvent(fn, &parms);
}

void ABP_TrapBase_StaticMesh_C::ExecuteUbergraph_BP_TrapBase_StaticMesh(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TrapBase_StaticMesh.BP_TrapBase_StaticMesh_C.ExecuteUbergraph_BP_TrapBase_StaticMesh");

	FExecuteUbergraph_BP_TrapBase_StaticMesh parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

