#include "pch.h"
#include "SDK.h"

void ABP_ExplosionBottle_C::Timeline_1__FinishedFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ExplosionBottle.BP_ExplosionBottle_C.Timeline_1__FinishedFunc");

	FTimeline_1__FinishedFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_ExplosionBottle_C::Timeline_1__UpdateFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ExplosionBottle.BP_ExplosionBottle_C.Timeline_1__UpdateFunc");

	FTimeline_1__UpdateFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_ExplosionBottle_C::Timeline_2__FinishedFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ExplosionBottle.BP_ExplosionBottle_C.Timeline_2__FinishedFunc");

	FTimeline_2__FinishedFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_ExplosionBottle_C::Timeline_2__UpdateFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ExplosionBottle.BP_ExplosionBottle_C.Timeline_2__UpdateFunc");

	FTimeline_2__UpdateFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_ExplosionBottle_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ExplosionBottle.BP_ExplosionBottle_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_ExplosionBottle_C::OnDeactive(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ExplosionBottle.BP_ExplosionBottle_C.OnDeactive");

	FOnDeactive parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_ExplosionBottle_C::ExecuteUbergraph_BP_ExplosionBottle(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ExplosionBottle.BP_ExplosionBottle_C.ExecuteUbergraph_BP_ExplosionBottle");

	FExecuteUbergraph_BP_ExplosionBottle parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

