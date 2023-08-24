#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_LichGettingSoul.GA_LichGettingSoul_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_LichGettingSoul.GA_LichGettingSoul_C.ExecuteUbergraph_GA_LichGettingSoul
struct FExecuteUbergraph_GA_LichGettingSoul
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x20 (0x20)
	double CallFunc_BreakVector_X;  // 0x30 (0x30)
	double CallFunc_BreakVector_Y;  // 0x38 (0x38)
	double CallFunc_BreakVector_Z;  // 0x40 (0x40)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x48 (0x48)
	struct UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue;  // 0x50 (0x50)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0x58 (0x58)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x70 (0x70)
	char pad_113_1 : 7;  // 0x71 (0x71)
	bool Temp_bool_True_if_break_was_hit_Variable : 1;  // 0x71 (0x71)
	char pad_114[2];  // 0x72 (0x72)
	int32_t Temp_int_Array_Index_Variable;  // 0x74 (0x74)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x78 (0x78)
	char pad_121[3];  // 0x79 (0x79)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x7C (0x7C)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x80 (0x80)
	char pad_132[4];  // 0x84 (0x84)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x88 (0x88)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x138 (0x138)
	struct FHitResult CallFunc_GetHitResultFromTargetData_ReturnValue;  // 0x148 (0x148)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x230 (0x230)
	struct AActor* Temp_object_Variable;  // 0x238 (0x238)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x240 (0x240)
	struct ABP_ProjectileActor_C* K2Node_DynamicCast_AsBP_Projectile_Actor;  // 0x258 (0x258)
	char pad_608_1 : 7;  // 0x260 (0x260)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x260 (0x260)
	char pad_609[7];  // 0x261 (0x261)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue;  // 0x268 (0x268)
	float CallFunc_BreakRotator_Roll;  // 0x280 (0x280)
	float CallFunc_BreakRotator_Pitch;  // 0x284 (0x284)
	float CallFunc_BreakRotator_Yaw;  // 0x288 (0x288)
	char pad_652[4];  // 0x28C (0x28C)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x290 (0x290)
	double CallFunc_RandomFloatInRange_ReturnValue_2;  // 0x298 (0x298)
	double CallFunc_Add_DoubleDouble_ReturnValue_2;  // 0x2A0 (0x2A0)
	double CallFunc_Add_DoubleDouble_ReturnValue_3;  // 0x2A8 (0x2A8)
	double CallFunc_RandomFloatInRange_ReturnValue_3;  // 0x2B0 (0x2B0)
	struct AActor* K2Node_CustomEvent_ProjectileActor;  // 0x2B8 (0x2B8)
	double CallFunc_Add_DoubleDouble_ReturnValue_4;  // 0x2C0 (0x2C0)
	struct FRotator CallFunc_MakeRotator_ReturnValue;  // 0x2C8 (0x2C8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x2E0 (0x2E0)
	char pad_744[8];  // 0x2E8 (0x2E8)
	struct FTransform CallFunc_MakeTransform_ReturnValue;  // 0x2F0 (0x2F0)
	struct ABP_Lich_Common_C* K2Node_DynamicCast_AsBP_Lich_Common;  // 0x350 (0x350)
	char pad_856_1 : 7;  // 0x358 (0x358)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x358 (0x358)
	char pad_857[7];  // 0x359 (0x359)
	struct UDCAT_SpawnProjectile* CallFunc_SpawnProjectile_ReturnValue;  // 0x360 (0x360)
	struct TArray<struct UBP_DCHitBox_C*> CallFunc_K2_GetComponentsByClass_ReturnValue;  // 0x368 (0x368)
	struct UBP_DCHitBox_C* CallFunc_Array_Get_Item;  // 0x378 (0x378)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x380 (0x380)
	char pad_900_1 : 7;  // 0x384 (0x384)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x384 (0x384)
	char pad_901_1 : 7;  // 0x385 (0x385)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x385 (0x385)
	char pad_902_1 : 7;  // 0x386 (0x386)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x386 (0x386)
	char pad_903_1 : 7;  // 0x387 (0x387)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x387 (0x387)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x388 (0x388)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x398 (0x398)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x3A0 (0x3A0)
	char pad_936_1 : 7;  // 0x3A8 (0x3A8)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x3A8 (0x3A8)
	char pad_937_1 : 7;  // 0x3A9 (0x3A9)
	bool CallFunc_Get_BB_Target_Actor_Result : 1;  // 0x3A9 (0x3A9)
	char pad_938[6];  // 0x3AA (0x3AA)
	struct ADCCharacterBase* CallFunc_Get_BB_Target_Actor_DCCharacterBase;  // 0x3B0 (0x3B0)
	struct TArray<struct FPrimaryAssetId> K2Node_MakeArray_Array;  // 0x3B8 (0x3B8)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x3C8 (0x3C8)
	struct UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue_2;  // 0x4A0 (0x4A0)
	char pad_1192_1 : 7;  // 0x4A8 (0x4A8)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x4A8 (0x4A8)
	char pad_1193[7];  // 0x4A9 (0x4A9)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyGameplayEffectByIds_ReturnValue;  // 0x4B0 (0x4B0)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast;  // 0x4C0 (0x4C0)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast_2;  // 0x4C8 (0x4C8)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast_3;  // 0x4D0 (0x4D0)
	float CallFunc_MakeRotator_Pitch_ImplicitCast;  // 0x4D8 (0x4D8)
	float CallFunc_MakeRotator_Roll_ImplicitCast;  // 0x4DC (0x4DC)
	float CallFunc_MakeRotator_Yaw_ImplicitCast;  // 0x4E0 (0x4E0)


}; 
 
 // Function GA_LichGettingSoul.GA_LichGettingSoul_C.OnSuccess_EA869A204A64C395D509E9B47D4CA2F2
struct FOnSuccess_EA869A204A64C395D509E9B47D4CA2F2
{
	struct AActor* ProjectileActor;  // 0x0 (0x0)


}; 
 
 