#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SkeletonRoyalGuard_Spawn.GA_SkeletonRoyalGuard_Spawn_C.ExecuteUbergraph_GA_SkeletonRoyalGuard_Spawn
struct FExecuteUbergraph_GA_SkeletonRoyalGuard_Spawn
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x4 (0x4)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool K2Node_Event_bWasCancelled : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x10 (0x10)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xC0 (0xC0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0xC8 (0xC8)
	struct ABP_SkeletonRoyalGuard_C* K2Node_DynamicCast_AsBP_Skeleton_Royal_Guard;  // 0xD0 (0xD0)
	char pad_216_1 : 7;  // 0xD8 (0xD8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xD8 (0xD8)
	char pad_217[7];  // 0xD9 (0xD9)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0xE0 (0xE0)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0xE8 (0xE8)
	char pad_256_1 : 7;  // 0x100 (0x100)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x100 (0x100)
	char pad_257_1 : 7;  // 0x101 (0x101)
	bool CallFunc_GetBBTargetActorToCharacterBase_Result : 1;  // 0x101 (0x101)
	char pad_258[6];  // 0x102 (0x102)
	struct ADCCharacterBase* CallFunc_GetBBTargetActorToCharacterBase_As_DCCharacter_Base;  // 0x108 (0x108)
	struct UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue;  // 0x110 (0x110)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x118 (0x118)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue;  // 0x130 (0x130)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x148 (0x148)
	char pad_336_1 : 7;  // 0x150 (0x150)
	bool CallFunc_K2_SetActorRotation_ReturnValue : 1;  // 0x150 (0x150)
	char pad_337[7];  // 0x151 (0x151)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2;  // 0x158 (0x158)


}; 
 
 // Function GA_SkeletonRoyalGuard_Spawn.GA_SkeletonRoyalGuard_Spawn_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonRoyalGuard_Spawn.GA_SkeletonRoyalGuard_Spawn_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 