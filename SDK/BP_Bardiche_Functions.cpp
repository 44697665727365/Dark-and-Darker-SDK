#include "pch.h"
#include "SDK.h"

void ABP_Bardiche_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Bardiche.BP_Bardiche_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_Bardiche_C::ExecuteUbergraph_BP_Bardiche(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Bardiche.BP_Bardiche_C.ExecuteUbergraph_BP_Bardiche");

	FExecuteUbergraph_BP_Bardiche parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

