#pragma once 
#include <BP_RuinsGolem_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_RuinsGolem.BP_RuinsGolem_C
// Size: 0x1218(Inherited: 0x11B8)
struct ABP_RuinsGolem_C : ABP_DCMonsterBaseWithOptions_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x11B8 (0x11B8)
	struct UBP_DCHitBox_C* BP_DCHitBox10;  // 0x11C0 (0x11C0)
	struct UBP_DCHitBox_C* BP_DCHitBox9;  // 0x11C8 (0x11C8)
	struct UBP_DCHitBox_C* BP_DCHitBox8;  // 0x11D0 (0x11D0)
	struct UBP_DCHitBox_C* BP_DCHitBox7;  // 0x11D8 (0x11D8)
	struct UBP_DCHitBox_C* BP_DCHitBox6;  // 0x11E0 (0x11E0)
	struct UBP_DCHitBox_C* BP_DCHitBox5;  // 0x11E8 (0x11E8)
	struct UBP_DCHitBox_C* BP_DCHitBox4;  // 0x11F0 (0x11F0)
	struct UBP_DCHitBox_C* BP_DCHitBox3;  // 0x11F8 (0x11F8)
	struct UBP_DCHitBox_C* BP_DCHitBox2;  // 0x1200 (0x1200)
	struct UBP_DCHitBox_C* BP_DCHitBox1;  // 0x1208 (0x1208)
	struct UBP_DCHitBox_C* BP_DCHitBox;  // 0x1210 (0x1210)


	void EventReceived_A38344B64752875B4AF8BCB9F35613E5(struct FGameplayEventData Payload); // Function BP_RuinsGolem.BP_RuinsGolem_C.EventReceived_A38344B64752875B4AF8BCB9F35613E5
	void ReceiveBeginPlay(); // Function BP_RuinsGolem.BP_RuinsGolem_C.ReceiveBeginPlay
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_RuinsGolem.BP_RuinsGolem_C.GameplayTagUpdated
	void OnSetAI(); // Function BP_RuinsGolem.BP_RuinsGolem_C.OnSetAI
	void ExecuteUbergraph_BP_RuinsGolem(int32_t EntryPoint); // Function BP_RuinsGolem.BP_RuinsGolem_C.ExecuteUbergraph_BP_RuinsGolem
}; 
 
 


