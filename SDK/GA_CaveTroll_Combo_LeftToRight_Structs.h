#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_CaveTroll_Combo_LeftToRight.GA_CaveTroll_Combo_LeftToRight_C.EventReceived_A925733446D6E2DB0FC4F1A7F5CD2C71
struct FEventReceived_A925733446D6E2DB0FC4F1A7F5CD2C71
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_CaveTroll_Combo_LeftToRight.GA_CaveTroll_Combo_LeftToRight_C.ExecuteUbergraph_GA_CaveTroll_Combo_LeftToRight
struct FExecuteUbergraph_GA_CaveTroll_Combo_LeftToRight
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x10 (0x10)
	struct ABP_CaveTroll_C* K2Node_DynamicCast_AsBP_Cave_Troll;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x20 (0x20)
	char pad_33_1 : 7;  // 0x21 (0x21)
	bool CallFunc_Get_BB_Target_Actor_Result : 1;  // 0x21 (0x21)
	char pad_34[6];  // 0x22 (0x22)
	struct ADCCharacterBase* CallFunc_Get_BB_Target_Actor_DCCharacterBase;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x38 (0x38)
	double CallFunc_RandomFloatInRange_ReturnValue_2;  // 0x50 (0x50)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool CallFunc_InRange_FloatFloat_ReturnValue : 1;  // 0x58 (0x58)
	char pad_89_1 : 7;  // 0x59 (0x59)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0x59 (0x59)
	char pad_90[6];  // 0x5A (0x5A)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x60 (0x60)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x68 (0x68)
	char pad_105_1 : 7;  // 0x69 (0x69)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x69 (0x69)
	char pad_106[6];  // 0x6A (0x6A)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x70 (0x70)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x120 (0x120)
	struct ABP_CaveTroll_C* K2Node_DynamicCast_AsBP_Cave_Troll_2;  // 0x128 (0x128)
	char pad_304_1 : 7;  // 0x130 (0x130)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x130 (0x130)
	char pad_305[7];  // 0x131 (0x131)
	struct FGameplayEventData Temp_struct_Variable;  // 0x138 (0x138)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x1E8 (0x1E8)
	char pad_664_1 : 7;  // 0x298 (0x298)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2 : 1;  // 0x298 (0x298)
	char pad_665_1 : 7;  // 0x299 (0x299)
	bool CallFunc_InRange_FloatFloat_ReturnValue_2 : 1;  // 0x299 (0x299)
	char pad_666_1 : 7;  // 0x29A (0x29A)
	bool K2Node_Event_bWasCancelled : 1;  // 0x29A (0x29A)
	char pad_667_1 : 7;  // 0x29B (0x29B)
	bool CallFunc_BooleanAND_ReturnValue_2 : 1;  // 0x29B (0x29B)
	struct FGameplayTag K2Node_Event_EventTag;  // 0x29C (0x29C)
	struct FGameplayTag K2Node_Event_InChannelTag;  // 0x2A4 (0x2A4)
	char pad_684[4];  // 0x2AC (0x2AC)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x2B0 (0x2B0)
	struct FTransform CallFunc_GetTransform_ReturnValue;  // 0x360 (0x360)
	struct FRotator CallFunc_FindRelativeLookAtRotation_ReturnValue;  // 0x3C0 (0x3C0)
	char pad_984_1 : 7;  // 0x3D8 (0x3D8)
	bool CallFunc_InRange_FloatFloat_ReturnValue_3 : 1;  // 0x3D8 (0x3D8)
	char pad_985[3];  // 0x3D9 (0x3D9)
	float CallFunc_BreakRotator_Roll;  // 0x3DC (0x3DC)
	float CallFunc_BreakRotator_Pitch;  // 0x3E0 (0x3E0)
	float CallFunc_BreakRotator_Yaw;  // 0x3E4 (0x3E4)
	float CallFunc_GetDistanceTo_ReturnValue;  // 0x3E8 (0x3E8)
	char pad_1004_1 : 7;  // 0x3EC (0x3EC)
	bool CallFunc_InRange_FloatFloat_ReturnValue_4 : 1;  // 0x3EC (0x3EC)
	char pad_1005_1 : 7;  // 0x3ED (0x3ED)
	bool CallFunc_Less_DoubleDouble_ReturnValue : 1;  // 0x3ED (0x3ED)
	char pad_1006[2];  // 0x3EE (0x3EE)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x3F0 (0x3F0)
	char pad_1016_1 : 7;  // 0x3F8 (0x3F8)
	bool CallFunc_BooleanAND_ReturnValue_3 : 1;  // 0x3F8 (0x3F8)
	char pad_1017[7];  // 0x3F9 (0x3F9)
	struct ABP_CaveTroll_C* K2Node_DynamicCast_AsBP_Cave_Troll_3;  // 0x400 (0x400)
	char pad_1032_1 : 7;  // 0x408 (0x408)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x408 (0x408)
	char pad_1033[7];  // 0x409 (0x409)
	double CallFunc_RandomFloatInRange_ReturnValue_3;  // 0x410 (0x410)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x418 (0x418)
	char pad_1056_1 : 7;  // 0x420 (0x420)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue_3 : 1;  // 0x420 (0x420)
	char pad_1057_1 : 7;  // 0x421 (0x421)
	bool CallFunc_BooleanAND_ReturnValue_4 : 1;  // 0x421 (0x421)
	char pad_1058[2];  // 0x422 (0x422)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x424 (0x424)
	char pad_1076[4];  // 0x434 (0x434)
	double CallFunc_InRange_FloatFloat_Value_ImplicitCast;  // 0x438 (0x438)
	double CallFunc_Less_DoubleDouble_A_ImplicitCast;  // 0x440 (0x440)


}; 
 
 // Function GA_CaveTroll_Combo_LeftToRight.GA_CaveTroll_Combo_LeftToRight_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_CaveTroll_Combo_LeftToRight.GA_CaveTroll_Combo_LeftToRight_C.ServerTargetDataReceived
// Size: 0xC0(Inherited: 0xC0)
struct FServerTargetDataReceived : FServerTargetDataReceived
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayTag InChannelTag;  // 0x8 (0x8)
	struct FGameplayEventData EventData;  // 0x10 (0x10)


}; 
 
 // Function GA_CaveTroll_Combo_LeftToRight.GA_CaveTroll_Combo_LeftToRight_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 