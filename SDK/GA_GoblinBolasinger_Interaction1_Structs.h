#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_GoblinBolasinger_Interaction1.GA_GoblinBolasinger_Interaction1_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_GoblinBolasinger_Interaction1.GA_GoblinBolasinger_Interaction1_C.EventReceived_D02F265B4536722E9A69F8B474E0FEE9
struct FEventReceived_D02F265B4536722E9A69F8B474E0FEE9
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_GoblinBolasinger_Interaction1.GA_GoblinBolasinger_Interaction1_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_GoblinBolasinger_Interaction1.GA_GoblinBolasinger_Interaction1_C.ExecuteUbergraph_GA_GoblinBolasinger_Interaction1
struct FExecuteUbergraph_GA_GoblinBolasinger_Interaction1
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xB8 (0xB8)
	struct FGameplayEventData Temp_struct_Variable;  // 0xC8 (0xC8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x178 (0x178)
	char pad_384_1 : 7;  // 0x180 (0x180)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x180 (0x180)
	char pad_385_1 : 7;  // 0x181 (0x181)
	bool K2Node_Event_bWasCancelled : 1;  // 0x181 (0x181)
	char pad_386[6];  // 0x182 (0x182)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x188 (0x188)


}; 
 
 