#include "pch.h"
#include "SDK.h"

void ABP_SkeletonRoyalGuard_C::Removed_0794AAB34968FF6F7553998A57BEBB51(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonRoyalGuard.BP_SkeletonRoyalGuard_C.Removed_0794AAB34968FF6F7553998A57BEBB51");

	FRemoved_0794AAB34968FF6F7553998A57BEBB51 parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonRoyalGuard_C::OnSetAI(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonRoyalGuard.BP_SkeletonRoyalGuard_C.OnSetAI");

	FOnSetAI parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonRoyalGuard_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonRoyalGuard.BP_SkeletonRoyalGuard_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonRoyalGuard_C::OnBeforeDeath(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonRoyalGuard.BP_SkeletonRoyalGuard_C.OnBeforeDeath");

	FOnBeforeDeath parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonRoyalGuard_C::ExecuteUbergraph_BP_SkeletonRoyalGuard(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonRoyalGuard.BP_SkeletonRoyalGuard_C.ExecuteUbergraph_BP_SkeletonRoyalGuard");

	FExecuteUbergraph_BP_SkeletonRoyalGuard parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

