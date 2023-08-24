#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_CaveTroll_Combo_Phase.GA_CaveTroll_Combo_Phase_C.EventReceived_EDCAA6E748675F038F1CECA004BA8FD1
struct FEventReceived_EDCAA6E748675F038F1CECA004BA8FD1
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_CaveTroll_Combo_Phase.GA_CaveTroll_Combo_Phase_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_CaveTroll_Combo_Phase.GA_CaveTroll_Combo_Phase_C.ExecuteUbergraph_GA_CaveTroll_Combo_Phase
struct FExecuteUbergraph_GA_CaveTroll_Combo_Phase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x10 (0x10)
	struct ABP_CaveTroll_C* K2Node_DynamicCast_AsBP_Cave_Troll;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x20 (0x20)
	char pad_33_1 : 7;  // 0x21 (0x21)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0x21 (0x21)
	char pad_34_1 : 7;  // 0x22 (0x22)
	bool CallFunc_InRange_FloatFloat_ReturnValue : 1;  // 0x22 (0x22)
	char pad_35_1 : 7;  // 0x23 (0x23)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x23 (0x23)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)
	double CallFunc_RandomFloatInRange_ReturnValue_2;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool CallFunc_InRange_FloatFloat_ReturnValue_2 : 1;  // 0x30 (0x30)
	char pad_49_1 : 7;  // 0x31 (0x31)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2 : 1;  // 0x31 (0x31)
	char pad_50_1 : 7;  // 0x32 (0x32)
	bool CallFunc_BooleanAND_ReturnValue_2 : 1;  // 0x32 (0x32)
	char pad_51[5];  // 0x33 (0x33)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x38 (0x38)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0xE8 (0xE8)
	struct ABP_CaveTroll_C* K2Node_DynamicCast_AsBP_Cave_Troll_2;  // 0xF0 (0xF0)
	char pad_248_1 : 7;  // 0xF8 (0xF8)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0xF8 (0xF8)
	char pad_249[7];  // 0xF9 (0xF9)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x100 (0x100)
	char pad_264[8];  // 0x108 (0x108)
	struct FTransform CallFunc_GetTransform_ReturnValue;  // 0x110 (0x110)
	char pad_368_1 : 7;  // 0x170 (0x170)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x170 (0x170)
	char pad_369[7];  // 0x171 (0x171)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x178 (0x178)
	struct FGameplayEventData Temp_struct_Variable;  // 0x180 (0x180)
	char pad_560_1 : 7;  // 0x230 (0x230)
	bool K2Node_Event_bWasCancelled : 1;  // 0x230 (0x230)
	char pad_561[7];  // 0x231 (0x231)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x238 (0x238)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x2E8 (0x2E8)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x2F0 (0x2F0)
	struct ABP_CaveTroll_C* K2Node_DynamicCast_AsBP_Cave_Troll_3;  // 0x2F8 (0x2F8)
	char pad_768_1 : 7;  // 0x300 (0x300)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x300 (0x300)
	char pad_769[7];  // 0x301 (0x301)
	struct UObject* CallFunc_GetValueAsObject_ReturnValue;  // 0x308 (0x308)
	struct AActor* K2Node_DynamicCast_As__;  // 0x310 (0x310)
	char pad_792_1 : 7;  // 0x318 (0x318)
	bool K2Node_DynamicCast_bSuccess_4 : 1;  // 0x318 (0x318)
	char pad_793[3];  // 0x319 (0x319)
	int32_t CallFunc_Get_BB_Phase_Phase;  // 0x31C (0x31C)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x320 (0x320)
	struct FRotator CallFunc_FindRelativeLookAtRotation_ReturnValue;  // 0x338 (0x338)
	float CallFunc_BreakRotator_Roll;  // 0x350 (0x350)
	float CallFunc_BreakRotator_Pitch;  // 0x354 (0x354)
	float CallFunc_BreakRotator_Yaw;  // 0x358 (0x358)
	int32_t CallFunc_RandomIntegerInRange_ReturnValue;  // 0x35C (0x35C)
	char pad_864_1 : 7;  // 0x360 (0x360)
	bool CallFunc_Greater_DoubleDouble_ReturnValue : 1;  // 0x360 (0x360)
	char pad_865[3];  // 0x361 (0x361)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x364 (0x364)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x368 (0x368)
	double CallFunc_Greater_DoubleDouble_A_ImplicitCast;  // 0x378 (0x378)


}; 
 
 // Function GA_CaveTroll_Combo_Phase.GA_CaveTroll_Combo_Phase_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 