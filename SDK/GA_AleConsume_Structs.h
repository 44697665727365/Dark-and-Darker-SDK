#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_AleConsume.GA_AleConsume_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_AleConsume.GA_AleConsume_C.ExecuteUbergraph_GA_AleConsume
struct FExecuteUbergraph_GA_AleConsume
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x8 (0x8)
	char pad_184_1 : 7;  // 0xB8 (0xB8)
	bool K2Node_Event_bWasCancelled : 1;  // 0xB8 (0xB8)


}; 
 
 // Function GA_AleConsume.GA_AleConsume_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 