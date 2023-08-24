#include "pch.h"
#include "SDK.h"

void ABP_SkeletonGuardmanFromFakeDeath_Nightmare_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonGuardmanFromFakeDeath_Nightmare.BP_SkeletonGuardmanFromFakeDeath_Nightmare_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonGuardmanFromFakeDeath_Nightmare_C::OnStuckByShield(struct ADCCharacterBase* InInstigator, struct AActor* InEffectCauser){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonGuardmanFromFakeDeath_Nightmare.BP_SkeletonGuardmanFromFakeDeath_Nightmare_C.OnStuckByShield");

	FOnStuckByShield parms{};	
	parms.InInstigator = InInstigator;
	parms.InEffectCauser = InEffectCauser;

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonGuardmanFromFakeDeath_Nightmare_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonGuardmanFromFakeDeath_Nightmare.BP_SkeletonGuardmanFromFakeDeath_Nightmare_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonGuardmanFromFakeDeath_Nightmare_C::ExecuteUbergraph_BP_SkeletonGuardmanFromFakeDeath_Nightmare(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonGuardmanFromFakeDeath_Nightmare.BP_SkeletonGuardmanFromFakeDeath_Nightmare_C.ExecuteUbergraph_BP_SkeletonGuardmanFromFakeDeath_Nightmare");

	FExecuteUbergraph_BP_SkeletonGuardmanFromFakeDeath_Nightmare parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

