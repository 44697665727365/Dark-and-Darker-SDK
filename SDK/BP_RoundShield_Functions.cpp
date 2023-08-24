#include "pch.h"
#include "SDK.h"

void ABP_RoundShield_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_RoundShield.BP_RoundShield_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_RoundShield_C::ExecuteUbergraph_BP_RoundShield(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_RoundShield.BP_RoundShield_C.ExecuteUbergraph_BP_RoundShield");

	FExecuteUbergraph_BP_RoundShield parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

