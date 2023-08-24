#include "pch.h"
#include "SDK.h"

void ABP_SkeletonGuardmanShield_Nightmare_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonGuardmanShield_Nightmare.BP_SkeletonGuardmanShield_Nightmare_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonGuardmanShield_Nightmare_C::ExecuteUbergraph_BP_SkeletonGuardmanShield_Nightmare(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonGuardmanShield_Nightmare.BP_SkeletonGuardmanShield_Nightmare_C.ExecuteUbergraph_BP_SkeletonGuardmanShield_Nightmare");

	FExecuteUbergraph_BP_SkeletonGuardmanShield_Nightmare parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

