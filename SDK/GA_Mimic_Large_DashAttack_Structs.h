#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_Mimic_Large_DashAttack.GA_Mimic_Large_DashAttack_C.ExecuteUbergraph_GA_Mimic_Large_DashAttack
struct FExecuteUbergraph_GA_Mimic_Large_DashAttack
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool K2Node_Event_bWasCancelled : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x8 (0x8)


}; 
 
 // Function GA_Mimic_Large_DashAttack.GA_Mimic_Large_DashAttack_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_Mimic_Large_DashAttack.GA_Mimic_Large_DashAttack_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 