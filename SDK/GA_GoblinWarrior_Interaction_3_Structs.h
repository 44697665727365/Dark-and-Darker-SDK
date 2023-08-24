#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_GoblinWarrior_Interaction_3.GA_GoblinWarrior_Interaction_2_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_GoblinWarrior_Interaction_3.GA_GoblinWarrior_Interaction_2_C.EventReceived_54FAB9564F96290A84B48B89342BD34A
struct FEventReceived_54FAB9564F96290A84B48B89342BD34A
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_GoblinWarrior_Interaction_3.GA_GoblinWarrior_Interaction_2_C.ExecuteUbergraph_GA_GoblinWarrior_Interaction_3
struct FExecuteUbergraph_GA_GoblinWarrior_Interaction_3
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4 (0x4)
	char pad_20[4];  // 0x14 (0x14)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x18 (0x18)
	struct FGameplayEventData Temp_struct_Variable;  // 0xC8 (0xC8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x178 (0x178)
	char pad_384_1 : 7;  // 0x180 (0x180)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x180 (0x180)
	char pad_385[7];  // 0x181 (0x181)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x188 (0x188)
	struct FTransform CallFunc_GetTransform_ReturnValue;  // 0x190 (0x190)
	struct FVector CallFunc_BreakTransform_Location;  // 0x1F0 (0x1F0)
	struct FRotator CallFunc_BreakTransform_Rotation;  // 0x208 (0x208)
	struct FVector CallFunc_BreakTransform_Scale;  // 0x220 (0x220)
	char pad_568_1 : 7;  // 0x238 (0x238)
	bool K2Node_Event_bWasCancelled : 1;  // 0x238 (0x238)
	char pad_569[3];  // 0x239 (0x239)
	float CallFunc_BreakRotator_Roll;  // 0x23C (0x23C)
	float CallFunc_BreakRotator_Pitch;  // 0x240 (0x240)
	float CallFunc_BreakRotator_Yaw;  // 0x244 (0x244)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x248 (0x248)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x2F8 (0x2F8)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue;  // 0x310 (0x310)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x328 (0x328)
	float CallFunc_BreakRotator_Roll_2;  // 0x338 (0x338)
	float CallFunc_BreakRotator_Pitch_2;  // 0x33C (0x33C)
	float CallFunc_BreakRotator_Yaw_2;  // 0x340 (0x340)
	char pad_836[4];  // 0x344 (0x344)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x348 (0x348)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x350 (0x350)
	double CallFunc_GetWorldDeltaSeconds_ReturnValue;  // 0x358 (0x358)
	struct FRotator CallFunc_MakeRotator_ReturnValue;  // 0x360 (0x360)
	double CallFunc_GetWorldDeltaSeconds_ReturnValue_2;  // 0x378 (0x378)
	float CallFunc_BreakRotator_Roll_3;  // 0x380 (0x380)
	float CallFunc_BreakRotator_Pitch_3;  // 0x384 (0x384)
	float CallFunc_BreakRotator_Yaw_3;  // 0x388 (0x388)
	char pad_908[4];  // 0x38C (0x38C)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;  // 0x390 (0x390)
	struct FRotator CallFunc_MakeRotator_ReturnValue_2;  // 0x398 (0x398)
	struct FRotator CallFunc_RInterpTo_ReturnValue;  // 0x3B0 (0x3B0)
	char pad_968_1 : 7;  // 0x3C8 (0x3C8)
	bool CallFunc_K2_SetActorRotation_ReturnValue : 1;  // 0x3C8 (0x3C8)
	char pad_969[7];  // 0x3C9 (0x3C9)
	double CallFunc_Subtract_DoubleDouble_A_ImplicitCast;  // 0x3D0 (0x3D0)
	float CallFunc_MakeRotator_Yaw_ImplicitCast;  // 0x3D8 (0x3D8)
	float CallFunc_RInterpTo_DeltaTime_ImplicitCast;  // 0x3DC (0x3DC)
	float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;  // 0x3E0 (0x3E0)


}; 
 
 // Function GA_GoblinWarrior_Interaction_3.GA_GoblinWarrior_Interaction_2_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 