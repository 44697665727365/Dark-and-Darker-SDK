#include "pch.h"
#include "SDK.h"

void ABP_Lantern_C::Timeline__FinishedFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Lantern.BP_Lantern_C.Timeline__FinishedFunc");

	FTimeline__FinishedFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Lantern_C::Timeline__UpdateFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Lantern.BP_Lantern_C.Timeline__UpdateFunc");

	FTimeline__UpdateFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Lantern_C::Timeline_0__FinishedFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Lantern.BP_Lantern_C.Timeline_0__FinishedFunc");

	FTimeline_0__FinishedFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Lantern_C::Timeline_0__UpdateFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Lantern.BP_Lantern_C.Timeline_0__UpdateFunc");

	FTimeline_0__UpdateFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Lantern_C::Timeline_1__FinishedFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Lantern.BP_Lantern_C.Timeline_1__FinishedFunc");

	FTimeline_1__FinishedFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Lantern_C::Timeline_1__UpdateFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Lantern.BP_Lantern_C.Timeline_1__UpdateFunc");

	FTimeline_1__UpdateFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Lantern_C::Timeline_2__FinishedFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Lantern.BP_Lantern_C.Timeline_2__FinishedFunc");

	FTimeline_2__FinishedFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Lantern_C::Timeline_2__UpdateFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Lantern.BP_Lantern_C.Timeline_2__UpdateFunc");

	FTimeline_2__UpdateFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Lantern_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Lantern.BP_Lantern_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_Lantern_C::OnAttachedSheathSocket(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Lantern.BP_Lantern_C.OnAttachedSheathSocket");

	FOnAttachedSheathSocket parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Lantern_C::ExecuteUbergraph_BP_Lantern(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Lantern.BP_Lantern_C.ExecuteUbergraph_BP_Lantern");

	FExecuteUbergraph_BP_Lantern parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

