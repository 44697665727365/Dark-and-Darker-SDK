#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_CentaurDemon_SprintAttack.GA_CentaurDemon_SprintAttack_C.EventReceived_0564A4534D1BD80A4E8FDE9503060BD8
struct FEventReceived_0564A4534D1BD80A4E8FDE9503060BD8
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_CentaurDemon_SprintAttack.GA_CentaurDemon_SprintAttack_C.ExecuteUbergraph_GA_CentaurDemon_SprintAttack
struct FExecuteUbergraph_GA_CentaurDemon_SprintAttack
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData Temp_struct_Variable;  // 0x8 (0x8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0xB8 (0xB8)
	struct FVector CallFunc_Conv_FloatToVector_ReturnValue;  // 0xC0 (0xC0)
	char pad_216_1 : 7;  // 0xD8 (0xD8)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xD8 (0xD8)
	char pad_217[7];  // 0xD9 (0xD9)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0xE0 (0xE0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x190 (0x190)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x1A0 (0x1A0)
	char pad_424_1 : 7;  // 0x1A8 (0x1A8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x1A8 (0x1A8)
	char pad_425[7];  // 0x1A9 (0x1A9)
	double CallFunc_GetWorldDeltaSeconds_ReturnValue;  // 0x1B0 (0x1B0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x1B8 (0x1B8)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;  // 0x1C0 (0x1C0)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x1C8 (0x1C8)
	char pad_464_1 : 7;  // 0x1D0 (0x1D0)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x1D0 (0x1D0)
	char pad_465[7];  // 0x1D1 (0x1D1)
	double CallFunc_GetWorldDeltaSeconds_ReturnValue_2;  // 0x1D8 (0x1D8)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue;  // 0x1E0 (0x1E0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x1F8 (0x1F8)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_2;  // 0x208 (0x208)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x210 (0x210)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x220 (0x220)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x238 (0x238)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_3;  // 0x250 (0x250)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x268 (0x268)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue;  // 0x318 (0x318)
	struct FVector CallFunc_GetRightVector_ReturnValue;  // 0x330 (0x330)
	char pad_840_1 : 7;  // 0x348 (0x348)
	bool K2Node_Event_bWasCancelled : 1;  // 0x348 (0x348)
	char pad_841[7];  // 0x349 (0x349)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue;  // 0x350 (0x350)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x368 (0x368)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue_2;  // 0x380 (0x380)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_4;  // 0x398 (0x398)
	struct FRotator CallFunc_RInterpTo_ReturnValue;  // 0x3B0 (0x3B0)
	char pad_968_1 : 7;  // 0x3C8 (0x3C8)
	bool CallFunc_K2_SetActorRotation_ReturnValue : 1;  // 0x3C8 (0x3C8)
	char pad_969[7];  // 0x3C9 (0x3C9)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue_2;  // 0x3D0 (0x3D0)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_5;  // 0x3E8 (0x3E8)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue_3;  // 0x400 (0x400)
	struct FRotator CallFunc_RInterpTo_ReturnValue_2;  // 0x418 (0x418)
	char pad_1072_1 : 7;  // 0x430 (0x430)
	bool CallFunc_K2_SetActorRotation_ReturnValue_2 : 1;  // 0x430 (0x430)
	char pad_1073[3];  // 0x431 (0x431)
	float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;  // 0x434 (0x434)
	float CallFunc_RInterpTo_DeltaTime_ImplicitCast;  // 0x438 (0x438)


}; 
 
 // Function GA_CentaurDemon_SprintAttack.GA_CentaurDemon_SprintAttack_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_CentaurDemon_SprintAttack.GA_CentaurDemon_SprintAttack_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 