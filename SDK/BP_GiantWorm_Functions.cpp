#include "pch.h"
#include "SDK.h"

void ABP_GiantWorm_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GiantWorm.BP_GiantWorm_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_GiantWorm_C::ExecuteUbergraph_BP_GiantWorm(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GiantWorm.BP_GiantWorm_C.ExecuteUbergraph_BP_GiantWorm");

	FExecuteUbergraph_BP_GiantWorm parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

