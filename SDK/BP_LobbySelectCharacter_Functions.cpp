#include "pch.h"
#include "SDK.h"

void ABP_LobbySelectCharacter_C::CustomEvent(struct UAnimationAsset* ItemStandIdle, struct FGameplayTag ItemHandType, struct FGameplayTag ItemSlotType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_LobbySelectCharacter.BP_LobbySelectCharacter_C.CustomEvent");

	FCustomEvent parms{};	
	parms.ItemStandIdle = ItemStandIdle;
	parms.ItemHandType = ItemHandType;
	parms.ItemSlotType = ItemSlotType;

	ProcessEvent(fn, &parms);
}

void ABP_LobbySelectCharacter_C::ExecuteUbergraph_BP_LobbySelectCharacter(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_LobbySelectCharacter.BP_LobbySelectCharacter_C.ExecuteUbergraph_BP_LobbySelectCharacter");

	FExecuteUbergraph_BP_LobbySelectCharacter parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

