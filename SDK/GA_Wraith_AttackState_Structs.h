#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_Wraith_AttackState.GA_Wraith_AttackState_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_Wraith_AttackState.GA_Wraith_AttackState_C.EventReceived_6CB57BDB4D9B95B8FF8803A9BF0FDA10
struct FEventReceived_6CB57BDB4D9B95B8FF8803A9BF0FDA10
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_Wraith_AttackState.GA_Wraith_AttackState_C.ExecuteUbergraph_GA_Wraith_AttackState
struct FExecuteUbergraph_GA_Wraith_AttackState
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FGameplayTag Temp_struct_Variable;  // 0x4 (0x4)
	char pad_12[4];  // 0xC (0xC)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0x10 (0x10)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x18 (0x18)
	char pad_200_1 : 7;  // 0xC8 (0xC8)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xC8 (0xC8)
	char pad_201[7];  // 0xC9 (0xC9)
	struct FGameplayEventData Temp_struct_Variable_2;  // 0xD0 (0xD0)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x180 (0x180)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0x188 (0x188)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0x190 (0x190)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x240 (0x240)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x250 (0x250)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x258 (0x258)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x260 (0x260)
	float CallFunc_GetValueAsFloat_ReturnValue;  // 0x268 (0x268)
	char pad_620[4];  // 0x26C (0x26C)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x270 (0x270)
	char pad_632_1 : 7;  // 0x278 (0x278)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue : 1;  // 0x278 (0x278)
	char pad_633[7];  // 0x279 (0x279)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x280 (0x280)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast;  // 0x288 (0x288)
	double CallFunc_Subtract_DoubleDouble_A_ImplicitCast;  // 0x290 (0x290)
	double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;  // 0x298 (0x298)
	float CallFunc_SetValueAsFloat_FloatValue_ImplicitCast;  // 0x2A0 (0x2A0)
	float CallFunc_SetValueAsFloat_FloatValue_ImplicitCast_2;  // 0x2A4 (0x2A4)


}; 
 
 