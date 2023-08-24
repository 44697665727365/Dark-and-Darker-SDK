#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_LightningStrike.GA_LightningStrike_C.SpellBlast
struct FSpellBlast
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Result : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	int32_t Temp_int_Array_Index_Variable;  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x10 (0x10)
	float CallFunc_GetAreaRadius_ReturnValue;  // 0x18 (0x18)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x1C (0x1C)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x24 (0x24)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x28 (0x28)
	struct AActor* CallFunc_Array_Get_Item;  // 0x30 (0x30)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)
	struct USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue;  // 0x40 (0x40)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x48 (0x48)
	char pad_73_1 : 7;  // 0x49 (0x49)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x49 (0x49)
	char pad_74[6];  // 0x4A (0x4A)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x50 (0x50)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4;  // 0x128 (0x128)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x130 (0x130)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x1E0 (0x1E0)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue_2;  // 0x1F0 (0x1F0)


}; 
 
 // Function GA_LightningStrike.GA_LightningStrike_C.AbilityActivated
// Size: 0xB1(Inherited: 0xB8)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)
	char pad_360_1 : 7;  // 0x168 (0x168)
	bool bIsSocketSightBlocked : 1;  // 0xB0 (0xB0)


}; 
 
 // Function GA_LightningStrike.GA_LightningStrike_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_LightningStrike.GA_LightningStrike_C.Cancelled_3C07F6154261BA22F206AFA74ABBAD1C
struct FCancelled_3C07F6154261BA22F206AFA74ABBAD1C
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 // Function GA_LightningStrike.GA_LightningStrike_C.ValidData_3C07F6154261BA22F206AFA74ABBAD1C
struct FValidData_3C07F6154261BA22F206AFA74ABBAD1C
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 // Function GA_LightningStrike.GA_LightningStrike_C.ExecuteUbergraph_GA_LightningStrike
struct FExecuteUbergraph_GA_LightningStrike
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
	char pad_424_1 : 7;  // 0x1A8 (0x1A8)
	bool CallFunc_InstallGround_Result : 1;  // 0x1A8 (0x1A8)
	char pad_425[3];  // 0x1A9 (0x1A9)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x1AC (0x1AC)
	float CallFunc_GetAimRadius_ReturnValue;  // 0x1BC (0x1BC)
	float CallFunc_GetRange_ReturnValue;  // 0x1C0 (0x1C0)
	char pad_452[4];  // 0x1C4 (0x1C4)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x1C8 (0x1C8)
	char pad_632_1 : 7;  // 0x278 (0x278)
	bool K2Node_Event_bIsSocketSightBlocked : 1;  // 0x278 (0x278)
	char pad_633[7];  // 0x279 (0x279)
	struct TScriptInterface<IGameplayTaskOwnerInterface> CallFunc_TaskWaitDelay_TaskOwner_CastInput;  // 0x280 (0x280)
	struct UGameplayTask_WaitDelay* CallFunc_TaskWaitDelay_ReturnValue;  // 0x290 (0x290)
	char pad_664_1 : 7;  // 0x298 (0x298)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x298 (0x298)
	char pad_665_1 : 7;  // 0x299 (0x299)
	bool CallFunc_SpellBlast_Result : 1;  // 0x299 (0x299)
	char pad_666_1 : 7;  // 0x29A (0x29A)
	bool K2Node_Event_bWasCancelled : 1;  // 0x29A (0x29A)
	char pad_667[5];  // 0x29B (0x29B)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x2A0 (0x2A0)
	char pad_680_1 : 7;  // 0x2A8 (0x2A8)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x2A8 (0x2A8)
	char pad_681[7];  // 0x2A9 (0x2A9)
	double CallFunc_SetDoublePropertyByName_Value_ImplicitCast;  // 0x2B0 (0x2B0)
	double CallFunc_SetDoublePropertyByName_Value_ImplicitCast_2;  // 0x2B8 (0x2B8)
	float CallFunc_TaskWaitDelay_Time_ImplicitCast;  // 0x2C0 (0x2C0)


}; 
 
 // Function GA_LightningStrike.GA_LightningStrike_C.HitCollisionCheck
struct FHitCollisionCheck
{
	AActor* TargetActorClass;  // 0x0 (0x0)
	double CapsuleSize;  // 0x8 (0x8)
	int32_t Temp_int_Array_Index_Variable;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool CallFunc_EqualEqual_ClassClass_ReturnValue : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x18 (0x18)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x1C (0x1C)
	float CallFunc_GetAreaRadius_ReturnValue;  // 0x20 (0x20)
	float CallFunc_GetAreaRadius_ReturnValue_2;  // 0x24 (0x24)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0x28 (0x28)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x40 (0x40)
	struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array;  // 0x50 (0x50)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x60 (0x60)
	struct FVector CallFunc_MakeVector_ReturnValue_2;  // 0x68 (0x68)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x80 (0x80)
	struct TArray<struct AActor*> CallFunc_BoxOverlapActors_OutActors;  // 0x98 (0x98)
	char pad_168_1 : 7;  // 0xA8 (0xA8)
	bool CallFunc_BoxOverlapActors_ReturnValue : 1;  // 0xA8 (0xA8)
	char pad_169[3];  // 0xA9 (0xA9)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0xAC (0xAC)
	struct AActor* CallFunc_Array_Get_Item;  // 0xB0 (0xB0)
	char pad_184_1 : 7;  // 0xB8 (0xB8)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0xB8 (0xB8)
	char pad_185[7];  // 0xB9 (0xB9)
	struct ABP_TrainingDummy_C* K2Node_DynamicCast_AsBP_Training_Dummy;  // 0xC0 (0xC0)
	char pad_200_1 : 7;  // 0xC8 (0xC8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xC8 (0xC8)
	char pad_201[3];  // 0xC9 (0xC9)
	int32_t CallFunc_Array_AddUnique_ReturnValue;  // 0xCC (0xCC)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0xD0 (0xD0)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0xE8 (0xE8)
	char pad_240_1 : 7;  // 0xF0 (0xF0)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0xF0 (0xF0)
	char pad_241[7];  // 0xF1 (0xF1)
	double CallFunc_Vector_Distance2D_ReturnValue;  // 0xF8 (0xF8)
	double CallFunc_Subtract_DoubleDouble_ReturnValue_2;  // 0x100 (0x100)
	float CallFunc_GetScaledCapsuleRadius_ReturnValue;  // 0x108 (0x108)
	char pad_268_1 : 7;  // 0x10C (0x10C)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0x10C (0x10C)
	char pad_269[3];  // 0x10D (0x10D)
	double CallFunc_LessEqual_DoubleDouble_B_ImplicitCast;  // 0x110 (0x110)
	double CallFunc_MakeVector_Y_ImplicitCast;  // 0x118 (0x118)
	double CallFunc_MakeVector_Z_ImplicitCast;  // 0x120 (0x120)
	double K2Node_VariableSet_CapsuleSize_ImplicitCast;  // 0x128 (0x128)


}; 
 
 // Function GA_LightningStrike.GA_LightningStrike_C.InstallGround
struct FInstallGround
{
	struct FHitResult HtResult;  // 0x0 (0x0)
	char pad_232_1 : 7;  // 0xE8 (0xE8)
	bool Result : 1;  // 0xE8 (0xE8)
	char pad_233[3];  // 0xE9 (0xE9)
	float CallFunc_GetAreaRadius_ReturnValue;  // 0xEC (0xEC)
	char pad_240_1 : 7;  // 0xF0 (0xF0)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0xF0 (0xF0)
	char pad_241_1 : 7;  // 0xF1 (0xF1)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0xF1 (0xF1)
	char pad_242[2];  // 0xF2 (0xF2)
	float CallFunc_BreakHitResult_Time;  // 0xF4 (0xF4)
	float CallFunc_BreakHitResult_Distance;  // 0xF8 (0xF8)
	char pad_252[4];  // 0xFC (0xFC)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x100 (0x100)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x118 (0x118)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x130 (0x130)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x148 (0x148)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x160 (0x160)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x168 (0x168)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x170 (0x170)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x178 (0x178)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x180 (0x180)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x188 (0x188)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x18C (0x18C)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x190 (0x190)
	char pad_404[4];  // 0x194 (0x194)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x198 (0x198)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x1B0 (0x1B0)
	int32_t Temp_int_Array_Index_Variable;  // 0x1C8 (0x1C8)
	char pad_460[4];  // 0x1CC (0x1CC)
	struct USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue;  // 0x1D0 (0x1D0)
	char pad_472_1 : 7;  // 0x1D8 (0x1D8)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x1D8 (0x1D8)
	char pad_473[7];  // 0x1D9 (0x1D9)
	struct FVector CallFunc_Subtract_VectorVector_ReturnValue;  // 0x1E0 (0x1E0)
	char pad_504_1 : 7;  // 0x1F8 (0x1F8)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x1F8 (0x1F8)
	char pad_505_1 : 7;  // 0x1F9 (0x1F9)
	bool Temp_bool_True_if_break_was_hit_Variable : 1;  // 0x1F9 (0x1F9)
	char pad_506_1 : 7;  // 0x1FA (0x1FA)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x1FA (0x1FA)
	char pad_507[1];  // 0x1FB (0x1FB)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x1FC (0x1FC)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x200 (0x200)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x218 (0x218)
	char pad_540[4];  // 0x21C (0x21C)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x220 (0x220)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x228 (0x228)
	struct TArray<struct FHitResult> CallFunc_LineTraceMulti_OutHits;  // 0x238 (0x238)
	char pad_584_1 : 7;  // 0x248 (0x248)
	bool CallFunc_LineTraceMulti_ReturnValue : 1;  // 0x248 (0x248)
	char pad_585[7];  // 0x249 (0x249)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x250 (0x250)
	struct FHitResult CallFunc_Array_Get_Item;  // 0x328 (0x328)
	char pad_1040_1 : 7;  // 0x410 (0x410)
	bool CallFunc_BreakHitResult_bBlockingHit_2 : 1;  // 0x410 (0x410)
	char pad_1041_1 : 7;  // 0x411 (0x411)
	bool CallFunc_BreakHitResult_bInitialOverlap_2 : 1;  // 0x411 (0x411)
	char pad_1042[2];  // 0x412 (0x412)
	float CallFunc_BreakHitResult_Time_2;  // 0x414 (0x414)
	float CallFunc_BreakHitResult_Distance_2;  // 0x418 (0x418)
	char pad_1052[4];  // 0x41C (0x41C)
	struct FVector CallFunc_BreakHitResult_Location_2;  // 0x420 (0x420)
	struct FVector CallFunc_BreakHitResult_ImpactPoint_2;  // 0x438 (0x438)
	struct FVector CallFunc_BreakHitResult_Normal_2;  // 0x450 (0x450)
	struct FVector CallFunc_BreakHitResult_ImpactNormal_2;  // 0x468 (0x468)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_2;  // 0x480 (0x480)
	struct AActor* CallFunc_BreakHitResult_HitActor_2;  // 0x488 (0x488)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_2;  // 0x490 (0x490)
	struct FName CallFunc_BreakHitResult_HitBoneName_2;  // 0x498 (0x498)
	struct FName CallFunc_BreakHitResult_BoneName_2;  // 0x4A0 (0x4A0)
	int32_t CallFunc_BreakHitResult_HitItem_2;  // 0x4A8 (0x4A8)
	int32_t CallFunc_BreakHitResult_ElementIndex_2;  // 0x4AC (0x4AC)
	int32_t CallFunc_BreakHitResult_FaceIndex_2;  // 0x4B0 (0x4B0)
	char pad_1204[4];  // 0x4B4 (0x4B4)
	struct FVector CallFunc_BreakHitResult_TraceStart_2;  // 0x4B8 (0x4B8)
	struct FVector CallFunc_BreakHitResult_TraceEnd_2;  // 0x4D0 (0x4D0)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x4E8 (0x4E8)
	char pad_1260[4];  // 0x4EC (0x4EC)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x4F0 (0x4F0)
	char pad_1272_1 : 7;  // 0x4F8 (0x4F8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x4F8 (0x4F8)
	char pad_1273_1 : 7;  // 0x4F9 (0x4F9)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x4F9 (0x4F9)
	char pad_1274_1 : 7;  // 0x4FA (0x4FA)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x4FA (0x4FA)
	char pad_1275_1 : 7;  // 0x4FB (0x4FB)
	bool CallFunc_Array_IsEmpty_ReturnValue : 1;  // 0x4FB (0x4FB)
	float CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast;  // 0x4FC (0x4FC)


}; 
 
 