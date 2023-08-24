#include "pch.h"
#include "SDK.h"

void ABP_Wisp_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Wisp.BP_Wisp_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Wisp_C::OnFMsgGASActorDieNotifyBlueprint(struct FMsgGASActorDieNotify& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Wisp.BP_Wisp_C.OnFMsgGASActorDieNotifyBlueprint");

	FOnFMsgGASActorDieNotifyBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void ABP_Wisp_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Wisp.BP_Wisp_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_Wisp_C::ExecuteUbergraph_BP_Wisp(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Wisp.BP_Wisp_C.ExecuteUbergraph_BP_Wisp");

	FExecuteUbergraph_BP_Wisp parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

