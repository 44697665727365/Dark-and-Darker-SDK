#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SkeletonRoyalGuard_SoulPass.GA_SkeletonRoyalGuard_SoulPass_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonRoyalGuard_SoulPass.GA_SkeletonRoyalGuard_SoulPass_C.ExecuteUbergraph_GA_SkeletonRoyalGuard_SoulPass
struct FExecuteUbergraph_GA_SkeletonRoyalGuard_SoulPass
{
	int32_t EntryPoint;  // 0x0 (0x0)
	int32_t Temp_int_Array_Index_Variable;  // 0x4 (0x4)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x8 (0x8)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x18 (0x18)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xC8 (0xC8)
	struct ABP_SkeletonRoyalGuard_C* K2Node_DynamicCast_AsBP_Skeleton_Royal_Guard;  // 0xD0 (0xD0)
	char pad_216_1 : 7;  // 0xD8 (0xD8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xD8 (0xD8)
	char pad_217[7];  // 0xD9 (0xD9)
	struct FHitResult CallFunc_GetHitResultFromTargetData_ReturnValue;  // 0xE0 (0xE0)
	struct TArray<struct UBP_DCHitBox_C*> CallFunc_K2_GetComponentsByClass_ReturnValue;  // 0x1C8 (0x1C8)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x1D8 (0x1D8)
	struct UBP_DCHitBox_C* CallFunc_Array_Get_Item;  // 0x1F0 (0x1F0)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x1F8 (0x1F8)
	char pad_508[4];  // 0x1FC (0x1FC)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue;  // 0x200 (0x200)
	char pad_536_1 : 7;  // 0x218 (0x218)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x218 (0x218)
	char pad_537[7];  // 0x219 (0x219)
	struct FVector CallFunc_GetCapsuleBottomLocation_ReturnValue;  // 0x220 (0x220)
	char pad_568[8];  // 0x238 (0x238)
	struct FTransform CallFunc_MakeTransform_ReturnValue;  // 0x240 (0x240)
	struct FRotator CallFunc_FindRelativeLookAtRotation_ReturnValue;  // 0x2A0 (0x2A0)
	char pad_696_1 : 7;  // 0x2B8 (0x2B8)
	bool Temp_bool_True_if_break_was_hit_Variable : 1;  // 0x2B8 (0x2B8)
	char pad_697[3];  // 0x2B9 (0x2B9)
	float CallFunc_BreakRotator_Roll;  // 0x2BC (0x2BC)
	float CallFunc_BreakRotator_Pitch;  // 0x2C0 (0x2C0)
	float CallFunc_BreakRotator_Yaw;  // 0x2C4 (0x2C4)
	char pad_712_1 : 7;  // 0x2C8 (0x2C8)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x2C8 (0x2C8)
	char pad_713[3];  // 0x2C9 (0x2C9)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x2CC (0x2CC)
	char pad_720_1 : 7;  // 0x2D0 (0x2D0)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x2D0 (0x2D0)
	char pad_721[3];  // 0x2D1 (0x2D1)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x2D4 (0x2D4)
	char pad_728_1 : 7;  // 0x2D8 (0x2D8)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x2D8 (0x2D8)
	char pad_729[7];  // 0x2D9 (0x2D9)
	struct AActor* Temp_object_Variable;  // 0x2E0 (0x2E0)
	struct ABP_ProjectileActor_C* K2Node_DynamicCast_AsBP_Projectile_Actor;  // 0x2E8 (0x2E8)
	char pad_752_1 : 7;  // 0x2F0 (0x2F0)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x2F0 (0x2F0)
	char pad_753_1 : 7;  // 0x2F1 (0x2F1)
	bool K2Node_Event_bWasCancelled : 1;  // 0x2F1 (0x2F1)
	char pad_754[6];  // 0x2F2 (0x2F2)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x2F8 (0x2F8)
	struct AActor* K2Node_CustomEvent_ProjectileActor;  // 0x300 (0x300)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x308 (0x308)
	double CallFunc_RandomFloatInRange_ReturnValue_2;  // 0x310 (0x310)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x318 (0x318)
	double CallFunc_Add_DoubleDouble_ReturnValue_2;  // 0x320 (0x320)
	double CallFunc_RandomFloatInRange_ReturnValue_3;  // 0x328 (0x328)
	double CallFunc_Add_DoubleDouble_ReturnValue_3;  // 0x330 (0x330)
	struct FRotator CallFunc_MakeRotator_ReturnValue;  // 0x338 (0x338)
	struct FTransform CallFunc_MakeTransform_ReturnValue_2;  // 0x350 (0x350)
	struct UDCAT_SpawnProjectile* CallFunc_SpawnProjectile_ReturnValue;  // 0x3B0 (0x3B0)
	char pad_952_1 : 7;  // 0x3B8 (0x3B8)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x3B8 (0x3B8)
	char pad_953[7];  // 0x3B9 (0x3B9)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast;  // 0x3C0 (0x3C0)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast_2;  // 0x3C8 (0x3C8)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast_3;  // 0x3D0 (0x3D0)
	float CallFunc_MakeRotator_Yaw_ImplicitCast;  // 0x3D8 (0x3D8)
	float CallFunc_MakeRotator_Roll_ImplicitCast;  // 0x3DC (0x3DC)
	float CallFunc_MakeRotator_Pitch_ImplicitCast;  // 0x3E0 (0x3E0)


}; 
 
 // Function GA_SkeletonRoyalGuard_SoulPass.GA_SkeletonRoyalGuard_SoulPass_C.OnSuccess_9EBD3ADF4752405F227DB8A792D798D8
struct FOnSuccess_9EBD3ADF4752405F227DB8A792D798D8
{
	struct AActor* ProjectileActor;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonRoyalGuard_SoulPass.GA_SkeletonRoyalGuard_SoulPass_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 