#include "pch.h"
#include "SDK.h"

void ABP_RustyIronDoor_C::BroadcastSystemMessage(struct ABP_PlayerCharacter_C* Interacter, struct FText SystemMessage){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_RustyIronDoor.BP_RustyIronDoor_C.BroadcastSystemMessage");

	FBroadcastSystemMessage parms{};	
	parms.Interacter = Interacter;
	parms.SystemMessage = SystemMessage;

	ProcessEvent(fn, &parms);
}

void ABP_RustyIronDoor_C::ReduceItem(struct AActor* TargetActor, struct FItemData ItemData, int32_t Count){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_RustyIronDoor.BP_RustyIronDoor_C.ReduceItem");

	FReduceItem parms{};	
	parms.TargetActor = TargetActor;
	parms.ItemData = ItemData;
	parms.Count = Count;

	ProcessEvent(fn, &parms);
}

void ABP_RustyIronDoor_C::InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_RustyIronDoor.BP_RustyIronDoor_C.InteractSucceed");

	FInteractSucceed parms{};	
	parms.Interacter = Interacter;
	parms.StateTag = StateTag;
	parms.TriggerTag = TriggerTag;
	parms.HitResult = HitResult;

	ProcessEvent(fn, &parms);
}

void ABP_RustyIronDoor_C::ExecuteUbergraph_BP_RustyIronDoor(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_RustyIronDoor.BP_RustyIronDoor_C.ExecuteUbergraph_BP_RustyIronDoor");

	FExecuteUbergraph_BP_RustyIronDoor parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

