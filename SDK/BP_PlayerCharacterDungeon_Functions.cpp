#include "pch.h"
#include "SDK.h"

void ABP_PlayerCharacterDungeon_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PlayerCharacterDungeon.BP_PlayerCharacterDungeon_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_PlayerCharacterDungeon_C::OnUpdateTeammateState(bool bIsTeammateWithLocalPlayer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PlayerCharacterDungeon.BP_PlayerCharacterDungeon_C.OnUpdateTeammateState");

	FOnUpdateTeammateState parms{};	
	parms.bIsTeammateWithLocalPlayer = bIsTeammateWithLocalPlayer;

	ProcessEvent(fn, &parms);
}

void ABP_PlayerCharacterDungeon_C::OnFMsgGASActorDieNotifyBlueprint(struct FMsgGASActorDieNotify& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PlayerCharacterDungeon.BP_PlayerCharacterDungeon_C.OnFMsgGASActorDieNotifyBlueprint");

	FOnFMsgGASActorDieNotifyBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void ABP_PlayerCharacterDungeon_C::ExecuteUbergraph_BP_PlayerCharacterDungeon(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PlayerCharacterDungeon.BP_PlayerCharacterDungeon_C.ExecuteUbergraph_BP_PlayerCharacterDungeon");

	FExecuteUbergraph_BP_PlayerCharacterDungeon parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

