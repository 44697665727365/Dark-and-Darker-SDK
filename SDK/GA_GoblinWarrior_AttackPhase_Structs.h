#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_GoblinWarrior_AttackPhase.GA_GoblinWarrior_AttackPhase_C.ExecuteUbergraph_GA_GoblinWarrior_AttackPhase
struct FExecuteUbergraph_GA_GoblinWarrior_AttackPhase
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
 
 // Function GA_GoblinWarrior_AttackPhase.GA_GoblinWarrior_AttackPhase_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_GoblinWarrior_AttackPhase.GA_GoblinWarrior_AttackPhase_C.EventReceived_E2AA8C3B4E27A81C3DCC05B52B7D7121
struct FEventReceived_E2AA8C3B4E27A81C3DCC05B52B7D7121
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 