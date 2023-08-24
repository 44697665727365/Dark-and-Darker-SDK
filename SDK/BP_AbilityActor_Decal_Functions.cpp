#include "pch.h"
#include "SDK.h"

void ABP_AbilityActor_Decal_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_AbilityActor_Decal.BP_AbilityActor_Decal_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_AbilityActor_Decal_C::SetReticleMaterialParamVector(struct FName ParamName, struct FVector Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_AbilityActor_Decal.BP_AbilityActor_Decal_C.SetReticleMaterialParamVector");

	FSetReticleMaterialParamVector parms{};	
	parms.ParamName = ParamName;
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

void ABP_AbilityActor_Decal_C::OnParametersInitialized(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_AbilityActor_Decal.BP_AbilityActor_Decal_C.OnParametersInitialized");

	FOnParametersInitialized parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_AbilityActor_Decal_C::ExecuteUbergraph_BP_AbilityActor_Decal(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_AbilityActor_Decal.BP_AbilityActor_Decal_C.ExecuteUbergraph_BP_AbilityActor_Decal");

	FExecuteUbergraph_BP_AbilityActor_Decal parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

