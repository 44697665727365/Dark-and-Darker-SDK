#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BTD_SkeletonWarlord_CheckSpawned.BTD_SkeletonWarlord_CheckSpawned_C.PerformConditionCheckAI
// Size: 0x22(Inherited: 0x18)
struct FPerformConditionCheckAI : FPerformConditionCheckAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool ReturnValue : 1;  // 0x10 (0x10)
	struct ABP_SkeletonWarlord_C* K2Node_DynamicCast_AsBP_Skeleton_Warlord;  // 0x18 (0x18)
	char pad_49_1 : 7;  // 0x31 (0x31)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x20 (0x20)
	char pad_50_1 : 7;  // 0x32 (0x32)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x21 (0x21)


}; 
 
 