#include "pch.h"
#include "SDK.h"

void ABP_Mummy_Common_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Mummy_Common.BP_Mummy_Common_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_Mummy_Common_C::ExecuteUbergraph_BP_Mummy_Common(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Mummy_Common.BP_Mummy_Common_C.ExecuteUbergraph_BP_Mummy_Common");

	FExecuteUbergraph_BP_Mummy_Common parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

