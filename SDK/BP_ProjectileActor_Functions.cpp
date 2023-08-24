#include "pch.h"
#include "SDK.h"

void ABP_ProjectileActor_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ProjectileActor.BP_ProjectileActor_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_ProjectileActor_C::ExecuteUbergraph_BP_ProjectileActor(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ProjectileActor.BP_ProjectileActor_C.ExecuteUbergraph_BP_ProjectileActor");

	FExecuteUbergraph_BP_ProjectileActor parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

