#include "pch.h"
#include "SDK.h"

void ABP_HuntingTrapReticle_C::SetReticleMaterialParamVector(struct FName ParamName, struct FVector Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_HuntingTrapReticle.BP_HuntingTrapReticle_C.SetReticleMaterialParamVector");

	FSetReticleMaterialParamVector parms{};	
	parms.ParamName = ParamName;
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

void ABP_HuntingTrapReticle_C::ExecuteUbergraph_BP_HuntingTrapReticle(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_HuntingTrapReticle.BP_HuntingTrapReticle_C.ExecuteUbergraph_BP_HuntingTrapReticle");

	FExecuteUbergraph_BP_HuntingTrapReticle parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

