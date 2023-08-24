#include "pch.h"
#include "SDK.h"

void UABP_GoblinBolaslinger_Bolas_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_GoblinBolaslinger_Bolas.ABP_GoblinBolaslinger_Bolas_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_GoblinBolaslinger_Bolas_C::ExecuteUbergraph_ABP_GoblinBolaslinger_Bolas(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_GoblinBolaslinger_Bolas.ABP_GoblinBolaslinger_Bolas_C.ExecuteUbergraph_ABP_GoblinBolaslinger_Bolas");

	FExecuteUbergraph_ABP_GoblinBolaslinger_Bolas parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

