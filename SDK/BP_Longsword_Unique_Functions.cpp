#include "pch.h"
#include "SDK.h"

void ABP_Longsword_Unique_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Longsword_Unique.BP_Longsword_Unique_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_Longsword_Unique_C::ExecuteUbergraph_BP_Longsword_Unique(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Longsword_Unique.BP_Longsword_Unique_C.ExecuteUbergraph_BP_Longsword_Unique");

	FExecuteUbergraph_BP_Longsword_Unique parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

