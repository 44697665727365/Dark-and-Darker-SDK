#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_CaveTroll_Combo_RightToLeft.GA_CaveTroll_Combo_RightToLeft_C.EventReceived_2F8287DA4229EC89E44ECD96C0A1A3B4
struct FEventReceived_2F8287DA4229EC89E44ECD96C0A1A3B4
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_CaveTroll_Combo_RightToLeft.GA_CaveTroll_Combo_RightToLeft_C.ExecuteUbergraph_GA_CaveTroll_Combo_RightToLeft
struct FExecuteUbergraph_GA_CaveTroll_Combo_RightToLeft
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_RandomBool_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct FGameplayEventData Temp_struct_Variable;  // 0x8 (0x8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0xB8 (0xB8)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	bool CallFunc_Get_BB_Target_Actor_Result : 1;  // 0xC0 (0xC0)
	char pad_193[7];  // 0xC1 (0xC1)
	struct ADCCharacterBase* CallFunc_Get_BB_Target_Actor_DCCharacterBase;  // [xC8 ([xC8)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xD0 (0xD0)
	char pad_209[7];  // 0xD1 (0xD1)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0xD8 (0xD8)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0xF0 (0xF0)
	char pad_416_1 : 7;  // 0x1A0 (0x1A0)
	bool K2Node_Event_bWasCancelled : 1;  // 0x1A0 (0x1A0)
	char pad_417[7];  // 0x1A1 (0x1A1)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x1A8 (0x1A8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x258 (0x258)
	struct ABP_CaveTroll_C* K2Node_DynamicCast_AsBP_Cave_Troll;  // 0x260 (0x260)
	char pad_616_1 : 7;  // 0x268 (0x268)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x268 (0x268)
	char pad_617[7];  // 0x269 (0x269)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x270 (0x270)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x320 (0x320)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x328 (0x328)
	struct FGameplayTag K2Node_Event_EventTag;  // 0x338 (0x338)
	struct FGameplayTag K2Node_Event_InChannelTag;  // 0x340 (0x340)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x348 (0x348)
	char pad_1016[8];  // 0x3F8 (0x3F8)
	struct FTransform CallFunc_GetTransform_ReturnValue;  // 0x400 (0x400)
	struct FRotator CallFunc_FindRelativeLookAtRotation_ReturnValue;  // 0x460 (0x460)
	char pad_1144_1 : 7;  // 0x478 (0x478)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0x478 (0x478)
	char pad_1145[3];  // 0x479 (0x479)
	float CallFunc_BreakRotator_Roll;  // 0x47C (0x47C)
	float CallFunc_BreakRotator_Pitch;  // 0x480 (0x480)
	float CallFunc_BreakRotator_Yaw;  // 0x484 (0x484)
	char pad_1160_1 : 7;  // 0x488 (0x488)
	bool CallFunc_InRange_FloatFloat_ReturnValue : 1;  // 0x488 (0x488)
	char pad_1161_1 : 7;  // 0x489 (0x489)
	bool CallFunc_InRange_FloatFloat_ReturnValue_2 : 1;  // 0x489 (0x489)
	char pad_1162_1 : 7;  // 0x48A (0x48A)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x48A (0x48A)
	char pad_1163[1];  // 0x48B (0x48B)
	float CallFunc_GetDistanceTo_ReturnValue;  // 0x48C (0x48C)
	char pad_1168_1 : 7;  // 0x490 (0x490)
	bool CallFunc_Less_DoubleDouble_ReturnValue : 1;  // 0x490 (0x490)
	char pad_1169[7];  // 0x491 (0x491)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x498 (0x498)
	char pad_1184_1 : 7;  // 0x4A0 (0x4A0)
	bool CallFunc_BooleanAND_ReturnValue_2 : 1;  // 0x4A0 (0x4A0)
	char pad_1185[7];  // 0x4A1 (0x4A1)
	struct ABP_CaveTroll_C* K2Node_DynamicCast_AsBP_Cave_Troll_2;  // 0x4A8 (0x4A8)
	char pad_1200_1 : 7;  // 0x4B0 (0x4B0)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x4B0 (0x4B0)
	char pad_1201[7];  // 0x4B1 (0x4B1)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x4B8 (0x4B8)
	double CallFunc_InRange_FloatFloat_Value_ImplicitCast;  // 0x4C0 (0x4C0)
	double CallFunc_Less_DoubleDouble_A_ImplicitCast;  // 0x4C8 (0x4C8)


}; 
 
 // Function GA_CaveTroll_Combo_RightToLeft.GA_CaveTroll_Combo_RightToLeft_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_CaveTroll_Combo_RightToLeft.GA_CaveTroll_Combo_RightToLeft_C.ServerTargetDataReceived
// Size: 0xC0(Inherited: 0xC0)
struct FServerTargetDataReceived : FServerTargetDataReceived
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayTag InChannelTag;  // 0x8 (0x8)
	struct FGameplayEventData EventData;  // 0x10 (0x10)


}; 
 
 // Function GA_CaveTroll_Combo_RightToLeft.GA_CaveTroll_Combo_RightToLeft_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 