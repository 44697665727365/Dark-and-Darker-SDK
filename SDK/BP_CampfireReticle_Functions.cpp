#include "pch.h"
#include "SDK.h"

void ABP_CampfireReticle_C::SetReticleMaterialParamVector(struct FName ParamName, struct FVector Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_CampfireReticle.BP_CampfireReticle_C.SetReticleMaterialParamVector");

	FSetReticleMaterialParamVector parms{};	
	parms.ParamName = ParamName;
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

void ABP_CampfireReticle_C::ExecuteUbergraph_BP_CampfireReticle(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_CampfireReticle.BP_CampfireReticle_C.ExecuteUbergraph_BP_CampfireReticle");

	FExecuteUbergraph_BP_CampfireReticle parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

