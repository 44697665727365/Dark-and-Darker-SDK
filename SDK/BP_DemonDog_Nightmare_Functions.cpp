#include "pch.h"
#include "SDK.h"

void ABP_DemonDog_Nightmare_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DemonDog_Nightmare.BP_DemonDog_Nightmare_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_DemonDog_Nightmare_C::OnSetAI(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DemonDog_Nightmare.BP_DemonDog_Nightmare_C.OnSetAI");

	FOnSetAI parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DemonDog_Nightmare_C::ExecuteUbergraph_BP_DemonDog_Nightmare(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DemonDog_Nightmare.BP_DemonDog_Nightmare_C.ExecuteUbergraph_BP_DemonDog_Nightmare");

	FExecuteUbergraph_BP_DemonDog_Nightmare parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

