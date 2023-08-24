#include "pch.h"
#include "SDK.h"

void ABP_GoblinWarrior_C::UserConstructionScript(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GoblinWarrior.BP_GoblinWarrior_C.UserConstructionScript");

	FUserConstructionScript parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_GoblinWarrior_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GoblinWarrior.BP_GoblinWarrior_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_GoblinWarrior_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GoblinWarrior.BP_GoblinWarrior_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_GoblinWarrior_C::OnFMsgGASAttributeNotifyBlueprint(struct FMsgGASAttributeNotify& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GoblinWarrior.BP_GoblinWarrior_C.OnFMsgGASAttributeNotifyBlueprint");

	FOnFMsgGASAttributeNotifyBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void ABP_GoblinWarrior_C::ExecuteUbergraph_BP_GoblinWarrior(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GoblinWarrior.BP_GoblinWarrior_C.ExecuteUbergraph_BP_GoblinWarrior");

	FExecuteUbergraph_BP_GoblinWarrior parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

