#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_Resurrection.GA_Resurrection_C.AbilityActivated
// Size: 0xB1(Inherited: 0xB8)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)
	char pad_360_1 : 7;  // 0x168 (0x168)
	bool bIsSocketSightBlocked : 1;  // 0xB0 (0xB0)


}; 
 
 // Function GA_Resurrection.GA_Resurrection_C.EndSpell
struct FEndSpell
{
	struct FText SystemMessage;  // 0x0 (0x0)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool IsEndAbilty : 1;  // 0x18 (0x18)


}; 
 
 // Function GA_Resurrection.GA_Resurrection_C.BroadcastSystemMessage
struct FBroadcastSystemMessage
{
	struct FText SystemMessage;  // 0x0 (0x0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x18 (0x18)
	struct ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character;  // 0x20 (0x20)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct AController* CallFunc_GetController_ReturnValue;  // 0x30 (0x30)
	struct APlayerController* K2Node_DynamicCast_As_________;  // 0x38 (0x38)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x40 (0x40)


}; 
 
 // Function GA_Resurrection.GA_Resurrection_C.Cancelled_EA1ED724476E505943D50C8012DA1AF4
struct FCancelled_EA1ED724476E505943D50C8012DA1AF4
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 // Function GA_Resurrection.GA_Resurrection_C.EventReceived_BE736C43450D5B046C0B1F9F28997628
struct FEventReceived_BE736C43450D5B046C0B1F9F28997628
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_Resurrection.GA_Resurrection_C.EventReceived_9BDC3DCE498E0FDB511BA29F64F2685F
struct FEventReceived_9BDC3DCE498E0FDB511BA29F64F2685F
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_Resurrection.GA_Resurrection_C.Check Corpse Is Party Member
struct FCheck Corpse Is Party Member
{
	struct FString PartyId;  // 0x0 (0x0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x10 (0x10)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x20 (0x20)
	char pad_33_1 : 7;  // 0x21 (0x21)
	bool CallFunc_IsSameTeam_ReturnValue : 1;  // 0x21 (0x21)


}; 
 
 // Function GA_Resurrection.GA_Resurrection_C.CheckSoulHeartEquip
struct FCheckSoulHeartEquip
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Result : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x1 (0x1)
	char pad_2[6];  // 0x2 (0x2)
	struct TArray<struct UItem*> CallFunc_GetItemsBySlotType_ReturnValue;  // 0x8 (0x8)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x1C (0x1C)


}; 
 
 // Function GA_Resurrection.GA_Resurrection_C.ExecuteUbergraph_GA_Resurrection
struct FExecuteUbergraph_GA_Resurrection
{
	int32_t EntryPoint;  // 0x0 (0x0)
	int32_t Temp_int_Array_Index_Variable;  // 0x4 (0x4)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x8 (0x8)
	char pad_184_1 : 7;  // 0xB8 (0xB8)
	bool K2Node_Event_bIsSocketSightBlocked : 1;  // 0xB8 (0xB8)
	char pad_185[7];  // 0xB9 (0xB9)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0xC0 (0xC0)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x170 (0x170)
	char pad_384_1 : 7;  // 0x180 (0x180)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x180 (0x180)
	char pad_385[7];  // 0x181 (0x181)
	struct FGameplayEffectContextHandle CallFunc_GetContextFromOwner_ReturnValue;  // 0x188 (0x188)
	char pad_416_1 : 7;  // 0x1A0 (0x1A0)
	bool Temp_bool_True_if_break_was_hit_Variable : 1;  // 0x1A0 (0x1A0)
	char pad_417[3];  // 0x1A1 (0x1A1)
	float CallFunc_GetRange_ReturnValue;  // 0x1A4 (0x1A4)
	char pad_424_1 : 7;  // 0x1A8 (0x1A8)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x1A8 (0x1A8)
	char pad_425[3];  // 0x1A9 (0x1A9)
	float CallFunc_GetAimRadius_ReturnValue;  // 0x1AC (0x1AC)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x1B0 (0x1B0)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x1B4 (0x1B4)
	struct USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue;  // 0x1B8 (0x1B8)
	char pad_448_1 : 7;  // 0x1C0 (0x1C0)
	bool K2Node_Event_bWasCancelled : 1;  // 0x1C0 (0x1C0)
	char pad_449[3];  // 0x1C1 (0x1C1)
	int32_t Temp_int_Loop_Counter_Variable_2;  // 0x1C4 (0x1C4)
	int32_t CallFunc_Add_IntInt_ReturnValue_2;  // 0x1C8 (0x1C8)
	int32_t Temp_int_Array_Index_Variable_2;  // 0x1CC (0x1CC)
	struct USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_2;  // 0x1D0 (0x1D0)
	char pad_472[8];  // 0x1D8 (0x1D8)
	struct FTransform CallFunc_K2_GetComponentToWorld_ReturnValue;  // 0x1E0 (0x1E0)
	char pad_576_1 : 7;  // 0x240 (0x240)
	bool CallFunc_CheckSoulHeartEquip_Result : 1;  // 0x240 (0x240)
	char pad_577[7];  // 0x241 (0x241)
	struct TArray<struct UItem*> CallFunc_GetItemsBySlotType_ReturnValue;  // 0x248 (0x248)
	struct UItem* CallFunc_Array_Get_Item;  // 0x258 (0x258)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x260 (0x260)
	char pad_612[4];  // 0x264 (0x264)
	struct FItemData CallFunc_GetItemData_ReturnValue;  // 0x268 (0x268)
	char pad_776_1 : 7;  // 0x308 (0x308)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x308 (0x308)
	char pad_777_1 : 7;  // 0x309 (0x309)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x309 (0x309)
	char pad_778[6];  // 0x30A (0x30A)
	struct FDesignDataItem CallFunc_GetDesignDataItem_ReturnValue;  // 0x310 (0x310)
	char pad_1176_1 : 7;  // 0x498 (0x498)
	bool CallFunc_MatchesTag_ReturnValue : 1;  // 0x498 (0x498)
	char pad_1177[7];  // 0x499 (0x499)
	struct TArray<struct UItem*> CallFunc_GetItemsBySlotType_ReturnValue_2;  // 0x4A0 (0x4A0)
	char pad_1200_1 : 7;  // 0x4B0 (0x4B0)
	bool CallFunc_CheckSoulHeartEquip_Result_2 : 1;  // 0x4B0 (0x4B0)
	char pad_1201[7];  // 0x4B1 (0x4B1)
	struct UItem* CallFunc_Array_Get_Item_2;  // 0x4B8 (0x4B8)
	struct FItemData CallFunc_GetItemData_ReturnValue_2;  // 0x4C0 (0x4C0)
	int32_t CallFunc_Array_Length_ReturnValue_2;  // 0x560 (0x560)
	char pad_1380_1 : 7;  // 0x564 (0x564)
	bool CallFunc_Less_IntInt_ReturnValue_2 : 1;  // 0x564 (0x564)
	char pad_1381[3];  // 0x565 (0x565)
	struct FDesignDataItem CallFunc_GetDesignDataItem_ReturnValue_2;  // 0x568 (0x568)
	char pad_1776_1 : 7;  // 0x6F0 (0x6F0)
	bool CallFunc_MatchesTag_ReturnValue_2 : 1;  // 0x6F0 (0x6F0)
	char pad_1777[3];  // 0x6F1 (0x6F1)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x6F4 (0x6F4)
	char pad_1796[4];  // 0x704 (0x704)
	struct UObject* CallFunc_GetCurrentSourceObject_ReturnValue;  // 0x708 (0x708)
	struct ASpellActor* K2Node_DynamicCast_AsSpell_Actor;  // 0x710 (0x710)
	char pad_1816_1 : 7;  // 0x718 (0x718)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x718 (0x718)
	char pad_1817[7];  // 0x719 (0x719)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x720 (0x720)
	struct FDesignDataSpell CallFunc_GetDesignDataSpell_ReturnValue;  // 0x728 (0x728)
	char pad_2032_1 : 7;  // 0x7F0 (0x7F0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x7F0 (0x7F0)
	char pad_2033[7];  // 0x7F1 (0x7F1)
	struct FGameplayEventData Temp_struct_Variable;  // 0x7F8 (0x7F8)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x8A8 (0x8A8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x958 (0x958)
	char pad_2408_1 : 7;  // 0x968 (0x968)
	bool CallFunc_K2_HasAuthority_ReturnValue_2 : 1;  // 0x968 (0x968)
	char pad_2409[7];  // 0x969 (0x969)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x970 (0x970)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue_2;  // 0x978 (0x978)
	float CallFunc_GetActorAttributeValue_ReturnValue;  // 0x980 (0x980)
	char pad_2436[4];  // 0x984 (0x984)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x988 (0x988)
	char pad_2448_1 : 7;  // 0x990 (0x990)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x990 (0x990)
	char pad_2449[7];  // 0x991 (0x991)
	double CallFunc_Divide_DoubleDouble_ReturnValue;  // 0x998 (0x998)
	struct FGameplayEventData Temp_struct_Variable_2;  // 0x9A0 (0x9A0)
	struct FText K2Node_CustomEvent_SystemMessage;  // 0xA50 (0xA50)
	char pad_2664_1 : 7;  // 0xA68 (0xA68)
	bool K2Node_CustomEvent_IsEndAbilty : 1;  // 0xA68 (0xA68)
	char pad_2665[7];  // 0xA69 (0xA69)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0xA70 (0xA70)
	char pad_2680_1 : 7;  // 0xA78 (0xA78)
	bool CallFunc_TextIsEmpty_ReturnValue : 1;  // 0xA78 (0xA78)
	char pad_2681_1 : 7;  // 0xA79 (0xA79)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0xA79 (0xA79)
	char pad_2682_1 : 7;  // 0xA7A (0xA7A)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0xA7A (0xA7A)
	char pad_2683_1 : 7;  // 0xA7B (0xA7B)
	bool Temp_bool_True_if_break_was_hit_Variable_2 : 1;  // 0xA7B (0xA7B)
	char pad_2684_1 : 7;  // 0xA7C (0xA7C)
	bool CallFunc_Not_PreBool_ReturnValue_2 : 1;  // 0xA7C (0xA7C)
	char pad_2685_1 : 7;  // 0xA7D (0xA7D)
	bool CallFunc_BooleanAND_ReturnValue_2 : 1;  // 0xA7D (0xA7D)
	char pad_2686[2];  // 0xA7E (0xA7E)
	struct FGameplayEventData K2Node_CustomEvent_Payload_2;  // 0xA80 (0xA80)
	struct AGameModeBase* CallFunc_GetGameMode_ReturnValue;  // 0xB30 (0xB30)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0xB38 (0xB38)
	struct TScriptInterface<IBaseInterface> K2Node_DynamicCast_AsBase_Interface;  // 0xB48 (0xB48)
	char pad_2904_1 : 7;  // 0xB58 (0xB58)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0xB58 (0xB58)
	char pad_2905[7];  // 0xB59 (0xB59)
	struct UDCAT_WaitAimDirectionChanged* CallFunc_WaitAimDirectionChanged_ReturnValue;  // 0xB60 (0xB60)
	char pad_2920_1 : 7;  // 0xB68 (0xB68)
	bool CallFunc_IsValid_ReturnValue_5 : 1;  // 0xB68 (0xB68)
	char pad_2921[7];  // 0xB69 (0xB69)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;  // 0xB70 (0xB70)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0xB78 (0xB78)
	char pad_2952_1 : 7;  // 0xB88 (0xB88)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0xB88 (0xB88)
	char pad_2953[3];  // 0xB89 (0xB89)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4;  // 0xB8C (0xB8C)
	char pad_2972[4];  // 0xB9C (0xB9C)
	struct UAbilityTask_WaitTargetData* CallFunc_WaitTargetData_ReturnValue;  // 0xBA0 (0xBA0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0xBA8 (0xBA8)
	char pad_2992_1 : 7;  // 0xBB0 (0xBB0)
	bool CallFunc_IsValid_ReturnValue_6 : 1;  // 0xBB0 (0xBB0)
	char pad_2993[7];  // 0xBB1 (0xBB1)
	struct AGameplayAbilityTargetActor* CallFunc_BeginSpawningActor_SpawnedActor;  // 0xBB8 (0xBB8)
	char pad_3008_1 : 7;  // 0xBC0 (0xBC0)
	bool CallFunc_BeginSpawningActor_ReturnValue : 1;  // 0xBC0 (0xBC0)
	char pad_3009_1 : 7;  // 0xBC1 (0xBC1)
	bool CallFunc_IsValid_ReturnValue_7 : 1;  // 0xBC1 (0xBC1)
	char pad_3010[6];  // 0xBC2 (0xBC2)
	struct UObject* CallFunc_GetCurrentSourceObject_ReturnValue_2;  // 0xBC8 (0xBC8)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0xBD0 (0xBD0)
	struct FGameplayAbilityTargetDataHandle Temp_struct_Variable_3;  // 0xCA8 (0xCA8)
	struct FGameplayAbilityTargetDataHandle K2Node_CustomEvent_Data;  // 0xCD0 (0xCD0)
	struct FHitResult CallFunc_GetHitResultFromTargetData_ReturnValue;  // 0xCF8 (0xCF8)
	char pad_3552_1 : 7;  // 0xDE0 (0xDE0)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0xDE0 (0xDE0)
	char pad_3553_1 : 7;  // 0xDE1 (0xDE1)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0xDE1 (0xDE1)
	char pad_3554[2];  // 0xDE2 (0xDE2)
	float CallFunc_BreakHitResult_Time;  // 0xDE4 (0xDE4)
	float CallFunc_BreakHitResult_Distance;  // 0xDE8 (0xDE8)
	char pad_3564[4];  // 0xDEC (0xDEC)
	struct FVector CallFunc_BreakHitResult_Location;  // 0xDF0 (0xDF0)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0xE08 (0xE08)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0xE20 (0xE20)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0xE38 (0xE38)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0xE50 (0xE50)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0xE58 (0xE58)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0xE60 (0xE60)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0xE68 (0xE68)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0xE70 (0xE70)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0xE78 (0xE78)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0xE7C (0xE7C)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0xE80 (0xE80)
	char pad_3716[4];  // 0xE84 (0xE84)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0xE88 (0xE88)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0xEA0 (0xEA0)
	struct ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character;  // 0xEB8 (0xEB8)
	char pad_3776_1 : 7;  // 0xEC0 (0xEC0)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0xEC0 (0xEC0)
	char pad_3777[7];  // 0xEC1 (0xEC1)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue;  // 0xEC8 (0xEC8)
	char pad_3792_1 : 7;  // 0xED0 (0xED0)
	bool CallFunc_IsValid_ReturnValue_8 : 1;  // 0xED0 (0xED0)
	char pad_3793[7];  // 0xED1 (0xED1)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_2;  // 0xED8 (0xED8)
	char pad_3816_1 : 7;  // 0xEE8 (0xEE8)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_2 : 1;  // 0xEE8 (0xEE8)
	char pad_3817[7];  // 0xEE9 (0xEE9)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue_2;  // 0xEF0 (0xEF0)
	struct FGameplayAbilityTargetDataHandle K2Node_CustomEvent_Data_2;  // 0xFC8 (0xFC8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_5;  // 0xFF0 (0xFF0)
	struct TArray<struct FDCGameplayEffectData> K2Node_MakeArray_Array;  // 0x1000 (0x1000)
	struct FPrimaryAssetId CallFunc_GetPrimaryAssetIdFromObject_ReturnValue;  // 0x1010 (0x1010)
	float CallFunc_GetConstantFloat_ReturnValue;  // 0x1020 (0x1020)
	struct FDCGameplayEffectSetByCallerData K2Node_MakeStruct_DCGameplayEffectSetByCallerData;  // 0x1024 (0x1024)
	int32_t CallFunc_Array_Add_ReturnValue;  // 0x1030 (0x1030)
	char pad_4148[12];  // 0x1034 (0x1034)
	struct FMsgCharacterResurrectionRequest K2Node_MakeStruct_MsgCharacterResurrectionRequest;  // 0x1040 (0x1040)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4;  // 0x1100 (0x1100)
	struct ABP_PlayerCharacterDungeon_C* K2Node_DynamicCast_AsBP_Player_Character_Dungeon;  // 0x1108 (0x1108)
	char pad_4368_1 : 7;  // 0x1110 (0x1110)
	bool K2Node_DynamicCast_bSuccess_4 : 1;  // 0x1110 (0x1110)
	uint8_t CallFunc_GetGender_ReturnValue;  // 0x1111 (0x1111)
	char pad_4370_1 : 7;  // 0x1112 (0x1112)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x1112 (0x1112)
	char pad_4371[5];  // 0x1113 (0x1113)
	double CallFunc_SetDoublePropertyByName_Value_ImplicitCast;  // 0x1118 (0x1118)
	double CallFunc_SetDoublePropertyByName_Value_ImplicitCast_2;  // 0x1120 (0x1120)
	double CallFunc_Divide_DoubleDouble_A_ImplicitCast;  // 0x1128 (0x1128)
	double CallFunc_Add_DoubleDouble_B_ImplicitCast;  // 0x1130 (0x1130)
	float CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast;  // 0x1138 (0x1138)


}; 
 
 // Function GA_Resurrection.GA_Resurrection_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_Resurrection.GA_Resurrection_C.ValidData_EA1ED724476E505943D50C8012DA1AF4
struct FValidData_EA1ED724476E505943D50C8012DA1AF4
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 