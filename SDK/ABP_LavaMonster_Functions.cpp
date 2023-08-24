#include "pch.h"
#include "SDK.h"

void UABP_LavaMonster_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_LavaMonster.ABP_LavaMonster_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_LavaMonster_C::ExecuteUbergraph_ABP_LavaMonster(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_LavaMonster.ABP_LavaMonster_C.ExecuteUbergraph_ABP_LavaMonster");

	FExecuteUbergraph_ABP_LavaMonster parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

