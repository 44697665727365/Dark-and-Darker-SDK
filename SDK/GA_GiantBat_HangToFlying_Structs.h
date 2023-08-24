#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_GiantBat_HangToFlying.GA_GiantBat_HangToFlying_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_GiantBat_HangToFlying.GA_GiantBat_HangToFlying_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_GiantBat_HangToFlying.GA_GiantBat_HangToFlying_C.ExecuteUbergraph_GA_GiantBat_HangToFlying
struct FExecuteUbergraph_GA_GiantBat_HangToFlying
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool K2Node_Event_bWasCancelled : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x8 (0x8)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0xB8 (0xB8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xD0 (0xD0)
	double CallFunc_GetWorldDeltaSeconds_ReturnValue;  // 0xD8 (0xD8)
	struct FTransform CallFunc_GetTransform_ReturnValue;  // 0xE0 (0xE0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x140 (0x140)
	struct FVector CallFunc_BreakTransform_Location;  // 0x148 (0x148)
	struct FRotator CallFunc_BreakTransform_Rotation;  // 0x160 (0x160)
	struct FVector CallFunc_BreakTransform_Scale;  // 0x178 (0x178)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue;  // 0x190 (0x190)
	float CallFunc_BreakRotator_Roll;  // 0x1A8 (0x1A8)
	float CallFunc_BreakRotator_Pitch;  // 0x1AC (0x1AC)
	float CallFunc_BreakRotator_Yaw;  // 0x1B0 (0x1B0)
	float CallFunc_BreakRotator_Roll_2;  // 0x1B4 (0x1B4)
	float CallFunc_BreakRotator_Pitch_2;  // 0x1B8 (0x1B8)
	float CallFunc_BreakRotator_Yaw_2;  // 0x1BC (0x1BC)
	struct FRotator CallFunc_MakeRotator_ReturnValue;  // 0x1C0 (0x1C0)
	struct FRotator CallFunc_RInterpTo_ReturnValue;  // 0x1D8 (0x1D8)
	char pad_496_1 : 7;  // 0x1F0 (0x1F0)
	bool CallFunc_K2_SetActorRotation_ReturnValue : 1;  // 0x1F0 (0x1F0)
	char pad_497[3];  // 0x1F1 (0x1F1)
	float CallFunc_RInterpTo_DeltaTime_ImplicitCast;  // 0x1F4 (0x1F4)


}; 
 
 