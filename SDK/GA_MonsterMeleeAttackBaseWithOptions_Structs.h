#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.GetBBTargetActorToMonsterBase
struct FGetBBTargetActorToMonsterBase
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Result : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct ABP_DCMonsterBaseWithOptions_C* DCMonsterBaseWithOptions;  // 0x8 (0x8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x10 (0x10)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x18 (0x18)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x20 (0x20)
	struct UObject* CallFunc_GetValueAsObject_ReturnValue;  // 0x28 (0x28)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x38 (0x38)
	char pad_57_1 : 7;  // 0x39 (0x39)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x39 (0x39)


}; 
 
 // Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.EventReceived_95DCC296493E3A36038DED83D7616167
struct FEventReceived_95DCC296493E3A36038DED83D7616167
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.GetAvailableLocation
struct FGetAvailableLocation
{
	struct FVector DestLocation;  // 0x0 (0x0)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool Result : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct FVector Location;  // 0x20 (0x20)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0x38 (0x38)
	struct FVector CallFunc_K2_ProjectPointToNavigation_ProjectedLocation;  // 0x50 (0x50)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool CallFunc_K2_ProjectPointToNavigation_ReturnValue : 1;  // 0x68 (0x68)
	char pad_105[7];  // 0x69 (0x69)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x70 (0x70)
	struct ADCMonsterBase* K2Node_DynamicCast_AsDCMonster_Base;  // 0x78 (0x78)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x80 (0x80)
	char pad_129_1 : 7;  // 0x81 (0x81)
	bool CallFunc_IsAvailablePath_ReturnValue : 1;  // 0x81 (0x81)
	char pad_130_1 : 7;  // 0x82 (0x82)
	bool CallFunc_IsAvailablePath_ReturnValue_2 : 1;  // 0x82 (0x82)


}; 
 
 // Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.GetBBTargetActorToCharacterBase
struct FGetBBTargetActorToCharacterBase
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Result : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct ADCCharacterBase* As DCCharacter Base;  // 0x8 (0x8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x10 (0x10)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x18 (0x18)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x20 (0x20)
	struct UObject* CallFunc_GetValueAsObject_ReturnValue;  // 0x28 (0x28)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x38 (0x38)
	char pad_57_1 : 7;  // 0x39 (0x39)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x39 (0x39)


}; 
 
 // Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.EventReceived_B16E8F464CD39A7D82CF9CAD51B75D82
struct FEventReceived_B16E8F464CD39A7D82CF9CAD51B75D82
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.ExecuteUbergraph_GA_MonsterMeleeAttackBaseWithOptions
struct FExecuteUbergraph_GA_MonsterMeleeAttackBaseWithOptions
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool K2Node_CustomEvent_IsArrivedDestLocation_2 : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct FVector CallFunc_GetCapsuleBottomLocation_ReturnValue;  // 0x8 (0x8)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool Temp_bool_Variable : 1;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x24 (0x24)
	char pad_52_1 : 7;  // 0x34 (0x34)
	bool K2Node_CustomEvent_IsArrivedDestLocation : 1;  // 0x34 (0x34)
	char pad_53_1 : 7;  // 0x35 (0x35)
	bool Temp_bool_Variable_2 : 1;  // 0x35 (0x35)
	char pad_54[2];  // 0x36 (0x36)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x38 (0x38)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0x48 (0x48)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0x50 (0x50)
	struct FGameplayEventData Temp_struct_Variable;  // 0x100 (0x100)
	struct FGameplayTag Temp_struct_Variable_2;  // 0x1B0 (0x1B0)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0x1B8 (0x1B8)
	char pad_448_1 : 7;  // 0x1C0 (0x1C0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x1C0 (0x1C0)
	char pad_449[7];  // 0x1C1 (0x1C1)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x1C8 (0x1C8)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x1D0 (0x1D0)
	char pad_472_1 : 7;  // 0x1D8 (0x1D8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x1D8 (0x1D8)
	char pad_473[7];  // 0x1D9 (0x1D9)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x1E0 (0x1E0)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base_2;  // 0x290 (0x290)
	char pad_664_1 : 7;  // 0x298 (0x298)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x298 (0x298)
	char pad_665[3];  // 0x299 (0x299)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x29C (0x29C)
	int32_t CallFunc_Array_Length_ReturnValue_2;  // 0x2A0 (0x2A0)
	int32_t CallFunc_Array_Length_ReturnValue_3;  // 0x2A4 (0x2A4)
	char pad_680_1 : 7;  // 0x2A8 (0x2A8)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0x2A8 (0x2A8)
	char pad_681_1 : 7;  // 0x2A9 (0x2A9)
	bool CallFunc_EqualEqual_IntInt_ReturnValue_2 : 1;  // 0x2A9 (0x2A9)
	char pad_682[6];  // 0x2AA (0x2AA)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x2B0 (0x2B0)
	int32_t CallFunc_Array_Length_ReturnValue_4;  // 0x360 (0x360)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x364 (0x364)
	char pad_884_1 : 7;  // 0x374 (0x374)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x374 (0x374)
	char pad_885[3];  // 0x375 (0x375)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue;  // 0x378 (0x378)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x390 (0x390)
	float CallFunc_BreakRotator_Roll;  // 0x3A8 (0x3A8)
	float CallFunc_BreakRotator_Pitch;  // 0x3AC (0x3AC)
	float CallFunc_BreakRotator_Yaw;  // 0x3B0 (0x3B0)
	char pad_948[4];  // 0x3B4 (0x3B4)
	struct FRotator CallFunc_MakeRotator_ReturnValue;  // 0x3B8 (0x3B8)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x3D0 (0x3D0)
	struct FVector CallFunc_GetForwardVector_ReturnValue;  // 0x3E8 (0x3E8)
	double CallFunc_Vector_Distance_ReturnValue;  // 0x400 (0x400)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue;  // 0x408 (0x408)
	struct FVector CallFunc_GetForwardVector_ReturnValue_2;  // 0x420 (0x420)
	enum class E_TargetType CallFunc_Array_Get_Item;  // 0x438 (0x438)
	char pad_1081[7];  // 0x439 (0x439)
	double CallFunc_Array_Get_Item_2;  // 0x440 (0x440)
	char pad_1096_1 : 7;  // 0x448 (0x448)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x448 (0x448)
	char pad_1097[7];  // 0x449 (0x449)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x450 (0x450)
	struct FRotator CallFunc_MakeRotator_ReturnValue_2;  // 0x458 (0x458)
	double CallFunc_Array_Get_Item_3;  // 0x470 (0x470)
	char pad_1144_1 : 7;  // 0x478 (0x478)
	bool CallFunc_K2_SetActorRotation_ReturnValue : 1;  // 0x478 (0x478)
	char pad_1145_1 : 7;  // 0x479 (0x479)
	bool CallFunc_Less_DoubleDouble_ReturnValue : 1;  // 0x479 (0x479)
	char pad_1146[6];  // 0x47A (0x47A)
	double CallFunc_Array_Get_Item_4;  // 0x480 (0x480)
	struct FVector CallFunc_Multiply_VectorFloat_ReturnValue;  // 0x488 (0x488)
	double CallFunc_Array_Get_Item_5;  // 0x4A0 (0x4A0)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x4A8 (0x4A8)
	double CallFunc_BreakVector_X;  // 0x4C0 (0x4C0)
	double CallFunc_BreakVector_Y;  // 0x4C8 (0x4C8)
	double CallFunc_BreakVector_Z;  // 0x4D0 (0x4D0)
	double CallFunc_Array_Get_Item_6;  // 0x4D8 (0x4D8)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0x4E0 (0x4E0)
	char pad_1272_1 : 7;  // 0x4F8 (0x4F8)
	bool CallFunc_GetAvailableLocation_Result : 1;  // 0x4F8 (0x4F8)
	char pad_1273[7];  // 0x4F9 (0x4F9)
	struct FVector CallFunc_GetAvailableLocation_Location;  // 0x500 (0x500)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x518 (0x518)
	char pad_1308[4];  // 0x51C (0x51C)
	double CallFunc_BreakVector_X_2;  // 0x520 (0x520)
	double CallFunc_BreakVector_Y_2;  // 0x528 (0x528)
	double CallFunc_BreakVector_Z_2;  // 0x530 (0x530)
	struct FVector CallFunc_MakeVector_ReturnValue_2;  // 0x538 (0x538)
	char pad_1360_1 : 7;  // 0x550 (0x550)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x550 (0x550)
	char pad_1361[3];  // 0x551 (0x551)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4;  // 0x554 (0x554)
	char pad_1380_1 : 7;  // 0x564 (0x564)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x564 (0x564)
	char pad_1381_1 : 7;  // 0x565 (0x565)
	bool CallFunc_MatchesTag_ReturnValue : 1;  // 0x565 (0x565)
	char pad_1382_1 : 7;  // 0x566 (0x566)
	bool CallFunc_EqualEqual_DoubleDouble_ReturnValue : 1;  // 0x566 (0x566)
	char pad_1383[1];  // 0x567 (0x567)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x568 (0x568)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x570 (0x570)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x648 (0x648)
	char pad_1616_1 : 7;  // 0x650 (0x650)
	bool CallFunc_MatchesTag_ReturnValue_2 : 1;  // 0x650 (0x650)
	char pad_1617[7];  // 0x651 (0x651)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4;  // 0x658 (0x658)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_3;  // 0x660 (0x660)
	double CallFunc_BreakVector_X_3;  // 0x678 (0x678)
	double CallFunc_BreakVector_Y_3;  // 0x680 (0x680)
	double CallFunc_BreakVector_Z_3;  // 0x688 (0x688)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_4;  // 0x690 (0x690)
	struct FVector CallFunc_MakeVector_ReturnValue_3;  // 0x6A8 (0x6A8)
	double CallFunc_BreakVector_X_4;  // 0x6C0 (0x6C0)
	double CallFunc_BreakVector_Y_4;  // 0x6C8 (0x6C8)
	double CallFunc_BreakVector_Z_4;  // 0x6D0 (0x6D0)
	struct FVector CallFunc_MakeVector_ReturnValue_4;  // 0x6D8 (0x6D8)
	struct UDCAT_RotateToActor* CallFunc_RotateToActor_ReturnValue;  // 0x6F0 (0x6F0)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue_2;  // 0x6F8 (0x6F8)
	char pad_1808_1 : 7;  // 0x710 (0x710)
	bool CallFunc_K2_SetActorRotation_ReturnValue_2 : 1;  // 0x710 (0x710)
	char pad_1809_1 : 7;  // 0x711 (0x711)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x711 (0x711)
	char pad_1810_1 : 7;  // 0x712 (0x712)
	bool CallFunc_IsValid_ReturnValue_5 : 1;  // 0x712 (0x712)
	char pad_1811_1 : 7;  // 0x713 (0x713)
	bool K2Node_Event_bWasCancelled : 1;  // 0x713 (0x713)
	char pad_1812_1 : 7;  // 0x714 (0x714)
	bool CallFunc_IsValid_ReturnValue_6 : 1;  // 0x714 (0x714)
	char pad_1813[3];  // 0x715 (0x715)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x718 (0x718)
	double CallFunc_Array_Get_Item_7;  // 0x720 (0x720)
	struct FVector CallFunc_Multiply_VectorFloat_ReturnValue_2;  // 0x728 (0x728)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_2;  // 0x740 (0x740)
	char pad_1880_1 : 7;  // 0x758 (0x758)
	bool CallFunc_IsValid_ReturnValue_7 : 1;  // 0x758 (0x758)
	char pad_1881_1 : 7;  // 0x759 (0x759)
	bool CallFunc_GetAvailableLocation_Result_2 : 1;  // 0x759 (0x759)
	char pad_1882[6];  // 0x75A (0x75A)
	struct FVector CallFunc_GetAvailableLocation_Location_2;  // 0x760 (0x760)
	struct FGameplayEventData Temp_struct_Variable_3;  // 0x778 (0x778)
	struct UDCAT_DashToLocation* CallFunc_DashToLocation_ReturnValue;  // 0x828 (0x828)
	struct UDCAT_DashToLocation* CallFunc_DashToLocation_ReturnValue_2;  // 0x830 (0x830)
	char pad_2104_1 : 7;  // 0x838 (0x838)
	bool CallFunc_IsValid_ReturnValue_8 : 1;  // 0x838 (0x838)
	char pad_2105_1 : 7;  // 0x839 (0x839)
	bool CallFunc_IsValid_ReturnValue_9 : 1;  // 0x839 (0x839)
	char pad_2106[6];  // 0x83A (0x83A)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast;  // 0x840 (0x840)
	float CallFunc_MakeRotator_Yaw_ImplicitCast;  // 0x848 (0x848)
	float CallFunc_DashToLocation_Speed_ImplicitCast;  // 0x84C (0x84C)
	float CallFunc_DashToLocation_Speed_ImplicitCast_2;  // 0x850 (0x850)
	float CallFunc_RotateToActor_Speed_ImplicitCast;  // 0x854 (0x854)


}; 
 
 // Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.GetBBTargetActor
struct FGetBBTargetActor
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Result : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct UObject* Return Value;  // 0x8 (0x8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x10 (0x10)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x18 (0x18)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x20 (0x20)
	struct UObject* CallFunc_GetValueAsObject_ReturnValue;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x30 (0x30)


}; 
 
 // Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.OnFinish_237210C047AC334B6F6EFAB48C3790F4
struct FOnFinish_237210C047AC334B6F6EFAB48C3790F4
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsArrivedDestLocation : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.OnFinish_73831B584F90FE2D55D4F7B95AFEE710
struct FOnFinish_73831B584F90FE2D55D4F7B95AFEE710
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsArrivedDestLocation : 1;  // 0x0 (0x0)


}; 
 
 