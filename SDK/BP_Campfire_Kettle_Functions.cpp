#include "pch.h"
#include "SDK.h"

void ABP_Campfire_Kettle_C::Deactivate Particle System(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Campfire_Kettle.BP_Campfire_Kettle_C.Deactivate Particle System");

	FDeactivate Particle System parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Campfire_Kettle_C::Activate Particle System(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Campfire_Kettle.BP_Campfire_Kettle_C.Activate Particle System");

	FActivate Particle System parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Campfire_Kettle_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Campfire_Kettle.BP_Campfire_Kettle_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Campfire_Kettle_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Campfire_Kettle.BP_Campfire_Kettle_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_Campfire_Kettle_C::ExecuteUbergraph_BP_Campfire_Kettle(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Campfire_Kettle.BP_Campfire_Kettle_C.ExecuteUbergraph_BP_Campfire_Kettle");

	FExecuteUbergraph_BP_Campfire_Kettle parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

