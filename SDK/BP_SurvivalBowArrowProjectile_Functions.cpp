#include "pch.h"
#include "SDK.h"

void ABP_SurvivalBowArrowProjectile_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SurvivalBowArrowProjectile.BP_SurvivalBowArrowProjectile_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SurvivalBowArrowProjectile_C::ExecuteUbergraph_BP_SurvivalBowArrowProjectile(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SurvivalBowArrowProjectile.BP_SurvivalBowArrowProjectile_C.ExecuteUbergraph_BP_SurvivalBowArrowProjectile");

	FExecuteUbergraph_BP_SurvivalBowArrowProjectile parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

