#include "pch.h"
#include "SDK.h"

void UABP_GoblinWarrior_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_GoblinWarrior.ABP_GoblinWarrior_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_GoblinWarrior_C::BlueprintThreadSafeUpdateAnimation(float DeltaTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_GoblinWarrior.ABP_GoblinWarrior_C.BlueprintThreadSafeUpdateAnimation");

	FBlueprintThreadSafeUpdateAnimation parms{};	
	parms.DeltaTime = DeltaTime;

	ProcessEvent(fn, &parms);
}

void UABP_GoblinWarrior_C::OnRep_Deadbody Index(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_GoblinWarrior.ABP_GoblinWarrior_C.OnRep_Deadbody Index");

	FOnRep_Deadbody Index parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_GoblinWarrior_C::ExecuteUbergraph_ABP_GoblinWarrior(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_GoblinWarrior.ABP_GoblinWarrior_C.ExecuteUbergraph_ABP_GoblinWarrior");

	FExecuteUbergraph_ABP_GoblinWarrior parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

