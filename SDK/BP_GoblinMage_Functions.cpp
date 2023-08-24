#include "pch.h"
#include "SDK.h"

void ABP_GoblinMage_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GoblinMage.BP_GoblinMage_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_GoblinMage_C::ExecuteUbergraph_BP_GoblinMage(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GoblinMage.BP_GoblinMage_C.ExecuteUbergraph_BP_GoblinMage");

	FExecuteUbergraph_BP_GoblinMage parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

