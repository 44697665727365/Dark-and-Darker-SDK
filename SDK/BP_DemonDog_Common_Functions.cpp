#include "pch.h"
#include "SDK.h"

void ABP_DemonDog_Common_C::Added_2CE881894DEE30E678B9548D67969F60(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DemonDog_Common.BP_DemonDog_Common_C.Added_2CE881894DEE30E678B9548D67969F60");

	FAdded_2CE881894DEE30E678B9548D67969F60 parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DemonDog_Common_C::OnSetAI(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DemonDog_Common.BP_DemonDog_Common_C.OnSetAI");

	FOnSetAI parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DemonDog_Common_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DemonDog_Common.BP_DemonDog_Common_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_DemonDog_Common_C::ExecuteUbergraph_BP_DemonDog_Common(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DemonDog_Common.BP_DemonDog_Common_C.ExecuteUbergraph_BP_DemonDog_Common");

	FExecuteUbergraph_BP_DemonDog_Common parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

