#pragma once 
#include <BP_SkeletonRoyalGuard_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_SkeletonRoyalGuard.BP_SkeletonRoyalGuard_C
// Size: 0x1228(Inherited: 0x11B8)
struct ABP_SkeletonRoyalGuard_C : ABP_DCMonsterBaseWithOptions_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x11B8 (0x11B8)
	struct UBP_DCHitBox_C* BP_DCHitBox9;  // 0x11C0 (0x11C0)
	struct UBP_DCHitBox_C* BP_DCHitBox8;  // 0x11C8 (0x11C8)
	struct UBP_DCHitBox_C* BP_DCHitBox7;  // 0x11D0 (0x11D0)
	struct UBP_DCHitBox_C* BP_DCHitBox6;  // 0x11D8 (0x11D8)
	struct UBP_DCHitBox_C* BP_DCHitBox5;  // 0x11E0 (0x11E0)
	struct UBP_DCHitBox_C* BP_DCHitBox4;  // 0x11E8 (0x11E8)
	struct UBP_DCHitBox_C* BP_DCHitBox3;  // 0x11F0 (0x11F0)
	struct UBP_DCHitBox_C* BP_DCHitBox2;  // 0x11F8 (0x11F8)
	struct UBP_DCHitBox_C* BP_DCHitBox1;  // 0x1200 (0x1200)
	struct UBP_DCHitBox_C* BP_DCHitBox;  // 0x1208 (0x1208)
	struct ABP_SkeletonWarlord_C* Summoner;  // 0x1210 (0x1210)
	struct ADCCharacterBase* Target Enemy;  // 0x1218 (0x1218)
	struct FGameplayTag Temp Tag;  // 0x1220 (0x1220)


	void Removed_0794AAB34968FF6F7553998A57BEBB51(); // Function BP_SkeletonRoyalGuard.BP_SkeletonRoyalGuard_C.Removed_0794AAB34968FF6F7553998A57BEBB51
	void OnSetAI(); // Function BP_SkeletonRoyalGuard.BP_SkeletonRoyalGuard_C.OnSetAI
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_SkeletonRoyalGuard.BP_SkeletonRoyalGuard_C.GameplayTagUpdated
	void OnBeforeDeath(); // Function BP_SkeletonRoyalGuard.BP_SkeletonRoyalGuard_C.OnBeforeDeath
	void ExecuteUbergraph_BP_SkeletonRoyalGuard(int32_t EntryPoint); // Function BP_SkeletonRoyalGuard.BP_SkeletonRoyalGuard_C.ExecuteUbergraph_BP_SkeletonRoyalGuard
}; 
 
 


