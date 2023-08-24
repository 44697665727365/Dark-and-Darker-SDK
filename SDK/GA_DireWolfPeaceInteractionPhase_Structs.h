#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_DireWolfPeaceInteractionPhase.GA_DireWolfPeaceInteractionPhase_C.OnSuccess_C86AE1ED41315BC6F9772494FBBA5F1B
struct FOnSuccess_C86AE1ED41315BC6F9772494FBBA5F1B
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 // Function GA_DireWolfPeaceInteractionPhase.GA_DireWolfPeaceInteractionPhase_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_DireWolfPeaceInteractionPhase.GA_DireWolfPeaceInteractionPhase_C.EventReceived_8FB63F494BA768FA1ED311ACF2F9B292
struct FEventReceived_8FB63F494BA768FA1ED311ACF2F9B292
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_DireWolfPeaceInteractionPhase.GA_DireWolfPeaceInteractionPhase_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_DireWolfPeaceInteractionPhase.GA_DireWolfPeaceInteractionPhase_C.ExecuteUbergraph_GA_DireWolfPeaceInteractionPhase
struct FExecuteUbergraph_GA_DireWolfPeaceInteractionPhase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x8 (0x8)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue;  // 0x18 (0x18)
	enum class EPathFollowingResult Temp_byte_Variable;  // 0x20 (0x20)
	char pad_33_1 : 7;  // 0x21 (0x21)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x21 (0x21)
	char pad_34[2];  // 0x22 (0x22)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x24 (0x24)
	char pad_52_1 : 7;  // 0x34 (0x34)
	bool Temp_bool_Variable : 1;  // 0x34 (0x34)
	char pad_53[3];  // 0x35 (0x35)
	int32_t Temp_int_Variable;  // 0x38 (0x38)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x3C (0x3C)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool CallFunc_LessEqual_IntInt_ReturnValue : 1;  // 0x40 (0x40)
	char pad_65_1 : 7;  // 0x41 (0x41)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x41 (0x41)
	char pad_66[6];  // 0x42 (0x42)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x48 (0x48)
	struct FTransform CallFunc_GetTransform_ReturnValue;  // 0x50 (0x50)
	char pad_176_1 : 7;  // 0xB0 (0xB0)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0xB0 (0xB0)
	char pad_177[7];  // 0xB1 (0xB1)
	struct FVector CallFunc_BreakTransform_Location;  // 0xB8 (0xB8)
	struct FRotator CallFunc_BreakTransform_Rotation;  // 0xD0 (0xD0)
	struct FVector CallFunc_BreakTransform_Scale;  // 0xE8 (0xE8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x100 (0x100)
	char pad_264_1 : 7;  // 0x108 (0x108)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x108 (0x108)
	char pad_265_1 : 7;  // 0x109 (0x109)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x109 (0x109)
	char pad_266[6];  // 0x10A (0x10A)
	struct FGameplayEventData Temp_struct_Variable;  // 0x110 (0x110)
	char pad_448_1 : 7;  // 0x1C0 (0x1C0)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x1C0 (0x1C0)
	char pad_449_1 : 7;  // 0x1C1 (0x1C1)
	bool CallFunc_IsValid_ReturnValue_5 : 1;  // 0x1C1 (0x1C1)
	char pad_450[6];  // 0x1C2 (0x1C2)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x1C8 (0x1C8)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x278 (0x278)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x328 (0x328)
	double CallFunc_Vector_Distance_ReturnValue;  // 0x330 (0x330)
	struct ABP_DCMonsterBase_C* K2Node_DynamicCast_AsBP_DCMonster_Base;  // 0x338 (0x338)
	char pad_832_1 : 7;  // 0x340 (0x340)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x340 (0x340)
	char pad_833_1 : 7;  // 0x341 (0x341)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0x341 (0x341)
	char pad_834[6];  // 0x342 (0x342)
	struct FVector CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation;  // 0x348 (0x348)
	char pad_864_1 : 7;  // 0x360 (0x360)
	bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue : 1;  // 0x360 (0x360)
	char pad_865[3];  // 0x361 (0x361)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x364 (0x364)
	char pad_884[4];  // 0x374 (0x374)
	struct UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue;  // 0x378 (0x378)
	char pad_896_1 : 7;  // 0x380 (0x380)
	bool CallFunc_IsValid_ReturnValue_6 : 1;  // 0x380 (0x380)
	char pad_897[3];  // 0x381 (0x381)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x384 (0x384)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4;  // 0x394 (0x394)
	char pad_932[4];  // 0x3A4 (0x3A4)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;  // 0x3A8 (0x3A8)
	int32_t CallFunc_RandomInteger_ReturnValue;  // 0x3B0 (0x3B0)
	char pad_948_1 : 7;  // 0x3B4 (0x3B4)
	bool K2Node_SwitchInteger_CmpSuccess : 1;  // 0x3B4 (0x3B4)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_2;  // 0x3B5 (0x3B5)
	char pad_950_1 : 7;  // 0x3B6 (0x3B6)
	bool K2Node_Event_bWasCancelled : 1;  // 0x3B6 (0x3B6)
	char pad_951[1];  // 0x3B7 (0x3B7)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_5;  // 0x3B8 (0x3B8)
	float CallFunc_WaitDelay_Time_ImplicitCast;  // 0x3C8 (0x3C8)


}; 
 
 // Function GA_DireWolfPeaceInteractionPhase.GA_DireWolfPeaceInteractionPhase_C.GA_DireWolfPeaceInteractionPhase_AutoGenFunc
struct FGA_DireWolfPeaceInteractionPhase_AutoGenFunc
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct ABP_DireWolf_C* K2Node_DynamicCast_AsBP_Dire_Wolf;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x18 (0x18)


}; 
 
 // Function GA_DireWolfPeaceInteractionPhase.GA_DireWolfPeaceInteractionPhase_C.OnFail_C86AE1ED41315BC6F9772494FBBA5F1B
struct FOnFail_C86AE1ED41315BC6F9772494FBBA5F1B
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 