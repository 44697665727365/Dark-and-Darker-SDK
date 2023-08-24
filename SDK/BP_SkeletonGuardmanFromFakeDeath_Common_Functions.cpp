#include "pch.h"
#include "SDK.h"

void ABP_SkeletonGuardmanFromFakeDeath_Common_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonGuardmanFromFakeDeath_Common.BP_SkeletonGuardmanFromFakeDeath_Common_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonGuardmanFromFakeDeath_Common_C::OnStuckByShield(struct ADCCharacterBase* InInstigator, struct AActor* InEffectCauser){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonGuardmanFromFakeDeath_Common.BP_SkeletonGuardmanFromFakeDeath_Common_C.OnStuckByShield");

	FOnStuckByShield parms{};	
	parms.InInstigator = InInstigator;
	parms.InEffectCauser = InEffectCauser;

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonGuardmanFromFakeDeath_Common_C::InteractFound(struct AActor* Interacter, struct UPrimitiveComponent* InteractPart){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonGuardmanFromFakeDeath_Common.BP_SkeletonGuardmanFromFakeDeath_Common_C.InteractFound");

	FInteractFound parms{};	
	parms.Interacter = Interacter;
	parms.InteractPart = InteractPart;

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonGuardmanFromFakeDeath_Common_C::InteractLost(struct AActor* Interacter){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonGuardmanFromFakeDeath_Common.BP_SkeletonGuardmanFromFakeDeath_Common_C.InteractLost");

	FInteractLost parms{};	
	parms.Interacter = Interacter;

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonGuardmanFromFakeDeath_Common_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonGuardmanFromFakeDeath_Common.BP_SkeletonGuardmanFromFakeDeath_Common_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonGuardmanFromFakeDeath_Common_C::ExecuteUbergraph_BP_SkeletonGuardmanFromFakeDeath_Common(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonGuardmanFromFakeDeath_Common.BP_SkeletonGuardmanFromFakeDeath_Common_C.ExecuteUbergraph_BP_SkeletonGuardmanFromFakeDeath_Common");

	FExecuteUbergraph_BP_SkeletonGuardmanFromFakeDeath_Common parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

