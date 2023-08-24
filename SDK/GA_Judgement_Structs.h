#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_Judgement.GA_Judgement_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_Judgement.GA_Judgement_C.BroadcastSystemMessage
struct FBroadcastSystemMessage
{
	struct FText SystemMessage;  // 0x0 (0x0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x18 (0x18)
	struct ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character;  // 0x20 (0x20)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct AController* CallFunc_GetController_ReturnValue;  // 0x30 (0x30)
	struct APlayerController* K2Node_DynamicCast_As_________;  // 0x38 (0x38)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x40 (0x40)


}; 
 
 // Function GA_Judgement.GA_Judgement_C.ServerOnSkillActivate
// Size: 0x10(Inherited: 0x10)
struct FServerOnSkillActivate : FServerOnSkillActivate
{
	struct FGameplayTag SkillTag;  // 0x0 (0x0)
	struct FGameplayTag CooldownTag;  // 0x8 (0x8)


}; 
 
 // Function GA_Judgement.GA_Judgement_C.ExecuteUbergraph_GA_Judgement
struct FExecuteUbergraph_GA_Judgement
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FDesignDataSkill CallFunc_GetCurrentDesignDataSkill_ReturnValue;  // 0x8 (0x8)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xD0 (0xD0)
	char pad_209[3];  // 0xD1 (0xD1)
	float CallFunc_Conv_IntToFloat_ReturnValue;  // 0xD4 (0xD4)
	char pad_216_1 : 7;  // 0xD8 (0xD8)
	bool CallFunc_GetAimTraceTarget_Result : 1;  // 0xD8 (0xD8)
	char pad_217[7];  // 0xD9 (0xD9)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue;  // 0xE0 (0xE0)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0xE8 (0xE8)
	char pad_248_1 : 7;  // 0xF8 (0xF8)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0xF8 (0xF8)
	char pad_249[7];  // 0xF9 (0xF9)
	struct FGameplayEventData Temp_struct_Variable;  // 0x100 (0x100)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x1B0 (0x1B0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x1C0 (0x1C0)
	char pad_456_1 : 7;  // 0x1C8 (0x1C8)
	bool CallFunc_IsTargetOutOfRange_Result : 1;  // 0x1C8 (0x1C8)
	char pad_457[7];  // 0x1C9 (0x1C9)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x1D0 (0x1D0)
	struct FGameplayTag K2Node_Event_SkillTag;  // 0x280 (0x280)
	struct FGameplayTag K2Node_Event_CooldownTag;  // 0x288 (0x288)
	struct FGameplayEventData Temp_struct_Variable_2;  // 0x290 (0x290)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x340 (0x340)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue_2;  // 0x3F0 (0x3F0)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue_3;  // 0x400 (0x400)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x410 (0x410)
	struct USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue;  // 0x418 (0x418)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x420 (0x420)
	double CallFunc_GetAimTraceTarget_MaxRange_ImplicitCast;  // 0x4F8 (0x4F8)


}; 
 
 // Function GA_Judgement.GA_Judgement_C.GetAimTraceTarget
struct FGetAimTraceTarget
{
	double MaxRange;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool Result : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)
	struct FPrimaryAssetId CallFunc_GetPrimaryAssetIdFromObject_ReturnValue;  // 0xC (0xC)
	float CallFunc_GetConstantFloat_ReturnValue;  // 0x1C (0x1C)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool CallFunc_IsTargetOutOfRange_Result : 1;  // 0x20 (0x20)
	char pad_33_1 : 7;  // 0x21 (0x21)
	bool CallFunc_IsTargetOutOfRange_Result_2 : 1;  // 0x21 (0x21)
	char pad_34_1 : 7;  // 0x22 (0x22)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x22 (0x22)
	char pad_35_1 : 7;  // 0x23 (0x23)
	bool CallFunc_Not_PreBool_ReturnValue_2 : 1;  // 0x23 (0x23)
	int32_t Temp_int_Array_Index_Variable;  // 0x24 (0x24)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x28 (0x28)
	struct TArray<struct FHitResult> CallFunc_AimSphereWithActorViewPoint_OutHitResults;  // 0x30 (0x30)
	struct FHitResult CallFunc_Array_Get_Item;  // 0x40 (0x40)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x128 (0x128)
	char pad_300_1 : 7;  // 0x12C (0x12C)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x12C (0x12C)
	char pad_301_1 : 7;  // 0x12D (0x12D)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x12D (0x12D)
	char pad_302[2];  // 0x12E (0x12E)
	float CallFunc_BreakHitResult_Time;  // 0x130 (0x130)
	float CallFunc_BreakHitResult_Distance;  // 0x134 (0x134)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x138 (0x138)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x150 (0x150)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x168 (0x168)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x180 (0x180)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x198 (0x198)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x1A0 (0x1A0)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x1A8 (0x1A8)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x1B0 (0x1B0)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x1B8 (0x1B8)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x1C0 (0x1C0)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x1C4 (0x1C4)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x1C8 (0x1C8)
	char pad_460[4];  // 0x1CC (0x1CC)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x1D0 (0x1D0)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x1E8 (0x1E8)
	struct ABP_TrainingDummy_C* K2Node_DynamicCast_AsBP_Training_Dummy;  // 0x200 (0x200)
	char pad_520_1 : 7;  // 0x208 (0x208)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x208 (0x208)
	char pad_521[7];  // 0x209 (0x209)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x210 (0x210)
	char pad_536_1 : 7;  // 0x218 (0x218)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x218 (0x218)
	char pad_537[7];  // 0x219 (0x219)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue;  // 0x220 (0x220)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x228 (0x228)
	char pad_568_1 : 7;  // 0x238 (0x238)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x238 (0x238)
	char pad_569_1 : 7;  // 0x239 (0x239)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x239 (0x239)
	char pad_570[2];  // 0x23A (0x23A)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x23C (0x23C)
	char pad_576_1 : 7;  // 0x240 (0x240)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x240 (0x240)
	char pad_577[3];  // 0x241 (0x241)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x244 (0x244)
	float CallFunc_AimSphereWithActorViewPoint_MaxRange_ImplicitCast;  // 0x248 (0x248)


}; 
 
 // Function GA_Judgement.GA_Judgement_C.IsTargetOutOfRange
struct FIsTargetOutOfRange
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Result : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FDesignDataSkill CallFunc_GetCurrentDesignDataSkill_ReturnValue;  // 0x8 (0x8)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xD0 (0xD0)
	char pad_209[7];  // 0xD1 (0xD1)
	double CallFunc_Conv_IntToDouble_ReturnValue;  // 0xD8 (0xD8)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0xE0 (0xE0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xF8 (0xF8)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x100 (0x100)
	char pad_280_1 : 7;  // 0x118 (0x118)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x118 (0x118)
	char pad_281[7];  // 0x119 (0x119)
	double CallFunc_Vector_Distance_ReturnValue;  // 0x120 (0x120)
	char pad_296_1 : 7;  // 0x128 (0x128)
	bool CallFunc_Less_DoubleDouble_ReturnValue : 1;  // 0x128 (0x128)


}; 
 
 