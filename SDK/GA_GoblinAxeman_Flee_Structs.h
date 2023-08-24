#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.EventReceived_4EAB00894CA8693E0498138A37127E70
struct FEventReceived_4EAB00894CA8693E0498138A37127E70
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.EventReceived_54518C474AEA635B2AFC95ADD2993635
struct FEventReceived_54518C474AEA635B2AFC95ADD2993635
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.ExecuteUbergraph_GA_GoblinAxeman_Flee
struct FExecuteUbergraph_GA_GoblinAxeman_Flee
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
	char pad_1240_1 : 7;  // 0x4D8 (0x4D8)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x4D8 (0x4D8)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_2;  // 0x4D9 (0x4D9)
	char pad_1242_1 : 7;  // 0x4DA (0x4DA)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x4DA (0x4DA)
	char pad_1243[5];  // 0x4DB (0x4DB)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x4E0 (0x4E0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x4F8 (0x4F8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_6;  // 0x500 (0x500)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_3;  // 0x510 (0x510)
	char pad_1320_1 : 7;  // 0x528 (0x528)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x528 (0x528)
	char pad_1321[7];  // 0x529 (0x529)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_4;  // 0x530 (0x530)
	double CallFunc_Vector_Distance_ReturnValue;  // 0x548 (0x548)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x550 (0x550)
	char pad_1368_1 : 7;  // 0x558 (0x558)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x558 (0x558)
	char pad_1369[7];  // 0x559 (0x559)
	struct FGameplayEventData Temp_struct_Variable_3;  // 0x560 (0x560)
	char pad_1552_1 : 7;  // 0x610 (0x610)
	bool CallFunc_IsValid_ReturnValue_5 : 1;  // 0x610 (0x610)
	char pad_1553[7];  // 0x611 (0x611)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_5;  // 0x618 (0x618)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x630 (0x630)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4;  // 0x638 (0x638)
	struct FTransform CallFunc_GetTransform_ReturnValue;  // 0x640 (0x640)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_6;  // 0x6A0 (0x6A0)
	struct FVector CallFunc_BreakTransform_Location;  // 0x6B8 (0x6B8)
	struct FRotator CallFunc_BreakTransform_Rotation;  // 0x6D0 (0x6D0)
	struct FVector CallFunc_BreakTransform_Scale;  // 0x6E8 (0x6E8)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue;  // 0x700 (0x700)
	char pad_1816_1 : 7;  // 0x718 (0x718)
	bool CallFunc_IsValid_ReturnValue_6 : 1;  // 0x718 (0x718)
	char pad_1817_1 : 7;  // 0x719 (0x719)
	bool CallFunc_K2_SetActorRotation_ReturnValue : 1;  // 0x719 (0x719)
	char pad_1818[6];  // 0x71A (0x71A)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_7;  // 0x720 (0x720)
	double CallFunc_Vector_Distance_ReturnValue_2;  // 0x738 (0x738)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x740 (0x740)
	char pad_2032_1 : 7;  // 0x7F0 (0x7F0)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue : 1;  // 0x7F0 (0x7F0)
	char pad_2033[7];  // 0x7F1 (0x7F1)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x7F8 (0x7F8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_5;  // 0x8A8 (0x8A8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_7;  // 0x8B0 (0x8B0)
	struct ABP_GoblinAxeman_C* K2Node_DynamicCast_AsBP_Goblin_Axeman;  // 0x8C0 (0x8C0)
	char pad_2248_1 : 7;  // 0x8C8 (0x8C8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x8C8 (0x8C8)
	char pad_2249[7];  // 0x8C9 (0x8C9)
	double CallFunc_GetWorldDeltaSeconds_ReturnValue;  // 0x8D0 (0x8D0)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;  // 0x8D8 (0x8D8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_8;  // 0x8E0 (0x8E0)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_2;  // 0x8F0 (0x8F0)
	char pad_2296_1 : 7;  // 0x8F8 (0x8F8)
	bool K2Node_Event_bWasCancelled : 1;  // 0x8F8 (0x8F8)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult;  // 0x8F9 (0x8F9)
	char pad_2298_1 : 7;  // 0x8FA (0x8FA)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2 : 1;  // 0x8FA (0x8FA)
	char pad_2299[1];  // 0x8FB (0x8FB)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_9;  // 0x8FC (0x8FC)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_10;  // 0x90C (0x90C)
	char pad_2332[4];  // 0x91C (0x91C)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_6;  // 0x920 (0x920)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_7;  // 0x928 (0x928)
	struct AAIController* CallFunc_GetAIController_ReturnValue;  // 0x930 (0x930)
	struct AAIController* CallFunc_GetAIController_ReturnValue_2;  // 0x938 (0x938)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_8;  // 0x940 (0x940)
	struct FTimerHandle CallFunc_Unable_To_Move_Check_Timer_TimerHandle;  // 0x948 (0x948)
	struct AAIController* CallFunc_GetAIController_ReturnValue_3;  // 0x950 (0x950)
	char pad_2392_1 : 7;  // 0x958 (0x958)
	bool CallFunc_RandomBool_ReturnValue : 1;  // 0x958 (0x958)
	char pad_2393[7];  // 0x959 (0x959)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_8;  // 0x960 (0x960)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_9;  // 0x978 (0x978)
	struct FTransform CallFunc_GetTransform_ReturnValue_2;  // 0x980 (0x980)
	char pad_2528_1 : 7;  // 0x9E0 (0x9E0)
	bool CallFunc_IsValid_ReturnValue_7 : 1;  // 0x9E0 (0x9E0)
	char pad_2529[7];  // 0x9E1 (0x9E1)
	struct FVector CallFunc_BreakTransform_Location_2;  // 0x9E8 (0x9E8)
	struct FRotator CallFunc_BreakTransform_Rotation_2;  // 0xA00 (0xA00)
	struct FVector CallFunc_BreakTransform_Scale_2;  // 0xA18 (0xA18)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue_2;  // 0xA30 (0xA30)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_9;  // 0xA48 (0xA48)
	char pad_2656_1 : 7;  // 0xA60 (0xA60)
	bool CallFunc_K2_SetActorRotation_ReturnValue_2 : 1;  // 0xA60 (0xA60)
	char pad_2657[7];  // 0xA61 (0xA61)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue_3;  // 0xA68 (0xA68)
	struct FVector CallFunc_GetForwardVector_ReturnValue;  // 0xA80 (0xA80)
	struct FVector CallFunc_Conv_FloatToVector_ReturnValue;  // 0xA98 (0xA98)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue;  // 0xAB0 (0xAB0)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0xAC8 (0xAC8)
	struct UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue;  // 0xAE0 (0xAE0)
	char pad_2792_1 : 7;  // 0xAE8 (0xAE8)
	bool CallFunc_IsValid_ReturnValue_8 : 1;  // 0xAE8 (0xAE8)
	char pad_2793[3];  // 0xAE9 (0xAE9)
	float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;  // 0xAEC (0xAEC)
	float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_2;  // 0xAF0 (0xAF0)
	char pad_2804[4];  // 0xAF4 (0xAF4)
	double CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast;  // 0xAF8 (0xAF8)


}; 
 
 // Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.OnInterrupted_54518C474AEA635B2AFC95ADD2993635
struct FOnInterrupted_54518C474AEA635B2AFC95ADD2993635
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.OnBlendOut_54518C474AEA635B2AFC95ADD2993635
struct FOnBlendOut_54518C474AEA635B2AFC95ADD2993635
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.OnCancelled_54518C474AEA635B2AFC95ADD2993635
struct FOnCancelled_54518C474AEA635B2AFC95ADD2993635
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.OnCompleted_54518C474AEA635B2AFC95ADD2993635
struct FOnCompleted_54518C474AEA635B2AFC95ADD2993635
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.OnFail_B9430B6C4D3B8DFEF39B4E904FBE88A7
struct FOnFail_B9430B6C4D3B8DFEF39B4E904FBE88A7
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 // Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.OnSuccess_B9430B6C4D3B8DFEF39B4E904FBE88A7
struct FOnSuccess_B9430B6C4D3B8DFEF39B4E904FBE88A7
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 