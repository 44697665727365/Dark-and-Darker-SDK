#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SkeletonRoyalGuard_ThrowingKnife.GA_SkeletonRoyalGuard_ThrowingKnife_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonRoyalGuard_ThrowingKnife.GA_SkeletonRoyalGuard_ThrowingKnife_C.ExecuteUbergraph_GA_SkeletonRoyalGuard_ThrowingKnife
struct FExecuteUbergraph_GA_SkeletonRoyalGuard_ThrowingKnife
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct ABP_SkeletonRoyalGuard_C* K2Node_DynamicCast_AsBP_Skeleton_Royal_Guard;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x20 (0x20)
	struct UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue;  // 0xD0 (0xD0)


}; 
 
 