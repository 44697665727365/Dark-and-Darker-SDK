#pragma once 
#include <BP_GameSpawner_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_GameSpawner.BP_GameSpawner_C
// Size: 0x3C8(Inherited: 0x380)
struct ABP_GameSpawner_C : ADCGameSpawner
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x380 (0x380)
	struct UArrowComponent* Arrow;  // 0x388 (0x388)
	struct UBillboardComponent* Billboard;  // 0x390 (0x390)
	char pad_920_1 : 7;  // 0x398 (0x398)
	bool IsRespawn : 1;  // 0x398 (0x398)
	char pad_921[7];  // 0x399 (0x399)
	double RespawnTime;  // 0x3A0 (0x3A0)
	struct ADCMonsterBase* Monster;  // 0x3A8 (0x3A8)
	struct UBindMsgNode* BindMsgNodeRef;  // 0x3B0 (0x3B0)
	char pad_952_1 : 7;  // 0x3B8 (0x3B8)
	bool Wander While Peace : 1;  // 0x3B8 (0x3B8)
	char pad_953[7];  // 0x3B9 (0x3B9)
	double Wander Distance;  // 0x3C0 (0x3C0)


	void OnMessageReceived_7BD037A94378DC6DC7ED5E9029A4A824(struct UMsgBaseNode* ProxyObject); // Function BP_GameSpawner.BP_GameSpawner_C.OnMessageReceived_7BD037A94378DC6DC7ED5E9029A4A824
	void OnMessageReceived_D5B41047432D7764436CC8ABA9E57D22(struct UMsgBaseNode* ProxyObject); // Function BP_GameSpawner.BP_GameSpawner_C.OnMessageReceived_D5B41047432D7764436CC8ABA9E57D22
	void UpdateGameState(struct FGameStateData& InGameStateData); // Function BP_GameSpawner.BP_GameSpawner_C.UpdateGameState
	void MonsterRespawn(); // Function BP_GameSpawner.BP_GameSpawner_C.MonsterRespawn
	void EventFMsgGASActorDieNotify(struct FMsgGASActorDieNotify Msg); // Function BP_GameSpawner.BP_GameSpawner_C.EventFMsgGASActorDieNotify
	void OnSetMonsterPeaceAction(struct ADCMonsterBase* Monster); // Function BP_GameSpawner.BP_GameSpawner_C.OnSetMonsterPeaceAction
	void ReceiveBeginPlay(); // Function BP_GameSpawner.BP_GameSpawner_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_GameSpawner(int32_t EntryPoint); // Function BP_GameSpawner.BP_GameSpawner_C.ExecuteUbergraph_BP_GameSpawner
}; 
 
 


