#include "pch.h"
#include "SDK.h"

void UABP_Lantern_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Lantern.ABP_Lantern_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_Lantern_C::BlueprintThreadSafeUpdateAnimation(float DeltaTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Lantern.ABP_Lantern_C.BlueprintThreadSafeUpdateAnimation");

	FBlueprintThreadSafeUpdateAnimation parms{};	
	parms.DeltaTime = DeltaTime;

	ProcessEvent(fn, &parms);
}

void UABP_Lantern_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lantern_AnimGraphNode_ModifyBone_35AE8B904B7BCEEC064A8D86A8175F6F(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Lantern.ABP_Lantern_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lantern_AnimGraphNode_ModifyBone_35AE8B904B7BCEEC064A8D86A8175F6F");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lantern_AnimGraphNode_ModifyBone_35AE8B904B7BCEEC064A8D86A8175F6F parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Lantern_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lantern_AnimGraphNode_BlendListByBool_01D67BD44B9852EF767DA5931A92ECC2(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Lantern.ABP_Lantern_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lantern_AnimGraphNode_BlendListByBool_01D67BD44B9852EF767DA5931A92ECC2");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lantern_AnimGraphNode_BlendListByBool_01D67BD44B9852EF767DA5931A92ECC2 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Lantern_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lantern_AnimGraphNode_SequencePlayer_E122A4D948C5D31C9899F2BF10F6E186(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Lantern.ABP_Lantern_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lantern_AnimGraphNode_SequencePlayer_E122A4D948C5D31C9899F2BF10F6E186");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lantern_AnimGraphNode_SequencePlayer_E122A4D948C5D31C9899F2BF10F6E186 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Lantern_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lantern_AnimGraphNode_BlendListByBool_FCD1F97C478C954D9D553FB9B5F0D858(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Lantern.ABP_Lantern_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lantern_AnimGraphNode_BlendListByBool_FCD1F97C478C954D9D553FB9B5F0D858");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lantern_AnimGraphNode_BlendListByBool_FCD1F97C478C954D9D553FB9B5F0D858 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Lantern_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lantern_AnimGraphNode_TransitionResult_677867BB4FE8C8CF64F511B52602A76E(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Lantern.ABP_Lantern_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lantern_AnimGraphNode_TransitionResult_677867BB4FE8C8CF64F511B52602A76E");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lantern_AnimGraphNode_TransitionResult_677867BB4FE8C8CF64F511B52602A76E parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Lantern_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lantern_AnimGraphNode_TransitionResult_E6E75154404BF5531C91919C63DF5452(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Lantern.ABP_Lantern_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lantern_AnimGraphNode_TransitionResult_E6E75154404BF5531C91919C63DF5452");

	FEvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lantern_AnimGraphNode_TransitionResult_E6E75154404BF5531C91919C63DF5452 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Lantern_C::BlueprintUpdateAnimation(float DeltaTimeX){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Lantern.ABP_Lantern_C.BlueprintUpdateAnimation");

	FBlueprintUpdateAnimation parms{};	
	parms.DeltaTimeX = DeltaTimeX;

	ProcessEvent(fn, &parms);
}

void UABP_Lantern_C::OnItemDataUpdated(struct FItemData& ItemData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Lantern.ABP_Lantern_C.OnItemDataUpdated");

	FOnItemDataUpdated parms{};	
	parms.ItemData = ItemData;

	ProcessEvent(fn, &parms);
}

void UABP_Lantern_C::ExecuteUbergraph_ABP_Lantern(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Lantern.ABP_Lantern_C.ExecuteUbergraph_ABP_Lantern");

	FExecuteUbergraph_ABP_Lantern parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

