#include "pch.h"
#include "SDK.h"

void ABP_DireWolf_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DireWolf.BP_DireWolf_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_DireWolf_C::OnSetAI(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DireWolf.BP_DireWolf_C.OnSetAI");

	FOnSetAI parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DireWolf_C::ExecuteUbergraph_BP_DireWolf(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DireWolf.BP_DireWolf_C.ExecuteUbergraph_BP_DireWolf");

	FExecuteUbergraph_BP_DireWolf parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

