#include "pch.h"
#include "SDK.h"

void AChaosCacheManager::TriggerComponentByCache(struct FName InCacheName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ChaosCaching.ChaosCacheManager.TriggerComponentByCache");

	FTriggerComponentByCache parms{};	
	parms.InCacheName = InCacheName;

	ProcessEvent(fn, &parms);
}

void AChaosCacheManager::TriggerComponent(struct UPrimitiveComponent* InComponent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ChaosCaching.ChaosCacheManager.TriggerComponent");

	FTriggerComponent parms{};	
	parms.InComponent = InComponent;

	ProcessEvent(fn, &parms);
}

void AChaosCacheManager::TriggerAll(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ChaosCaching.ChaosCacheManager.TriggerAll");

	FTriggerAll parms{};	

	ProcessEvent(fn, &parms);
}

void AChaosCacheManager::SetStartTime(float InStartTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ChaosCaching.ChaosCacheManager.SetStartTime");

	FSetStartTime parms{};	
	parms.InStartTime = InStartTime;

	ProcessEvent(fn, &parms);
}

void AChaosCacheManager::ResetSingleTransform(int32_t InIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ChaosCaching.ChaosCacheManager.ResetSingleTransform");

	FResetSingleTransform parms{};	
	parms.InIndex = InIndex;

	ProcessEvent(fn, &parms);
}

void AChaosCacheManager::ResetAllComponentTransforms(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ChaosCaching.ChaosCacheManager.ResetAllComponentTransforms");

	FResetAllComponentTransforms parms{};	

	ProcessEvent(fn, &parms);
}

