#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.GetBBTargetActorToMonsterBase
struct FGetBBTargetActorToMonsterBase
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Result : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct ABP_DCMonsterBaseWithOptions_C* DCMonsterBaseWithOptions;  // 0x8 (0x8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x10 (0x10)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x18 (0x18)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x20 (0x20)
	struct UObject* CallFunc_GetValueAsObject_ReturnValue;  // 0x28 (0x28)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x38 (0x38)
	char pad_57_1 : 7;  // 0x39 (0x39)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x39 (0x39)


}; 
 
 // Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.EventReceived_FF8A911F49704E3033475794D8E16251
struct FEventReceived_FF8A911F49704E3033475794D8E16251
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.CreateProjectiles
// Size: 0xD8(Inherited: 0xD8)
struct FCreateProjectiles : FCreateProjectiles
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)
	float FirePower;  // 0xB8 (0xB8)
	struct FVector StartLocation;  // 0xC0 (0xC0)


}; 
 
 // Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.ExecuteUbergraph_GA_MonsterProjectileAttackBase
struct FExecuteUbergraph_GA_MonsterProjectileAttackBase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* K2Node_CustomEvent_ProjectileActor;  // 0x8 (0x8)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0x10 (0x10)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0x18 (0x18)
	struct FGameplayEventData Temp_struct_Variable;  // 0xC8 (0xC8)
	struct FGameplayTag Temp_struct_Variable_2;  // 0x178 (0x178)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0x180 (0x180)
	char pad_392_1 : 7;  // 0x188 (0x188)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x188 (0x188)
	char pad_393[3];  // 0x189 (0x189)
	int32_t Temp_int_Array_Index_Variable;  // 0x18C (0x18C)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x190 (0x190)
	struct FGameplayTag K2Node_Event_EventTag;  // 0x1A0 (0x1A0)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x1A8 (0x1A8)
	float K2Node_Event_FirePower;  // 0x258 (0x258)
	char pad_604[4];  // 0x25C (0x25C)
	struct FVector K2Node_Event_StartLocation;  // 0x260 (0x260)
	struct FVector CallFunc_Array_Get_Item;  // 0x278 (0x278)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x290 (0x290)
	char pad_660[4];  // 0x294 (0x294)
	struct FHitResult CallFunc_GetHitResultFromTargetData_ReturnValue;  // 0x298 (0x298)
	struct FRotator CallFunc_Array_Get_Item_2;  // 0x380 (0x380)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x398 (0x398)
	struct FVector CallFunc_SetTransform_ShootLocation_Output;  // 0x3A8 (0x3A8)
	struct FRotator CallFunc_SetTransform_ShootRotation_Output;  // 0x3C0 (0x3C0)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x3D8 (0x3D8)
	struct FTransform CallFunc_MakeTransform_ReturnValue;  // 0x3F0 (0x3F0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x450 (0x450)
	struct UDCAT_SpawnProjectile* CallFunc_SpawnProjectile_ReturnValue;  // 0x458 (0x458)
	struct ABP_DCMonsterBase_C* K2Node_DynamicCast_AsBP_DCMonster_Base;  // 0x460 (0x460)
	char pad_1128_1 : 7;  // 0x468 (0x468)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x468 (0x468)
	char pad_1129_1 : 7;  // 0x469 (0x469)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x469 (0x469)
	char pad_1130[6];  // 0x46A (0x46A)
	struct AActor* Temp_object_Variable;  // 0x470 (0x470)
	struct AProjectileActor* CallFunc_SetSpec_ProjectileActorOutput;  // 0x478 (0x478)
	char pad_1152_1 : 7;  // 0x480 (0x480)
	bool CallFunc_GetBBTargetActorToCharacterBase_Result : 1;  // 0x480 (0x480)
	char pad_1153[7];  // 0x481 (0x481)
	struct ADCCharacterBase* CallFunc_GetBBTargetActorToCharacterBase_As_DCCharacter_Base;  // 0x488 (0x488)
	char pad_1168_1 : 7;  // 0x490 (0x490)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x490 (0x490)
	char pad_1169[7];  // 0x491 (0x491)
	struct FVector CallFunc_GetHitBoxLocation_Location;  // 0x498 (0x498)
	char pad_1200_1 : 7;  // 0x4B0 (0x4B0)
	bool CallFunc_GetHitBoxLocation_ReturnValue : 1;  // 0x4B0 (0x4B0)
	char pad_1201[7];  // 0x4B1 (0x4B1)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x4B8 (0x4B8)
	char pad_1384_1 : 7;  // 0x568 (0x568)
	bool CallFunc_MatchesTag_ReturnValue : 1;  // 0x568 (0x568)
	char pad_1385_1 : 7;  // 0x569 (0x569)
	bool CallFunc_EqualEqual_DoubleDouble_ReturnValue : 1;  // 0x569 (0x569)
	char pad_1386[6];  // 0x56A (0x56A)
	struct UDCAT_RotateToActor* CallFunc_RotateToActor_ReturnValue;  // 0x570 (0x570)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x578 (0x578)
	char pad_1404_1 : 7;  // 0x57C (0x57C)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x57C (0x57C)
	char pad_1405[3];  // 0x57D (0x57D)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x580 (0x580)
	char pad_1412_1 : 7;  // 0x584 (0x584)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x584 (0x584)
	char pad_1413_1 : 7;  // 0x585 (0x585)
	bool CallFunc_IsValid_ReturnValue_5 : 1;  // 0x585 (0x585)
	char pad_1414[2];  // 0x586 (0x586)
	float CallFunc_SpawnProjectile_FirePower_ImplicitCast;  // 0x588 (0x588)
	float CallFunc_RotateToActor_Speed_ImplicitCast;  // 0x58C (0x58C)


}; 
 
 // Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.GetBBTargetActor
struct FGetBBTargetActor
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Result : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct UObject* Return Value;  // 0x8 (0x8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x10 (0x10)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x18 (0x18)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x20 (0x20)
	struct UObject* CallFunc_GetValueAsObject_ReturnValue;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x30 (0x30)


}; 
 
 // Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.GetBBTargetActorToCharacterBase
struct FGetBBTargetActorToCharacterBase
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Result : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct ADCCharacterBase* As DCCharacter Base;  // 0x8 (0x8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x10 (0x10)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x18 (0x18)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x20 (0x20)
	struct UObject* CallFunc_GetValueAsObject_ReturnValue;  // 0x28 (0x28)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x38 (0x38)
	char pad_57_1 : 7;  // 0x39 (0x39)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x39 (0x39)


}; 
 
 // Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.OnSuccess_F7E3C6614A5311DD050E5CB226F07D8A
struct FOnSuccess_F7E3C6614A5311DD050E5CB226F07D8A
{
	struct AActor* ProjectileActor;  // 0x0 (0x0)


}; 
 
 // Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.Set Options
struct FSet Options
{
	struct AProjectileActor* ProjectileActorInput;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool CallFunc_SetHoming_Bool : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)
	float CallFunc_PlayPierce_SetObstaclePierceDecrease_ImplicitCast;  // 0xC (0xC)
	float CallFunc_PlayPierce_SetPierceCount_ImplicitCast;  // 0x10 (0x10)


}; 
 
 // Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.SetHoming
struct FSetHoming
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bool : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool Temp_bool_True_if_break_was_hit_Variable : 1;  // 0x1 (0x1)
	char pad_2[2];  // 0x2 (0x2)
	int32_t Temp_int_Array_Index_Variable;  // 0x4 (0x4)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool CallFunc_NotEqual_ByteByte_ReturnValue : 1;  // 0x9 (0x9)
	char pad_10[6];  // 0xA (0xA)
	struct TArray<struct UBP_DCHitBox_C*> CallFunc_K2_GetComponentsByClass_ReturnValue;  // 0x10 (0x10)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)
	struct UBP_DCHitBox_C* CallFunc_Array_Get_Item;  // 0x28 (0x28)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x30 (0x30)
	char pad_52_1 : 7;  // 0x34 (0x34)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x34 (0x34)
	char pad_53[3];  // 0x35 (0x35)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x38 (0x38)
	char pad_60_1 : 7;  // 0x3C (0x3C)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x3C (0x3C)
	char pad_61_1 : 7;  // 0x3D (0x3D)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x3D (0x3D)
	char pad_62[2];  // 0x3E (0x3E)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x40 (0x40)
	struct UObject* CallFunc_GetValueAsObject_ReturnValue;  // 0x48 (0x48)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x50 (0x50)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x58 (0x58)
	char pad_89[3];  // 0x59 (0x59)
	float CallFunc_SetHomingMagnitude_InHomingMagnitude_ImplicitCast;  // 0x5C (0x5C)


}; 
 
 // Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.SetSpec
struct FSetSpec
{
	struct AActor* ProjectileActorInput;  // 0x0 (0x0)
	struct AProjectileActor* ProjectileActorOutput;  // 0x8 (0x8)
	struct AProjectileActor* K2Node_DynamicCast_AsProjectile_Actor;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct FGameplayEventData Temp_struct_Variable;  // 0x20 (0x20)


}; 
 
 // Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.SetTransform
struct FSetTransform
{
	struct FVector ShootLocation Input;  // 0x0 (0x0)
	struct FRotator ShootRotation Input;  // 0x18 (0x18)
	struct FVector ShootLocation Output;  // 0x30 (0x30)
	struct FRotator ShootRotation Output;  // 0x48 (0x48)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x60 (0x60)
	float CallFunc_BreakRotator_Roll;  // 0x68 (0x68)
	float CallFunc_BreakRotator_Pitch;  // 0x6C (0x6C)
	float CallFunc_BreakRotator_Yaw;  // 0x70 (0x70)
	char pad_116[4];  // 0x74 (0x74)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue;  // 0x78 (0x78)
	double CallFunc_BreakVector_X;  // 0x90 (0x90)
	double CallFunc_BreakVector_Y;  // 0x98 (0x98)
	double CallFunc_BreakVector_Z;  // 0xA0 (0xA0)
	float CallFunc_BreakRotator_Roll_2;  // 0xA8 (0xA8)
	float CallFunc_BreakRotator_Pitch_2;  // 0xAC (0xAC)
	float CallFunc_BreakRotator_Yaw_2;  // 0xB0 (0xB0)
	char pad_180[4];  // 0xB4 (0xB4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0xB8 (0xB8)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0xC0 (0xC0)
	struct FVector CallFunc_GetActorUpVector_ReturnValue;  // 0xC8 (0xC8)
	struct FVector CallFunc_GetActorRightVector_ReturnValue;  // 0xE0 (0xE0)
	struct FVector CallFunc_Multiply_VectorFloat_ReturnValue;  // 0xF8 (0xF8)
	struct FVector CallFunc_Multiply_VectorFloat_ReturnValue_2;  // 0x110 (0x110)
	struct FVector CallFunc_GetActorForwardVector_ReturnValue;  // 0x128 (0x128)
	double CallFunc_Add_DoubleDouble_ReturnValue_2;  // 0x140 (0x140)
	struct FVector CallFunc_Multiply_VectorFloat_ReturnValue_3;  // 0x148 (0x148)
	double CallFunc_Add_DoubleDouble_ReturnValue_3;  // 0x160 (0x160)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x168 (0x168)
	struct FRotator CallFunc_MakeRotator_ReturnValue;  // 0x180 (0x180)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_2;  // 0x198 (0x198)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast;  // 0x1B0 (0x1B0)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast_2;  // 0x1B8 (0x1B8)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast_3;  // 0x1C0 (0x1C0)
	double CallFunc_Add_DoubleDouble_B_ImplicitCast;  // 0x1C8 (0x1C8)
	double CallFunc_Add_DoubleDouble_B_ImplicitCast_2;  // 0x1D0 (0x1D0)
	double CallFunc_Add_DoubleDouble_B_ImplicitCast_3;  // 0x1D8 (0x1D8)
	float CallFunc_MakeRotator_Yaw_ImplicitCast;  // 0x1E0 (0x1E0)
	float CallFunc_MakeRotator_Pitch_ImplicitCast;  // 0x1E4 (0x1E4)
	float CallFunc_MakeRotator_Roll_ImplicitCast;  // 0x1E8 (0x1E8)


}; 
 
 