#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SkeletonMageFireballProjectileCollision.GA_SkeletonMageFireballProjectileCollision_C.ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision
struct FExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision
{
	int32_t EntryPoint;  // 0x0 (0x0)
	int32_t Temp_int_Array_Index_Variable;  // 0x4 (0x4)
	struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array;  // 0x8 (0x8)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x20 (0x20)
	struct TArray<struct AActor*> K2Node_MakeArray_Array_2;  // 0x28 (0x28)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)
	struct FHitResult K2Node_Event_Hit;  // 0x40 (0x40)
	char pad_296_1 : 7;  // 0x128 (0x128)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x128 (0x128)
	char pad_297_1 : 7;  // 0x129 (0x129)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x129 (0x129)
	char pad_298[2];  // 0x12A (0x12A)
	float CallFunc_BreakHitResult_Time;  // 0x12C (0x12C)
	float CallFunc_BreakHitResult_Distance;  // 0x130 (0x130)
	char pad_308[4];  // 0x134 (0x134)
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
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x200 (0x200)
	struct TArray<struct AActor*> CallFunc_SphereOverlapActors_OutActors;  // 0x208 (0x208)
	char pad_536_1 : 7;  // 0x218 (0x218)
	bool CallFunc_SphereOverlapActors_ReturnValue : 1;  // 0x218 (0x218)
	char pad_537[7];  // 0x219 (0x219)
	struct AProjectileActor* K2Node_DynamicCast_AsProjectile_Actor;  // 0x220 (0x220)
	char pad_552_1 : 7;  // 0x228 (0x228)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x228 (0x228)
	char pad_553[7];  // 0x229 (0x229)
	struct AActor* CallFunc_Array_Get_Item;  // 0x230 (0x230)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x238 (0x238)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x2E8 (0x2E8)
	char pad_752_1 : 7;  // 0x2F0 (0x2F0)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x2F0 (0x2F0)
	char pad_753[7];  // 0x2F1 (0x2F1)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyPremadeSpecArray_ReturnValue;  // 0x2F8 (0x2F8)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue;  // 0x308 (0x308)
	char pad_784_1 : 7;  // 0x310 (0x310)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x310 (0x310)
	char pad_785_1 : 7;  // 0x311 (0x311)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x311 (0x311)
	char pad_786[2];  // 0x312 (0x312)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x314 (0x314)
	char pad_792_1 : 7;  // 0x318 (0x318)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x318 (0x318)


}; 
 
 // Function GA_SkeletonMageFireballProjectileCollision.GA_SkeletonMageFireballProjectileCollision_C.TargetDataReceived
// Size: 0xE8(Inherited: 0xE8)
struct FTargetDataReceived : FTargetDataReceived
{
	struct FHitResult Hit;  // 0x0 (0x0)


}; 
 
 