#include "pch.h"
#include "SDK.h"

void UABP_Zombie_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_Zombie_C::BlueprintUpdateAnimation(float DeltaTimeX){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.BlueprintUpdateAnimation");

	FBlueprintUpdateAnimation parms{};	
	parms.DeltaTimeX = DeltaTimeX;

	ProcessEvent(fn, &parms);
}

void UABP_Zombie_C::ExecuteUbergraph_ABP_Zombie(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.ExecuteUbergraph_ABP_Zombie");

	FExecuteUbergraph_ABP_Zombie parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

