#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_CentaurDemon_Attack1.GA_CentaurDemon_Attack1_C.EventReceived_292A21FB45B2F5B4590504B9C379EC8F
struct FEventReceived_292A21FB45B2F5B4590504B9C379EC8F
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_CentaurDemon_Attack1.GA_CentaurDemon_Attack1_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_CentaurDemon_Attack1.GA_CentaurDemon_Attack1_C.EventReceived_DCC6FDA4431C03D9495F53A7E8952928
struct FEventReceived_DCC6FDA4431C03D9495F53A7E8952928
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_CentaurDemon_Attack1.GA_CentaurDemon_Attack1_C.ExecuteUbergraph_GA_CentaurDemon_Attack1
struct FExecuteUbergraph_GA_CentaurDemon_Attack1
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_CustomEvent_Payload_2;  // 0x8 (0x8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0xB8 (0xB8)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0xC0 (0xC0)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xD0 (0xD0)
	char pad_209[3];  // 0xD1 (0xD1)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xD4 (0xD4)
	char pad_228[4];  // 0xE4 (0xE4)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0xE8 (0xE8)
	struct FGameplayEventData Temp_struct_Variable;  // 0x198 (0x198)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue_2;  // 0x248 (0x248)
	char pad_592_1 : 7;  // 0x250 (0x250)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x250 (0x250)
	char pad_593[7];  // 0x251 (0x251)
	double CallFunc_GetWorldDeltaSeconds_ReturnValue;  // 0x258 (0x258)
	struct FGameplayEventData Temp_struct_Variable_2;  // 0x260 (0x260)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x310 (0x310)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x320 (0x320)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue;  // 0x328 (0x328)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x340 (0x340)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x358 (0x358)
	double CallFunc_GetWorldDeltaSeconds_ReturnValue_2;  // 0x360 (0x360)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue_2;  // 0x368 (0x368)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x380 (0x380)
	char pad_920_1 : 7;  // 0x398 (0x398)
	bool K2Node_Event_bWasCancelled : 1;  // 0x398 (0x398)
	char pad_921[7];  // 0x399 (0x399)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x3A0 (0x3A0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x450 (0x450)
	struct ADCCharacterBase* CallFunc_Set_Combo_Attack_Target_Enemy;  // 0x458 (0x458)
	struct TArray<struct ADCCharacterBase*> CallFunc_Set_Combo_Attack_TargetArray;  // 0x460 (0x460)
	char pad_1136_1 : 7;  // 0x470 (0x470)
	bool CallFunc_Set_Combo_Attack_Combo_Triggered : 1;  // 0x470 (0x470)
	char pad_1137[7];  // 0x471 (0x471)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4;  // 0x478 (0x478)
	struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array;  // 0x480 (0x480)
	struct FVector CallFunc_Get_Direction_Vector_Result_Vector;  // 0x490 (0x490)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x4A8 (0x4A8)
	struct TArray<struct AActor*> CallFunc_BoxOverlapActors_OutActors;  // 0x4B8 (0x4B8)
	char pad_1224_1 : 7;  // 0x4C8 (0x4C8)
	bool CallFunc_BoxOverlapActors_ReturnValue : 1;  // 0x4C8 (0x4C8)
	char pad_1225[7];  // 0x4C9 (0x4C9)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_5;  // 0x4D0 (0x4D0)
	double CallFunc_GetWorldDeltaSeconds_ReturnValue_3;  // 0x4D8 (0x4D8)
	char pad_1248_1 : 7;  // 0x4E0 (0x4E0)
	bool CallFunc_GetBBTargetActorToCharacterBase_Result : 1;  // 0x4E0 (0x4E0)
	char pad_1249[7];  // 0x4E1 (0x4E1)
	struct ADCCharacterBase* CallFunc_GetBBTargetActorToCharacterBase_As_DCCharacter_Base;  // 0x4E8 (0x4E8)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;  // 0x4F0 (0x4F0)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_3;  // 0x4F8 (0x4F8)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue;  // 0x510 (0x510)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_4;  // 0x528 (0x528)
	char pad_1344_1 : 7;  // 0x540 (0x540)
	bool CallFunc_Array_Contains_ReturnValue : 1;  // 0x540 (0x540)
	char pad_1345[7];  // 0x541 (0x541)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue_2;  // 0x548 (0x548)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_6;  // 0x560 (0x560)
	struct FRotator CallFunc_RInterpTo_ReturnValue;  // 0x568 (0x568)
	char pad_1408_1 : 7;  // 0x580 (0x580)
	bool CallFunc_K2_SetActorRotation_ReturnValue : 1;  // 0x580 (0x580)
	char pad_1409[7];  // 0x581 (0x581)
	struct FRotator CallFunc_RInterpTo_ReturnValue_2;  // 0x588 (0x588)
	char pad_1440_1 : 7;  // 0x5A0 (0x5A0)
	bool CallFunc_K2_SetActorRotation_ReturnValue_2 : 1;  // 0x5A0 (0x5A0)
	char pad_1441[3];  // 0x5A1 (0x5A1)
	float CallFunc_RInterpTo_DeltaTime_ImplicitCast;  // 0x5A4 (0x5A4)
	float CallFunc_RInterpTo_DeltaTime_ImplicitCast_2;  // 0x5A8 (0x5A8)
	float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;  // 0x5AC (0x5AC)
	float CallFunc_RInterpTo_InterpSpeed_ImplicitCast;  // 0x5B0 (0x5B0)
	float CallFunc_RInterpTo_InterpSpeed_ImplicitCast_2;  // 0x5B4 (0x5B4)


}; 
 
 // Function GA_CentaurDemon_Attack1.GA_CentaurDemon_Attack1_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 