#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SkeletonGuardmanCounterAttack.GA_SkeletonGuardmanCounterAttack_C.ExecuteUbergraph_GA_SkeletonGuardmanCounterAttack
struct FExecuteUbergraph_GA_SkeletonGuardmanCounterAttack
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct ABP_DCMonsterBase_C* K2Node_DynamicCast_AsBP_DCMonster_Base;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool K2Node_Event_bWasCancelled : 1;  // 0x19 (0x19)
	char pad_26[6];  // 0x1A (0x1A)
	struct AAIController* CallFunc_GetAIController_ReturnValue;  // 0x20 (0x20)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x28 (0x28)


}; 
 
 // Function GA_SkeletonGuardmanCounterAttack.GA_SkeletonGuardmanCounterAttack_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonGuardmanCounterAttack.GA_SkeletonGuardmanCounterAttack_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 