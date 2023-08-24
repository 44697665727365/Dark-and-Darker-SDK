#include "pch.h"
#include "SDK.h"

void UABP_SkeletonCorpse_02_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonCorpse_02.ABP_SkeletonCorpse_02_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_SkeletonCorpse_02_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SkeletonCorpse_02_AnimGraphNode_TransitionResult_92C4A85B4318D966CCA97D93579D4C8A(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonCorpse_02.ABP_SkeletonCorpse_02_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SkeletonCorpse_02_AnimGraphNode_TransitionResult_92C4A85B4318D966CCA97D93579D4C8A");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SkeletonCorpse_02_AnimGraphNode_TransitionResult_92C4A85B4318D966CCA97D93579D4C8A parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_SkeletonCorpse_02_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SkeletonCorpse_02_AnimGraphNode_TransitionResult_BADE66AD43DE4A609683EB93F24C146C(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonCorpse_02.ABP_SkeletonCorpse_02_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SkeletonCorpse_02_AnimGraphNode_TransitionResult_BADE66AD43DE4A609683EB93F24C146C");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SkeletonCorpse_02_AnimGraphNode_TransitionResult_BADE66AD43DE4A609683EB93F24C146C parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_SkeletonCorpse_02_C::ExecuteUbergraph_ABP_SkeletonCorpse_02(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonCorpse_02.ABP_SkeletonCorpse_02_C.ExecuteUbergraph_ABP_SkeletonCorpse_02");

	FExecuteUbergraph_ABP_SkeletonCorpse_02 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

