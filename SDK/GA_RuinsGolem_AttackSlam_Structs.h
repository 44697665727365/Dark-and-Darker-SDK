#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_RuinsGolem_AttackSlam.GA_RuinsGolem_AttackSlam_C.ExecuteUbergraph_GA_RuinsGolem_AttackSlam
struct FExecuteUbergraph_GA_RuinsGolem_AttackSlam
{
	int32_t EntryPoint;  // 0x0 (0x0)
	int32_t Temp_int_Array_Index_Variable;  // 0x4 (0x4)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool CallFunc_NotEqual_IntInt_ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)
	int32_t Temp_int_Loop_Counter_Variable;  // 0xC (0xC)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x10 (0x10)
	int32_t CallFunc_Add_IntInt_ReturnValue_2;  // 0x14 (0x14)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x18 (0x18)
	struct FVector CallFunc_Array_Get_Item;  // 0x20 (0x20)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x38 (0x38)
	char pad_57_1 : 7;  // 0x39 (0x39)
	bool CallFunc_SpawnAoe_bSuccessfully : 1;  // 0x39 (0x39)
	char pad_58[6];  // 0x3A (0x3A)
	struct ADCAoeBase* CallFunc_SpawnAoe_ReturnValue;  // 0x40 (0x40)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue;  // 0x48 (0x48)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x60 (0x60)
	float CallFunc_BreakRotator_Roll;  // 0x68 (0x68)
	float CallFunc_BreakRotator_Pitch;  // 0x6C (0x6C)
	float CallFunc_BreakRotator_Yaw;  // 0x70 (0x70)
	char pad_116[4];  // 0x74 (0x74)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x78 (0x78)
	struct FGameplayEventData Temp_struct_Variable;  // 0x80 (0x80)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x130 (0x130)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x138 (0x138)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;  // 0x148 (0x148)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x150 (0x150)
	char pad_344_1 : 7;  // 0x158 (0x158)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x158 (0x158)
	char pad_345[7];  // 0x159 (0x159)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x160 (0x160)
	struct FVector CallFunc_Array_Get_Item_2;  // 0x210 (0x210)
	double CallFunc_RandomFloatInRange_ReturnValue_2;  // 0x228 (0x228)
	double CallFunc_RandomFloatInRange_ReturnValue_3;  // 0x230 (0x230)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x238 (0x238)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x240 (0x240)
	struct FRotator CallFunc_MakeRotator_ReturnValue;  // 0x248 (0x248)
	char pad_608_1 : 7;  // 0x260 (0x260)
	bool CallFunc_Get_Enemies_In_Range_And_Angle_Result : 1;  // 0x260 (0x260)
	char pad_609[7];  // 0x261 (0x261)
	struct TArray<struct ADCCharacterBase*> CallFunc_Get_Enemies_In_Range_And_Angle_DCCharacterBase;  // 0x268 (0x268)
	char pad_632_1 : 7;  // 0x278 (0x278)
	bool CallFunc_K2_SetActorRotation_ReturnValue : 1;  // 0x278 (0x278)
	char pad_633[7];  // 0x279 (0x279)
	struct ADCCharacterBase* CallFunc_Array_Get_Item_3;  // 0x280 (0x280)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x288 (0x288)
	char pad_652[4];  // 0x28C (0x28C)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x290 (0x290)
	char pad_832_1 : 7;  // 0x340 (0x340)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x340 (0x340)
	char pad_833[7];  // 0x341 (0x341)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x348 (0x348)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x358 (0x358)
	char pad_872_1 : 7;  // 0x368 (0x368)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x368 (0x368)
	char pad_873[7];  // 0x369 (0x369)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x370 (0x370)
	int32_t Temp_int_Variable;  // 0x420 (0x420)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x424 (0x424)
	int32_t Temp_int_Variable_2;  // 0x434 (0x434)
	int32_t CallFunc_Add_IntInt_ReturnValue_3;  // 0x438 (0x438)
	int32_t CallFunc_Divide_IntInt_ReturnValue;  // 0x43C (0x43C)
	char CallFunc_Conv_IntToByte_ReturnValue;  // 0x440 (0x440)
	char CallFunc_GetValidValue_ReturnValue;  // 0x441 (0x441)
	char pad_1090_1 : 7;  // 0x442 (0x442)
	bool CallFunc_LessEqual_IntInt_ReturnValue : 1;  // 0x442 (0x442)
	char pad_1091[5];  // 0x443 (0x443)
	struct FVector CallFunc_Get_Direction_Vector_Result_Vector;  // 0x448 (0x448)
	struct FVector CallFunc_K2_GetRandomLocationInNavigableRadius_RandomLocation;  // 0x460 (0x460)
	char pad_1144_1 : 7;  // 0x478 (0x478)
	bool CallFunc_K2_GetRandomLocationInNavigableRadius_ReturnValue : 1;  // 0x478 (0x478)
	char pad_1145[7];  // 0x479 (0x479)
	double CallFunc_BreakVector_X;  // 0x480 (0x480)
	double CallFunc_BreakVector_Y;  // 0x488 (0x488)
	double CallFunc_BreakVector_Z;  // 0x490 (0x490)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x498 (0x498)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0x4A0 (0x4A0)
	int32_t CallFunc_Array_AddUnique_ReturnValue;  // 0x4B8 (0x4B8)
	char pad_1212[4];  // 0x4BC (0x4BC)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast;  // 0x4C0 (0x4C0)
	float CallFunc_MakeRotator_Yaw_ImplicitCast;  // 0x4C8 (0x4C8)


}; 
 
 // Function GA_RuinsGolem_AttackSlam.GA_RuinsGolem_AttackSlam_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_RuinsGolem_AttackSlam.GA_RuinsGolem_AttackSlam_C.EventReceived_9F0B47BF4D356B3DCEF1B9ABE7B467F6
struct FEventReceived_9F0B47BF4D356B3DCEF1B9ABE7B467F6
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 