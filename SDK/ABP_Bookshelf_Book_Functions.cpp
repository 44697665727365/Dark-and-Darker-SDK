#include "pch.h"
#include "SDK.h"

void UABP_Bookshelf_Book_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Bookshelf_Book.ABP_Bookshelf_Book_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_Bookshelf_Book_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bookshelf_Book_AnimGraphNode_TransitionResult_27D14B364D8EC7902AB6B3A98F633CE5(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Bookshelf_Book.ABP_Bookshelf_Book_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bookshelf_Book_AnimGraphNode_TransitionResult_27D14B364D8EC7902AB6B3A98F633CE5");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bookshelf_Book_AnimGraphNode_TransitionResult_27D14B364D8EC7902AB6B3A98F633CE5 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Bookshelf_Book_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bookshelf_Book_AnimGraphNode_TransitionResult_705C87B44CC02000F7AA5DA14D5E6315(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Bookshelf_Book.ABP_Bookshelf_Book_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bookshelf_Book_AnimGraphNode_TransitionResult_705C87B44CC02000F7AA5DA14D5E6315");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bookshelf_Book_AnimGraphNode_TransitionResult_705C87B44CC02000F7AA5DA14D5E6315 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Bookshelf_Book_C::ExecuteUbergraph_ABP_Bookshelf_Book(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Bookshelf_Book.ABP_Bookshelf_Book_C.ExecuteUbergraph_ABP_Bookshelf_Book");

	FExecuteUbergraph_ABP_Bookshelf_Book parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

