#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_RangedAttack.GA_RangedAttack_C.CalSpawnTransform
struct FCalSpawnTransform
{
	struct FVector StartLocation;  // 0x0 (0x0)
	struct FVector EndLocation;  // 0x18 (0x18)
	struct FHitResult HitResult;  // 0x30 (0x30)
	char pad_280[8];  // 0x118 (0x118)
	struct FTransform OutTransform;  // 0x120 (0x120)
	struct FVector TraceLocation;  // 0x180 (0x180)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x198 (0x198)
	struct FHitResult CallFunc_LineTraceSingle_OutHit;  // 0x1A8 (0x1A8)
	char pad_656_1 : 7;  // 0x290 (0x290)
	bool CallFunc_LineTraceSingle_ReturnValue : 1;  // 0x290 (0x290)
	char pad_657_1 : 7;  // 0x291 (0x291)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x291 (0x291)
	char pad_658_1 : 7;  // 0x292 (0x292)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x292 (0x292)
	char pad_659[1];  // 0x293 (0x293)
	float CallFunc_BreakHitResult_Time;  // 0x294 (0x294)
	float CallFunc_BreakHitResult_Distance;  // 0x298 (0x298)
	char pad_668[4];  // 0x29C (0x29C)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x2A0 (0x2A0)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x2B8 (0x2B8)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x2D0 (0x2D0)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x2E8 (0x2E8)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x300 (0x300)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x308 (0x308)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x310 (0x310)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x318 (0x318)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x320 (0x320)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x328 (0x328)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x32C (0x32C)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x330 (0x330)
	char pad_820[4];  // 0x334 (0x334)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x338 (0x338)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x350 (0x350)
	struct FVector CallFunc_Subtract_VectorVector_ReturnValue;  // 0x368 (0x368)
	struct FRotator CallFunc_MakeRotFromX_ReturnValue;  // 0x380 (0x380)
	char pad_920[8];  // 0x398 (0x398)
	struct FTransform CallFunc_MakeTransform_ReturnValue;  // 0x3A0 (0x3A0)


}; 
 
 // Function GA_RangedAttack.GA_RangedAttack_C.ExecuteUbergraph_GA_RangedAttack
struct FExecuteUbergraph_GA_RangedAttack
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct AActor* Temp_object_Variable;  // 0x10 (0x10)
	struct FVector CallFunc_GetActorForwardVector_ReturnValue;  // 0x18 (0x18)
	struct AProjectileActor* K2Node_DynamicCast_AsProjectile_Actor;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct FVector CallFunc_Multiply_VectorFloat_ReturnValue;  // 0x40 (0x40)
	struct AActor* K2Node_CustomEvent_ProjectileActor;  // 0x58 (0x58)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x60 (0x60)
	struct FGameplayTag K2Node_Event_EventTag;  // 0x70 (0x70)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x78 (0x78)
	float K2Node_Event_FirePower;  // 0x128 (0x128)
	char pad_300[4];  // 0x12C (0x12C)
	struct FVector K2Node_Event_StartLocation;  // 0x130 (0x130)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x148 (0x148)
	double CallFunc_FClamp_ReturnValue;  // 0x160 (0x160)
	struct FHitResult CallFunc_CalSpawnTransform_HitResult;  // 0x168 (0x168)
	struct FTransform CallFunc_CalSpawnTransform_OutTransform;  // 0x250 (0x250)
	struct UDCAT_SpawnProjectile* CallFunc_SpawnProjectile_ReturnValue;  // 0x2B0 (0x2B0)
	char pad_696_1 : 7;  // 0x2B8 (0x2B8)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x2B8 (0x2B8)
	char pad_697[7];  // 0x2B9 (0x2B9)
	double CallFunc_FClamp_Value_ImplicitCast;  // 0x2C0 (0x2C0)
	float CallFunc_SpawnProjectile_FirePower_ImplicitCast;  // 0x2C8 (0x2C8)


}; 
 
 // Function GA_RangedAttack.GA_RangedAttack_C.CreateProjectiles
// Size: 0xD8(Inherited: 0xD8)
struct FCreateProjectiles : FCreateProjectiles
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)
	float FirePower;  // 0xB8 (0xB8)
	struct FVector StartLocation;  // 0xC0 (0xC0)


}; 
 
 // Function GA_RangedAttack.GA_RangedAttack_C.OnSuccess_5ECACBC94DE5966424402193494726EC
struct FOnSuccess_5ECACBC94DE5966424402193494726EC
{
	struct AActor* ProjectileActor;  // 0x0 (0x0)


}; 
 
 