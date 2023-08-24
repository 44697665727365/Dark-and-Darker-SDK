#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_GhostKing_EarthQuake.GA_GhostKing_EarthQuake_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_GhostKing_EarthQuake.GA_GhostKing_EarthQuake_C.EventReceived_A76EDFB5460926AE7B38D69A78D29398
struct FEventReceived_A76EDFB5460926AE7B38D69A78D29398
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_GhostKing_EarthQuake.GA_GhostKing_EarthQuake_C.EventReceived_A902270D42A9465CE85A55A3BFA70716
struct FEventReceived_A902270D42A9465CE85A55A3BFA70716
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_GhostKing_EarthQuake.GA_GhostKing_EarthQuake_C.ExecuteUbergraph_GA_GhostKing_EarthQuake
struct FExecuteUbergraph_GA_GhostKing_EarthQuake
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xB8 (0xB8)
	struct FGameplayEventData Temp_struct_Variable;  // 0xC8 (0xC8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x178 (0x178)
	char pad_384_1 : 7;  // 0x180 (0x180)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x180 (0x180)
	char pad_385[3];  // 0x181 (0x181)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x184 (0x184)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x188 (0x188)
	char pad_396_1 : 7;  // 0x18C (0x18C)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0x18C (0x18C)
	char pad_397[3];  // 0x18D (0x18D)
	int32_t Temp_int_Loop_Counter_Variable_2;  // 0x190 (0x190)
	int32_t CallFunc_Subtract_IntInt_ReturnValue_2;  // 0x194 (0x194)
	char pad_408_1 : 7;  // 0x198 (0x198)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue_2 : 1;  // 0x198 (0x198)
	char pad_409[3];  // 0x199 (0x199)
	int32_t Temp_int_Array_Index_Variable;  // 0x19C (0x19C)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x1A0 (0x1A0)
	int32_t Temp_int_Array_Index_Variable_2;  // 0x1B0 (0x1B0)
	int32_t Temp_int_Variable;  // 0x1B4 (0x1B4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x1B8 (0x1B8)
	char pad_444[4];  // 0x1BC (0x1BC)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x1C0 (0x1C0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x270 (0x270)
	struct ABP_GhostKing_Common_C* K2Node_DynamicCast_AsBP_Ghost_King_Common;  // 0x278 (0x278)
	char pad_640_1 : 7;  // 0x280 (0x280)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x280 (0x280)
	char pad_641[7];  // 0x281 (0x281)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x288 (0x288)
	char pad_656_1 : 7;  // 0x290 (0x290)
	bool K2Node_Event_bWasCancelled : 1;  // 0x290 (0x290)
	char pad_657[7];  // 0x291 (0x291)
	struct FVector CallFunc_GetCapsuleBottomLocation_ReturnValue;  // 0x298 (0x298)
	double CallFunc_BreakVector_X;  // 0x2B0 (0x2B0)
	double CallFunc_BreakVector_Y;  // 0x2B8 (0x2B8)
	double CallFunc_BreakVector_Z;  // 0x2C0 (0x2C0)
	struct ADCCharacterBase* CallFunc_Array_Get_Item;  // 0x2C8 (0x2C8)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x2D0 (0x2D0)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x380 (0x380)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData_2;  // 0x388 (0x388)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData_3;  // 0x438 (0x438)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x4E8 (0x4E8)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue_2;  // 0x4F8 (0x4F8)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue;  // 0x508 (0x508)
	struct FVector CallFunc_GetCapsuleBottomLocation_ReturnValue_2;  // 0x510 (0x510)
	int32_t CallFunc_GetGameplayEffectCount_ReturnValue;  // 0x528 (0x528)
	char pad_1324[4];  // 0x52C (0x52C)
	double CallFunc_BreakVector_X_2;  // 0x530 (0x530)
	double CallFunc_BreakVector_Y_2;  // 0x538 (0x538)
	double CallFunc_BreakVector_Z_2;  // 0x540 (0x540)
	double CallFunc_Conv_IntToDouble_ReturnValue;  // 0x548 (0x548)
	char pad_1360_1 : 7;  // 0x550 (0x550)
	bool CallFunc_Greater_DoubleDouble_ReturnValue : 1;  // 0x550 (0x550)
	char pad_1361_1 : 7;  // 0x551 (0x551)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x551 (0x551)
	char pad_1362[2];  // 0x552 (0x552)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x554 (0x554)
	int32_t CallFunc_Subtract_IntInt_ReturnValue_3;  // 0x558 (0x558)
	int32_t CallFunc_Max_ReturnValue;  // 0x55C (0x55C)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x560 (0x560)
	struct ADCCharacterBase* CallFunc_Array_Get_Item_2;  // 0x568 (0x568)
	int32_t CallFunc_Array_Length_ReturnValue_2;  // 0x570 (0x570)
	char pad_1396[4];  // 0x574 (0x574)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData_4;  // 0x578 (0x578)
	int32_t CallFunc_Subtract_IntInt_ReturnValue_4;  // 0x628 (0x628)
	char pad_1580[4];  // 0x62C (0x62C)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_2;  // 0x630 (0x630)
	int32_t CallFunc_Max_ReturnValue_2;  // 0x638 (0x638)
	int32_t CallFunc_GetGameplayEffectCount_ReturnValue_2;  // 0x63C (0x63C)
	double CallFunc_Conv_IntToDouble_ReturnValue_2;  // 0x640 (0x640)
	struct FVector CallFunc_GetCapsuleBottomLocation_ReturnValue_3;  // 0x648 (0x648)
	char pad_1632_1 : 7;  // 0x660 (0x660)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x660 (0x660)
	char pad_1633[7];  // 0x661 (0x661)
	double CallFunc_BreakVector_X_3;  // 0x668 (0x668)
	double CallFunc_BreakVector_Y_3;  // 0x670 (0x670)
	double CallFunc_BreakVector_Z_3;  // 0x678 (0x678)
	double CallFunc_Add_DoubleDouble_ReturnValue_2;  // 0x680 (0x680)
	char pad_1672_1 : 7;  // 0x688 (0x688)
	bool CallFunc_Greater_DoubleDouble_ReturnValue_2 : 1;  // 0x688 (0x688)
	char pad_1673[7];  // 0x689 (0x689)
	double CallFunc_Multiply_DoubleDouble_ReturnValue;  // 0x690 (0x690)
	double CallFunc_Multiply_DoubleDouble_ReturnValue_2;  // 0x698 (0x698)
	double CallFunc_Add_DoubleDouble_ReturnValue_3;  // 0x6A0 (0x6A0)
	double CallFunc_Add_DoubleDouble_ReturnValue_4;  // 0x6A8 (0x6A8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue_2;  // 0x6B0 (0x6B0)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_Change_GE_Attribute_And_Apply_Return_Value;  // 0x6B8 (0x6B8)
	char pad_1736_1 : 7;  // 0x6C8 (0x6C8)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x6C8 (0x6C8)
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_Change_GE_Attribute_And_Apply_Return_Value_2;  // 0x6D0 (0x6D0)
	struct FGameplayEventData Temp_struct_Variable_2;  // 0x6E0 (0x6E0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4;  // 0x790 (0x790)
	struct ADCMonsterBase* CallFunc_SpawnMonster_ReturnValue;  // 0x798 (0x798)
	struct FTransform CallFunc_GetTransform_ReturnValue;  // 0x7A0 (0x7A0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_5;  // 0x800 (0x800)
	struct FVector CallFunc_BreakTransform_Location;  // 0x808 (0x808)
	struct FRotator CallFunc_BreakTransform_Rotation;  // 0x820 (0x820)
	struct FVector CallFunc_BreakTransform_Scale;  // 0x838 (0x838)
	struct ABP_GhostKing_Common_C* K2Node_DynamicCast_AsBP_Ghost_King_Common_2;  // 0x850 (0x850)
	char pad_2136_1 : 7;  // 0x858 (0x858)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x858 (0x858)
	char pad_2137[7];  // 0x859 (0x859)
	struct FTransform CallFunc_MakeTransform_ReturnValue;  // 0x860 (0x860)
	struct AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;  // 0x8C0 (0x8C0)
	int32_t CallFunc_Array_AddUnique_ReturnValue;  // 0x8C8 (0x8C8)
	char pad_2252[4];  // 0x8CC (0x8CC)
	struct ABP_GameSpawner_C* CallFunc_FinishSpawningActor_ReturnValue;  // 0x8D0 (0x8D0)
	struct FGameplayEventData K2Node_CustomEvent_Payload_2;  // 0x8D8 (0x8D8)
	int32_t CallFunc_Subtract_IntInt_ReturnValue_5;  // 0x988 (0x988)
	char pad_2444_1 : 7;  // 0x98C (0x98C)
	bool CallFunc_LessEqual_IntInt_ReturnValue : 1;  // 0x98C (0x98C)
	char pad_2445_1 : 7;  // 0x98D (0x98D)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x98D (0x98D)


}; 
 
 // Function GA_GhostKing_EarthQuake.GA_GhostKing_EarthQuake_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 