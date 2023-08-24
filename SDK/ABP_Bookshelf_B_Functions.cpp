#include "pch.h"
#include "SDK.h"

void UABP_Bookshelf_B_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Bookshelf_B.ABP_Bookshelf_B_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_Bookshelf_B_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bookshelf_B_AnimGraphNode_TransitionResult_6ECCFC214A6BFB7764CB83B9E391049B(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Bookshelf_B.ABP_Bookshelf_B_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bookshelf_B_AnimGraphNode_TransitionResult_6ECCFC214A6BFB7764CB83B9E391049B");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bookshelf_B_AnimGraphNode_TransitionResult_6ECCFC214A6BFB7764CB83B9E391049B parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Bookshelf_B_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bookshelf_B_AnimGraphNode_TransitionResult_C48DF99B432D5ECA75BF9D829F617198(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Bookshelf_B.ABP_Bookshelf_B_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bookshelf_B_AnimGraphNode_TransitionResult_C48DF99B432D5ECA75BF9D829F617198");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bookshelf_B_AnimGraphNode_TransitionResult_C48DF99B432D5ECA75BF9D829F617198 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Bookshelf_B_C::ExecuteUbergraph_ABP_Bookshelf_B(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Bookshelf_B.ABP_Bookshelf_B_C.ExecuteUbergraph_ABP_Bookshelf_B");

	FExecuteUbergraph_ABP_Bookshelf_B parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

