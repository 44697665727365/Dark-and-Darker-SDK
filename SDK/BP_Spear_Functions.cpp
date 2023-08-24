#include "pch.h"
#include "SDK.h"

void ABP_Spear_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Spear.BP_Spear_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_Spear_C::ExecuteUbergraph_BP_Spear(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Spear.BP_Spear_C.ExecuteUbergraph_BP_Spear");

	FExecuteUbergraph_BP_Spear parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

