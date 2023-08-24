#include "pch.h"
#include "SDK.h"

void UABP_CrystalBall_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_CrystalBall.ABP_CrystalBall_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_CrystalBall_C::OnItemDataUpdated(struct FItemData& ItemData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_CrystalBall.ABP_CrystalBall_C.OnItemDataUpdated");

	FOnItemDataUpdated parms{};	
	parms.ItemData = ItemData;

	ProcessEvent(fn, &parms);
}

void UABP_CrystalBall_C::ExecuteUbergraph_ABP_CrystalBall(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_CrystalBall.ABP_CrystalBall_C.ExecuteUbergraph_ABP_CrystalBall");

	FExecuteUbergraph_ABP_CrystalBall parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

