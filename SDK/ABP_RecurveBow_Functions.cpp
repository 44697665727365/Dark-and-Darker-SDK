#include "pch.h"
#include "SDK.h"

void UABP_RecurveBow_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_RecurveBow.ABP_RecurveBow_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_RecurveBow_C::OnBlendingOut(struct UAnimMontage* Montage, bool bInterrupted){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_RecurveBow.ABP_RecurveBow_C.OnBlendingOut");

	FOnBlendingOut parms{};	
	parms.Montage = Montage;
	parms.bInterrupted = bInterrupted;

	ProcessEvent(fn, &parms);
}

void UABP_RecurveBow_C::BlueprintInitializeAnimation(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_RecurveBow.ABP_RecurveBow_C.BlueprintInitializeAnimation");

	FBlueprintInitializeAnimation parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_RecurveBow_C::ExecuteUbergraph_ABP_RecurveBow(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_RecurveBow.ABP_RecurveBow_C.ExecuteUbergraph_ABP_RecurveBow");

	FExecuteUbergraph_ABP_RecurveBow parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

