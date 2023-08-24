#include "pch.h"
#include "SDK.h"

void ABP_Pavise_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Pavise.BP_Pavise_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_Pavise_C::ExecuteUbergraph_BP_Pavise(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Pavise.BP_Pavise_C.ExecuteUbergraph_BP_Pavise");

	FExecuteUbergraph_BP_Pavise parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

