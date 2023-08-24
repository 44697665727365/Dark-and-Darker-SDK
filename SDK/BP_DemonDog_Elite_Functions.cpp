#include "pch.h"
#include "SDK.h"

void ABP_DemonDog_Elite_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DemonDog_Elite.BP_DemonDog_Elite_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_DemonDog_Elite_C::ExecuteUbergraph_BP_DemonDog_Elite(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DemonDog_Elite.BP_DemonDog_Elite_C.ExecuteUbergraph_BP_DemonDog_Elite");

	FExecuteUbergraph_BP_DemonDog_Elite parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

