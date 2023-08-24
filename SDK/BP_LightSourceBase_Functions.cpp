#include "pch.h"
#include "SDK.h"

void ABP_LightSourceBase_C::Timeline__FinishedFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_LightSourceBase.BP_LightSourceBase_C.Timeline__FinishedFunc");

	FTimeline__FinishedFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_LightSourceBase_C::Timeline__UpdateFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_LightSourceBase.BP_LightSourceBase_C.Timeline__UpdateFunc");

	FTimeline__UpdateFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_LightSourceBase_C::ReverseTimeline__FinishedFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_LightSourceBase.BP_LightSourceBase_C.ReverseTimeline__FinishedFunc");

	FReverseTimeline__FinishedFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_LightSourceBase_C::ReverseTimeline__UpdateFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_LightSourceBase.BP_LightSourceBase_C.ReverseTimeline__UpdateFunc");

	FReverseTimeline__UpdateFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_LightSourceBase_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_LightSourceBase.BP_LightSourceBase_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_LightSourceBase_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_LightSourceBase.BP_LightSourceBase_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_LightSourceBase_C::ExecuteUbergraph_BP_LightSourceBase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_LightSourceBase.BP_LightSourceBase_C.ExecuteUbergraph_BP_LightSourceBase");

	FExecuteUbergraph_BP_LightSourceBase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

