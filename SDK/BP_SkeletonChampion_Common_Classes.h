#pragma once 
#include <BP_SkeletonChampion_Common_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_SkeletonChampion_Common.BP_SkeletonChampion_Common_C
// Size: 0x1210(Inherited: 0x11B8)
struct ABP_SkeletonChampion_Common_C : ABP_DCMonsterBaseWithOptions_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x11B8 (0x11B8)
	struct UBP_DCHitBox_C* BP_DCHitBox8;  // 0x11C0 (0x11C0)
	struct UBP_DCHitBox_C* BP_DCHitBox7;  // 0x11C8 (0x11C8)
	struct UBP_DCHitBox_C* BP_DCHitBox6;  // 0x11D0 (0x11D0)
	struct UBP_DCHitBox_C* BP_DCHitBox5;  // 0x11D8 (0x11D8)
	struct UBP_DCHitBox_C* BP_DCHitBox4;  // 0x11E0 (0x11E0)
	struct UBP_DCHitBox_C* BP_DCHitBox3;  // 0x11E8 (0x11E8)
	struct UBP_DCHitBox_C* BP_DCHitBox2;  // 0x11F0 (0x11F0)
	struct UBP_DCHitBox_C* BP_DCHitBox1;  // 0x11F8 (0x11F8)
	struct UBP_DCHitBox_C* BP_DCHitBox;  // 0x1200 (0x1200)
	struct ABP_SkeletonChampionShield_C* Champion Shield;  // 0x1208 (0x1208)


	void _1(struct FGameplayTag NewParam1, struct FRigUnit_SwitchParent& NewParam); // Function BP_SkeletonChampion_Common.BP_SkeletonChampion_Common_C._1
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_SkeletonChampion_Common.BP_SkeletonChampion_Common_C.GameplayTagUpdated
	void ReceiveBeginPlay(); // Function BP_SkeletonChampion_Common.BP_SkeletonChampion_Common_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_SkeletonChampion_Common(int32_t EntryPoint); // Function BP_SkeletonChampion_Common.BP_SkeletonChampion_Common_C.ExecuteUbergraph_BP_SkeletonChampion_Common
}; 
 
 


