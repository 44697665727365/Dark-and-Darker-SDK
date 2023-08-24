#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.EventReceived_81B9BE924EC7C43D14623CA54085F212
struct FEventReceived_81B9BE924EC7C43D14623CA54085F212
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.ExecuteUbergraph_GA_GoblinArcher_Flee
struct FExecuteUbergraph_GA_GoblinArcher_Flee
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
	char pad_1241[3];  // 0x4D9 (0x4D9)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_6;  // 000032909]ted: 0x1)
 (000032909] ed: 0x1)
)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_2;  // 0x4EC (0x4EC)
	char pad_1261_1 : 7;  // 0x4ED (0x4ED)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x4ED (0x4ED)
	char pad_1262[2];  // 0x4EE (0x4EE)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x4F0 (0x4F0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_7;  // 0x508 (0x508)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x518 (0x518)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_3;  // 0x520 (0x520)
	char pad_1336_1 : 7;  // 0x538 (0x538)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x538 (0x538)
	char pad_1337[7];  // 0x539 (0x539)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_4;  // 0x540 (0x540)
	double CallFunc_Vector_Distance_ReturnValue;  // 0x558 (0x558)
	char pad_1376_1 : 7;  // 0x560 (0x560)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue : 1;  // 0x560 (0x560)
	char pad_1377[7];  // 0x561 (0x561)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x568 (0x568)
	struct FTransform CallFunc_GetTransform_ReturnValue;  // 0x570 (0x570)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4;  // 0x5D0 (0x5D0)
	struct FVector CallFunc_BreakTransform_Location;  // 0x5D8 (0x5D8)
	struct FRotator CallFunc_BreakTransform_Rotation;  // 0x5F0 (0x5F0)
	struct FVector CallFunc_BreakTransform_Scale;  // 0x608 (0x608)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_5;  // 0x620 (0x620)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // [00583756] /Game/DungeonCrawler/Characters/Monster/Demon/DemonBerserker/Textures/T_DemonBerserker_Armor_D ([00583756] /Game/DungeonCrawler/Characters/Monster/Demon/DemonBerserker/Textures/T_DemonBerserker_Armor_D)
	char pad_1600_1 : 7;  // 0x640 (0x640)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x640 (0x640)
	char pad_1601_1 : 7;  // 0x641 (0x641)
	bool CallFunc_IsValid_ReturnValue_5 : 1;  // 0x641 (0x641)
	char pad_1602[6];  // 0x642 (0x642)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_6;  // 0x648 (0x648)
	double CallFunc_Vector_Distance_ReturnValue_2;  // 0x660 (0x660)
	struct FGameplayEventData Temp_struct_Variable_3;  // 0x668 (0x668)
	char pad_1816_1 : 7;  // 0x718 (0x718)
	bool CallFunc_IsValid_ReturnValue_6 : 1;  // 0x718 (0x718)
	char pad_1817[7];  // 0x719 (0x719)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_7;  // 0x720 (0x720)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue;  // 0x738 (0x738)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x750 (0x750)
	char pad_2048_1 : 7;  // 0x800 (0x800)
	bool CallFunc_K2_SetActorRotation_ReturnValue : 1;  // 0x800 (0x800)
	char pad_2049[7];  // 0x801 (0x801)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x808 (0x808)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_5;  // 0x8B8 (0x8B8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_8;  // 0x8C0 (0x8C0)
	struct ABP_GoblinArcher_C* K2Node_DynamicCast_AsBP_Goblin_Archer;  // 0x8D0 (0x8D0)
	char pad_2264_1 : 7;  // 0x8D8 (0x8D8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x8D8 (0x8D8)
	char pad_2265[7];  // 0x8D9 (0x8D9)
	double CallFunc_GetWorldDeltaSeconds_ReturnValue;  // 0x8E0 (0x8E0)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;  // 0x8E8 (0x8E8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_9;  // 0x8F0 (0x8F0)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_2;  // 0x900 (0x900)
	char pad_2312_1 : 7;  // 0x908 (0x908)
	bool K2Node_Event_bWasCancelled : 1;  // 0x908 (0x908)
	char pad_2313_1 : 7;  // 0x909 (0x909)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2 : 1;  // 0x909 (0x909)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult;  // 0x90A (0x90A)
	char pad_2315[1];  // 0x90B (0x90B)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_10;  // 0x90C (0x90C)
	char pad_2332[4];  // 0x91C (0x91C)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_6;  // 0x920 (0x920)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_8;  // 0x928 (0x928)
	struct AAIController* CallFunc_GetAIController_ReturnValue;  // 0x940 (0x940)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_7;  // 0x948 (0x948)
	struct AAIController* CallFunc_GetAIController_ReturnValue_2;  // 0x950 (0x950)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_8;  // 0x958 (0x958)
	struct AAIController* CallFunc_GetAIController_ReturnValue_3;  // 0x960 (0x960)
	struct FTimerHandle CallFunc_Unable_To_Move_Check_Timer_TimerHandle;  // 0x968 (0x968)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_9;  // 0x970 (0x970)
	char pad_2424[8];  // 0x978 (0x978)
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
 
 // Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.EventReceived_86933E1F49F2B960ED4F83B9F19E4E93
struct FEventReceived_86933E1F49F2B960ED4F83B9F19E4E93
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.OnBlendOut_81B9BE924EC7C43D14623CA54085F212
struct FOnBlendOut_81B9BE924EC7C43D14623CA54085F212
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.OnCancelled_81B9BE924EC7C43D14623CA54085F212
struct FOnCancelled_81B9BE924EC7C43D14623CA54085F212
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.OnCompleted_81B9BE924EC7C43D14623CA54085F212
struct FOnCompleted_81B9BE924EC7C43D14623CA54085F212
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.OnFail_4738D3F54466A34A2142A3ADFFE63889
struct FOnFail_4738D3F54466A34A2142A3ADFFE63889
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 // Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.OnInterrupted_81B9BE924EC7C43D14623CA54085F212
struct FOnInterrupted_81B9BE924EC7C43D14623CA54085F212
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.OnSuccess_4738D3F54466A34A2142A3ADFFE63889
struct FOnSuccess_4738D3F54466A34A2142A3ADFFE63889
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 