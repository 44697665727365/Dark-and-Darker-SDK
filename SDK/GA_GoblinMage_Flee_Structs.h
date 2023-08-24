#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_GoblinMage_Flee.GA_GoblinMage_Flee_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_GoblinMage_Flee.GA_GoblinMage_Flee_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_GoblinMage_Flee.GA_GoblinMage_Flee_C.EventReceived_56E887C34B2A2F34647DE099B3850EBF
struct FEventReceived_56E887C34B2A2F34647DE099B3850EBF
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_GoblinMage_Flee.GA_GoblinMage_Flee_C.ExecuteUbergraph_GA_GoblinMage_Flee
struct FExecuteUbergraph_GA_GoblinMage_Flee
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x10 (0x10)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x30 (0x30)
	char pad_56[8];  // 0x38 (0x38)
	struct FTransform CallFunc_GetTransform_ReturnValue;  // 0x40 (0x40)
	struct FVector CallFunc_BreakTransform_Location;  // 0xA0 (0xA0)
	struct FRotator CallFunc_BreakTransform_Rotation;  // 0xB8 (0xB8)
	struct FVector CallFunc_BreakTransform_Scale;  // 0xD0 (0xD0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xE8 (0xE8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0xF8 (0xF8)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x100 (0x100)
	char pad_280_1 : 7;  // 0x118 (0x118)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x118 (0x118)
	char pad_281[7];  // 0x119 (0x119)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_3;  // 0x120 (0x120)
	double CallFunc_Vector_Distance2D_ReturnValue;  // 0x138 (0x138)
	char pad_320_1 : 7;  // 0x140 (0x140)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue : 1;  // 0x140 (0x140)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_2;  // 0x141 (0x141)
	char pad_322[6];  // 0x142 (0x142)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4;  // 0x148 (0x148)
	char pad_336_1 : 7;  // 0x150 (0x150)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x150 (0x150)
	char pad_337[15];  // 0x151 (0x151)
	struct FTransform CallFunc_GetTransform_ReturnValue_2;  // 0x160 (0x160)
	struct FVector CallFunc_BreakTransform_Location_2;  // 0x1C0 (0x1C0)
	struct FRotator CallFunc_BreakTransform_Rotation_2;  // 0x1D8 (0x1D8)
	struct FVector CallFunc_BreakTransform_Scale_2;  // 0x1F0 (0x1F0)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_4;  // 0x208 (0x208)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_5;  // 0x220 (0x220)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x228 (0x228)
	char pad_568[8];  // 0x238 (0x238)
	struct FTransform CallFunc_GetTransform_ReturnValue_3;  // 0x240 (0x240)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_6;  // 0x2A0 (0x2A0)
	struct FVector CallFunc_BreakTransform_Location_3;  // 0x2A8 (0x2A8)
	struct FRotator CallFunc_BreakTransform_Rotation_3;  // 0x2C0 (0x2C0)
	struct FVector CallFunc_BreakTransform_Scale_3;  // 0x2D8 (0x2D8)
	struct FTransform CallFunc_GetTransform_ReturnValue_4;  // 0x2F0 (0x2F0)
	struct FVector CallFunc_BreakTransform_Location_4;  // 0x350 (0x350)
	struct FRotator CallFunc_BreakTransform_Rotation_4;  // 0x368 (0x368)
	struct FVector CallFunc_BreakTransform_Scale_4;  // 0x380 (0x380)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_7;  // 0x398 (0x398)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_5;  // 0x3A0 (0x3A0)
	char pad_952_1 : 7;  // 0x3B8 (0x3B8)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x3B8 (0x3B8)
	char pad_953[7];  // 0x3B9 (0x3B9)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_6;  // 0x3C0 (0x3C0)
	double CallFunc_Vector_Distance2D_ReturnValue_2;  // 0x3D8 (0x3D8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x3E0 (0x3E0)
	char pad_1000_1 : 7;  // 0x3E8 (0x3E8)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x3E8 (0x3E8)
	char pad_1001[7];  // 0x3E9 (0x3E9)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_7;  // 0x3F0 (0x3F0)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue;  // 0x408 (0x408)
	char pad_1056_1 : 7;  // 0x420 (0x420)
	bool CallFunc_IsValid_ReturnValue_5 : 1;  // 0x420 (0x420)
	char pad_1057_1 : 7;  // 0x421 (0x421)
	bool CallFunc_K2_SetActorRotation_ReturnValue : 1;  // 0x421 (0x421)
	char pad_1058[6];  // 0x422 (0x422)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x428 (0x428)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_8;  // 0x4D8 (0x4D8)
	struct FGameplayEventData Temp_struct_Variable;  // 0x4E0 (0x4E0)
	struct ABP_GoblinMage_C* K2Node_DynamicCast_AsBP_Goblin_Mage;  // 0x590 (0x590)
	char pad_1432_1 : 7;  // 0x598 (0x598)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x598 (0x598)
	char pad_1433[3];  // 0x599 (0x599)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x59C (0x59C)
	char pad_1452[4];  // 0x5AC (0x5AC)
	double CallFunc_GetWorldDeltaSeconds_ReturnValue;  // 0x5B0 (0x5B0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4;  // 0x5B8 (0x5B8)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;  // 0x5C8 (0x5C8)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_2;  // 0x5D0 (0x5D0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_5;  // 0x5D8 (0x5D8)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_3;  // 0x5E8 (0x5E8)
	char pad_1520_1 : 7;  // 000034649] ed: 0x1)
 (000034649] ed: 0x1)
)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2 : 1;  // 0x5F0 (0x5F0)
	char pad_1521_1 : 7;  // 0x5F1 (0x5F1)
	bool K2Node_Event_bWasCancelled : 1;  // 0x5F1 (0x5F1)
	char pad_1522[6];  // 0x5F2 (0x5F2)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_9;  // 0x5F8 (0x5F8)
	struct FTransform CallFunc_GetTransform_ReturnValue_5;  // 0x600 (0x600)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x660 (0x660)
	struct FVector CallFunc_BreakTransform_Location_5;  // 0x710 (0x710)
	struct FRotator CallFunc_BreakTransform_Rotation_5;  // 0x728 (0x728)
	struct FVector CallFunc_BreakTransform_Scale_5;  // 0x740 (0x740)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue_2;  // 0x758 (0x758)
	char pad_1904_1 : 7;  // 0x770 (0x770)
	bool CallFunc_K2_SetActorRotation_ReturnValue_2 : 1;  // 0x770 (0x770)
	char pad_1905[3];  // 0x771 (0x771)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_6;  // 0x774 (0x774)
	enum class EPathFollowingResult Temp_byte_Variable;  // 0x784 (0x784)
	char pad_1925[3];  // 0x785 (0x785)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_10;  // 0x788 (0x788)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_8;  // 0x790 (0x790)
	struct AAIController* CallFunc_GetAIController_ReturnValue;  // 0x7A8 (0x7A8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_11;  // 0x7B0 (0x7B0)
	struct AAIController* CallFunc_GetAIController_ReturnValue_2;  // 0x7B8 (0x7B8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_12;  // 0x7C0 (0x7C0)
	struct AAIController* CallFunc_GetAIController_ReturnValue_3;  // 0x7C8 (0x7C8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_13;  // 0x7D0 (0x7D0)
	struct AAIController* CallFunc_GetAIController_ReturnValue_4;  // 0x7D8 (0x7D8)
	double CallFunc_Vector_Distance2D_ReturnValue_3;  // 0x7E0 (0x7E0)
	char pad_2024_1 : 7;  // 0x7E8 (0x7E8)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0x7E8 (0x7E8)
	char pad_2025_1 : 7;  // 0x7E9 (0x7E9)
	bool CallFunc_IsValid_ReturnValue_6 : 1;  // 0x7E9 (0x7E9)
	char pad_2026[6];  // 0x7EA (0x7EA)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_9;  // 0x7F0 (0x7F0)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue_3;  // 0x808 (0x808)
	struct FVector CallFunc_GetForwardVector_ReturnValue;  // 0x820 (0x820)
	struct FVector CallFunc_Conv_FloatToVector_ReturnValue;  // 0x838 (0x838)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue;  // 0x850 (0x850)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x868 (0x868)
	struct UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue;  // 0x880 (0x880)
	char pad_2184_1 : 7;  // 0x888 (0x888)
	bool CallFunc_IsValid_ReturnValue_7 : 1;  // 0x888 (0x888)
	char pad_2185[3];  // 0x889 (0x889)
	float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;  // 0x88C (0x88C)
	float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_2;  // 0x890 (0x890)
	char pad_2196[4];  // 0x894 (0x894)
	double CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast;  // 0x898 (0x898)


}; 
 
 // Function GA_GoblinMage_Flee.GA_GoblinMage_Flee_C.OnFail_BD9F7BBF4436D443ABCA108234B34067
struct FOnFail_BD9F7BBF4436D443ABCA108234B34067
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 // Function GA_GoblinMage_Flee.GA_GoblinMage_Flee_C.OnSuccess_BD9F7BBF4436D443ABCA108234B34067
struct FOnSuccess_BD9F7BBF4436D443ABCA108234B34067
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 