#include "pch.h"
#include "SDK.h"

void ABP_SkeletonChampionShield_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonChampionShield.BP_SkeletonChampionShield_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonChampionShield_C::ExecuteUbergraph_BP_SkeletonChampionShield(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonChampionShield.BP_SkeletonChampionShield_C.ExecuteUbergraph_BP_SkeletonChampionShield");

	FExecuteUbergraph_BP_SkeletonChampionShield parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

