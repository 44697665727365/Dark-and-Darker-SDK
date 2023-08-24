#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_GoblinArcher_InteractionPhase.GA_GoblinArcher_InteractionPhase_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_GoblinArcher_InteractionPhase.GA_GoblinArcher_InteractionPhase_C.EventReceived_CC01263B4FD69AF23B615D9494EBCC97
struct FEventReceived_CC01263B4FD69AF23B615D9494EBCC97
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_GoblinArcher_InteractionPhase.GA_GoblinArcher_InteractionPhase_C.ExecuteUbergraph_GA_GoblinArcher_InteractionPhase
struct FExecuteUbergraph_GA_GoblinArcher_InteractionPhase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool K2Node_Event_bWasCancelled : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x8 (0x8)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x18 (0x18)
	struct FGameplayEventData Temp_struct_Variable;  // 0xC8 (0xC8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x178 (0x178)
	char pad_384_1 : 7;  // 0x180 (0x180)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x180 (0x180)
	char pad_385[7];  // 0x181 (0x181)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x188 (0x188)
	int32_t CallFunc_RandomInteger_ReturnValue;  // 0x238 (0x238)
	char pad_572_1 : 7;  // 0x23C (0x23C)
	bool K2Node_SwitchInteger_CmpSuccess : 1;  // 0x23C (0x23C)


}; 
 
 // Function GA_GoblinArcher_InteractionPhase.GA_GoblinArcher_InteractionPhase_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 