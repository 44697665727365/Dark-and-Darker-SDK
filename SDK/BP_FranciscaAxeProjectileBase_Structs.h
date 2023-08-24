#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_FranciscaAxeProjectileBase.BP_FranciscaAxeProjectileBase_C.ExecuteUbergraph_BP_FranciscaAxeProjectileBase
struct FExecuteUbergraph_BP_FranciscaAxeProjectileBase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FHitResult K2Node_Event_Hit;  // 0x8 (0x8)
	char pad_240_1 : 7;  // 0xF0 (0xF0)
	bool K2Node_Event_bIsAttached : 1;  // 0xF0 (0xF0)
	char pad_241[15];  // 0xF1 (0xF1)
	struct FTransform K2Node_Event_ActorPrevTickTransform;  // 0x100 (0x100)
	char pad_352_1 : 7;  // 0x160 (0x160)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x160 (0x160)
	char pad_353_1 : 7;  // 0x161 (0x161)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x161 (0x161)
	char pad_354[2];  // 0x162 (0x162)
	float CallFunc_BreakHitResult_Time;  // 0x164 (0x164)
	float CallFunc_BreakHitResult_Distance;  // 0x168 (0x168)
	char pad_364[4];  // 0x16C (0x16C)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x170 (0x170)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x188 (0x188)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x1A0 (0x1A0)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x1B8 (0x1B8)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x1D0 (0x1D0)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x1D8 (0x1D8)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x1E0 (0x1E0)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x1E8 (0x1E8)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x1F0 (0x1F0)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x1F8 (0x1F8)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x1FC (0x1FC)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x200 (0x200)
	char pad_516[4];  // 0x204 (0x204)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x208 (0x208)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x220 (0x220)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue;  // 0x238 (0x238)
	struct FRotator CallFunc_Conv_VectorToRotator_ReturnValue;  // 0x250 (0x250)
	float CallFunc_BreakRotator_Roll;  // 0x268 (0x268)
	float CallFunc_BreakRotator_Pitch;  // 0x26C (0x26C)
	float CallFunc_BreakRotator_Yaw;  // 0x270 (0x270)
	char pad_628[4];  // 0x274 (0x274)
	struct FVector CallFunc_GetSocketLocation_ReturnValue;  // 0x278 (0x278)
	struct FVector CallFunc_K2_GetComponentLocation_ReturnValue;  // 0x290 (0x290)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue;  // 0x2A8 (0x2A8)
	struct FVector CallFunc_Subtract_VectorVector_ReturnValue;  // 0x2C0 (0x2C0)
	struct FVector CallFunc_GetForwardVector_ReturnValue;  // 0x2D8 (0x2D8)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x2F0 (0x2F0)
	struct FRotator CallFunc_Conv_VectorToRotator_ReturnValue_2;  // 0x308 (0x308)
	struct FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult;  // 0x320 (0x320)
	float CallFunc_BreakRotator_Roll_2;  // 0x408 (0x408)
	float CallFunc_BreakRotator_Pitch_2;  // 0x40C (0x40C)
	float CallFunc_BreakRotator_Yaw_2;  // 0x410 (0x410)
	struct FDelegate Temp_delegate_Variable;  // 0x414 (0x414)
	char pad_1060[4];  // 0x424 (0x424)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x428 (0x428)
	int32_t CallFunc_PostAkEvent_ReturnValue;  // 0x430 (0x430)
	char pad_1076[4];  // 0x434 (0x434)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x438 (0x438)
	struct FRotator CallFunc_MakeRotator_ReturnValue;  // 0x440 (0x440)
	struct FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult;  // 0x458 (0x458)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast;  // 0x540 (0x540)
	float CallFunc_MakeRotator_Pitch_ImplicitCast;  // 0x548 (0x548)


}; 
 
 // Function BP_FranciscaAxeProjectileBase.BP_FranciscaAxeProjectileBase_C.ProjectileHit
// Size: 0x150(Inherited: 0x150)
struct FProjectileHit : FProjectileHit
{
	struct FHitResult Hit;  // 0x0 (0x0)
	char pad_568_1 : 7;  // 0x238 (0x238)
	bool bIsAttached : 1;  // 0xE8 (0xE8)
	struct FTransform ActorPrevTickTransform;  // 0xF0 (0xF0)


}; 
 
 