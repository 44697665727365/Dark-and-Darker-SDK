#include "pch.h"
#include "SDK.h"

void ABP_Mimic_Large_Base_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Mimic_Large_Base.BP_Mimic_Large_Base_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_Mimic_Large_Base_C::ExecuteUbergraph_BP_Mimic_Large_Base(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Mimic_Large_Base.BP_Mimic_Large_Base_C.ExecuteUbergraph_BP_Mimic_Large_Base");

	FExecuteUbergraph_BP_Mimic_Large_Base parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

