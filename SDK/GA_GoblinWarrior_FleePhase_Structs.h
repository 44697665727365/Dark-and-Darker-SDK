#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.ExecuteUbergraph_GA_GoblinWarrior_FleePhase
struct FExecuteUbergraph_GA_GoblinWarrior_FleePhase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x10 (0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x28 (0x28)
	struct FGameplayTag K2Node_CustomEvent_EventTag_2;  // 0x38 (0x38)
	struct FGameplayEventData K2Node_CustomEvent_EventData_2;  // 0x40 (0x40)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0xF0 (0xF0)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0xF8 (0xF8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x1A8 (0x1A8)
	struct FGameplayEventData Temp_struct_Variable;  // 0x1B8 (0x1B8)
	struct FGameplayTag Temp_struct_Variable_2;  // 0x268 (0x268)
	struct UDCAT_PlayMontageAndWaitForEvent* CallFunc_PlayMontageAndWaitForEvent_ReturnValue;  // 0x270 (0x270)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x278 (0x278)
	char pad_648_1 : 7;  // 0x288 (0x288)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x288 (0x288)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_2;  // 0x289 (0x289)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult;  // 0x28A (0x28A)
	char pad_651[1];  // 0x28B (0x28B)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4;  // 0x28C (0x28C)
	enum class EPathFollowingResult Temp_byte_Variable;  // 0x29C (0x29C)
	char pad_669[3];  // 0x29D (0x29D)
	struct FGameplayTag K2Node_CustomEvent_EventTag_4;  // 0x2A0 (0x2A0)
	struct FGameplayEventData K2Node_CustomEvent_EventData_4;  // 0x2A8 (0x2A8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x358 (0x358)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x360 (0x360)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_3;  // 0x378 (0x378)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x390 (0x390)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_4;  // 0x398 (0x398)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_5;  // 0x3B0 (0x3B0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4;  // 0x3C0 (0x3C0)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_5;  // 0x3C8 (0x3C8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_5;  // 0x3E0 (0x3E0)
	double CallFunc_Vector_Distance_ReturnValue;  // 0x3E8 (0x3E8)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_6;  // 0x3F0 (0x3F0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_6;  // 0x408 (0x408)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_7;  // 0x410 (0x410)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_8;  // 0x428 (0x428)
	double CallFunc_Vector_Distance_ReturnValue_2;  // 0x440 (0x440)
	char pad_1096_1 : 7;  // 0x448 (0x448)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue : 1;  // 0x448 (0x448)
	char pad_1097[3];  // 0x449 (0x449)
	struct FGameplayTag K2Node_CustomEvent_EventTag_5;  // 0x44C (0x44C)
	char pad_1108[4];  // 0x454 (0x454)
	struct FGameplayEventData K2Node_CustomEvent_EventData_5;  // 0x458 (0x458)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_6;  // 0x508 (0x508)
	char pad_1304_1 : 7;  // 0x518 (0x518)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x518 (0x518)
	char pad_1305[7];  // 0x519 (0x519)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_9;  // 0x520 (0x520)
	char pad_1336_1 : 7;  // 0x538 (0x538)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x538 (0x538)
	char pad_1337[7];  // 0x539 (0x539)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_10;  // 0x540 (0x540)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_7;  // 0x558 (0x558)
	struct FTransform CallFunc_GetTransform_ReturnValue;  // 0x560 (0x560)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x5C0 (0x5C0)
	struct FVector CallFunc_BreakTransform_Location;  // 0x670 (0x670)
	struct FRotator CallFunc_BreakTransform_Rotation;  // 0x688 (0x688)
	struct FVector CallFunc_BreakTransform_Scale;  // 0x6A0 (0x6A0)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue;  // 0x6B8 (0x6B8)
	char pad_1744_1 : 7;  // 0x6D0 (0x6D0)
	bool CallFunc_K2_SetActorRotation_ReturnValue : 1;  // 0x6D0 (0x6D0)
	char pad_1745[7];  // 0x6D1 (0x6D1)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_8;  // 0x6D8 (0x6D8)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x6E0 (0x6E0)
	char pad_1768_1 : 7;  // 0x6E8 (0x6E8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x6E8 (0x6E8)
	char pad_1769[3];  // 0x6E9 (0x6E9)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_7;  // 0x6EC (0x6EC)
	char pad_1788[4];  // 0x6FC (0x6FC)
	double CallFunc_GetWorldDeltaSeconds_ReturnValue;  // 0x700 (0x700)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_8;  // 0x708 (0x708)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;  // 0x718 (0x718)
	char pad_1824_1 : 7;  // 0x720 (0x720)
	bool K2Node_Event_bWasCancelled : 1;  // 0x720 (0x720)
	char pad_1825[7];  // 0x721 (0x721)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_11;  // 0x728 (0x728)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x740 (0x740)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_2;  // 0x748 (0x748)
	char pad_1872_1 : 7;  // 0x750 (0x750)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x750 (0x750)
	char pad_1873_1 : 7;  // 0x751 (0x751)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2 : 1;  // 0x751 (0x751)
	char pad_1874[2];  // 0x752 (0x752)
	struct FGameplayTag K2Node_CustomEvent_EventTag_3;  // 0x754 (0x754)
	char pad_1884[4];  // 0x75C (0x75C)
	struct FGameplayEventData K2Node_CustomEvent_EventData_3;  // 0x760 (0x760)
	struct FGameplayEventData Temp_struct_Variable_3;  // 0x810 (0x810)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_9;  // 0x8C0 (0x8C0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_10;  // 0x8D0 (0x8D0)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_3;  // 0x8E0 (0x8E0)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x8E8 (0x8E8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_11;  // 0x998 (0x998)
	struct AAIController* CallFunc_GetAIController_ReturnValue;  // 0x9A8 (0x9A8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_9;  // 0x9B0 (0x9B0)
	struct AAIController* CallFunc_GetAIController_ReturnValue_2;  // 0x9B8 (0x9B8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_10;  // 0x9C0 (0x9C0)
	struct AAIController* CallFunc_GetAIController_ReturnValue_3;  // 0x9C8 (0x9C8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_11;  // 0x9D0 (0x9D0)
	struct AAIController* CallFunc_GetAIController_ReturnValue_4;  // 0x9D8 (0x9D8)
	double CallFunc_Vector_Distance2D_ReturnValue;  // 0x9E0 (0x9E0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_12;  // 0x9E8 (0x9E8)
	char pad_2544_1 : 7;  // 0x9F0 (0x9F0)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0x9F0 (0x9F0)
	char pad_2545[15];  // 0x9F1 (0x9F1)
	struct FTransform CallFunc_GetTransform_ReturnValue_2;  // 0xA00 (0xA00)
	struct FVector CallFunc_BreakTransform_Location_2;  // 0xA60 (0xA60)
	struct FRotator CallFunc_BreakTransform_Rotation_2;  // 0xA78 (0xA78)
	struct FVector CallFunc_BreakTransform_Scale_2;  // 0xA90 (0xA90)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue_2;  // 0xAA8 (0xAA8)
	char pad_2752_1 : 7;  // 0xAC0 (0xAC0)
	bool CallFunc_K2_SetActorRotation_ReturnValue_2 : 1;  // 0xAC0 (0xAC0)
	char pad_2753_1 : 7;  // 0xAC1 (0xAC1)
	bool CallFunc_IsValid_ReturnValue_5 : 1;  // 0xAC1 (0xAC1)
	char pad_2754[6];  // 0xAC2 (0xAC2)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_12;  // 0xAC8 (0xAC8)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue_3;  // 0xAE0 (0xAE0)
	struct FVector CallFunc_GetForwardVector_ReturnValue;  // 0xAF8 (0xAF8)
	struct FVector CallFunc_Conv_FloatToVector_ReturnValue;  // 0xB10 (0xB10)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue;  // 0xB28 (0xB28)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0xB40 (0xB40)
	struct UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue;  // 0xB58 (0xB58)
	char pad_2912_1 : 7;  // 0xB60 (0xB60)
	bool CallFunc_IsValid_ReturnValue_6 : 1;  // 0xB60 (0xB60)
	char pad_2913[3];  // 0xB61 (0xB61)
	float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;  // 0xB64 (0xB64)
	float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_2;  // 0xB68 (0xB68)
	char pad_2924[4];  // 0xB6C (0xB6C)
	double CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast;  // 0xB70 (0xB70)


}; 
 
 // Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.EventReceived_81379A3849C747B5C64706BF518AB608
struct FEventReceived_81379A3849C747B5C64706BF518AB608
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.EventReceived_BF3F566141F89016543AD490488A3AD7
struct FEventReceived_BF3F566141F89016543AD490488A3AD7
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.OnBlendOut_81379A3849C747B5C64706BF518AB608
struct FOnBlendOut_81379A3849C747B5C64706BF518AB608
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.OnCancelled_81379A3849C747B5C64706BF518AB608
struct FOnCancelled_81379A3849C747B5C64706BF518AB608
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.OnCompleted_81379A3849C747B5C64706BF518AB608
struct FOnCompleted_81379A3849C747B5C64706BF518AB608
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.OnFail_1A840F70482377B71FCEADBD5ACE2499
struct FOnFail_1A840F70482377B71FCEADBD5ACE2499
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 // Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.OnInterrupted_81379A3849C747B5C64706BF518AB608
struct FOnInterrupted_81379A3849C747B5C64706BF518AB608
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.OnSuccess_1A840F70482377B71FCEADBD5ACE2499
struct FOnSuccess_1A840F70482377B71FCEADBD5ACE2499
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 