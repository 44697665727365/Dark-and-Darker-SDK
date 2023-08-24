#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_GhostKing_NormalAttack_Return.GA_GhostKing_NormalAttack_Return_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_GhostKing_NormalAttack_Return.GA_GhostKing_NormalAttack_Return_C.ExecuteUbergraph_GA_GhostKing_NormalAttack_Return
struct FExecuteUbergraph_GA_GhostKing_NormalAttack_Return
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector CallFunc_Conv_FloatToVector_ReturnValue;  // 0x8 (0x8)
	struct AActor* K2Node_CustomEvent_ProjectileActor;  // 0x20 (0x20)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x28 (0x28)
	struct AActor* Temp_object_Variable;  // 0x38 (0x38)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x40 (0x40)
	struct ABP_GhostKing_Common_C* K2Node_DynamicCast_AsBP_Ghost_King_Common;  // 0x48 (0x48)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x50 (0x50)
	char pad_81[7];  // 0x51 (0x51)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x58 (0x58)
	char pad_264_1 : 7;  // 0x108 (0x108)
	bool CallFunc_Set_Projectile_Spec_and_Options_Result : 1;  // 0x108 (0x108)
	char pad_265[7];  // 0x109 (0x109)
	struct AProjectileActor* CallFunc_Set_Projectile_Spec_and_Options_Projectile_Actor;  // 0x110 (0x110)
	struct UMeshComponent* CallFunc_GetComponentByClass_ReturnValue;  // 0x118 (0x118)
	struct FHitResult CallFunc_GetHitResultFromTargetData_ReturnValue;  // 0x120 (0x120)
	char pad_520_1 : 7;  // 0x208 (0x208)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x208 (0x208)
	char pad_521[7];  // 0x209 (0x209)
	struct FHitResult CallFunc_GetHitResultFromTargetData_ReturnValue_2;  // 0x210 (0x210)
	struct FHitResult CallFunc_GetHitResultFromTargetData_ReturnValue_3;  // 0x2F8 (0x2F8)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue;  // 0x3E0 (0x3E0)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x3F8 (0x3F8)
	struct FVector CallFunc_GetForwardVector_ReturnValue;  // 0x410 (0x410)
	struct FVector CallFunc_GetUpVector_ReturnValue;  // 0x428 (0x428)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x440 (0x440)
	struct AActor* Temp_object_Variable_2;  // 0x458 (0x458)
	double CallFunc_BreakVector_X;  // 0x460 (0x460)
	double CallFunc_BreakVector_Y;  // 0x468 (0x468)
	double CallFunc_BreakVector_Z;  // 0x470 (0x470)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x478 (0x478)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x480 (0x480)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0x488 (0x488)
	struct AActor* K2Node_CustomEvent_ProjectileActor_2;  // 0x4A0 (0x4A0)
	char pad_1192[8];  // 0x4A8 (0x4A8)
	struct FTransform CallFunc_MakeTransform_ReturnValue;  // 0x4B0 (0x4B0)
	struct UDCAT_SpawnProjectile* CallFunc_SpawnProjectile_ReturnValue;  // 0x510 (0x510)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x518 (0x518)
	char pad_1320_1 : 7;  // 0x528 (0x528)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x528 (0x528)
	char pad_1321[7];  // 0x529 (0x529)
	struct FVector CallFunc_Conv_FloatToVector_ReturnValue_2;  // 0x530 (0x530)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue;  // 0x548 (0x548)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue_2;  // 0x560 (0x560)
	struct AActor* Temp_object_Variable_3;  // 0x578 (0x578)
	char pad_1408_1 : 7;  // 0x580 (0x580)
	bool CallFunc_Set_Projectile_Spec_and_Options_Result_2 : 1;  // 0x580 (0x580)
	char pad_1409[7];  // 0x581 (0x581)
	struct AProjectileActor* CallFunc_Set_Projectile_Spec_and_Options_Projectile_Actor_2;  // 0x588 (0x588)
	char pad_1424_1 : 7;  // 0x590 (0x590)
	bool CallFunc_Set_Projectile_Spec_and_Options_Result_3 : 1;  // 0x590 (0x590)
	char pad_1425[7];  // 0x591 (0x591)
	struct AProjectileActor* CallFunc_Set_Projectile_Spec_and_Options_Projectile_Actor_3;  // 0x598 (0x598)
	struct UMeshComponent* CallFunc_GetComponentByClass_ReturnValue_2;  // 0x5A0 (0x5A0)
	char pad_1448_1 : 7;  // 0x5A8 (0x5A8)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x5A8 (0x5A8)
	char pad_1449[7];  // 0x5A9 (0x5A9)
	struct UMeshComponent* CallFunc_GetComponentByClass_ReturnValue_3;  // 0x5B0 (0x5B0)
	char pad_1464_1 : 7;  // 0x5B8 (0x5B8)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x5B8 (0x5B8)
	char pad_1465[7];  // 0x5B9 (0x5B9)
	struct FVector CallFunc_Conv_FloatToVector_ReturnValue_3;  // 0x5C0 (0x5C0)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue_3;  // 0x5D8 (0x5D8)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x5F0 (0x5F0)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_2;  // 0x608 (0x608)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_3;  // 0x620 (0x620)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_4;  // 0x638 (0x638)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue;  // 0x650 (0x650)
	struct AActor* K2Node_CustomEvent_ProjectileActor_3;  // 0x668 (0x668)
	float CallFunc_BreakRotator_Roll;  // 0x670 (0x670)
	float CallFunc_BreakRotator_Pitch;  // 0x674 (0x674)
	float CallFunc_BreakRotator_Yaw;  // 0x678 (0x678)
	char pad_1660[4];  // 0x67C (0x67C)
	double CallFunc_Add_DoubleDouble_ReturnValue_2;  // 0x680 (0x680)
	struct FRotator CallFunc_MakeRotator_ReturnValue;  // 0x688 (0x688)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x6A0 (0x6A0)
	struct FTransform CallFunc_MakeTransform_ReturnValue_2;  // 0x6B0 (0x6B0)
	float CallFunc_BreakRotator_Roll_2;  // 0x710 (0x710)
	float CallFunc_BreakRotator_Pitch_2;  // 0x714 (0x714)
	float CallFunc_BreakRotator_Yaw_2;  // 0x718 (0x718)
	char pad_1820[4];  // 0x71C (0x71C)
	struct UDCAT_SpawnProjectile* CallFunc_SpawnProjectile_ReturnValue_2;  // 0x720 (0x720)
	double CallFunc_Add_DoubleDouble_ReturnValue_3;  // 0x728 (0x728)
	struct FRotator CallFunc_MakeRotator_ReturnValue_2;  // 0x730 (0x730)
	char pad_1864[8];  // 0x748 (0x748)
	struct FTransform CallFunc_MakeTransform_ReturnValue_3;  // 0x750 (0x750)
	char pad_1968_1 : 7;  // 0x7B0 (0x7B0)
	bool CallFunc_IsValid_ReturnValue_5 : 1;  // 0x7B0 (0x7B0)
	char pad_1969[7];  // 0x7B1 (0x7B1)
	struct UDCAT_SpawnProjectile* CallFunc_SpawnProjectile_ReturnValue_3;  // 0x7B8 (0x7B8)
	char pad_1984_1 : 7;  // 0x7C0 (0x7C0)
	bool CallFunc_IsValid_ReturnValue_6 : 1;  // 0x7C0 (0x7C0)
	char pad_1985_1 : 7;  // 0x7C1 (0x7C1)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x7C1 (0x7C1)
	char pad_1986[6];  // 0x7C2 (0x7C2)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast;  // 0x7C8 (0x7C8)
	float CallFunc_MakeRotator_Yaw_ImplicitCast;  // 0x7D0 (0x7D0)
	char pad_2004[4];  // 0x7D4 (0x7D4)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast_2;  // 0x7D8 (0x7D8)
	float CallFunc_MakeRotator_Yaw_ImplicitCast_2;  // 0x7E0 (0x7E0)


}; 
 
 // Function GA_GhostKing_NormalAttack_Return.GA_GhostKing_NormalAttack_Return_C.OnSuccess_5F7376234ACAB284769674B6CAA713A2
struct FOnSuccess_5F7376234ACAB284769674B6CAA713A2
{
	struct AActor* ProjectileActor;  // 0x0 (0x0)


}; 
 
 // Function GA_GhostKing_NormalAttack_Return.GA_GhostKing_NormalAttack_Return_C.OnSuccess_FB2F52A3488E48849B6EEB88441917EB
struct FOnSuccess_FB2F52A3488E48849B6EEB88441917EB
{
	struct AActor* ProjectileActor;  // 0x0 (0x0)


}; 
 
 // Function GA_GhostKing_NormalAttack_Return.GA_GhostKing_NormalAttack_Return_C.OnSuccess_FEEF2ADC496CDFE7AE74449D038508D7
struct FOnSuccess_FEEF2ADC496CDFE7AE74449D038508D7
{
	struct AActor* ProjectileActor;  // 0x0 (0x0)


}; 
 
 