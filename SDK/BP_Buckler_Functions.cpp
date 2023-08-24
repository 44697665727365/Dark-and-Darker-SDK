#include "pch.h"
#include "SDK.h"

void ABP_Buckler_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Buckler.BP_Buckler_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_Buckler_C::ExecuteUbergraph_BP_Buckler(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Buckler.BP_Buckler_C.ExecuteUbergraph_BP_Buckler");

	FExecuteUbergraph_BP_Buckler parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

