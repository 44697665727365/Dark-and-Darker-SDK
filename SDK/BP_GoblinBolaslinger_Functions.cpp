#include "pch.h"
#include "SDK.h"

void ABP_GoblinBolaslinger_C::OnFMsgGASAttributeNotifyBlueprint(struct FMsgGASAttributeNotify& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GoblinBolaslinger.BP_GoblinBolaslinger_C.OnFMsgGASAttributeNotifyBlueprint");

	FOnFMsgGASAttributeNotifyBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void ABP_GoblinBolaslinger_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GoblinBolaslinger.BP_GoblinBolaslinger_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_GoblinBolaslinger_C::ExecuteUbergraph_BP_GoblinBolaslinger(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GoblinBolaslinger.BP_GoblinBolaslinger_C.ExecuteUbergraph_BP_GoblinBolaslinger");

	FExecuteUbergraph_BP_GoblinBolaslinger parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

