#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_Cleanse.GA_Cleanse_C.Cancelled_A84C9B3A43E68BC562A2E987CE628179
struct FCancelled_A84C9B3A43E68BC562A2E987CE628179
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 // Function GA_Cleanse.GA_Cleanse_C.AbilityActivated
// Size: 0xB1(Inherited: 0xB8)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)
	char pad_360_1 : 7;  // 0x168 (0x168)
	bool bIsSocketSightBlocked : 1;  // 0xB0 (0xB0)


}; 
 
 // Function GA_Cleanse.GA_Cleanse_C.ExecuteUbergraph_GA_Cleanse
struct FExecuteUbergraph_GA_Cleanse
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct FGameplayAbilityTargetDataHandle K2Node_CustomEvent_Data_2;  // 0x8 (0x8)
	struct FGameplayAbilityTargetDataHandle K2Node_CustomEvent_Data;  // 0x30 (0x30)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x58 (0x58)
	struct FGameplayAbilityTargetDataHandle Temp_struct_Variable;  // 0x68 (0x68)
	struct UAbilityTask_WaitTargetData* CallFunc_WaitTargetData_ReturnValue;  // 0x90 (0x90)
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x98 (0x98)
	char pad_153[7];  // 0x99 (0x99)
	struct AGameplayAbilityTargetActor* CallFunc_BeginSpawningActor_SpawnedActor;  // 0xA0 (0xA0)
	char pad_168_1 : 7;  // 0xA8 (0xA8)
	bool CallFunc_BeginSpawningActor_ReturnValue : 1;  // 0xA8 (0xA8)
	char pad_169_1 : 7;  // 0xA9 (0xA9)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0xA9 (0xA9)
	char pad_170[6];  // 0xAA (0xAA)
	struct FHitResult CallFunc_GetHitResultFromTargetData_ReturnValue;  // 0xB0 (0xB0)
	char pad_408_1 : 7;  // 0x198 (0x198)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x198 (0x198)
	char pad_409_1 : 7;  // 0x199 (0x199)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x199 (0x199)
	char pad_410[2];  // 0x19A (0x19A)
	float CallFunc_BreakHitResult_Time;  // 0x19C (0x19C)
	float CallFunc_BreakHitResult_Distance;  // 0x1A0 (0x1A0)
	char pad_420[4];  // 0x1A4 (0x1A4)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x1A8 (0x1A8)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x1C0 (0x1C0)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x1D8 (0x1D8)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x1F0 (0x1F0)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x208 (0x208)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x210 (0x210)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x218 (0x218)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x220 (0x220)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x228 (0x228)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x230 (0x230)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x234 (0x234)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x238 (0x238)
	char pad_572[4];  // 0x23C (0x23C)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x240 (0x240)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x258 (0x258)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x270 (0x270)
	char pad_800_1 : 7;  // 0x320 (0x320)
	bool K2Node_Event_bIsSocketSightBlocked : 1;  // 0x320 (0x320)
	char pad_801[7];  // 0x321 (0x321)
	struct ACharacter* K2Node_DynamicCast_As___;  // 0x328 (0x328)
	char pad_816_1 : 7;  // 0x330 (0x330)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x330 (0x330)
	char pad_817[7];  // 0x331 (0x331)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue;  // 0x338 (0x338)
	char pad_832_1 : 7;  // 0x340 (0x340)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x340 (0x340)
	char pad_833[3];  // 0x341 (0x341)
	int32_t CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue;  // 0x344 (0x344)
	float CallFunc_GetAimRadius_ReturnValue;  // 0x348 (0x348)
	float CallFunc_GetRange_ReturnValue;  // 0x34C (0x34C)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;  // 0x350 (0x350)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x358 (0x358)
	int32_t CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue_2;  // 0x368 (0x368)
	char pad_876_1 : 7;  // 0x36C (0x36C)
	bool CallFunc_K2_HasAuthority_ReturnValue_2 : 1;  // 0x36C (0x36C)
	char pad_877[3];  // 0x36D (0x36D)
	double CallFunc_SetDoublePropertyByName_Value_ImplicitCast;  // 0x370 (0x370)
	double CallFunc_SetDoublePropertyByName_Value_ImplicitCast_2;  // 0x378 (0x378)


}; 
 
 // Function GA_Cleanse.GA_Cleanse_C.ValidData_A84C9B3A43E68BC562A2E987CE628179
struct FValidData_A84C9B3A43E68BC562A2E987CE628179
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 