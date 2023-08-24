#include "pch.h"
#include "SDK.h"

void UABP_Otto_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Otto.ABP_Otto_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_Otto_C::BlueprintThreadSafeUpdateAnimation(float DeltaTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Otto.ABP_Otto_C.BlueprintThreadSafeUpdateAnimation");

	FBlueprintThreadSafeUpdateAnimation parms{};	
	parms.DeltaTime = DeltaTime;

	ProcessEvent(fn, &parms);
}

void UABP_Otto_C::Added_F702C9C640E64D2D140233B87E67AF0A(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Otto.ABP_Otto_C.Added_F702C9C640E64D2D140233B87E67AF0A");

	FAdded_F702C9C640E64D2D140233B87E67AF0A parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Otto_C::Added_9F2231B346CCE4626A7A4F8AC7D43CEA(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Otto.ABP_Otto_C.Added_9F2231B346CCE4626A7A4F8AC7D43CEA");

	FAdded_9F2231B346CCE4626A7A4F8AC7D43CEA parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Otto_C::Added_802EA04D45BE39398AD314A0EBB7B4CD(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Otto.ABP_Otto_C.Added_802EA04D45BE39398AD314A0EBB7B4CD");

	FAdded_802EA04D45BE39398AD314A0EBB7B4CD parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Otto_C::Added_D8E194F34B546738A6FAAFBCCC55DAC6(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Otto.ABP_Otto_C.Added_D8E194F34B546738A6FAAFBCCC55DAC6");

	FAdded_D8E194F34B546738A6FAAFBCCC55DAC6 parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Otto_C::BlueprintInitializeAnimation(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Otto.ABP_Otto_C.BlueprintInitializeAnimation");

	FBlueprintInitializeAnimation parms{};	

	ProcessEvent(fn, &parms);
}

void UABP_Otto_C::ExecuteUbergraph_ABP_Otto(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_Otto.ABP_Otto_C.ExecuteUbergraph_ABP_Otto");

	FExecuteUbergraph_ABP_Otto parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

