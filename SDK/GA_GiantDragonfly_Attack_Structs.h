#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_GiantDragonfly_Attack.GA_GiantDragonfly_Attack_C.CreateProjectiles
// Size: 0xD8(Inherited: 0xD8)
struct FCreateProjectiles : FCreateProjectiles
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)
	float FirePower;  // 0xB8 (0xB8)
	struct FVector StartLocation;  // 0xC0 (0xC0)


}; 
 
 // Function GA_GiantDragonfly_Attack.GA_GiantDragonfly_Attack_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_GiantDragonfly_Attack.GA_GiantDragonfly_Attack_C.EventReceived_D5ACA6FE440316AD030BBD9DAFC03B8C
struct FEventReceived_D5ACA6FE440316AD030BBD9DAFC03B8C
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_GiantDragonfly_Attack.GA_GiantDragonfly_Attack_C.OnSuccess_8D0746724A5BB8C55BD729A85796F151
struct FOnSuccess_8D0746724A5BB8C55BD729A85796F151
{
	struct AActor* ProjectileActor;  // 0x0 (0x0)


}; 
 
 // Function GA_GiantDragonfly_Attack.GA_GiantDragonfly_Attack_C.ExecuteUbergraph_GA_GiantDragonfly_Attack
struct FExecuteUbergraph_GA_GiantDragonfly_Attack
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x10 (0x10)
	struct AActor* Temp_object_Variable;  // 0x28 (0x28)
	struct AProjectileActor* CallFunc_SetSpec_ProjectileActorOutput;  // 0x30 (0x30)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x38 (0x38)
	struct AActor* K2Node_CustomEvent_ProjectileActor_4;  // 0x48 (0x48)
	struct AActor* Temp_object_Variable_2;  // 0x50 (0x50)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x58 (0x58)
	struct AProjectileActor* CallFunc_SetSpec_ProjectileActorOutput_2;  // 0x68 (0x68)
	struct AActor* K2Node_CustomEvent_ProjectileActor_3;  // 0x70 (0x70)
	struct AActor* Temp_object_Variable_3;  // 0x78 (0x78)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x80 (0x80)
	struct AProjectileActor* CallFunc_SetSpec_ProjectileActorOutput_3;  // 0x90 (0x90)
	struct AActor* K2Node_CustomEvent_ProjectileActor_2;  // 0x98 (0x98)
	struct AActor* Temp_object_Variable_4;  // 0xA0 (0xA0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4;  // 0xA8 (0xA8)
	struct AProjectileActor* CallFunc_SetSpec_ProjectileActorOutput_4;  // 0xB8 (0xB8)
	struct AActor* K2Node_CustomEvent_ProjectileActor;  // 0xC0 (0xC0)
	struct AActor* Temp_object_Variable_5;  // 0xC8 (0xC8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_5;  // 0xD0 (0xD0)
	struct AProjectileActor* CallFunc_SetSpec_ProjectileActorOutput_5;  // 0xE0 (0xE0)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0xE8 (0xE8)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0xF0 (0xF0)
	struct FGameplayEventData Temp_struct_Variable;  // 0x1A0 (0x1A0)
	struct FGameplayTag Temp_struct_Variable_2;  // 0x250 (0x250)
	char pad_600_1 : 7;  // 0x258 (0x258)
	bool CallFunc_MatchesTag_ReturnValue : 1;  // 0x258 (0x258)
	char pad_601[7];  // 0x259 (0x259)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0x260 (0x260)
	char pad_616_1 : 7;  // 0x268 (0x268)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x268 (0x268)
	char pad_617[3];  // 0x269 (0x269)
	struct FGameplayTag K2Node_Event_EventTag;  // 0x26C (0x26C)
	char pad_628[4];  // 0x274 (0x274)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x278 (0x278)
	float K2Node_Event_FirePower;  // 0x328 (0x328)
	char pad_812[4];  // 0x32C (0x32C)
	struct FVector K2Node_Event_StartLocation;  // 0x330 (0x330)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x348 (0x348)
	struct ABP_DCMonsterBase_C* K2Node_DynamicCast_AsBP_DCMonster_Base;  // 0x350 (0x350)
	char pad_856_1 : 7;  // 0x358 (0x358)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x358 (0x358)
	char pad_857[7];  // 0x359 (0x359)
	struct AActor* K2Node_CustomEvent_ProjectileActor_5;  // 0x360 (0x360)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_6;  // 0x368 (0x368)
	struct AActor* K2Node_CustomEvent_ProjectileActor_6;  // 0x378 (0x378)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x380 (0x380)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_7;  // 0x430 (0x430)
	struct AActor* Temp_object_Variable_6;  // 0x440 (0x440)
	struct UDCAT_RotateToActor* CallFunc_RotateToActor_ReturnValue;  // 0x448 (0x448)
	char pad_1104_1 : 7;  // 0x450 (0x450)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x450 (0x450)
	char pad_1105_1 : 7;  // 0x451 (0x451)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x451 (0x451)
	char pad_1106[6];  // 0x452 (0x452)
	struct AProjectileActor* CallFunc_SetSpec_ProjectileActorOutput_6;  // 0x458 (0x458)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Interval;  // 0x460 (0x460)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Final_Y_Angle;  // 0x468 (0x468)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Final_Z_Angle;  // 0x470 (0x470)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Interval_2;  // 0x478 (0x478)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Final_Y_Angle_2;  // 0x480 (0x480)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Final_Z_Angle_2;  // 0x488 (0x488)
	struct FRotator CallFunc_MakeRotator_ReturnValue;  // 0x490 (0x490)
	struct FRotator CallFunc_MakeRotator_ReturnValue_2;  // 0x4A8 (0x4A8)
	struct FVector CallFunc_SetTransform_ShootLocation_Output;  // 0x4C0 (0x4C0)
	struct FRotator CallFunc_SetTransform_ShootRotation_Output;  // 0x4D8 (0x4D8)
	struct FVector CallFunc_SetTransform_ShootLocation_Output_2;  // 0x4F0 (0x4F0)
	struct FRotator CallFunc_SetTransform_ShootRotation_Output_2;  // 0x508 (0x508)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x520 (0x520)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_2;  // 0x538 (0x538)
	struct FTransform CallFunc_MakeTransform_ReturnValue;  // 0x550 (0x550)
	struct FTransform CallFunc_MakeTransform_ReturnValue_2;  // 0x5B0 (0x5B0)
	struct UDCAT_SpawnProjectile* CallFunc_SpawnProjectile_ReturnValue;  // 0x610 (0x610)
	struct UDCAT_SpawnProjectile* CallFunc_SpawnProjectile_ReturnValue_2;  // 0x618 (0x618)
	char pad_1568_1 : 7;  // 0x620 (0x620)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x620 (0x620)
	char pad_1569_1 : 7;  // 0x621 (0x621)
	bool CallFunc_IsValid_ReturnValue_5 : 1;  // 0x621 (0x621)
	char pad_1570[6];  // 0x622 (0x622)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Interval_3;  // 0x628 (0x628)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Final_Y_Angle_3;  // 0x630 (0x630)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Final_Z_Angle_3;  // 0x638 (0x638)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Interval_4;  // 0x640 (0x640)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Final_Y_Angle_4;  // 0x648 (0x648)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Final_Z_Angle_4;  // 0x650 (0x650)
	struct FRotator CallFunc_MakeRotator_ReturnValue_3;  // 0x658 (0x658)
	struct FRotator CallFunc_MakeRotator_ReturnValue_4;  // 0x670 (0x670)
	struct FVector CallFunc_SetTransform_ShootLocation_Output_3;  // 0x688 (0x688)
	struct FRotator CallFunc_SetTransform_ShootRotation_Output_3;  // 0x6A0 (0x6A0)
	struct FVector CallFunc_SetTransform_ShootLocation_Output_4;  // 0x6B8 (0x6B8)
	struct FRotator CallFunc_SetTransform_ShootRotation_Output_4;  // 0x6D0 (0x6D0)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_3;  // 0x6E8 (0x6E8)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_4;  // 0x700 (0x700)
	char pad_1816[8];  // 0x718 (0x718)
	struct FTransform CallFunc_MakeTransform_ReturnValue_3;  // 0x720 (0x720)
	struct FTransform CallFunc_MakeTransform_ReturnValue_4;  // 0x780 (0x780)
	struct UDCAT_SpawnProjectile* CallFunc_SpawnProjectile_ReturnValue_3;  // 0x7E0 (0x7E0)
	struct UDCAT_SpawnProjectile* CallFunc_SpawnProjectile_ReturnValue_4;  // 0x7E8 (0x7E8)
	char pad_2032_1 : 7;  // 0x7F0 (0x7F0)
	bool CallFunc_IsValid_ReturnValue_6 : 1;  // 0x7F0 (0x7F0)
	char pad_2033_1 : 7;  // 0x7F1 (0x7F1)
	bool CallFunc_IsValid_ReturnValue_7 : 1;  // 0x7F1 (0x7F1)
	char pad_2034[6];  // 0x7F2 (0x7F2)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Interval_5;  // 0x7F8 (0x7F8)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Final_Y_Angle_5;  // 0x800 (0x800)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Final_Z_Angle_5;  // 0x808 (0x808)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Interval_6;  // 0x810 (0x810)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Final_Y_Angle_6;  // 0x818 (0x818)
	double CallFunc_Get_Angle_And_Interval_Per_Shot_Num_Final_Z_Angle_6;  // 0x820 (0x820)
	struct FRotator CallFunc_MakeRotator_ReturnValue_5;  // 0x828 (0x828)
	struct FRotator CallFunc_MakeRotator_ReturnValue_6;  // 0x840 (0x840)
	struct FVector CallFunc_SetTransform_ShootLocation_Output_5;  // 0x858 (0x858)
	struct FRotator CallFunc_SetTransform_ShootRotation_Output_5;  // 0x870 (0x870)
	struct FVector CallFunc_SetTransform_ShootLocation_Output_6;  // 0x888 (0x888)
	struct FRotator CallFunc_SetTransform_ShootRotation_Output_6;  // 0x8A0 (0x8A0)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_5;  // 0x8B8 (0x8B8)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_6;  // 0x8D0 (0x8D0)
	char pad_2280[8];  // 0x8E8 (0x8E8)
	struct FTransform CallFunc_MakeTransform_ReturnValue_5;  // 0x8F0 (0x8F0)
	struct FTransform CallFunc_MakeTransform_ReturnValue_6;  // 0x950 (0x950)
	struct UDCAT_SpawnProjectile* CallFunc_SpawnProjectile_ReturnValue_5;  // 0x9B0 (0x9B0)
	struct UDCAT_SpawnProjectile* CallFunc_SpawnProjectile_ReturnValue_6;  // 0x9B8 (0x9B8)
	char pad_2496_1 : 7;  // 0x9C0 (0x9C0)
	bool CallFunc_IsValid_ReturnValue_8 : 1;  // 0x9C0 (0x9C0)
	char pad_2497_1 : 7;  // 0x9C1 (0x9C1)
	bool CallFunc_IsValid_ReturnValue_9 : 1;  // 0x9C1 (0x9C1)
	char pad_2498[6];  // 0x9C2 (0x9C2)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x9C8 (0x9C8)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x9D0 (0x9D0)
	struct UObject* CallFunc_GetValueAsObject_ReturnValue;  // 0x9D8 (0x9D8)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x9E0 (0x9E0)
	char pad_2536_1 : 7;  // 0x9E8 (0x9E8)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x9E8 (0x9E8)
	char pad_2537[7];  // 0x9E9 (0x9E9)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x9F0 (0x9F0)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue;  // 0xA08 (0xA08)
	float CallFunc_BreakRotator_Roll;  // 0xA20 (0xA20)
	float CallFunc_BreakRotator_Pitch;  // 0xA24 (0xA24)
	float CallFunc_BreakRotator_Yaw;  // 0xA28 (0xA28)
	char pad_2604_1 : 7;  // 0xA2C (0xA2C)
	bool CallFunc_InRange_FloatFloat_ReturnValue : 1;  // 0xA2C (0xA2C)
	char pad_2605[3];  // 0xA2D (0xA2D)
	float CallFunc_Delay_Duration_ImplicitCast;  // 0xA30 (0xA30)
	float CallFunc_MakeRotator_Pitch_ImplicitCast;  // 0xA34 (0xA34)
	float CallFunc_MakeRotator_Yaw_ImplicitCast;  // 0xA38 (0xA38)
	float CallFunc_Delay_Duration_ImplicitCast_2;  // 0xA3C (0xA3C)
	float CallFunc_MakeRotator_Pitch_ImplicitCast_2;  // 0xA40 (0xA40)
	float CallFunc_MakeRotator_Yaw_ImplicitCast_2;  // 0xA44 (0xA44)
	float CallFunc_Delay_Duration_ImplicitCast_3;  // 0xA48 (0xA48)
	float CallFunc_MakeRotator_Pitch_ImplicitCast_3;  // 0xA4C (0xA4C)
	float CallFunc_MakeRotator_Yaw_ImplicitCast_3;  // 0xA50 (0xA50)
	float CallFunc_Delay_Duration_ImplicitCast_4;  // 0xA54 (0xA54)
	float CallFunc_MakeRotator_Pitch_ImplicitCast_4;  // 0xA58 (0xA58)
	float CallFunc_MakeRotator_Yaw_ImplicitCast_4;  // 0xA5C (0xA5C)
	float CallFunc_Delay_Duration_ImplicitCast_5;  // 0xA60 (0xA60)
	float CallFunc_MakeRotator_Pitch_ImplicitCast_5;  // 0xA64 (0xA64)
	float CallFunc_MakeRotator_Yaw_ImplicitCast_5;  // 0xA68 (0xA68)
	float CallFunc_Delay_Duration_ImplicitCast_6;  // 0xA6C (0xA6C)
	float CallFunc_MakeRotator_Pitch_ImplicitCast_6;  // 0xA70 (0xA70)
	float CallFunc_MakeRotator_Yaw_ImplicitCast_6;  // 0xA74 (0xA74)
	double CallFunc_InRange_FloatFloat_Value_ImplicitCast;  // 0xA78 (0xA78)


}; 
 
 // Function GA_GiantDragonfly_Attack.GA_GiantDragonfly_Attack_C.OnSuccess_170067C34A65D85FB84E42B93D304C35
struct FOnSuccess_170067C34A65D85FB84E42B93D304C35
{
	struct AActor* ProjectileActor;  // 0x0 (0x0)


}; 
 
 // Function GA_GiantDragonfly_Attack.GA_GiantDragonfly_Attack_C.Get Angle And Interval Per Shot Num
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
 
 // Function GA_GiantDragonfly_Attack.GA_GiantDragonfly_Attack_C.OnSuccess_071F11194890A77D250DD8981AE1965F
struct FOnSuccess_071F11194890A77D250DD8981AE1965F
{
	struct AActor* ProjectileActor;  // 0x0 (0x0)


}; 
 
 // Function GA_GiantDragonfly_Attack.GA_GiantDragonfly_Attack_C.OnSuccess_B006B21D49F0C69A4B3DBFB20E8708E8
struct FOnSuccess_B006B21D49F0C69A4B3DBFB20E8708E8
{
	struct AActor* ProjectileActor;  // 0x0 (0x0)


}; 
 
 // Function GA_GiantDragonfly_Attack.GA_GiantDragonfly_Attack_C.OnSuccess_CDC5EED6459E6038C7E9AF8563E48374
struct FOnSuccess_CDC5EED6459E6038C7E9AF8563E48374
{
	struct AActor* ProjectileActor;  // 0x0 (0x0)


}; 
 
 // Function GA_GiantDragonfly_Attack.GA_GiantDragonfly_Attack_C.OnSuccess_DB727C2149FAF71130EEA6BD7E2097BD
struct FOnSuccess_DB727C2149FAF71130EEA6BD7E2097BD
{
	struct AActor* ProjectileActor;  // 0x0 (0x0)


}; 
 
 