#include "pch.h"
#include "SDK.h"

void UABP_SkeletonCorpse_01_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonCorpse_01.ABP_SkeletonCorpse_01_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_SkeletonCorpse_01_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SkeletonCorpse_01_AnimGraphNode_TransitionResult_AD5A656C47A76191A1415CB0DB07D2D9(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonCorpse_01.ABP_SkeletonCorpse_01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SkeletonCorpse_01_AnimGraphNode_TransitionResult_AD5A656C47A76191A1415CB0DB07D2D9");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SkeletonCorpse_01_AnimGraphNode_TransitionResult_AD5A656C47A76191A1415CB0DB07D2D9 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_SkeletonCorpse_01_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SkeletonCorpse_01_AnimGraphNode_TransitionResult_254BFF274CFC7AF3557BADA5F2E6D08C(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonCorpse_01.ABP_SkeletonCorpse_01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SkeletonCorpse_01_AnimGraphNode_TransitionResult_254BFF274CFC7AF3557BADA5F2E6D08C");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SkeletonCorpse_01_AnimGraphNode_TransitionResult_254BFF274CFC7AF3557BADA5F2E6D08C parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_SkeletonCorpse_01_C::ExecuteUbergraph_ABP_SkeletonCorpse_01(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_SkeletonCorpse_01.ABP_SkeletonCorpse_01_C.ExecuteUbergraph_ABP_SkeletonCorpse_01");

	FExecuteUbergraph_ABP_SkeletonCorpse_01 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

