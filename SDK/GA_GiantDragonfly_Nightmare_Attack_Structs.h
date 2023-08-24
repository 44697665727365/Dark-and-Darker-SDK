#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_GiantDragonfly_Nightmare_Attack.GA_GiantDragonfly_Nightmare_Attack_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_GiantDragonfly_Nightmare_Attack.GA_GiantDragonfly_Nightmare_Attack_C.OnSuccess_9E9F6B0B4BA065DB8AF30BBB0F498205
struct FOnSuccess_9E9F6B0B4BA065DB8AF30BBB0F498205
{
	struct AActor* ProjectileActor;  // 0x0 (0x0)


}; 
 
 // Function GA_GiantDragonfly_Nightmare_Attack.GA_GiantDragonfly_Nightmare_Attack_C.CreateProjectiles
// Size: 0xD8(Inherited: 0xD8)
struct FCreateProjectiles : FCreateProjectiles
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)
	float FirePower;  // 0xB8 (0xB8)
	struct FVector StartLocation;  // 0xC0 (0xC0)


}; 
 
 // Function GA_GiantDragonfly_Nightmare_Attack.GA_GiantDragonfly_Nightmare_Attack_C.EventReceived_7BF99EE2479BE6473270DA8A6330CECE
struct FEventReceived_7BF99EE2479BE6473270DA8A6330CECE
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_GiantDragonfly_Nightmare_Attack.GA_GiantDragonfly_Nightmare_Attack_C.ExecuteUbergraph_GA_GiantDragonfly_Nightmare_Attack
struct FExecuteUbergraph_GA_GiantDragonfly_Nightmare_Attack
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* K2Node_CustomEvent_ProjectileActor;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x10 (0x10)
	struct AActor* Temp_object_Variable;  // 0x20 (0x20)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x28 (0x28)
	struct AProjectileActor* CallFunc_SetSpec_ProjectileActorOutput;  // 0x38 (0x38)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0x40 (0x40)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0x48 (0x48)
	struct FGameplayEventData Temp_struct_Variable;  // 0xF8 (0xF8)
	struct FGameplayTag Temp_struct_Variable_2;  // 0x1A8 (0x1A8)
	char pad_432_1 : 7;  // 0x1B0 (0x1B0)
	bool CallFunc_MatchesTag_ReturnValue : 1;  // 0x1B0 (0x1B0)
	char pad_433[7];  // 0x1B1 (0x1B1)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // [x1B8 ([x1B8)
	char pad_448_1 : 7;  // 0x1C0 (0x1C0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x1C0 (0x1C0)
	char pad_449[7];  // 0x1C1 (0x1C1)
	double Temp_real_Variable;  // 0x1C8 (0x1C8)
	double Temp_real_Variable_2;  // 0x1D0 (0x1D0)
	struct AActor* Temp_object_Variable_2;  // 0x1D8 (0x1D8)
	struct AActor* K2Node_CustomEvent_ProjectileActor_2;  // 0x1E0 (0x1E0)
	struct AProjectileActor* CallFunc_SetSpec_ProjectileActorOutput_2;  // 0x1E8 (0x1E8)
	double Temp_real_Variable_3;  // 0x1F0 (0x1F0)
	double Temp_real_Variable_4;  // 0x1F8 (0x1F8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x200 (0x200)
	struct AActor* Temp_object_Variable_3;  // 0x210 (0x210)
	struct AActor* K2Node_CustomEvent_ProjectileActor_3;  // 0x218 (0x218)
	struct AProjectileActor* CallFunc_SetSpec_ProjectileActorOutput_3;  // 0x220 (0x220)
	double Temp_real_Variable_5;  // 0x228 (0x228)
	struct AActor* Temp_object_Variable_4;  // 0x230 (0x230)
	struct AProjectileActor* CallFunc_SetSpec_ProjectileActorOutput_4;  // 0x238 (0x238)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4;  // 0x240 (0x240)
	double Temp_real_Variable_6;  // 0x250 (0x250)
	struct AActor* K2Node_CustomEvent_ProjectileActor_7;  // 0x258 (0x258)
	double Temp_real_Variable_7;  // 0x260 (0x260)
	struct AActor* Temp_object_Variable_5;  // 0x268 (0x268)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_5;  // 0x270 (0x270)
	struct AProjectileActor* CallFunc_SetSpec_ProjectileActorOutput_5;  // 0x280 (0x280)
	double Temp_real_Variable_8;  // 0x288 (0x288)
	struct AActor* K2Node_CustomEvent_ProjectileActor_4;  // 0x290 (0x290)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_6;  // 0x298 (0x298)
	struct AActor* Temp_object_Variable_6;  // 0x2A8 (0x2A8)
	struct AProjectileActor* CallFunc_SetSpec_ProjectileActorOutput_6;  // 0x2B0 (0x2B0)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Interval;  // 0x2B8 (0x2B8)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Final_Y_Angle;  // 0x2C0 (0x2C0)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Final_Z_Angle;  // 0x2C8 (0x2C8)
	struct FRotator CallFunc_MakeRotator_ReturnValue;  // 0x2D0 (0x2D0)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x2E8 (0x2E8)
	struct FVector CallFunc_SetTransform_ShootLocation_Output;  // 0x2F0 (0x2F0)
	struct FRotator CallFunc_SetTransform_ShootRotation_Output;  // 0x308 (0x308)
	struct AActor* K2Node_CustomEvent_ProjectileActor_8;  // 0x320 (0x320)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_7;  // 0x328 (0x328)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Interval_2;  // 0x338 (0x338)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Final_Y_Angle_2;  // 0x340 (0x340)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Final_Z_Angle_2;  // 0x348 (0x348)
	double CallFunc_Add_DoubleDouble_ReturnValue_2;  // 0x350 (0x350)
	struct FRotator CallFunc_MakeRotator_ReturnValue_2;  // 0x358 (0x358)
	struct FVector CallFunc_SetTransform_ShootLocation_Output_2;  // 0x370 (0x370)
	struct FRotator CallFunc_SetTransform_ShootRotation_Output_2;  // 0x388 (0x388)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Interval_3;  // 0x3A0 (0x3A0)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Final_Y_Angle_3;  // 0x3A8 (0x3A8)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Final_Z_Angle_3;  // 0x3B0 (0x3B0)
	struct FRotator CallFunc_MakeRotator_ReturnValue_3;  // 0x3B8 (0x3B8)
	struct FVector CallFunc_SetTransform_ShootLocation_Output_3;  // 0x3D0 (0x3D0)
	struct FRotator CallFunc_SetTransform_ShootRotation_Output_3;  // 0x3E8 (0x3E8)
	double CallFunc_Add_DoubleDouble_ReturnValue_3;  // 0x400 (0x400)
	double Temp_real_Variable_9;  // 0x408 (0x408)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Interval_4;  // 0x410 (0x410)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Final_Y_Angle_4;  // 0x418 (0x418)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Final_Z_Angle_4;  // 0x420 (0x420)
	struct FRotator CallFunc_MakeRotator_ReturnValue_4;  // 0x428 (0x428)
	struct FVector CallFunc_SetTransform_ShootLocation_Output_4;  // 0x440 (0x440)
	struct FRotator CallFunc_SetTransform_ShootRotation_Output_4;  // 0x458 (0x458)
	double CallFunc_Add_DoubleDouble_ReturnValue_4;  // 0x470 (0x470)
	struct AActor* Temp_object_Variable_7;  // 0x478 (0x478)
	struct AProjectileActor* CallFunc_SetSpec_ProjectileActorOutput_7;  // 0x480 (0x480)
	struct AActor* Temp_object_Variable_8;  // 0x488 (0x488)
	struct AProjectileActor* CallFunc_SetSpec_ProjectileActorOutput_8;  // 0x490 (0x490)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Interval_5;  // 0x498 (0x498)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Final_Y_Angle_5;  // 0x4A0 (0x4A0)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Final_Z_Angle_5;  // 0x4A8 (0x4A8)
	struct FRotator CallFunc_MakeRotator_ReturnValue_5;  // 0x4B0 (0x4B0)
	struct FVector CallFunc_SetTransform_ShootLocation_Output_5;  // 0x4C8 (0x4C8)
	struct FRotator CallFunc_SetTransform_ShootRotation_Output_5;  // 0x4E0 (0x4E0)
	double CallFunc_Add_DoubleDouble_ReturnValue_5;  // 0x4F8 (0x4F8)
	struct AActor* K2Node_CustomEvent_ProjectileActor_9;  // 0x500 (0x500)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_8;  // 0x508 (0x508)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Interval_6;  // 0x518 (0x518)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Final_Y_Angle_6;  // 0x520 (0x520)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Final_Z_Angle_6;  // 0x528 (0x528)
	struct FRotator CallFunc_MakeRotator_ReturnValue_6;  // 0x530 (0x530)
	struct FVector CallFunc_SetTransform_ShootLocation_Output_6;  // 0x548 (0x548)
	struct FRotator CallFunc_SetTransform_ShootRotation_Output_6;  // 0x560 (0x560)
	double CallFunc_Add_DoubleDouble_ReturnValue_6;  // 0x578 (0x578)
	struct AActor* K2Node_CustomEvent_ProjectileActor_5;  // 0x580 (0x580)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Interval_7;  // 0x588 (0x588)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Final_Y_Angle_7;  // 0x590 (0x590)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Final_Z_Angle_7;  // 0x598 (0x598)
	struct FRotator CallFunc_MakeRotator_ReturnValue_7;  // 0x5A0 (0x5A0)
	struct FVector CallFunc_SetTransform_ShootLocation_Output_7;  // 0x5B8 (0x5B8)
	struct FRotator CallFunc_SetTransform_ShootRotation_Output_7;  // 0x5D0 (0x5D0)
	double CallFunc_Add_DoubleDouble_ReturnValue_7;  // 0x5E8 (0x5E8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_9;  // 0x5F0 (0x5F0)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Interval_8;  // 0x600 (0x600)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Final_Y_Angle_8;  // 0x608 (0x608)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Final_Z_Angle_8;  // 0x610 (0x610)
	struct FRotator CallFunc_MakeRotator_ReturnValue_8;  // 0x618 (0x618)
	struct FVector CallFunc_SetTransform_ShootLocation_Output_8;  // 0x630 (0x630)
	struct FRotator CallFunc_SetTransform_ShootRotation_Output_8;  // 0x648 (0x648)
	double CallFunc_Add_DoubleDouble_ReturnValue_8;  // 0x660 (0x660)
	struct AActor* Temp_object_Variable_9;  // 0x668 (0x668)
	struct AProjectileActor* CallFunc_SetSpec_ProjectileActorOutput_9;  // 0x670 (0x670)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Interval_9;  // 0x678 (0x678)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Final_Y_Angle_9;  // 0x680 (0x680)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Final_Z_Angle_9;  // 0x688 (0x688)
	struct FRotator CallFunc_MakeRotator_ReturnValue_9;  // 0x690 (0x690)
	struct FVector CallFunc_SetTransform_ShootLocation_Output_9;  // 0x6A8 (0x6A8)
	struct FRotator CallFunc_SetTransform_ShootRotation_Output_9;  // 0x6C0 (0x6C0)
	double CallFunc_Add_DoubleDouble_ReturnValue_9;  // 0x6D8 (0x6D8)
	struct AActor* K2Node_CustomEvent_ProjectileActor_10;  // 0x6E0 (0x6E0)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Interval_10;  // 0x6E8 (0x6E8)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Final_Y_Angle_10;  // 0x6F0 (0x6F0)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Final_Z_Angle_10;  // 0x6F8 (0x6F8)
	struct FRotator CallFunc_MakeRotator_ReturnValue_10;  // 0x700 (0x700)
	struct FVector CallFunc_SetTransform_ShootLocation_Output_10;  // 0x718 (0x718)
	struct FRotator CallFunc_SetTransform_ShootRotation_Output_10;  // 0x730 (0x730)
	double CallFunc_Add_DoubleDouble_ReturnValue_10;  // 0x748 (0x748)
	struct FGameplayTag K2Node_Event_EventTag;  // 0x750 (0x750)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x758 (0x758)
	float K2Node_Event_FirePower;  // 0x808 (0x808)
	char pad_2060[4];  // 0x80C (0x80C)
	struct FVector K2Node_Event_StartLocation;  // 0x810 (0x810)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x828 (0x828)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x830 (0x830)
	struct ABP_DCMonsterBase_C* K2Node_DynamicCast_AsBP_DCMonster_Base;  // 0x848 (0x848)
	char pad_2128_1 : 7;  // 0x850 (0x850)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x850 (0x850)
	char pad_2129[15];  // 0x851 (0x851)
	struct FTransform CallFunc_MakeTransform_ReturnValue;  // 0x860 (0x860)
	struct UDCAT_SpawnProjectile* CallFunc_SpawnProjectile_ReturnValue;  // 0x8C0 (0x8C0)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_2;  // 0x8C8 (0x8C8)
	struct FTransform CallFunc_MakeTransform_ReturnValue_2;  // 0x8E0 (0x8E0)
	char pad_2368_1 : 7;  // 0x940 (0x940)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x940 (0x940)
	char pad_2369[7];  // 0x941 (0x941)
	struct UDCAT_SpawnProjectile* CallFunc_SpawnProjectile_ReturnValue_2;  // 0x948 (0x948)
	char pad_2384_1 : 7;  // 0x950 (0x950)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x950 (0x950)
	char pad_2385[7];  // 0x951 (0x951)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_3;  // 0x958 (0x958)
	struct FTransform CallFunc_MakeTransform_ReturnValue_3;  // 0x970 (0x970)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_4;  // 0x9D0 (0x9D0)
	struct UDCAT_SpawnProjectile* CallFunc_SpawnProjectile_ReturnValue_3;  // 0x9E8 (0x9E8)
	struct FTransform CallFunc_MakeTransform_ReturnValue_4;  // 0x9F0 (0x9F0)
	struct UDCAT_SpawnProjectile* CallFunc_SpawnProjectile_ReturnValue_4;  // 0xA50 (0xA50)
	char pad_2648_1 : 7;  // 0xA58 (0xA58)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0xA58 (0xA58)
	char pad_2649_1 : 7;  // 0xA59 (0xA59)
	bool CallFunc_IsValid_ReturnValue_5 : 1;  // 0xA59 (0xA59)
	char pad_2650[6];  // 0xA5A (0xA5A)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_5;  // 0xA60 (0xA60)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_6;  // 0xA78 (0xA78)
	struct FTransform CallFunc_MakeTransform_ReturnValue_5;  // 0xA90 (0xA90)
	struct FTransform CallFunc_MakeTransform_ReturnValue_6;  // 0xAF0 (0xAF0)
	struct UDCAT_SpawnProjectile* CallFunc_SpawnProjectile_ReturnValue_5;  // 0xB50 (0xB50)
	struct UDCAT_SpawnProjectile* CallFunc_SpawnProjectile_ReturnValue_6;  // 0xB58 (0xB58)
	char pad_2912_1 : 7;  // 0xB60 (0xB60)
	bool CallFunc_IsValid_ReturnValue_6 : 1;  // 0xB60 (0xB60)
	char pad_2913_1 : 7;  // 0xB61 (0xB61)
	bool CallFunc_IsValid_ReturnValue_7 : 1;  // 0xB61 (0xB61)
	char pad_2914[6];  // 0xB62 (0xB62)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_7;  // 0xB68 (0xB68)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_8;  // 0xB80 (0xB80)
	char pad_2968[8];  // 0xB98 (0xB98)
	struct FTransform CallFunc_MakeTransform_ReturnValue_7;  // 0xBA0 (0xBA0)
	struct FTransform CallFunc_MakeTransform_ReturnValue_8;  // 0xC00 (0xC00)
	struct UDCAT_SpawnProjectile* CallFunc_SpawnProjectile_ReturnValue_7;  // 0xC60 (0xC60)
	struct UDCAT_SpawnProjectile* CallFunc_SpawnProjectile_ReturnValue_8;  // 0xC68 (0xC68)
	char pad_3184_1 : 7;  // 0xC70 (0xC70)
	bool CallFunc_IsValid_ReturnValue_8 : 1;  // 0xC70 (0xC70)
	char pad_3185_1 : 7;  // 0xC71 (0xC71)
	bool CallFunc_IsValid_ReturnValue_9 : 1;  // 0xC71 (0xC71)
	char pad_3186[6];  // 0xC72 (0xC72)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_9;  // 0xC78 (0xC78)
	struct FTransform CallFunc_MakeTransform_ReturnValue_9;  // 0xC90 (0xC90)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_10;  // 0xCF0 (0xCF0)
	struct UDCAT_SpawnProjectile* CallFunc_SpawnProjectile_ReturnValue_9;  // 0xD08 (0xD08)
	struct FTransform CallFunc_MakeTransform_ReturnValue_10;  // 0xD10 (0xD10)
	struct UDCAT_SpawnProjectile* CallFunc_SpawnProjectile_ReturnValue_10;  // 0xD70 (0xD70)
	char pad_3448_1 : 7;  // 0xD78 (0xD78)
	bool CallFunc_IsValid_ReturnValue_10 : 1;  // 0xD78 (0xD78)
	char pad_3449_1 : 7;  // 0xD79 (0xD79)
	bool CallFunc_IsValid_ReturnValue_11 : 1;  // 0xD79 (0xD79)
	char pad_3450[6];  // 0xD7A (0xD7A)
	struct AActor* Temp_object_Variable_10;  // 0xD80 (0xD80)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0xD88 (0xD88)
	struct AProjectileActor* CallFunc_SetSpec_ProjectileActorOutput_10;  // 0xE38 (0xE38)
	struct UDCAT_RotateToActor* CallFunc_RotateToActor_ReturnValue;  // 0xE40 (0xE40)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_10;  // 0xE48 (0xE48)
	char pad_3672_1 : 7;  // 0xE58 (0xE58)
	bool CallFunc_IsValid_ReturnValue_12 : 1;  // 0xE58 (0xE58)
	char pad_3673_1 : 7;  // 0xE59 (0xE59)
	bool CallFunc_IsValid_ReturnValue_13 : 1;  // 0xE59 (0xE59)
	char pad_3674[6];  // 0xE5A (0xE5A)
	struct AActor* K2Node_CustomEvent_ProjectileActor_6;  // 0xE60 (0xE60)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0xE68 (0xE68)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0xE70 (0xE70)
	struct UObject* CallFunc_GetValueAsObject_ReturnValue;  // 0xE78 (0xE78)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0xE80 (0xE80)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0xE88 (0xE88)
	char pad_3728_1 : 7;  // 0xE90 (0xE90)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0xE90 (0xE90)
	char pad_3729[7];  // 0xE91 (0xE91)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0xE98 (0xE98)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0xEB0 (0xEB0)
	double Temp_real_Variable_10;  // 0xEC8 (0xEC8)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue;  // 0xED0 (0xED0)
	float CallFunc_BreakRotator_Roll;  // 0xEE8 (0xEE8)
	float CallFunc_BreakRotator_Pitch;  // 0xEEC (0xEEC)
	float CallFunc_BreakRotator_Yaw;  // 0xEF0 (0xEF0)
	char pad_3828_1 : 7;  // 0xEF4 (0xEF4)
	bool CallFunc_InRange_FloatFloat_ReturnValue : 1;  // 0xEF4 (0xEF4)
	char pad_3829[3];  // 0xEF5 (0xEF5)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_11;  // 0xEF8 (0xEF8)
	float CallFunc_Delay_Duration_ImplicitCast;  // 0xF08 (0xF08)
	float CallFunc_MakeRotator_Pitch_ImplicitCast;  // 0xF0C (0xF0C)
	float CallFunc_MakeRotator_Yaw_ImplicitCast;  // 0xF10 (0xF10)
	float CallFunc_Delay_Duration_ImplicitCast_2;  // 0xF14 (0xF14)
	float CallFunc_MakeRotator_Pitch_ImplicitCast_2;  // 0xF18 (0xF18)
	float CallFunc_MakeRotator_Yaw_ImplicitCast_2;  // 0xF1C (0xF1C)
	float CallFunc_Delay_Duration_ImplicitCast_3;  // 0xF20 (0xF20)
	float CallFunc_MakeRotator_Pitch_ImplicitCast_3;  // 0xF24 (0xF24)
	float CallFunc_MakeRotator_Yaw_ImplicitCast_3;  // 0xF28 (0xF28)
	float CallFunc_Delay_Duration_ImplicitCast_4;  // 0xF2C (0xF2C)
	float CallFunc_MakeRotator_Pitch_ImplicitCast_4;  // 0xF30 (0xF30)
	float CallFunc_MakeRotator_Yaw_ImplicitCast_4;  // 0xF34 (0xF34)
	float CallFunc_Delay_Duration_ImplicitCast_5;  // 0xF38 (0xF38)
	float CallFunc_MakeRotator_Pitch_ImplicitCast_5;  // 0xF3C (0xF3C)
	float CallFunc_MakeRotator_Yaw_ImplicitCast_5;  // 0xF40 (0xF40)
	float CallFunc_Delay_Duration_ImplicitCast_6;  // 0xF44 (0xF44)
	float CallFunc_MakeRotator_Pitch_ImplicitCast_6;  // 0xF48 (0xF48)
	float CallFunc_MakeRotator_Yaw_ImplicitCast_6;  // 0xF4C (0xF4C)
	float CallFunc_Delay_Duration_ImplicitCast_7;  // 0xF50 (0xF50)
	float CallFunc_MakeRotator_Pitch_ImplicitCast_7;  // 0xF54 (0xF54)
	float CallFunc_MakeRotator_Yaw_ImplicitCast_7;  // 0xF58 (0xF58)
	float CallFunc_Delay_Duration_ImplicitCast_8;  // 0xF5C (0xF5C)
	float CallFunc_MakeRotator_Pitch_ImplicitCast_8;  // 0xF60 (0xF60)
	float CallFunc_MakeRotator_Yaw_ImplicitCast_8;  // 0xF64 (0xF64)
	float CallFunc_Delay_Duration_ImplicitCast_9;  // 0xF68 (0xF68)
	float CallFunc_MakeRotator_Pitch_ImplicitCast_9;  // 0xF6C (0xF6C)
	float CallFunc_MakeRotator_Yaw_ImplicitCast_9;  // 0xF70 (0xF70)
	float CallFunc_Delay_Duration_ImplicitCast_10;  // 0xF74 (0xF74)
	float CallFunc_MakeRotator_Pitch_ImplicitCast_10;  // 0xF78 (0xF78)
	float CallFunc_MakeRotator_Yaw_ImplicitCast_10;  // 0xF7C (0xF7C)
	double CallFunc_InRange_FloatFloat_Value_ImplicitCast;  // 0xF80 (0xF80)


}; 
 
 // Function GA_GiantDragonfly_Nightmare_Attack.GA_GiantDragonfly_Nightmare_Attack_C.OnSuccess_9E9F6B0B4BA065DB8AF30BBB08113BB4
struct FOnSuccess_9E9F6B0B4BA065DB8AF30BBB08113BB4
{
	struct AActor* ProjectileActor;  // 0x0 (0x0)


}; 
 
 // Function GA_GiantDragonfly_Nightmare_Attack.GA_GiantDragonfly_Nightmare_Attack_C.Get Angle And Interval Per Shot Num
struct FGet Angle And Interval Per Shot Num
{
	double ShotNum;  // 0x0 (0x0)
	double Interval;  // 0x8 (0x8)
	double Final Y Angle;  // 0x10 (0x10)
	double Final Z Angle;  // 0x18 (0x18)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x20 (0x20)
	double CallFunc_Multiply_DoubleDouble_ReturnValue;  // 0x28 (0x28)
	double CallFunc_Multiply_DoubleDouble_ReturnValue_2;  // 0x30 (0x30)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x38 (0x38)
	double CallFunc_Multiply_DoubleDouble_ReturnValue_3;  // 0x40 (0x40)
	double CallFunc_Add_DoubleDouble_ReturnValue_2;  // 0x48 (0x48)


}; 
 
 // Function GA_GiantDragonfly_Nightmare_Attack.GA_GiantDragonfly_Nightmare_Attack_C.OnSuccess_9E9F6B0B4BA065DB8AF30BBB05DFD7FC
struct FOnSuccess_9E9F6B0B4BA065DB8AF30BBB05DFD7FC
{
	struct AActor* ProjectileActor;  // 0x0 (0x0)


}; 
 
 // Function GA_GiantDragonfly_Nightmare_Attack.GA_GiantDragonfly_Nightmare_Attack_C.OnSuccess_9E9F6B0B4BA065DB8AF30BBB5D40B8EA
struct FOnSuccess_9E9F6B0B4BA065DB8AF30BBB5D40B8EA
{
	struct AActor* ProjectileActor;  // 0x0 (0x0)


}; 
 
 // Function GA_GiantDragonfly_Nightmare_Attack.GA_GiantDragonfly_Nightmare_Attack_C.OnSuccess_9E9F6B0B4BA065DB8AF30BBB5E67680C
struct FOnSuccess_9E9F6B0B4BA065DB8AF30BBB5E67680C
{
	struct AActor* ProjectileActor;  // 0x0 (0x0)


}; 
 
 // Function GA_GiantDragonfly_Nightmare_Attack.GA_GiantDragonfly_Nightmare_Attack_C.OnSuccess_9E9F6B0B4BA065DB8AF30BBB7AB1E0EC
struct FOnSuccess_9E9F6B0B4BA065DB8AF30BBB7AB1E0EC
{
	struct AActor* ProjectileActor;  // 0x0 (0x0)


}; 
 
 // Function GA_GiantDragonfly_Nightmare_Attack.GA_GiantDragonfly_Nightmare_Attack_C.OnSuccess_9E9F6B0B4BA065DB8AF30BBBBFFEABE2
struct FOnSuccess_9E9F6B0B4BA065DB8AF30BBBBFFEABE2
{
	struct AActor* ProjectileActor;  // 0x0 (0x0)


}; 
 
 // Function GA_GiantDragonfly_Nightmare_Attack.GA_GiantDragonfly_Nightmare_Attack_C.OnSuccess_9E9F6B0B4BA065DB8AF30BBBCAD85734
struct FOnSuccess_9E9F6B0B4BA065DB8AF30BBBCAD85734
{
	struct AActor* ProjectileActor;  // 0x0 (0x0)


}; 
 
 // Function GA_GiantDragonfly_Nightmare_Attack.GA_GiantDragonfly_Nightmare_Attack_C.OnSuccess_9E9F6B0B4BA065DB8AF30BBBE92421A0
struct FOnSuccess_9E9F6B0B4BA065DB8AF30BBBE92421A0
{
	struct AActor* ProjectileActor;  // 0x0 (0x0)


}; 
 
 // Function GA_GiantDragonfly_Nightmare_Attack.GA_GiantDragonfly_Nightmare_Attack_C.OnSuccess_9E9F6B0B4BA065DB8AF30BBBE9D06A9E
struct FOnSuccess_9E9F6B0B4BA065DB8AF30BBBE9D06A9E
{
	struct AActor* ProjectileActor;  // 0x0 (0x0)


}; 
 
 