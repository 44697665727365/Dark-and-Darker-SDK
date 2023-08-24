#include "pch.h"
#include "SDK.h"

void UABP_MysticalGem_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_MysticalGem.ABP_MysticalGem_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_MysticalGem_C::ExecuteUbergraph_ABP_MysticalGem(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_MysticalGem.ABP_MysticalGem_C.ExecuteUbergraph_ABP_MysticalGem");

	FExecuteUbergraph_ABP_MysticalGem parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

