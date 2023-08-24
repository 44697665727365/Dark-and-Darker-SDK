#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_Projectile_GhostKing_NormalAttack.BP_Projectile_GhostKing_NormalAttack_C.ExecuteUbergraph_BP_Projectile_GhostKing_NormalAttack
struct FExecuteUbergraph_BP_Projectile_GhostKing_NormalAttack
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate Temp_delegate_Variable;  // 0x4 (0x4)
	char pad_20[4];  // 0x14 (0x14)
	struct FHitResult K2Node_Event_Hit;  // 0x18 (0x18)
	char pad_256_1 : 7;  // 0x100 (0x100)
	bool K2Node_Event_bIsAttached : 1;  // 0x100 (0x100)
	char pad_257[15];  // 0x101 (0x101)
	struct FTransform K2Node_Event_ActorPrevTickTransform;  // 0x110 (0x110)
	int32_t CallFunc_PostEvent_ReturnValue;  // 0x170 (0x170)
	char pad_372_1 : 7;  // 0x174 (0x174)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x174 (0x174)
	char pad_373_1 : 7;  // 0x175 (0x175)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x175 (0x175)
	char pad_374[2];  // 0x176 (0x176)
	float CallFunc_BreakHitResult_Time;  // 0x178 (0x178)
	float CallFunc_BreakHitResult_Distance;  // 0x17C (0x17C)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x180 (0x180)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x198 (0x198)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x1B0 (0x1B0)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x1C8 (0x1C8)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x1E0 (0x1E0)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x1E8 (0x1E8)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x1F0 (0x1F0)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x1F8 (0x1F8)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x200 (0x200)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x208 (0x208)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x20C (0x20C)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x210 (0x210)
	char pad_532[4];  // 0x214 (0x214)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x218 (0x218)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x230 (0x230)
	char pad_584_1 : 7;  // 0x248 (0x248)
	bool CallFunc_BreakHitResult_bBlockingHit_2 : 1;  // 0x248 (0x248)
	char pad_585_1 : 7;  // 0x249 (0x249)
	bool CallFunc_BreakHitResult_bInitialOverlap_2 : 1;  // 0x249 (0x249)
	char pad_586[2];  // 0x24A (0x24A)
	float CallFunc_BreakHitResult_Time_2;  // 0x24C (0x24C)
	float CallFunc_BreakHitResult_Distance_2;  // 0x250 (0x250)
	char pad_596[4];  // 0x254 (0x254)
	struct FVector CallFunc_BreakHitResult_Location_2;  // 0x258 (0x258)
	struct FVector CallFunc_BreakHitResult_ImpactPoint_2;  // 0x270 (0x270)
	struct FVector CallFunc_BreakHitResult_Normal_2;  // 0x288 (0x288)
	struct FVector CallFunc_BreakHitResult_ImpactNormal_2;  // 0x2A0 (0x2A0)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_2;  // 0x2B8 (0x2B8)
	struct AActor* CallFunc_BreakHitResult_HitActor_2;  // 0x2C0 (0x2C0)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_2;  // 0x2C8 (0x2C8)
	struct FName CallFunc_BreakHitResult_HitBoneName_2;  // 0x2D0 (0x2D0)
	struct FName CallFunc_BreakHitResult_BoneName_2;  // 0x2D8 (0x2D8)
	int32_t CallFunc_BreakHitResult_HitItem_2;  // 0x2E0 (0x2E0)
	int32_t CallFunc_BreakHitResult_ElementIndex_2;  // 0x2E4 (0x2E4)
	int32_t CallFunc_BreakHitResult_FaceIndex_2;  // 0x2E8 (0x2E8)
	char pad_748[4];  // 0x2EC (0x2EC)
	struct FVector CallFunc_BreakHitResult_TraceStart_2;  // 0x2F0 (0x2F0)
	struct FVector CallFunc_BreakHitResult_TraceEnd_2;  // 0x308 (0x308)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x320 (0x320)
	struct FRotator CallFunc_MakeRotFromX_ReturnValue;  // 0x3D0 (0x3D0)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyPremadeSpecArray_ReturnValue;  // 0x3E8 (0x3E8)
	struct UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue;  // 0x3F8 (0x3F8)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParametersFromHitResult_ReturnValue;  // 0x400 (0x400)


}; 
 
 // Function BP_Projectile_GhostKing_NormalAttack.BP_Projectile_GhostKing_NormalAttack_C.ProjectileHit
// Size: 0x150(Inherited: 0x150)
struct FProjectileHit : FProjectileHit
{
	struct FHitResult Hit;  // 0x0 (0x0)
	char pad_568_1 : 7;  // 0x238 (0x238)
	bool bIsAttached : 1;  // 0xE8 (0xE8)
	struct FTransform ActorPrevTickTransform;  // 0xF0 (0xF0)


}; 
 
 