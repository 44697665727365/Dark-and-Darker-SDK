#include "pch.h"
#include "SDK.h"

void UABP_Bookshelf_A_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Bookshelf_A.ABP_Bookshelf_A_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_Bookshelf_A_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bookshelf_A_AnimGraphNode_TransitionResult_F1F6277C4C36C2FB1063B8AEE6BE33D1(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Bookshelf_A.ABP_Bookshelf_A_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bookshelf_A_AnimGraphNode_TransitionResult_F1F6277C4C36C2FB1063B8AEE6BE33D1");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bookshelf_A_AnimGraphNode_TransitionResult_F1F6277C4C36C2FB1063B8AEE6BE33D1 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Bookshelf_A_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bookshelf_A_AnimGraphNode_TransitionResult_BD55F20D4CDF3591B082ECA5AF771BC6(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Bookshelf_A.ABP_Bookshelf_A_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bookshelf_A_AnimGraphNode_TransitionResult_BD55F20D4CDF3591B082ECA5AF771BC6");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bookshelf_A_AnimGraphNode_TransitionResult_BD55F20D4CDF3591B082ECA5AF771BC6 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Bookshelf_A_C::ExecuteUbergraph_ABP_Bookshelf_A(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Bookshelf_A.ABP_Bookshelf_A_C.ExecuteUbergraph_ABP_Bookshelf_A");

	FExecuteUbergraph_ABP_Bookshelf_A parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

