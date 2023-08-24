#include "pch.h"
#include "SDK.h"

void ABP_Flute_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Flute.BP_Flute_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_Flute_C::ExecuteUbergraph_BP_Flute(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Flute.BP_Flute_C.ExecuteUbergraph_BP_Flute");

	FExecuteUbergraph_BP_Flute parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

