#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_MonsterMeleeAttackBaseWithOptions_InputVector.GA_MonsterMeleeAttackBaseWithOptions_InputVector_C.GetBBTargetActorToMonsterBase
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
 
 // Function GA_MonsterMeleeAttackBaseWithOptions_InputVector.GA_MonsterMeleeAttackBaseWithOptions_InputVector_C.GetAvailableLocation
struct FGetAvailableLocation
{
	struct FVector DestLocation;  // 0x0 (0x0)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool Result : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct FVector Location;  // 0x20 (0x20)
	struct FVector ResultLocation;  // 0x38 (0x38)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0x50 (0x50)
	struct FVector CallFunc_K2_ProjectPointToNavigation_ProjectedLocation;  // 0x68 (0x68)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool CallFunc_K2_ProjectPointToNavigation_ReturnValue : 1;  // 0x80 (0x80)
	char pad_129[7];  // 0x81 (0x81)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x88 (0x88)
	struct ADCMonsterBase* K2Node_DynamicCast_AsDCMonster_Base;  // 0x90 (0x90)
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x98 (0x98)
	char pad_153_1 : 7;  // 0x99 (0x99)
	bool CallFunc_IsAvailablePath_ReturnValue : 1;  // 0x99 (0x99)
	char pad_154_1 : 7;  // 0x9A (0x9A)
	bool CallFunc_IsAvailablePath_ReturnValue_2 : 1;  // 0x9A (0x9A)


}; 
 
 // Function GA_MonsterMeleeAttackBaseWithOptions_InputVector.GA_MonsterMeleeAttackBaseWithOptions_InputVector_C.ExecuteUbergraph_GA_MonsterMeleeAttackBaseWithOptions_InputVector
struct FExecuteUbergraph_GA_MonsterMeleeAttackBaseWithOptions_InputVector
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData Temp_struct_Variable;  // 0x8 (0x8)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0xB8 (0xB8)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0xC0 (0xC0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x170 (0x170)
	struct FGameplayEventData Temp_struct_Variable_2;  // 0x180 (0x180)
	struct FGameplayTag Temp_struct_Variable_3;  // 0x230 (0x230)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0x238 (0x238)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x240 (0x240)
	char pad_592_1 : 7;  // 0x250 (0x250)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x250 (0x250)
	char pad_593_1 : 7;  // 0x251 (0x251)
	bool K2Node_CustomEvent_IsArrivedDestLocation_2 : 1;  // 0x251 (0x251)
	char pad_594_1 : 7;  // 0x252 (0x252)
	bool Temp_bool_Variable : 1;  // 0x252 (0x252)
	char pad_595[1];  // 0x253 (0x253)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x254 (0x254)
	char pad_612_1 : 7;  // 0x264 (0x264)
	bool K2Node_CustomEvent_IsArrivedDestLocation : 1;  // 0x264 (0x264)
	char pad_613_1 : 7;  // 0x265 (0x265)
	bool Temp_bool_Variable_2 : 1;  // 0x265 (0x265)
	char pad_614[2];  // 0x266 (0x266)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x268 (0x268)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x270 (0x270)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x320 (0x320)
	char pad_808_1 : 7;  // 0x328 (0x328)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x328 (0x328)
	char pad_809[7];  // 0x329 (0x329)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base_2;  // 0x330 (0x330)
	char pad_824_1 : 7;  // 0x338 (0x338)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x338 (0x338)
	char pad_825[3];  // 0x339 (0x339)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x33C (0x33C)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x340 (0x340)
	int32_t CallFunc_Array_Length_ReturnValue_2;  // 0x3F0 (0x3F0)
	char pad_1012_1 : 7;  // 0x3F4 (0x3F4)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0x3F4 (0x3F4)
	char pad_1013[3];  // 0x3F5 (0x3F5)
	int32_t CallFunc_Array_Length_ReturnValue_3;  // 0x3F8 (0x3F8)
	char pad_1020_1 : 7;  // 0x3FC (0x3FC)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x3FC (0x3FC)
	char pad_1021[3];  // 0x3FD (0x3FD)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue;  // 0x400 (0x400)
	struct FVector CallFunc_GetCapsuleBottomLocation_ReturnValue;  // 0x418 (0x418)
	float CallFunc_BreakRotator_Roll;  // 0x430 (0x430)
	float CallFunc_BreakRotator_Pitch;  // 0x434 (0x434)
	float CallFunc_BreakRotator_Yaw;  // 0x438 (0x438)
	char pad_1084[4];  // 0x43C (0x43C)
	struct FRotator CallFunc_MakeRotator_ReturnValue;  // 0x440 (0x440)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x458 (0x458)
	struct FVector CallFunc_GetForwardVector_ReturnValue;  // 0x470 (0x470)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x488 (0x488)
	double CallFunc_Vector_Distance_ReturnValue;  // 0x4A0 (0x4A0)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue;  // 0x4A8 (0x4A8)
	struct FVector CallFunc_GetForwardVector_ReturnValue_2;  // 0x4C0 (0x4C0)
	enum class E_TargetType CallFunc_Array_Get_Item;  // 0x4D8 (0x4D8)
	char pad_1241[7];  // 0x4D9 (0x4D9)
	double CallFunc_Array_Get_Item_2;  // 0x4E0 (0x4E0)
	char pad_1256_1 : 7;  // 0x4E8 (0x4E8)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x4E8 (0x4E8)
	char pad_1257[7];  // 0x4E9 (0x4E9)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x4F0 (0x4F0)
	struct FRotator CallFunc_MakeRotator_ReturnValue_2;  // 0x4F8 (0x4F8)
	double CallFunc_Array_Get_Item_3;  // 0x510 (0x510)
	char pad_1304_1 : 7;  // 0x518 (0x518)
	bool CallFunc_K2_SetActorRotation_ReturnValue : 1;  // 0x518 (0x518)
	char pad_1305_1 : 7;  // 0x519 (0x519)
	bool CallFunc_Less_DoubleDouble_ReturnValue : 1;  // 0x519 (0x519)
	char pad_1306[6];  // 0x51A (0x51A)
	double CallFunc_Array_Get_Item_4;  // 0x520 (0x520)
	struct FVector CallFunc_Multiply_VectorFloat_ReturnValue;  // 0x528 (0x528)
	double CallFunc_Array_Get_Item_5;  // 0x540 (0x540)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x548 (0x548)
	struct FVector CallFunc_Multiply_VectorFloat_ReturnValue_2;  // 0x560 (0x560)
	double CallFunc_BreakVector_X;  // 0x578 (0x578)
	double CallFunc_BreakVector_Y;  // 0x580 (0x580)
	double CallFunc_BreakVector_Z;  // 0x588 (0x588)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_2;  // 0x590 (0x590)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0x5A8 (0x5A8)
	char pad_1472_1 : 7;  // 0x5C0 (0x5C0)
	bool CallFunc_GetAvailableLocation_Result : 1;  // 0x5C0 (0x5C0)
	char pad_1473[7];  // 0x5C1 (0x5C1)
	struct FVector CallFunc_GetAvailableLocation_Location;  // 0x5C8 (0x5C8)
	char pad_1504_1 : 7;  // 0x5E0 (0x5E0)
	bool CallFunc_GetAvailableLocation_Result_2 : 1;  // 0x5E0 (0x5E0)
	char pad_1505[7];  // 0x5E1 (0x5E1)
	struct FVector CallFunc_GetAvailableLocation_Location_2;  // 0x5E8 (0x5E8)
	double CallFunc_BreakVector_X_2;  // 0x600 (0x600)
	double CallFunc_BreakVector_Y_2;  // 0x608 (0x608)
	double CallFunc_BreakVector_Z_2;  // 0x610 (0x610)
	struct FVector CallFunc_MakeVector_ReturnValue_2;  // 0x618 (0x618)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x630 (0x630)
	char pad_1588_1 : 7;  // 0x634 (0x634)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x634 (0x634)
	char pad_1589_1 : 7;  // 0x635 (0x635)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x635 (0x635)
	char pad_1590[2];  // 0x636 (0x636)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4;  // 0x638 (0x638)
	char pad_1608_1 : 7;  // 0x648 (0x648)
	bool CallFunc_MatchesTag_ReturnValue : 1;  // 0x648 (0x648)
	char pad_1609_1 : 7;  // 0x649 (0x649)
	bool CallFunc_EqualEqual_DoubleDouble_ReturnValue : 1;  // 0x649 (0x649)
	char pad_1610[6];  // 0x64A (0x64A)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x650 (0x650)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x658 (0x658)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x730 (0x730)
	char pad_1848_1 : 7;  // 0x738 (0x738)
	bool CallFunc_MatchesTag_ReturnValue_2 : 1;  // 0x738 (0x738)
	char pad_1849[7];  // 0x739 (0x739)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4;  // 0x740 (0x740)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_3;  // 0x748 (0x748)
	double CallFunc_BreakVector_X_3;  // 0x760 (0x760)
	double CallFunc_BreakVector_Y_3;  // 0x768 (0x768)
	double CallFunc_BreakVector_Z_3;  // 0x770 (0x770)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_4;  // 0x778 (0x778)
	struct FVector CallFunc_MakeVector_ReturnValue_3;  // 0x790 (0x790)
	double CallFunc_BreakVector_X_4;  // 0x7A8 (0x7A8)
	double CallFunc_BreakVector_Y_4;  // 0x7B0 (0x7B0)
	double CallFunc_BreakVector_Z_4;  // 0x7B8 (0x7B8)
	struct FVector CallFunc_MakeVector_ReturnValue_4;  // 0x7C0 (0x7C0)
	struct UDCAT_RotateToActor* CallFunc_RotateToActor_ReturnValue;  // 0x7D8 (0x7D8)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue_2;  // 0x7E0 (0x7E0)
	char pad_2040_1 : 7;  // 0x7F8 (0x7F8)
	bool CallFunc_K2_SetActorRotation_ReturnValue_2 : 1;  // 0x7F8 (0x7F8)
	char pad_2041_1 : 7;  // 0x7F9 (0x7F9)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x7F9 (0x7F9)
	char pad_2042_1 : 7;  // 0x7FA (0x7FA)
	bool CallFunc_IsValid_ReturnValue_5 : 1;  // 0x7FA (0x7FA)
	char pad_2043[5];  // 0x7FB (0x7FB)
	struct UDCAT_MoveWithInputVectorCurve* CallFunc_MoveWithInputVectorCurve_ReturnValue;  // 0x800 (0x800)
	struct UDCAT_MoveWithInputVectorCurve* CallFunc_MoveWithInputVectorCurve_ReturnValue_2;  // 0x808 (0x808)
	char pad_2064_1 : 7;  // 0x810 (0x810)
	bool CallFunc_IsValid_ReturnValue_6 : 1;  // 0x810 (0x810)
	char pad_2065_1 : 7;  // 0x811 (0x811)
	bool CallFunc_IsValid_ReturnValue_7 : 1;  // 0x811 (0x811)
	char pad_2066[6];  // 0x812 (0x812)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x818 (0x818)
	char pad_2080_1 : 7;  // 0x820 (0x820)
	bool CallFunc_IsValid_ReturnValue_8 : 1;  // 0x820 (0x820)
	char pad_2081[7];  // 0x821 (0x821)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast;  // 0x828 (0x828)
	float CallFunc_MakeRotator_Yaw_ImplicitCast;  // 0x830 (0x830)
	float CallFunc_RotateToActor_Speed_ImplicitCast;  // 0x834 (0x834)


}; 
 
 // Function GA_MonsterMeleeAttackBaseWithOptions_InputVector.GA_MonsterMeleeAttackBaseWithOptions_InputVector_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_MonsterMeleeAttackBaseWithOptions_InputVector.GA_MonsterMeleeAttackBaseWithOptions_InputVector_C.EventReceived_345BBB4C476117C4949AE2A581954F06
struct FEventReceived_345BBB4C476117C4949AE2A581954F06
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_MonsterMeleeAttackBaseWithOptions_InputVector.GA_MonsterMeleeAttackBaseWithOptions_InputVector_C.EventReceived_AE81807E4915675DEB1BD0847699B25D
struct FEventReceived_AE81807E4915675DEB1BD0847699B25D
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_MonsterMeleeAttackBaseWithOptions_InputVector.GA_MonsterMeleeAttackBaseWithOptions_InputVector_C.GetBBTargetActor
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
 
 // Function GA_MonsterMeleeAttackBaseWithOptions_InputVector.GA_MonsterMeleeAttackBaseWithOptions_InputVector_C.GetBBTargetActorToCharacterBase
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
 
 // Function GA_MonsterMeleeAttackBaseWithOptions_InputVector.GA_MonsterMeleeAttackBaseWithOptions_InputVector_C.OnFinish_AB08374A4B9F12BF12E6DA84E1306A84
struct FOnFinish_AB08374A4B9F12BF12E6DA84E1306A84
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsArrivedDestLocation : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_MonsterMeleeAttackBaseWithOptions_InputVector.GA_MonsterMeleeAttackBaseWithOptions_InputVector_C.OnFinish_FFD00FE4461E73F15B901CA7FD69D470
struct FOnFinish_FFD00FE4461E73F15B901CA7FD69D470
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsArrivedDestLocation : 1;  // 0x0 (0x0)


}; 
 
 