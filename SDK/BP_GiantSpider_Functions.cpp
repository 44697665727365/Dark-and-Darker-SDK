#include "pch.h"
#include "SDK.h"

void ABP_GiantSpider_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GiantSpider.BP_GiantSpider_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_GiantSpider_C::OnSetAI(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GiantSpider.BP_GiantSpider_C.OnSetAI");

	FOnSetAI parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_GiantSpider_C::ExecuteUbergraph_BP_GiantSpider(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GiantSpider.BP_GiantSpider_C.ExecuteUbergraph_BP_GiantSpider");

	FExecuteUbergraph_BP_GiantSpider parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

