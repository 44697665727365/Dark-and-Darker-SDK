#include "pch.h"
#include "SDK.h"

void ABP_GoldenDoor_C::ReduceItem(struct AActor* TargetActor, struct FItemData ItemData, int32_t Count){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GoldenDoor.BP_GoldenDoor_C.ReduceItem");

	FReduceItem parms{};	
	parms.TargetActor = TargetActor;
	parms.ItemData = ItemData;
	parms.Count = Count;

	ProcessEvent(fn, &parms);
}

void ABP_GoldenDoor_C::BroadcastSystemMessage(struct ABP_PlayerCharacter_C* Interacter, struct FText SystemMessage){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GoldenDoor.BP_GoldenDoor_C.BroadcastSystemMessage");

	FBroadcastSystemMessage parms{};	
	parms.Interacter = Interacter;
	parms.SystemMessage = SystemMessage;

	ProcessEvent(fn, &parms);
}

void ABP_GoldenDoor_C::InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GoldenDoor.BP_GoldenDoor_C.InteractSucceed");

	FInteractSucceed parms{};	
	parms.Interacter = Interacter;
	parms.StateTag = StateTag;
	parms.TriggerTag = TriggerTag;
	parms.HitResult = HitResult;

	ProcessEvent(fn, &parms);
}

void ABP_GoldenDoor_C::ExecuteUbergraph_BP_GoldenDoor(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GoldenDoor.BP_GoldenDoor_C.ExecuteUbergraph_BP_GoldenDoor");

	FExecuteUbergraph_BP_GoldenDoor parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

