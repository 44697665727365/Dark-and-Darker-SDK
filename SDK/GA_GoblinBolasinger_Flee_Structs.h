#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.EventReceived_3FDA19F04FD64EF8679FE3B72FA17924
struct FEventReceived_3FDA19F04FD64EF8679FE3B72FA17924
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.EventReceived_B56679AE43FF329382C750930B7E2180
struct FEventReceived_B56679AE43FF329382C750930B7E2180
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.OnBlendOut_3FDA19F04FD64EF8679FE3B72FA17924
struct FOnBlendOut_3FDA19F04FD64EF8679FE3B72FA17924
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.ExecuteUbergraph_GA_GoblinBolasinger_Flee
struct FExecuteUbergraph_GA_GoblinBolasinger_Flee
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	enum class EPathFollowingResult Temp_byte_Variable;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x18 (0x18)
	struct FGameplayTag K2Node_CustomEvent_EventTag_5;  // 0x30 (0x30)
	struct FGameplayEventData K2Node_CustomEvent_EventData_5;  // 0x38 (0x38)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xE8 (0xE8)
	struct FGameplayTag K2Node_CustomEvent_EventTag_4;  // 0xF8 (0xF8)
	struct FGameplayEventData K2Node_CustomEvent_EventData_4;  // 0x100 (0x100)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x1B0 (0x1B0)
	struct FGameplayTag K2Node_CustomEvent_EventTag_3;  // 0x1C0 (0x1C0)
	struct FGameplayEventData K2Node_CustomEvent_EventData_3;  // 0x1C8 (0x1C8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x278 (0x278)
	struct FGameplayTag K2Node_CustomEvent_EventTag_2;  // 0x288 (0x288)
	struct FGameplayEventData K2Node_CustomEvent_EventData_2;  // 0x290 (0x290)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4;  // 0x340 (0x340)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0x350 (0x350)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0x358 (0x358)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_5;  // 0x408 (0x408)
	struct FGameplayEventData Temp_struct_Variable;  // 0x418 (0x418)
	struct FGameplayTag Temp_struct_Variable_2;  // 0x4C8 (0x4C8)
	struct UDCAT_PlayMontageAndWaitForEvent* CallFunc_PlayMontageAndWaitForEvent_ReturnValue;  // 0x4D0 (0x4D0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_6;  // 0x4D8 (0x4D8)
	char pad_1256_1 : 7;  // 0x4E8 (0x4E8)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x4E8 (0x4E8)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_2;  // 0x4E9 (0x4E9)
	char pad_1258[2];  // 0x4EA (0x4EA)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_7;  // 0x4EC (0x4EC)
	char pad_1276_1 : 7;  // 0x4FC (0x4FC)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x4FC (0x4FC)
	char pad_1277[3];  // 0x4FD (0x4FD)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x500 (0x500)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // [x518 ([x518)
	char pad_1312_1 : 7;  // 0x520 (0x520)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x520 (0x520)
	char pad_1313[7];  // 0x521 (0x521)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_3;  // 0x528 (0x528)
	char pad_1344_1 : 7;  // 0x540 (0x540)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x540 (0x540)
	char pad_1345[7];  // 0x541 (0x541)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x548 (0x548)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_4;  // 0x550 (0x550)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_5;  // 0x568 (0x568)
	char pad_1408_1 : 7;  // 0x580 (0x580)
	bool CallFunc_IsValid_ReturnValue_5 : 1;  // 0x580 (0x580)
	char pad_1409[7];  // 0x581 (0x581)
	double CallFunc_Vector_Distance_ReturnValue;  // 0x588 (0x588)
	struct FGameplayEventData Temp_struct_Variable_3;  // 0x590 (0x590)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x640 (0x640)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_6;  // 0x648 (0x648)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_7;  // 0x660 (0x660)
	double CallFunc_Vector_Distance_ReturnValue_2;  // 0x678 (0x678)
	char pad_1664_1 : 7;  // 0x680 (0x680)
	bool CallFunc_IsValid_ReturnValue_6 : 1;  // 0x680 (0x680)
	char pad_1665_1 : 7;  // 0x681 (0x681)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue : 1;  // 0x681 (0x681)
	char pad_1666[6];  // 0x682 (0x682)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x688 (0x688)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4;  // 0x738 (0x738)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_8;  // 0x740 (0x740)
	struct ABP_GoblinBolaslinger_C* K2Node_DynamicCast_AsBP_Goblin_Bolaslinger;  // 0x750 (0x750)
	char pad_1880_1 : 7;  // 0x758 (0x758)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x758 (0x758)
	char pad_1881[7];  // 0x759 (0x759)
	double CallFunc_GetWorldDeltaSeconds_ReturnValue;  // 0x760 (0x760)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;  // 0x768 (0x768)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_9;  // 0x770 (0x770)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_2;  // 0x780 (0x780)
	char pad_1928_1 : 7;  // 0x788 (0x788)
	bool K2Node_Event_bWasCancelled : 1;  // 0x788 (0x788)
	char pad_1929_1 : 7;  // 0x789 (0x789)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2 : 1;  // 0x789 (0x789)
	char pad_1930[6];  // 0x78A (0x78A)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_5;  // 0x790 (0x790)
	char pad_1944[8];  // 0x798 (0x798)
	struct FTransform CallFunc_GetTransform_ReturnValue;  // 0x7A0 (0x7A0)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x800 (0x800)
	struct FVector CallFunc_BreakTransform_Location;  // 0x8B0 (0x8B0)
	struct FRotator CallFunc_BreakTransform_Rotation;  // 0x8C8 (0x8C8)
	struct FVector CallFunc_BreakTransform_Scale;  // 0x8E0 (0x8E0)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue;  // 0x8F8 (0x8F8)
	char pad_2320_1 : 7;  // 0x910 (0x910)
	bool CallFunc_K2_SetActorRotation_ReturnValue : 1;  // 0x910 (0x910)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult;  // 0x911 (0x911)
	char pad_2322[6];  // 0x912 (0x912)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_6;  // 0x918 (0x918)
	struct AAIController* CallFunc_GetAIController_ReturnValue;  // 0x920 (0x920)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_7;  // 0x928 (0x928)
	struct AAIController* CallFunc_GetAIController_ReturnValue_2;  // 0x930 (0x930)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_8;  // 0x938 (0x938)
	struct AAIController* CallFunc_GetAIController_ReturnValue_3;  // 0x940 (0x940)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_10;  // 0x948 (0x948)
	struct FTimerHandle CallFunc_Unable_To_Move_Check_Timer_TimerHandle;  // 0x958 (0x958)
	char pad_2400_1 : 7;  // 0x960 (0x960)
	bool CallFunc_RandomBool_ReturnValue : 1;  // 0x960 (0x960)
	char pad_2401[7];  // 0x961 (0x961)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_8;  // 0x968 (0x968)
	char pad_2432_1 : 7;  // 0x980 (0x980)
	bool CallFunc_RandomBool_ReturnValue_2 : 1;  // 0x980 (0x980)
	char pad_2433[7];  // 0x981 (0x981)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_9;  // 0x988 (0x988)
	char pad_2448_1 : 7;  // 0x990 (0x990)
	bool CallFunc_IsValid_ReturnValue_7 : 1;  // 0x990 (0x990)
	char pad_2449[15];  // 0x991 (0x991)
	struct FTransform CallFunc_GetTransform_ReturnValue_2;  // 0x9A0 (0x9A0)
	struct FVector CallFunc_BreakTransform_Location_2;  // 0xA00 (0xA00)
	struct FRotator CallFunc_BreakTransform_Rotation_2;  // 0xA18 (0xA18)
	struct FVector CallFunc_BreakTransform_Scale_2;  // 0xA30 (0xA30)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_9;  // 0xA48 (0xA48)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue_2;  // 0xA60 (0xA60)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue_3;  // 0xA78 (0xA78)
	char pad_2704_1 : 7;  // 0xA90 (0xA90)
	bool CallFunc_K2_SetActorRotation_ReturnValue_2 : 1;  // 0xA90 (0xA90)
	char pad_2705[7];  // 0xA91 (0xA91)
	struct FVector CallFunc_GetForwardVector_ReturnValue;  // 0xA98 (0xA98)
	struct FVector CallFunc_Conv_FloatToVector_ReturnValue;  // 0xAB0 (0xAB0)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue;  // 0xAC8 (0xAC8)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0xAE0 (0xAE0)
	struct UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue;  // 0xAF8 (0xAF8)
	char pad_2816_1 : 7;  // 0xB00 (0xB00)
	bool CallFunc_IsValid_ReturnValue_8 : 1;  // 0xB00 (0xB00)
	char pad_2817[3];  // 0xB01 (0xB01)
	float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;  // 0xB04 (0xB04)
	float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_2;  // 0xB08 (0xB08)
	char pad_2828[4];  // 0xB0C (0xB0C)
	double CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast;  // 0xB10 (0xB10)


}; 
 
 // Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.OnCancelled_3FDA19F04FD64EF8679FE3B72FA17924
struct FOnCancelled_3FDA19F04FD64EF8679FE3B72FA17924
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.OnCompleted_3FDA19F04FD64EF8679FE3B72FA17924
struct FOnCompleted_3FDA19F04FD64EF8679FE3B72FA17924
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.OnFail_D60F649742A7B239BC5AFCAE0F7D2692
struct FOnFail_D60F649742A7B239BC5AFCAE0F7D2692
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 // Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.OnInterrupted_3FDA19F04FD64EF8679FE3B72FA17924
struct FOnInterrupted_3FDA19F04FD64EF8679FE3B72FA17924
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.OnSuccess_D60F649742A7B239BC5AFCAE0F7D2692
struct FOnSuccess_D60F649742A7B239BC5AFCAE0F7D2692
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 