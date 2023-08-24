#pragma once 
#include <BP_Mummy_Common_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_Mummy_Common.BP_Mummy_Common_C
// Size: 0x1210(Inherited: 0x11B8)
struct ABP_Mummy_Common_C : ABP_DCMonsterBaseWithOptions_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x11B8 (0x11B8)
	struct UBP_DCHitBox_C* BP_DCHitBox_LFoot;  // 0x11C0 (0x11C0)
	struct UBP_DCHitBox_C* BP_DCHitBox_RFoot;  // 0x11C8 (0x11C8)
	struct UBP_DCHitBox_C* BP_DCHitBox_LHand;  // 0x11D0 (0x11D0)
	struct UBP_DCHitBox_C* BP_DCHitBox_RHand;  // 0x11D8 (0x11D8)
	struct UBP_DCHitBox_C* BP_DCHitBox_Head;  // 0x11E0 (0x11E0)
	struct UBP_DCHitBox_C* BP_DCHitBox_LLeg;  // 0x11E8 (0x11E8)
	struct UBP_DCHitBox_C* BP_DCHitBox_RLeg;  // 0x11F0 (0x11F0)
	struct UBP_DCHitBox_C* BP_DCHitBox_LArm;  // 0x11F8 (0x11F8)
	struct UBP_DCHitBox_C* BP_DCHitBox_RArm;  // 0x1200 (0x1200)
	struct UBP_DCHitBox_C* BP_DCHitBox_Body;  // 0x1208 (0x1208)


	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_Mummy_Common.BP_Mummy_Common_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_Mummy_Common(int32_t EntryPoint); // Function BP_Mummy_Common.BP_Mummy_Common_C.ExecuteUbergraph_BP_Mummy_Common
}; 
 
 


