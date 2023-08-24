#pragma once 
#include <BP_SkeletonFootmanFromFakeDeath_Common_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_SkeletonFootmanFromFakeDeath_Common.BP_SkeletonFootmanFromFakeDeath_Common_C
// Size: 0x1210(Inherited: 0x11B8)
struct ABP_SkeletonFootmanFromFakeDeath_Common_C : ABP_Skeleton_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x11B8 (0x11B8)
	struct UBP_DCHitBox_C* BP_DCHitBox_Foot_L;  // 0x11C0 (0x11C0)
	struct UBP_DCHitBox_C* BP_DCHitBox_Foot_R;  // 0x11C8 (0x11C8)
	struct UBP_DCHitBox_C* BP_DCHitBox_Upper_Leg_L;  // 0x11D0 (0x11D0)
	struct UBP_DCHitBox_C* BP_DCHitBox_Upper_Leg_R;  // 0x11D8 (0x11D8)
	struct UBP_DCHitBox_C* BP_DCHitBox_Down_Leg_L;  // 0x11E0 (0x11E0)
	struct UBP_DCHitBox_C* BP_DCHitBox_Down_Leg_R;  // 0x11E8 (0x11E8)
	struct UBP_DCHitBox_C* BP_DCHitBox_Body;  // 0x11F0 (0x11F0)
	struct UBP_DCHitBox_C* BP_DCHitBox_Head;  // 0x11F8 (0x11F8)
	struct TArray<struct ADCCharacterBase*> Target Array_1;  // 0x1200 (0x1200)


	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_SkeletonFootmanFromFakeDeath_Common.BP_SkeletonFootmanFromFakeDeath_Common_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_SkeletonFootmanFromFakeDeath_Common(int32_t EntryPoint); // Function BP_SkeletonFootmanFromFakeDeath_Common.BP_SkeletonFootmanFromFakeDeath_Common_C.ExecuteUbergraph_BP_SkeletonFootmanFromFakeDeath_Common
}; 
 
 


