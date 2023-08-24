#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_SkeletonWoodenBarrel.BP_SkeletonWoodenBarrel_C.ExecuteUbergraph_BP_SkeletonWoodenBarrel
struct FExecuteUbergraph_BP_SkeletonWoodenBarrel
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	float K2Node_Event_ExhaustedTime;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	UGameplayEffect* K2Node_Event_GameplayEffectClass;  // 0x10 (0x10)
	struct FDCGameplayEffectContext K2Node_Event_EffectContext;  // 0x18 (0x18)
	struct FTransform CallFunc_GetTransform_ReturnValue;  // 0x1F0 (0x1F0)
	struct FVector CallFunc_BreakTransform_Location;  // 0x250 (0x250)
	struct FRotator CallFunc_BreakTransform_Rotation;  // 0x268 (0x268)
	struct FVector CallFunc_BreakTransform_Scale;  // 0x280 (0x280)
	char pad_664[8];  // 0x298 (0x298)
	struct FTransform CallFunc_MakeTransform_ReturnValue;  // 0x2A0 (0x2A0)
	struct AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;  // 0x300 (0x300)
	struct ABP_GameSpawner_C* CallFunc_FinishSpawningActor_ReturnValue;  // 0x308 (0x308)
	struct ADCMonsterBase* CallFunc_SpawnMonster_ReturnValue;  // 0x310 (0x310)


}; 
 
 // Function BP_SkeletonWoodenBarrel.BP_SkeletonWoodenBarrel_C.OnImpactEnduranceExhausted
// Size: 0x1E8(Inherited: 0x1E8)
struct FOnImpactEnduranceExhausted : FOnImpactEnduranceExhausted
{
	float ExhaustedTime;  // 0x0 (0x0)
	UGameplayEffect* GameplayEffectClass;  // 0x8 (0x8)
	struct FDCGameplayEffectContext EffectContext;  // 0x10 (0x10)


}; 
 
 