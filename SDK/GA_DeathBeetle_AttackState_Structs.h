#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_DeathBeetle_AttackState.GA_DeathBeetle_AttackState_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_DeathBeetle_AttackState.GA_DeathBeetle_AttackState_C.EventReceived_39775F904A1DD664E264DAA8ECD95886
struct FEventReceived_39775F904A1DD664E264DAA8ECD95886
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_DeathBeetle_AttackState.GA_DeathBeetle_AttackState_C.ExecuteUbergraph_GA_DeathBeetle_AttackState
struct FExecuteUbergraph_GA_DeathBeetle_AttackState
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
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x238 (0x238)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x240 (0x240)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x248 (0x248)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x250 (0x250)
	float CallFunc_GetValueAsFloat_ReturnValue;  // 0x258 (0x258)
	char pad_604_1 : 7;  // 0x25C (0x25C)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0x25C (0x25C)
	char pad_605[3];  // 0x25D (0x25D)
	double CallFunc_LessEqual_DoubleDouble_B_ImplicitCast;  // 0x260 (0x260)


}; 
 
 