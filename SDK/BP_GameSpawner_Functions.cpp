#include "pch.h"
#include "SDK.h"

void ABP_GameSpawner_C::OnMessageReceived_7BD037A94378DC6DC7ED5E9029A4A824(struct UMsgBaseNode* ProxyObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GameSpawner.BP_GameSpawner_C.OnMessageReceived_7BD037A94378DC6DC7ED5E9029A4A824");

	FOnMessageReceived_7BD037A94378DC6DC7ED5E9029A4A824 parms{};	
	parms.ProxyObject = ProxyObject;

	ProcessEvent(fn, &parms);
}

void ABP_GameSpawner_C::OnMessageReceived_D5B41047432D7764436CC8ABA9E57D22(struct UMsgBaseNode* ProxyObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GameSpawner.BP_GameSpawner_C.OnMessageReceived_D5B41047432D7764436CC8ABA9E57D22");

	FOnMessageReceived_D5B41047432D7764436CC8ABA9E57D22 parms{};	
	parms.ProxyObject = ProxyObject;

	ProcessEvent(fn, &parms);
}

void ABP_GameSpawner_C::UpdateGameState(struct FGameStateData& InGameStateData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GameSpawner.BP_GameSpawner_C.UpdateGameState");

	FUpdateGameState parms{};	
	parms.InGameStateData = InGameStateData;

	ProcessEvent(fn, &parms);
}

void ABP_GameSpawner_C::MonsterRespawn(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GameSpawner.BP_GameSpawner_C.MonsterRespawn");

	FMonsterRespawn parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_GameSpawner_C::EventFMsgGASActorDieNotify(struct FMsgGASActorDieNotify Msg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GameSpawner.BP_GameSpawner_C.EventFMsgGASActorDieNotify");

	FEventFMsgGASActorDieNotify parms{};	
	parms.Msg = Msg;

	ProcessEvent(fn, &parms);
}

void ABP_GameSpawner_C::OnSetMonsterPeaceAction(struct ADCMonsterBase* Monster){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GameSpawner.BP_GameSpawner_C.OnSetMonsterPeaceAction");

	FOnSetMonsterPeaceAction parms{};	
	parms.Monster = Monster;

	ProcessEvent(fn, &parms);
}

void ABP_GameSpawner_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GameSpawner.BP_GameSpawner_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_GameSpawner_C::ExecuteUbergraph_BP_GameSpawner(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GameSpawner.BP_GameSpawner_C.ExecuteUbergraph_BP_GameSpawner");

	FExecuteUbergraph_BP_GameSpawner parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

