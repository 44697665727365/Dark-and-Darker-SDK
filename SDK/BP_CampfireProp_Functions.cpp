#include "pch.h"
#include "SDK.h"

void ABP_CampfireProp_C::Deactivate Particle System(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_CampfireProp.BP_CampfireProp_C.Deactivate Particle System");

	FDeactivate Particle System parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_CampfireProp_C::Activate Particle System(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_CampfireProp.BP_CampfireProp_C.Activate Particle System");

	FActivate Particle System parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_CampfireProp_C::Timeline_0__FinishedFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_CampfireProp.BP_CampfireProp_C.Timeline_0__FinishedFunc");

	FTimeline_0__FinishedFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_CampfireProp_C::Timeline_0__UpdateFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_CampfireProp.BP_CampfireProp_C.Timeline_0__UpdateFunc");

	FTimeline_0__UpdateFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_CampfireProp_C::Timeline_1__FinishedFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_CampfireProp.BP_CampfireProp_C.Timeline_1__FinishedFunc");

	FTimeline_1__FinishedFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_CampfireProp_C::Timeline_1__UpdateFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_CampfireProp.BP_CampfireProp_C.Timeline_1__UpdateFunc");

	FTimeline_1__UpdateFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_CampfireProp_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_CampfireProp.BP_CampfireProp_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_CampfireProp_C::OnOnSoundLoaded(struct UObject* InObjectLoaded){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_CampfireProp.BP_CampfireProp_C.OnOnSoundLoaded");

	FOnOnSoundLoaded parms{};	
	parms.InObjectLoaded = InObjectLoaded;

	ProcessEvent(fn, &parms);
}

void ABP_CampfireProp_C::OnOffSoundLoaded(struct UObject* InObjectLoaded){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_CampfireProp.BP_CampfireProp_C.OnOffSoundLoaded");

	FOnOffSoundLoaded parms{};	
	parms.InObjectLoaded = InObjectLoaded;

	ProcessEvent(fn, &parms);
}

void ABP_CampfireProp_C::ExecuteUbergraph_BP_CampfireProp(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_CampfireProp.BP_CampfireProp_C.ExecuteUbergraph_BP_CampfireProp");

	FExecuteUbergraph_BP_CampfireProp parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

