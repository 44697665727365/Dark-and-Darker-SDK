#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_ChainLightning.GA_ChainLightning_C.AbilityActivated
// Size: 0xB1(Inherited: 0xB8)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)
	char pad_360_1 : 7;  // 0x168 (0x168)
	bool bIsSocketSightBlocked : 1;  // 0xB0 (0xB0)


}; 
 
 // Function GA_ChainLightning.GA_ChainLightning_C.ExecuteUbergraph_GA_ChainLightning
struct FExecuteUbergraph_GA_ChainLightning
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayAbilityTargetDataHandle K2Node_CustomEvent_Data_2;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x30 (0x30)
	struct FGameplayAbilityTargetDataHandle K2Node_CustomEvent_Data;  // 0x40 (0x40)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x68 (0x68)
	struct FGameplayAbilityTargetDataHandle Temp_struct_Variable;  // 0x78 (0x78)
	struct UAbilityTask_WaitTargetData* CallFunc_WaitTargetData_ReturnValue;  // 0xA0 (0xA0)
	char pad_168_1 : 7;  // 0xA8 (0xA8)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xA8 (0xA8)
	char pad_169[7];  // 0xA9 (0xA9)
	struct AGameplayAbilityTargetActor* CallFunc_BeginSpawningActor_SpawnedActor;  // 0xB0 (0xB0)
	char pad_184_1 : 7;  // 0xB8 (0xB8)
	bool CallFunc_BeginSpawningActor_ReturnValue : 1;  // 0xB8 (0xB8)
	char pad_185_1 : 7;  // 0xB9 (0xB9)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0xB9 (0xB9)
	char pad_186[6];  // 0xBA (0xBA)
	struct FHitResult CallFunc_GetHitResultFromTargetData_ReturnValue;  // 0xC0 (0xC0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x1A8 (0x1A8)
	char pad_440_1 : 7;  // 0x1B8 (0x1B8)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x1B8 (0x1B8)
	char pad_441_1 : 7;  // 0x1B9 (0x1B9)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x1B9 (0x1B9)
	char pad_442[2];  // 0x1BA (0x1BA)
	float CallFunc_BreakHitResult_Time;  // 0x1BC (0x1BC)
	float CallFunc_BreakHitResult_Distance;  // 0x1C0 (0x1C0)
	char pad_452[4];  // 0x1C4 (0x1C4)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x1C8 (0x1C8)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x1E0 (0x1E0)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x1F8 (0x1F8)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x210 (0x210)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x228 (0x228)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x230 (0x230)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x238 (0x238)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x240 (0x240)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x248 (0x248)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x250 (0x250)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x254 (0x254)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x258 (0x258)
	char pad_604[4];  // 0x25C (0x25C)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x260 (0x260)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x278 (0x278)
	int32_t K2Node_CustomEvent_ActionNumber_2;  // 0x290 (0x290)
	int32_t CallFunc_Array_AddUnique_ReturnValue;  // 0x294 (0x294)
	char pad_664_1 : 7;  // 0x298 (0x298)
	bool CallFunc_CheckTargetActor_Result : 1;  // 0x298 (0x298)
	char pad_665[3];  // 0x299 (0x299)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4;  // 0x29C (0x29C)
	int32_t K2Node_CustomEvent_ActionNumber;  // 0x2AC (0x2AC)
	int32_t Temp_int_Variable;  // 0x2B0 (0x2B0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_5;  // 0x2B4 (0x2B4)
	float CallFunc_GetRange_ReturnValue;  // 0x2C4 (0x2C4)
	float CallFunc_GetAimRadius_ReturnValue;  // 0x2C8 (0x2C8)
	char pad_716[4];  // 0x2CC (0x2CC)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x2D0 (0x2D0)
	char pad_896_1 : 7;  // 0x380 (0x380)
	bool K2Node_Event_bIsSocketSightBlocked : 1;  // 0x380 (0x380)
	char pad_897_1 : 7;  // 0x381 (0x381)
	bool K2Node_Event_bWasCancelled : 1;  // 0x381 (0x381)
	char pad_898[6];  // 0x382 (0x382)
	struct UAbilityTask_Repeat* CallFunc_RepeatAction_ReturnValue;  // 0x388 (0x388)
	struct TScriptInterface<IGameplayTaskOwnerInterface> CallFunc_TaskWaitDelay_TaskOwner_CastInput;  // 0x390 (0x390)
	struct UGameplayTask_WaitDelay* CallFunc_TaskWaitDelay_ReturnValue;  // 0x3A0 (0x3A0)
	char pad_936_1 : 7;  // 0x3A8 (0x3A8)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x3A8 (0x3A8)
	char pad_937_1 : 7;  // 0x3A9 (0x3A9)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x3A9 (0x3A9)
	char pad_938[6];  // 0x3AA (0x3AA)
	double CallFunc_SetDoublePropertyByName_Value_ImplicitCast;  // 0x3B0 (0x3B0)
	double CallFunc_SetDoublePropertyByName_Value_ImplicitCast_2;  // 0x3B8 (0x3B8)
	float CallFunc_TaskWaitDelay_Time_ImplicitCast;  // 0x3C0 (0x3C0)
	float CallFunc_RepeatAction_TimeBetweenActions_ImplicitCast;  // 0x3C4 (0x3C4)


}; 
 
 // Function GA_ChainLightning.GA_ChainLightning_C.CalMinDistanceTarget
struct FCalMinDistanceTarget
{
	struct TArray<struct AActor*> InActors;  // 0x0 (0x0)
	struct AActor* OutActor;  // 0x10 (0x10)
	struct TArray<double> DistanceArray;  // 0x18 (0x18)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x28 (0x28)
	int32_t Temp_int_Array_Index_Variable;  // 0x2C (0x2C)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)
	struct AActor* CallFunc_Array_Get_Item;  // 0x38 (0x38)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x40 (0x40)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x58 (0x58)
	char pad_89[3];  // 0x59 (0x59)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x5C (0x5C)
	double CallFunc_Vector_Distance_ReturnValue;  // 0x60 (0x60)
	int32_t CallFunc_MinOfFloatArray_IndexOfMinValue;  // 0x68 (0x68)
	float CallFunc_MinOfFloatArray_MinValue;  // 0x6C (0x6C)
	struct AActor* CallFunc_Array_Get_Item_2;  // 0x70 (0x70)
	int32_t CallFunc_Array_AddUnique_ReturnValue;  // 0x78 (0x78)
	char pad_124[4];  // 0x7C (0x7C)
	struct TArray<float> CallFunc_MinOfFloatArray_FloatArray_ImplicitCast;  // 0x80 (0x80)


}; 
 
 // Function GA_ChainLightning.GA_ChainLightning_C.Cancelled_31121FD1430811CAF3A874B288707DD0
struct FCancelled_31121FD1430811CAF3A874B288707DD0
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 // Function GA_ChainLightning.GA_ChainLightning_C.OnFinished_0648ED534A0BC29A1C2F12BADC8FE40C
struct FOnFinished_0648ED534A0BC29A1C2F12BADC8FE40C
{
	int32_t ActionNumber;  // 0x0 (0x0)


}; 
 
 // Function GA_ChainLightning.GA_ChainLightning_C.CheckTargetActor
struct FCheckTargetActor
{
	struct AActor* TargetActor;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool Result : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct AActor* Target;  // 0x10 (0x10)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x18 (0x18)
	struct ABP_TrainingDummy_C* K2Node_DynamicCast_AsBP_Training_Dummy;  // 0x20 (0x20)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x40 (0x40)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x58 (0x58)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x70 (0x70)
	char pad_136_1 : 7;  // 0x88 (0x88)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x88 (0x88)
	char pad_137[7];  // 0x89 (0x89)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x90 (0x90)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x140 (0x140)


}; 
 
 // Function GA_ChainLightning.GA_ChainLightning_C.OnApplyedTargetDamage
struct FOnApplyedTargetDamage
{
	struct AActor* TargetActor;  // 0x0 (0x0)
	int32_t BoundCount;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool K2Node_SwitchInteger_CmpSuccess : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x20 (0x20)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0xD0 (0xD0)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0xE8 (0xE8)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue_2;  // 0xF8 (0xF8)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue_3;  // 0x108 (0x108)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue_4;  // 0x118 (0x118)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue;  // 0x128 (0x128)
	char pad_304_1 : 7;  // 0x130 (0x130)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x130 (0x130)
	char pad_305_1 : 7;  // 0x131 (0x131)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x131 (0x131)
	char pad_306[2];  // 0x132 (0x132)
	int32_t CallFunc_Array_AddUnique_ReturnValue;  // 0x134 (0x134)


}; 
 
 // Function GA_ChainLightning.GA_ChainLightning_C.OnBoundingTarget
struct FOnBoundingTarget
{
	int32_t RepeatCount;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector HeightCorrection;  // 0x8 (0x8)
	struct TArray<struct AActor*> TargetActors;  // 0x20 (0x20)
	float CallFunc_Conv_IntToFloat_ReturnValue;  // 0x30 (0x30)
	int32_t CallFunc_Array_LastIndex_ReturnValue;  // 0x34 (0x34)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x38 (0x38)
	struct AActor* CallFunc_Array_Get_Item;  // 0x40 (0x40)
	int32_t CallFunc_FTrunc_ReturnValue;  // 0x48 (0x48)
	char pad_76_1 : 7;  // 0x4C (0x4C)
	bool CallFunc_Array_IsEmpty_ReturnValue : 1;  // 0x4C (0x4C)
	char pad_77[3];  // 0x4D (0x4D)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x50 (0x50)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x58 (0x58)
	char pad_89[7];  // 0x59 (0x59)
	struct AActor* CallFunc_CalMinDistanceTarget_OutActor;  // 0x60 (0x60)
	struct USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue;  // 0x68 (0x68)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x70 (0x70)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x88 (0x88)
	char pad_144_1 : 7;  // 0x90 (0x90)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x90 (0x90)
	char pad_145[7];  // 0x91 (0x91)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x98 (0x98)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0xB0 (0xB0)
	struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array;  // 0x188 (0x188)
	struct TArray<struct AActor*> CallFunc_SphereOverlapActors_OutActors;  // 0x198 (0x198)
	char pad_424_1 : 7;  // 0x1A8 (0x1A8)
	bool CallFunc_SphereOverlapActors_ReturnValue : 1;  // 0x1A8 (0x1A8)
	char pad_425[7];  // 0x1A9 (0x1A9)
	struct TArray<struct AActor*> CallFunc_SphereOverlapActors_OutActors_2;  // 0x1B0 (0x1B0)
	char pad_448_1 : 7;  // 0x1C0 (0x1C0)
	bool CallFunc_SphereOverlapActors_ReturnValue_2 : 1;  // 0x1C0 (0x1C0)
	char pad_449[7];  // 0x1C1 (0x1C1)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast;  // 0x1C8 (0x1C8)
	float CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast;  // 0x1D0 (0x1D0)
	float CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast;  // 0x1D4 (0x1D4)
	float CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast_2;  // 0x1D8 (0x1D8)


}; 
 
 // Function GA_ChainLightning.GA_ChainLightning_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_ChainLightning.GA_ChainLightning_C.OnPerformAction_0648ED534A0BC29A1C2F12BADC8FE40C
struct FOnPerformAction_0648ED534A0BC29A1C2F12BADC8FE40C
{
	int32_t ActionNumber;  // 0x0 (0x0)


}; 
 
 // Function GA_ChainLightning.GA_ChainLightning_C.ValidData_31121FD1430811CAF3A874B288707DD0
struct FValidData_31121FD1430811CAF3A874B288707DD0
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 