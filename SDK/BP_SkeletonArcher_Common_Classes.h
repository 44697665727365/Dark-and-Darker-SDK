#pragma once 
#include <BP_SkeletonArcher_Common_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_SkeletonArcher_Common.BP_SkeletonArcher_Common_C
// Size: 0x1200(Inherited: 0x11B8)
struct ABP_SkeletonArcher_Common_C : ABP_Skeleton_C
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


	void ReceiveBeginPlay(); // Function BP_SkeletonArcher_Common.BP_SkeletonArcher_Common_C.ReceiveBeginPlay
	void OnBeforeDeath(); // Function BP_SkeletonArcher_Common.BP_SkeletonArcher_Common_C.OnBeforeDeath
	void ExecuteUbergraph_BP_SkeletonArcher_Common(int32_t EntryPoint); // Function BP_SkeletonArcher_Common.BP_SkeletonArcher_Common_C.ExecuteUbergraph_BP_SkeletonArcher_Common
}; 
 
 


