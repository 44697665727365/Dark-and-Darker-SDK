#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_CaveTroll_Attack_SpinningPhase.GA_CaveTroll_Attack_SpinningPhase_C.EventReceived_5E2CE7824445841FB45C2FA20500B434
struct FEventReceived_5E2CE7824445841FB45C2FA20500B434
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_CaveTroll_Attack_SpinningPhase.GA_CaveTroll_Attack_SpinningPhase_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_CaveTroll_Attack_SpinningPhase.GA_CaveTroll_Attack_SpinningPhase_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_CaveTroll_Attack_SpinningPhase.GA_CaveTroll_Attack_SpinningPhase_C.ExecuteUbergraph_GA_CaveTroll_Attack_SpinningPhase
struct FExecuteUbergraph_GA_CaveTroll_Attack_SpinningPhase
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
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x188 (0x188)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x190 (0x190)
	char pad_408_1 : 7;  // 0x198 (0x198)
	bool K2Node_Event_bWasCancelled : 1;  // 0x198 (0x198)
	char pad_409[7];  // 0x199 (0x199)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x1A0 (0x1A0)
	char pad_424_1 : 7;  // 0x1A8 (0x1A8)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue : 1;  // 0x1A8 (0x1A8)
	char pad_425[7];  // 0x1A9 (0x1A9)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x1B0 (0x1B0)


}; 
 
 