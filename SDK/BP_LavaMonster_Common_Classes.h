#pragma once 
#include <BP_LavaMonster_Common_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_LavaMonster_Common.BP_LavaMonster_Common_C
// Size: 0x1210(Inherited: 0x11B8)
struct ABP_LavaMonster_Common_C : ABP_DCMonsterBaseWithOptions_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x11B8 (0x11B8)
	struct UBP_DCHitBox_C* BP_DCHitBox5;  // 0x11C0 (0x11C0)
	struct UBP_DCHitBox_C* BP_DCHitBox4;  // 0x11C8 (0x11C8)
	struct UBP_DCHitBox_C* BP_DCHitBox3;  // 0x11D0 (0x11D0)
	struct UBP_DCHitBox_C* BP_DCHitBox2;  // 0x11D8 (0x11D8)
	struct UBP_DCHitBox_C* BP_DCHitBox1;  // 0x11E0 (0x11E0)
	struct UBP_DCHitBox_C* BP_DCHitBox;  // 0x11E8 (0x11E8)
	char pad_4592_1 : 7;  // 0x11F0 (0x11F0)
	bool WakeUp : 1;  // 0x11F0 (0x11F0)
	char pad_4593[3];  // 0x11F1 (0x11F1)
	int32_t Rage;  // 0x11F4 (0x11F4)
	char pad_4600_1 : 7;  // 0x11F8 (0x11F8)
	bool End Death Animtaion : 1;  // 0x11F8 (0x11F8)
	char pad_4601_1 : 7;  // 0x11F9 (0x11F9)
	bool Summoned : 1;  // 0x11F9 (0x11F9)
	char pad_4602[6];  // 0x11FA (0x11FA)
	struct ABP_GhostKing_Common_C* As BP Ghost King;  // 0x1200 (0x1200)
	struct FTimerHandle Move Fail TimerHandle;  // 0x1208 (0x1208)


	void Call Wake Up(); // Function BP_LavaMonster_Common.BP_LavaMonster_Common_C.Call Wake Up
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_LavaMonster_Common.BP_LavaMonster_Common_C.GameplayTagUpdated
	void BndEvt__BP_Lich_DCGameObjectLink_K2Node_ComponentBoundEvent_3_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature(struct FObjectLinkRequestEvent& RecvEvent, struct UObjectLinkMetaDataBlueprint* SendEventParam); // Function BP_LavaMonster_Common.BP_LavaMonster_Common_C.BndEvt__BP_Lich_DCGameObjectLink_K2Node_ComponentBoundEvent_3_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature
	void MoveFailTimeOut(); // Function BP_LavaMonster_Common.BP_LavaMonster_Common_C.MoveFailTimeOut
	void ExecuteUbergraph_BP_LavaMonster_Common(int32_t EntryPoint); // Function BP_LavaMonster_Common.BP_LavaMonster_Common_C.ExecuteUbergraph_BP_LavaMonster_Common
}; 
 
 


