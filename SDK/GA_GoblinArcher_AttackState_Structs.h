#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_GoblinArcher_AttackState.GA_GoblinArcher_AttackState_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_GoblinArcher_AttackState.GA_GoblinArcher_AttackState_C.EventReceived_BB92ACDF454879A28FDB38B442C5740F
struct FEventReceived_BB92ACDF454879A28FDB38B442C5740F
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_GoblinArcher_AttackState.GA_GoblinArcher_AttackState_C.ExecuteUbergraph_GA_GoblinArcher_AttackState
struct FExecuteUbergraph_GA_GoblinArcher_AttackState
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xB8 (0xB8)
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
 
 