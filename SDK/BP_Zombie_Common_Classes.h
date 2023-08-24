#pragma once 
#include <BP_Zombie_Common_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_Zombie_Common.BP_Zombie_Common_C
// Size: 0x1238(Inherited: 0x11B8)
struct ABP_Zombie_Common_C : ABP_DCMonsterBaseWithOptions_C
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
	struct USkeletalMeshComponent* SK_Zombie_Fungus_2;  // 0x1210 (0x1210)
	struct USkeletalMeshComponent* SK_Zombie_Stomach_2;  // 0x1218 (0x1218)
	char pad_4640_1 : 7;  // 0x1220 (0x1220)
	bool Stomach : 1;  // 0x1220 (0x1220)
	char pad_4641_1 : 7;  // 0x1221 (0x1221)
	bool Fungus : 1;  // 0x1221 (0x1221)
	char pad_4642[6];  // 0x1222 (0x1222)
	struct TArray<struct FActiveGameplayEffectHandle> MoveSpeed Effect;  // 0x1228 (0x1228)


	void UserConstructionScript(); // Function BP_Zombie_Common.BP_Zombie_Common_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function BP_Zombie_Common.BP_Zombie_Common_C.ReceiveBeginPlay
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_Zombie_Common.BP_Zombie_Common_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_Zombie_Common(int32_t EntryPoint); // Function BP_Zombie_Common.BP_Zombie_Common_C.ExecuteUbergraph_BP_Zombie_Common
}; 
 
 


