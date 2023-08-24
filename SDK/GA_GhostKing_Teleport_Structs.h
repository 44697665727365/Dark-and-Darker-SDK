#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_GhostKing_Teleport.GA_GhostKing_Teleport_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_GhostKing_Teleport.GA_GhostKing_Teleport_C.EventReceived_A1697A204058999C82AF6E9CBAC06768
struct FEventReceived_A1697A204058999C82AF6E9CBAC06768
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_GhostKing_Teleport.GA_GhostKing_Teleport_C.ExecuteUbergraph_GA_GhostKing_Teleport
struct FExecuteUbergraph_GA_GhostKing_Teleport
{
	int32_t EntryPoint;  // 0x0 (0x0)
	int32_t Temp_int_Array_Index_Variable;  // 0x4 (0x4)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool Temp_bool_Variable : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool Temp_bool_Variable_2 : 1;  // 0x9 (0x9)
	char pad_10[6];  // 0xA (0xA)
	struct FGameplayEventData Temp_struct_Variable;  // 0x10 (0x10)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0xC0 (0xC0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xD0 (0xD0)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0xD8 (0xD8)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x188 (0x188)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0x1A0 (0x1A0)
	struct FVector CallFunc_Conv_DoubleToVector_ReturnValue;  // 0x1B8 (0x1B8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x1D0 (0x1D0)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x1D8 (0x1D8)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x288 (0x288)
	struct FVector CallFunc_Conv_DoubleToVector_ReturnValue_2;  // 0x2A0 (0x2A0)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_3;  // 0x2B8 (0x2B8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x2D0 (0x2D0)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue;  // 0x2D8 (0x2D8)
	struct FVector CallFunc_GetActorScale3D_ReturnValue;  // 0x2F0 (0x2F0)
	struct FVector CallFunc_GetForwardVector_ReturnValue;  // 0x308 (0x308)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_4;  // 0x320 (0x320)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue;  // 0x338 (0x338)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x350 (0x350)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_5;  // 0x368 (0x368)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue_2;  // 0x380 (0x380)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4;  // 0x398 (0x398)
	struct FTransform CallFunc_MakeTransform_ReturnValue;  // 0x3A0 (0x3A0)
	struct TScriptInterface<IGameplayTagAssetInterface> K2Node_DynamicCast_As_________________;  // 0x400 (0x400)
	char pad_1040_1 : 7;  // 0x410 (0x410)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x410 (0x410)
	char pad_1041[7];  // 0x411 (0x411)
	struct FHitResult CallFunc_K2_SetActorTransform_SweepHitResult;  // 0x418 (0x418)
	char pad_1280_1 : 7;  // 0x500 (0x500)
	bool CallFunc_K2_SetActorTransform_ReturnValue : 1;  // 0x500 (0x500)
	char pad_1281_1 : 7;  // 0x501 (0x501)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x501 (0x501)
	char pad_1282[6];  // 0x502 (0x502)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_5;  // 0x508 (0x508)
	struct TScriptInterface<IGameplayTagAssetInterface> K2Node_DynamicCast_As__________________2;  // 0x510 (0x510)
	char pad_1312_1 : 7;  // 0x520 (0x520)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x520 (0x520)
	char pad_1313[3];  // 0x521 (0x521)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x524 (0x524)
	char pad_1332_1 : 7;  // 0x534 (0x534)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_2 : 1;  // 0x534 (0x534)
	char pad_1333_1 : 7;  // 0x535 (0x535)
	bool CallFunc_Normal_ReturnValue : 1;  // 0x535 (0x535)
	char pad_1334_1 : 7;  // 0x536 (0x536)
	bool CallFunc_Burrow_ReturnValue : 1;  // 0x536 (0x536)
	char pad_1335[1];  // 0x537 (0x537)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x538 (0x538)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_6;  // 0x610 (0x610)
	char pad_1560_1 : 7;  // 0x618 (0x618)
	bool CallFunc_RemoveGameplayTag_ReturnValue : 1;  // 0x618 (0x618)
	char pad_1561_1 : 7;  // 0x619 (0x619)
	bool Temp_bool_Variable_3 : 1;  // 0x619 (0x619)
	char pad_1562[6];  // 0x61A (0x61A)
	struct FVector CallFunc_GetCapsuleBottomLocation_ReturnValue;  // 0x620 (0x620)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_7;  // 0x638 (0x638)
	struct TScriptInterface<IGameplayTagAssetInterface> K2Node_DynamicCast_As__________________3;  // 0x640 (0x640)
	char pad_1616_1 : 7;  // 0x650 (0x650)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x650 (0x650)
	char pad_1617_1 : 7;  // 0x651 (0x651)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_3 : 1;  // 0x651 (0x651)
	char pad_1618[6];  // 0x652 (0x652)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x658 (0x658)
	char pad_1632_1 : 7;  // 0x660 (0x660)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x660 (0x660)
	char pad_1633[3];  // 0x661 (0x661)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x664 (0x664)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x668 (0x668)
	char pad_1644[4];  // 0x66C (0x66C)
	struct FGameplayEventData Temp_struct_Variable_2;  // 0x670 (0x670)
	struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array;  // 0x720 (0x720)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_8;  // 0x730 (0x730)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_6;  // 0x738 (0x738)
	char pad_1872_1 : 7;  // 0x750 (0x750)
	bool CallFunc_SpawnAoe_bSuccessfully : 1;  // 0x750 (0x750)
	char pad_1873[7];  // 0x751 (0x751)
	struct ADCAoeBase* CallFunc_SpawnAoe_ReturnValue;  // 0x758 (0x758)
	struct TArray<struct AActor*> CallFunc_SphereOverlapActors_OutActors;  // 0x760 (0x760)
	char pad_1904_1 : 7;  // 0x770 (0x770)
	bool CallFunc_SphereOverlapActors_ReturnValue : 1;  // 0x770 (0x770)
	char pad_1905[7];  // 0x771 (0x771)
	struct ABP_GhostKing_DebuffArea_C* K2Node_DynamicCast_AsBP_Ghost_King_Debuff_Area;  // 0x778 (0x778)
	char pad_1920_1 : 7;  // 0x780 (0x780)
	bool K2Node_DynamicCast_bSuccess_4 : 1;  // 0x780 (0x780)
	char pad_1921[7];  // 0x781 (0x781)
	struct AActor* CallFunc_Array_Get_Item;  // 0x788 (0x788)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData_2;  // 0x790 (0x790)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_7;  // 0x840 (0x840)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x858 (0x858)
	struct FVector CallFunc_Subtract_VectorVector_ReturnValue;  // 0x868 (0x868)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x880 (0x880)
	char pad_2184_1 : 7;  // 0x888 (0x888)
	bool K2Node_DynamicCast_bSuccess_5 : 1;  // 0x888 (0x888)
	char pad_2185[7];  // 0x889 (0x889)
	struct FVector CallFunc_Normal_ReturnValue_2;  // 0x890 (0x890)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue;  // 0x8A8 (0x8A8)
	double CallFunc_BreakVector_X;  // 0x8B0 (0x8B0)
	double CallFunc_BreakVector_Y;  // 0x8B8 (0x8B8)
	double CallFunc_BreakVector_Z;  // 0x8C0 (0x8C0)
	int32_t CallFunc_GetGameplayEffectCount_ReturnValue;  // 0x8C8 (0x8C8)
	char pad_2252[4];  // 0x8CC (0x8CC)
	struct FVector CallFunc_MakeVector_ReturnValue_2;  // 0x8D0 (0x8D0)
	double CallFunc_Conv_IntToDouble_ReturnValue;  // 0x8E8 (0x8E8)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue_2;  // 0x8F0 (0x8F0)
	double CallFunc_Multiply_DoubleDouble_ReturnValue;  // 0x908 (0x908)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_2;  // 0x910 (0x910)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x928 (0x928)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_Change_GE_Attribute_And_Apply_Return_Value;  // 0x930 (0x930)
	char pad_2368_1 : 7;  // 0x940 (0x940)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x940 (0x940)
	char pad_2369[3];  // 0x941 (0x941)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x944 (0x944)
	char pad_2376_1 : 7;  // 0x948 (0x948)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x948 (0x948)
	char pad_2377[3];  // 0x949 (0x949)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x94C (0x94C)
	char pad_2396[4];  // 0x95C (0x95C)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_9;  // 0x960 (0x960)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;  // 0x968 (0x968)
	struct ABP_GhostKing_Common_C* K2Node_DynamicCast_AsBP_Ghost_King_Common;  // 0x970 (0x970)
	char pad_2424_1 : 7;  // 0x978 (0x978)
	bool K2Node_DynamicCast_bSuccess_6 : 1;  // 0x978 (0x978)
	char pad_2425[7];  // 0x979 (0x979)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x980 (0x980)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_10;  // 0xA30 (0xA30)
	char pad_2616_1 : 7;  // 0xA38 (0xA38)
	bool CallFunc_AddGameplayTag_ReturnValue : 1;  // 0xA38 (0xA38)
	char pad_2617[7];  // 0xA39 (0xA39)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base_2;  // 0xA40 (0xA40)
	char pad_2632_1 : 7;  // 0xA48 (0xA48)
	bool K2Node_DynamicCast_bSuccess_7 : 1;  // 0xA48 (0xA48)
	char pad_2633_1 : 7;  // 0xA49 (0xA49)
	bool K2Node_Event_bWasCancelled : 1;  // 0xA49 (0xA49)
	char pad_2634[2];  // 0xA4A (0xA4A)
	float CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast;  // 0xA4C (0xA4C)
	float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;  // 0xA50 (0xA50)
	char pad_2644[4];  // 0xA54 (0xA54)
	double K2Node_VariableSet_Launch_Interval_ImplicitCast;  // 0xA58 (0xA58)


}; 
 
 // Function GA_GhostKing_Teleport.GA_GhostKing_Teleport_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 