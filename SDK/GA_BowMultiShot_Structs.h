#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_BowMultiShot.GA_BowMultiShot_C.CreateProjectiles
// Size: 0xD8(Inherited: 0xD8)
struct FCreateProjectiles : FCreateProjectiles
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)
	float FirePower;  // 0xB8 (0xB8)
	struct FVector StartLocation;  // 0xC0 (0xC0)


}; 
 
 // Function GA_BowMultiShot.GA_BowMultiShot_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_BowMultiShot.GA_BowMultiShot_C.ExecuteUbergraph_GA_BowMultiShot
struct FExecuteUbergraph_GA_BowMultiShot
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x8 (0x8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xB8 (0xB8)
	struct FVector CallFunc_GetActorEyesViewPoint_OutLocation;  // 0xC0 (0xC0)
	struct FRotator CallFunc_GetActorEyesViewPoint_OutRotation;  // 0xD8 (0xD8)
	struct FVector CallFunc_GetForwardVector_ReturnValue;  // 0xF0 (0xF0)
	char pad_264_1 : 7;  // 0x108 (0x108)
	bool Temp_bool_Variable : 1;  // 0x108 (0x108)
	char pad_265[7];  // 0x109 (0x109)
	struct FVector CallFunc_Conv_DoubleToVector_ReturnValue;  // 0x110 (0x110)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue;  // 0x128 (0x128)
	int32_t Temp_int_Variable;  // 0x140 (0x140)
	struct FGameplayTag K2Node_Event_EventTag;  // 0x144 (0x144)
	char pad_332[4];  // 0x14C (0x14C)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x150 (0x150)
	float K2Node_Event_FirePower;  // 0x200 (0x200)
	char pad_516[4];  // 0x204 (0x204)
	struct FVector K2Node_Event_StartLocation;  // 0x208 (0x208)
	double CallFunc_Conv_IntToDouble_ReturnValue;  // 0x220 (0x220)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x228 (0x228)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x240 (0x240)
	char pad_584_1 : 7;  // 0x248 (0x248)
	bool K2Node_SwitchInteger_CmpSuccess : 1;  // 0x248 (0x248)
	char pad_585_1 : 7;  // 0x249 (0x249)
	bool CallFunc_LessEqual_IntInt_ReturnValue : 1;  // 0x249 (0x249)
	char pad_586[2];  // 0x24A (0x24A)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x24C (0x24C)
	double CallFunc_Multiply_DoubleDouble_ReturnValue;  // 0x250 (0x250)
	double CallFunc_Multiply_DoubleDouble_ReturnValue_2;  // 0x258 (0x258)
	struct AActor* Temp_object_Variable;  // 0x260 (0x260)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x268 (0x268)
	struct AProjectileActor* K2Node_DynamicCast_AsProjectile_Actor;  // 0x270 (0x270)
	char pad_632_1 : 7;  // 0x278 (0x278)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x278 (0x278)
	char pad_633[7];  // 0x279 (0x279)
	struct AActor* K2Node_CustomEvent_ProjectileActor;  // 0x280 (0x280)
	struct TArray<struct AActor*> Temp_object_Variable_2;  // 0x288 (0x288)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x298 (0x298)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x2A8 (0x2A8)
	char pad_688_1 : 7;  // 0x2B0 (0x2B0)
	bool CallFunc_IsValidClass_ReturnValue : 1;  // 0x2B0 (0x2B0)
	char pad_689[7];  // 0x2B1 (0x2B1)
	struct TScriptInterface<IGameplayTagAssetInterface> K2Node_DynamicCast_As_________________;  // 0x2B8 (0x2B8)
	char pad_712_1 : 7;  // 0x2C8 (0x2C8)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x2C8 (0x2C8)
	char pad_713_1 : 7;  // 0x2C9 (0x2C9)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x2C9 (0x2C9)
	char pad_714[6];  // 0x2CA (0x2CA)
	struct FVector CallFunc_Conv_DoubleToVector_ReturnValue_2;  // 0x2D0 (0x2D0)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue_2;  // 0x2E8 (0x2E8)
	struct FGameplayTagContainer CallFunc_MakeLiteralGameplayTagContainer_ReturnValue;  // 0x300 (0x300)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_2;  // 0x320 (0x320)
	struct FVector CallFunc_Subtract_VectorVector_ReturnValue;  // 0x338 (0x338)
	struct FVector CallFunc_Normal_ReturnValue;  // 0x350 (0x350)
	struct FVector CallFunc_RotateAngleAxis_ReturnValue;  // 0x368 (0x368)
	struct FVector CallFunc_Multiply_VectorFloat_ReturnValue;  // 0x380 (0x380)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_3;  // 0x398 (0x398)
	struct FHitResult CallFunc_LineTraceSingle_OutHit;  // 0x3B0 (0x3B0)
	char pad_1176_1 : 7;  // 0x498 (0x498)
	bool CallFunc_LineTraceSingle_ReturnValue : 1;  // 0x498 (0x498)
	char pad_1177_1 : 7;  // 0x499 (0x499)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x499 (0x499)
	char pad_1178_1 : 7;  // 0x49A (0x49A)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x49A (0x49A)
	char pad_1179[1];  // 0x49B (0x49B)
	float CallFunc_BreakHitResult_Time;  // 0x49C (0x49C)
	float CallFunc_BreakHitResult_Distance;  // 0x4A0 (0x4A0)
	char pad_1188[4];  // 0x4A4 (0x4A4)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x4A8 (0x4A8)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x4C0 (0x4C0)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x4D8 (0x4D8)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x4F0 (0x4F0)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x508 (0x508)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x510 (0x510)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x518 (0x518)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x520 (0x520)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x528 (0x528)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x530 (0x530)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x534 (0x534)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x538 (0x538)
	char pad_1340[4];  // 0x53C (0x53C)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x540 (0x540)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x558 (0x558)
	struct FVector CallFunc_Subtract_VectorVector_ReturnValue_2;  // 0x570 (0x570)
	struct FRotator CallFunc_MakeRotFromX_ReturnValue;  // 0x588 (0x588)
	struct FTransform CallFunc_MakeTransform_ReturnValue;  // 0x5A0 (0x5A0)
	struct UDCAT_SpawnProjectile* CallFunc_SpawnProjectile_ReturnValue;  // 0x600 (0x600)
	char pad_1544_1 : 7;  // 0x608 (0x608)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x608 (0x608)
	char pad_1545[7];  // 0x609 (0x609)
	double CallFunc_RandomFloatInRange_Min_ImplicitCast;  // 0x610 (0x610)
	float CallFunc_SpawnProjectile_FirePower_ImplicitCast;  // 0x618 (0x618)
	float CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast;  // 0x61C (0x61C)


}; 
 
 // Function GA_BowMultiShot.GA_BowMultiShot_C.OnSuccess_AD00B3DA4CDB4D669E483EA55702AB02
struct FOnSuccess_AD00B3DA4CDB4D669E483EA55702AB02
{
	struct AActor* ProjectileActor;  // 0x0 (0x0)


}; 
 
 