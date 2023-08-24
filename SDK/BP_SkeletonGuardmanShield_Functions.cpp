#include "pch.h"
#include "SDK.h"

void ABP_SkeletonGuardmanShield_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonGuardmanShield.BP_SkeletonGuardmanShield_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonGuardmanShield_C::ExecuteUbergraph_BP_SkeletonGuardmanShield(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonGuardmanShield.BP_SkeletonGuardmanShield_C.ExecuteUbergraph_BP_SkeletonGuardmanShield");

	FExecuteUbergraph_BP_SkeletonGuardmanShield parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

