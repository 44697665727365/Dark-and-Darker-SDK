#pragma once 
#include <BP_Lich_Common_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_Lich_Common.BP_Lich_Common_C
// Size: 0x1230(Inherited: 0x11B8)
struct ABP_Lich_Common_C : ABP_DCMonsterBaseWithOptions_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x11B8 (0x11B8)
	struct UBP_DCHitBox_C* BP_DCHitBox1;  // 0x11C0 (0x11C0)
	struct UBP_DCHitBox_C* BP_DCHitBox9;  // 0x11C8 (0x11C8)
	struct UBP_DCHitBox_C* BP_DCHitBox8;  // 0x11D0 (0x11D0)
	struct UBP_DCHitBox_C* BP_DCHitBox7;  // 0x11D8 (0x11D8)
	struct UBP_DCHitBox_C* BP_DCHitBox6;  // 0x11E0 (0x11E0)
	struct UBP_DCHitBox_C* BP_DCHitBox5;  // 0x11E8 (0x11E8)
	struct UBP_DCHitBox_C* BP_DCHitBox4;  // 0x11F0 (0x11F0)
	struct UBP_DCHitBox_C* BP_DCHitBox3;  // 0x11F8 (0x11F8)
	struct UBP_DCHitBox_C* BP_DCHitBox2;  // 0x1200 (0x1200)
	struct UBP_DCHitBox_C* BP_DCHitBox;  // 0x1208 (0x1208)
	double CurseSelector;  // 0x1210 (0x1210)
	double HPRatio Curse Trigger Cycle;  // 0x1218 (0x1218)
	int32_t Number Of Players;  // 0x1220 (0x1220)
	char pad_4644_1 : 7;  // 0x1224 (0x1224)
	bool Used Frenzy : 1;  // 0x1224 (0x1224)
	char pad_4645[3];  // 0x1225 (0x1225)
	struct ADCAoeBase* DeathSwarm;  // 0x1228 (0x1228)


	void Remove Frenzy(); // Function BP_Lich_Common.BP_Lich_Common_C.Remove Frenzy
	void Send Signal Summonee To Die(); // Function BP_Lich_Common.BP_Lich_Common_C.Send Signal Summonee To Die
	void Reset Variables(); // Function BP_Lich_Common.BP_Lich_Common_C.Reset Variables
	void ReceiveBeginPlay(); // Function BP_Lich_Common.BP_Lich_Common_C.ReceiveBeginPlay
	void OnSetAI(); // Function BP_Lich_Common.BP_Lich_Common_C.OnSetAI
	void BndEvt__BP_Lich_DCGameObjectLink_K2Node_ComponentBoundEvent_3_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature(struct FObjectLinkRequestEvent& RecvEvent, struct UObjectLinkMetaDataBlueprint* SendEventParam); // Function BP_Lich_Common.BP_Lich_Common_C.BndEvt__BP_Lich_DCGameObjectLink_K2Node_ComponentBoundEvent_3_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature
	void Comeback Event End(); // Function BP_Lich_Common.BP_Lich_Common_C.Comeback Event End
	void OnBeforeDeath(); // Function BP_Lich_Common.BP_Lich_Common_C.OnBeforeDeath
	void Combat Activated(); // Function BP_Lich_Common.BP_Lich_Common_C.Combat Activated
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_Lich_Common.BP_Lich_Common_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_Lich_Common(int32_t EntryPoint); // Function BP_Lich_Common.BP_Lich_Common_C.ExecuteUbergraph_BP_Lich_Common
}; 
 
 


