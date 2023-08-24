#include "pch.h"
#include "SDK.h"

void ABP_GiantBat_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GiantBat.BP_GiantBat_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_GiantBat_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GiantBat.BP_GiantBat_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_GiantBat_C::PushUp(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GiantBat.BP_GiantBat_C.PushUp");

	FPushUp parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_GiantBat_C::OnSetAI(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GiantBat.BP_GiantBat_C.OnSetAI");

	FOnSetAI parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_GiantBat_C::ExecuteUbergraph_BP_GiantBat(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GiantBat.BP_GiantBat_C.ExecuteUbergraph_BP_GiantBat");

	FExecuteUbergraph_BP_GiantBat parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

