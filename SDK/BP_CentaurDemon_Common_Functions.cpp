#include "pch.h"
#include "SDK.h"

void ABP_CentaurDemon_Common_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_CentaurDemon_Common.BP_CentaurDemon_Common_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_CentaurDemon_Common_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_CentaurDemon_Common.BP_CentaurDemon_Common_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_CentaurDemon_Common_C::ExecuteUbergraph_BP_CentaurDemon_Common(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_CentaurDemon_Common.BP_CentaurDemon_Common_C.ExecuteUbergraph_BP_CentaurDemon_Common");

	FExecuteUbergraph_BP_CentaurDemon_Common parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

