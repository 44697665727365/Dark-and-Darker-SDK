#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_ArcaneShield.GA_ArcaneShield_C.SameParty
struct FSameParty
{
	struct ADCCharacterBase* TargetActor;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool Result : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct FString PartyId;  // 0x10 (0x10)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x20 (0x20)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x30 (0x30)
	char pad_49_1 : 7;  // 0x31 (0x31)
	bool CallFunc_IsSameTeam_ReturnValue : 1;  // 0x31 (0x31)


}; 
 
 // Function GA_ArcaneShield.GA_ArcaneShield_C.OnRemoved_7D9C58AD4F43BA6F4618D789299B2871
struct FOnRemoved_7D9C58AD4F43BA6F4618D789299B2871
{
	struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo;  // 0x0 (0x0)


}; 
 
 // Function GA_ArcaneShield.GA_ArcaneShield_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_ArcaneShield.GA_ArcaneShield_C.ExecuteUbergraph_GA_ArcaneShield
struct FExecuteUbergraph_GA_ArcaneShield
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UObject* CallFunc_GetCurrentSourceObject_ReturnValue;  // 0x8 (0x8)
	struct ASkillActor* K2Node_DynamicCast_AsSkill_Actor;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x1C (0x1C)
	char pad_44[4];  // 0x2C (0x2C)
	struct FDesignDataSkill CallFunc_GetDesignDataSkill_ReturnValue;  // 0x30 (0x30)
	struct FGameplayEffectRemovalInfo K2Node_CustomEvent_GameplayEffectRemovalInfo_2;  // 0xF8 (0xF8)
	float CallFunc_Conv_IntToFloat_ReturnValue;  // 0x118 (0x118)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x11C (0x11C)
	char pad_300[4];  // 0x12C (0x12C)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x130 (0x130)
	struct FGameplayEffectRemovalInfo K2Node_CustomEvent_GameplayEffectRemovalInfo;  // 0x208 (0x208)
	struct FGameplayEffectRemovalInfo Temp_struct_Variable;  // 0x228 (0x228)
	int32_t Temp_int_Array_Index_Variable;  // 0x248 (0x248)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x24C (0x24C)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x250 (0x250)
	char pad_596[4];  // 0x254 (0x254)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x258 (0x258)
	char pad_776_1 : 7;  // 0x308 (0x308)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x308 (0x308)
	char pad_777[7];  // 0x309 (0x309)
	struct FGameplayEventData Temp_struct_Variable_2;  // 0x310 (0x310)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x3C0 (0x3C0)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x3C8 (0x3C8)
	struct FActiveGameplayEffectHandle CallFunc_Array_Get_Item;  // 0x3D8 (0x3D8)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x3E0 (0x3E0)
	char pad_996[4];  // 0x3E4 (0x3E4)
	struct UAbilityTask_WaitGameplayEffectRemoved* CallFunc_WaitForGameplayEffectRemoved_ReturnValue;  // 0x3E8 (0x3E8)
	char pad_1008_1 : 7;  // 0x3F0 (0x3F0)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x3F0 (0x3F0)
	char pad_1009_1 : 7;  // 0x3F1 (0x3F1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x3F1 (0x3F1)


}; 
 
 // Function GA_ArcaneShield.GA_ArcaneShield_C.InvalidHandle_7D9C58AD4F43BA6F4618D789299B2871
struct FInvalidHandle_7D9C58AD4F43BA6F4618D789299B2871
{
	struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo;  // 0x0 (0x0)


}; 
 
 // Function GA_ArcaneShield.GA_ArcaneShield_C.ShieldBraekAttack
struct FShieldBraekAttack
{
	struct FVector PivotLocation;  // 0x0 (0x0)
	int32_t Temp_int_Array_Index_Variable;  // 0x18 (0x18)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x1C (0x1C)
	struct FDesignDataSkill CallFunc_GetCurrentDesignDataSkill_ReturnValue;  // 0x20 (0x20)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0xE8 (0xE8)
	float CallFunc_Conv_IntToFloat_ReturnValue;  // 0xEC (0xEC)
	struct FVector CallFunc_Conv_FloatToVector_ReturnValue;  // 0xF0 (0xF0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x108 (0x108)
	struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array;  // 0x110 (0x110)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x120 (0x120)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x128 (0x128)
	struct TArray<struct AActor*> K2Node_MakeArray_Array_2;  // 0x140 (0x140)
	struct TArray<struct AActor*> CallFunc_SphereOverlapActors_OutActors;  // 0x150 (0x150)
	char pad_352_1 : 7;  // 0x160 (0x160)
	bool CallFunc_SphereOverlapActors_ReturnValue : 1;  // 0x160 (0x160)
	char pad_353[3];  // 0x161 (0x161)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x164 (0x164)
	struct AActor* CallFunc_Array_Get_Item;  // 0x168 (0x168)
	char pad_368_1 : 7;  // 0x170 (0x170)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x170 (0x170)
	char pad_369[7];  // 0x171 (0x171)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x178 (0x178)
	struct FVector CallFunc_Subtract_VectorVector_ReturnValue;  // 0x190 (0x190)
	struct FVector CallFunc_Normal_ReturnValue;  // 0x1A8 (0x1A8)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue;  // 0x1C0 (0x1C0)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x1D8 (0x1D8)
	struct FHitResult CallFunc_LineTraceSingleForObjects_OutHit;  // 0x1F0 (0x1F0)
	char pad_728_1 : 7;  // 0x2D8 (0x2D8)
	bool CallFunc_LineTraceSingleForObjects_ReturnValue : 1;  // 0x2D8 (0x2D8)
	char pad_729_1 : 7;  // 0x2D9 (0x2D9)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x2D9 (0x2D9)
	char pad_730_1 : 7;  // 0x2DA (0x2DA)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x2DA (0x2DA)
	char pad_731[1];  // 0x2DB (0x2DB)
	float CallFunc_BreakHitResult_Time;  // 0x2DC (0x2DC)
	float CallFunc_BreakHitResult_Distance;  // 0x2E0 (0x2E0)
	char pad_740[4];  // 0x2E4 (0x2E4)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x2E8 (0x2E8)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x300 (0x300)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x318 (0x318)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x330 (0x330)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x348 (0x348)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x350 (0x350)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x358 (0x358)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x360 (0x360)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x368 (0x368)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x370 (0x370)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x374 (0x374)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x378 (0x378)
	char pad_892[4];  // 0x37C (0x37C)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x380 (0x380)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x398 (0x398)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x3B0 (0x3B0)
	char pad_952_1 : 7;  // 0x3B8 (0x3B8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x3B8 (0x3B8)
	char pad_953_1 : 7;  // 0x3B9 (0x3B9)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue : 1;  // 0x3B9 (0x3B9)
	char pad_954[6];  // 0x3BA (0x3BA)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x3C0 (0x3C0)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x470 (0x470)
	char pad_1152_1 : 7;  // 0x480 (0x480)
	bool CallFunc_SameParty_Result : 1;  // 0x480 (0x480)
	char pad_1153_1 : 7;  // 0x481 (0x481)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x481 (0x481)


}; 
 
 