#include "pch.h"
#include "SDK.h"

void UABP_CampfireKit_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_CampfireKit.ABP_CampfireKit_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_CampfireKit_C::OnItemDataUpdated(struct FItemData& ItemData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_CampfireKit.ABP_CampfireKit_C.OnItemDataUpdated");

	FOnItemDataUpdated parms{};	
	parms.ItemData = ItemData;

	ProcessEvent(fn, &parms);
}

void UABP_CampfireKit_C::ExecuteUbergraph_ABP_CampfireKit(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_CampfireKit.ABP_CampfireKit_C.ExecuteUbergraph_ABP_CampfireKit");

	FExecuteUbergraph_ABP_CampfireKit parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

