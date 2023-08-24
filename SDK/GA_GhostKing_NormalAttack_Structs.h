#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_GhostKing_NormalAttack.GA_GhostKing_NormalAttack_C.OnSuccess_C7A010454D363CFFE342A88C155A0B81
struct FOnSuccess_C7A010454D363CFFE342A88C155A0B81
{
	struct AActor* ProjectileActor;  // 0x0 (0x0)


}; 
 
 // Function GA_GhostKing_NormalAttack.GA_GhostKing_NormalAttack_C.CreateProjectiles
// Size: 0xD8(Inherited: 0xD8)
struct FCreateProjectiles : FCreateProjectiles
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)
	float FirePower;  // 0xB8 (0xB8)
	struct FVector StartLocation;  // 0xC0 (0xC0)


}; 
 
 // Function GA_GhostKing_NormalAttack.GA_GhostKing_NormalAttack_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_GhostKing_NormalAttack.GA_GhostKing_NormalAttack_C.Set Variables
struct FSet Variables
{
	struct FGameplayEventData Trigger Event Data;  // 0x0 (0x0)
	double CallFunc_Multiply_DoubleDouble_ReturnValue;  // 0xB0 (0xB0)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0xB8 (0xB8)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xC0 (0xC0)
	char pad_193[7];  // 0xC1 (0xC1)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0xC8 (0xC8)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0xD0 (0xD0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xD8 (0xD8)
	struct ABP_GhostKing_Common_C* K2Node_DynamicCast_AsBP_Ghost_King_Common;  // 0xE0 (0xE0)
	char pad_232_1 : 7;  // 0xE8 (0xE8)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0xE8 (0xE8)


}; 
 
 // Function GA_GhostKing_NormalAttack.GA_GhostKing_NormalAttack_C.EventReceived_442DA6E34A7324E0185013B9B8192AE7
struct FEventReceived_442DA6E34A7324E0185013B9B8192AE7
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_GhostKing_NormalAttack.GA_GhostKing_NormalAttack_C.EventReceived_808334F54FC668822F461982A5C1F828
struct FEventReceived_808334F54FC668822F461982A5C1F828
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_GhostKing_NormalAttack.GA_GhostKing_NormalAttack_C.ExecuteUbergraph_GA_GhostKing_NormalAttack
struct FExecuteUbergraph_GA_GhostKing_NormalAttack
{
	int32_t EntryPoint;  // 0x0 (0x0)
	int32_t Temp_int_Array_Index_Variable;  // 0x4 (0x4)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x8 (0x8)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0xC (0xC)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0x10 (0x10)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0x18 (0x18)
	int32_t Temp_int_Variable;  // 0xC8 (0xC8)
	char pad_204_1 : 7;  // 0xCC (0xCC)
	bool CallFunc_LessEqual_IntInt_ReturnValue : 1;  // 0xCC (0xCC)
	char pad_205[3];  // 0xCD (0xCD)
	int32_t CallFunc_Add_IntInt_ReturnValue_2;  // 0xD0 (0xD0)
	char pad_212[4];  // 0xD4 (0xD4)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0xD8 (0xD8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x188 (0x188)
	struct UDCAT_RotateToActor* CallFunc_RotateToActor_ReturnValue;  // 0x198 (0x198)
	char pad_416_1 : 7;  // 0x1A0 (0x1A0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x1A0 (0x1A0)
	char pad_417[7];  // 0x1A1 (0x1A1)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x1A8 (0x1A8)
	struct FGameplayEventData Temp_struct_Variable;  // 0x1B0 (0x1B0)
	char pad_608_1 : 7;  // 0x260 (0x260)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x260 (0x260)
	char pad_609[7];  // 0x261 (0x261)
	struct FHitResult CallFunc_GetHitResultFromTargetData_ReturnValue;  // 0x268 (0x268)
	char pad_848_1 : 7;  // 0x350 (0x350)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x350 (0x350)
	char pad_849_1 : 7;  // 0x351 (0x351)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x351 (0x351)
	char pad_850[2];  // 0x352 (0x352)
	float CallFunc_BreakHitResult_Time;  // 0x354 (0x354)
	float CallFunc_BreakHitResult_Distance;  // 0x358 (0x358)
	char pad_860[4];  // 0x35C (0x35C)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x360 (0x360)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x378 (0x378)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x390 (0x390)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x3A8 (0x3A8)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x3C0 (0x3C0)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x3C8 (0x3C8)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x3D0 (0x3D0)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x3D8 (0x3D8)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x3E0 (0x3E0)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x3E8 (0x3E8)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x3EC (0x3EC)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x3F0 (0x3F0)
	char pad_1012[4];  // 0x3F4 (0x3F4)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x3F8 (0x3F8)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x410 (0x410)
	struct FGameplayTag K2Node_Event_EventTag;  // 0x428 (0x428)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x430 (0x430)
	float K2Node_Event_FirePower;  // 0x4E0 (0x4E0)
	char pad_1252[4];  // 0x4E4 (0x4E4)
	struct FVector K2Node_Event_StartLocation;  // 0x4E8 (0x4E8)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x500 (0x500)
	char pad_1288_1 : 7;  // 0x508 (0x508)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x508 (0x508)
	char pad_1289[7];  // 0x509 (0x509)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x510 (0x510)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x5C0 (0x5C0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x5D0 (0x5D0)
	struct AActor* Temp_object_Variable;  // 0x5D8 (0x5D8)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x5E0 (0x5E0)
	char pad_1680_1 : 7;  // 0x690 (0x690)
	bool CallFunc_Set_Projectile_Spec_and_Options_Result : 1;  // 0x690 (0x690)
	char pad_1681[7];  // 0x691 (0x691)
	struct AProjectileActor* CallFunc_Set_Projectile_Spec_and_Options_Projectile_Actor;  // 0x698 (0x698)
	double CallFunc_Multiply_DoubleDouble_ReturnValue;  // 0x6A0 (0x6A0)
	double CallFunc_Multiply_DoubleDouble_ReturnValue_2;  // 0x6A8 (0x6A8)
	double CallFunc_Multiply_DoubleDouble_ReturnValue_3;  // 0x6B0 (0x6B0)
	struct AActor* K2Node_CustomEvent_ProjectileActor;  // 0x6B8 (0x6B8)
	struct TArray<struct FVector> K2Node_MakeArray_Array;  // 0x6C0 (0x6C0)
	int32_t Temp_int_Variable_2;  // 0x6D0 (0x6D0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x6D4 (0x6D4)
	char pad_1764[4];  // 0x6E4 (0x6E4)
	struct FRotator CallFunc_Array_Get_Item;  // 0x6E8 (0x6E8)
	struct TArray<struct FRotator> K2Node_MakeArray_Array_2;  // 0x700 (0x700)
	char pad_1808_1 : 7;  // 0x710 (0x710)
	bool CallFunc_Get_Projectile_Relative_Spawn_Transform_Result : 1;  // 0x710 (0x710)
	char pad_1809[7];  // 0x711 (0x711)
	struct TArray<struct FVector> CallFunc_Get_Projectile_Relative_Spawn_Transform_Spawn_Transform_Location;  // 0x718 (0x718)
	struct TArray<struct FRotator> CallFunc_Get_Projectile_Relative_Spawn_Transform_Spawn_Transform_Rotation;  // 0x728 (0x728)
	struct FVector CallFunc_GetHitBoxLocation_Location;  // 0x738 (0x738)
	char pad_1872_1 : 7;  // 0x750 (0x750)
	bool CallFunc_GetHitBoxLocation_ReturnValue : 1;  // 0x750 (0x750)
	char pad_1873[7];  // 0x751 (0x751)
	struct FRotator CallFunc_Array_Get_Item_2;  // 0x758 (0x758)
	struct FVector CallFunc_Array_Get_Item_3;  // 0x770 (0x770)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x788 (0x788)
	char pad_1932[4];  // 0x78C (0x78C)
	struct FTransform CallFunc_MakeTransform_ReturnValue;  // 0x790 (0x790)
	char pad_2032_1 : 7;  // 0x7F0 (0x7F0)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x7F0 (0x7F0)
	char pad_2033[7];  // 0x7F1 (0x7F1)
	struct UDCAT_SpawnProjectile* CallFunc_SpawnProjectile_ReturnValue;  // 0x7F8 (0x7F8)
	char pad_2048_1 : 7;  // 0x800 (0x800)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x800 (0x800)
	char pad_2049[3];  // 0x801 (0x801)
	int32_t CallFunc_Add_IntInt_ReturnValue_3;  // 0x804 (0x804)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x808 (0x808)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x810 (0x810)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0x828 (0x828)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue;  // 0x830 (0x830)
	float CallFunc_BreakRotator_Roll;  // 0x848 (0x848)
	float CallFunc_BreakRotator_Pitch;  // 0x84C (0x84C)
	float CallFunc_BreakRotator_Yaw;  // 0x850 (0x850)
	char pad_2132_1 : 7;  // 0x854 (0x854)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x854 (0x854)
	char pad_2133_1 : 7;  // 0x855 (0x855)
	bool CallFunc_IsValid_ReturnValue_5 : 1;  // 0x855 (0x855)
	char pad_2134[2];  // 0x856 (0x856)
	struct FGameplayTag Temp_struct_Variable_2;  // 0x858 (0x858)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue;  // 0x860 (0x860)
	char pad_2168_1 : 7;  // 0x878 (0x878)
	bool CallFunc_MatchesTag_ReturnValue : 1;  // 0x878 (0x878)
	char pad_2169[3];  // 0x879 (0x879)
	float CallFunc_BreakRotator_Roll_2;  // 0x87C (0x87C)
	float CallFunc_BreakRotator_Pitch_2;  // 0x880 (0x880)
	float CallFunc_BreakRotator_Yaw_2;  // 0x884 (0x884)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x888 (0x888)
	double CallFunc_Subtract_DoubleDouble_ReturnValue_2;  // 0x890 (0x890)
	double CallFunc_Add_DoubleDouble_ReturnValue_2;  // 0x898 (0x898)
	double CallFunc_Subtract_DoubleDouble_ReturnValue_3;  // 0x8A0 (0x8A0)
	struct FGameplayEventData Temp_struct_Variable_3;  // 0x8A8 (0x8A8)
	struct FRotator CallFunc_MakeRotator_ReturnValue;  // 0x958 (0x958)
	float CallFunc_Delay_Duration_ImplicitCast;  // 0x970 (0x970)
	float CallFunc_Delay_Duration_ImplicitCast_2;  // 0x974 (0x974)
	float CallFunc_Delay_Duration_ImplicitCast_3;  // 0x978 (0x978)
	float CallFunc_Delay_Duration_ImplicitCast_4;  // 0x97C (0x97C)
	double CallFunc_Subtract_DoubleDouble_A_ImplicitCast;  // 0x980 (0x980)
	double CallFunc_Subtract_DoubleDouble_A_ImplicitCast_2;  // 0x988 (0x988)
	double CallFunc_Subtract_DoubleDouble_A_ImplicitCast_3;  // 0x990 (0x990)
	double CallFunc_Subtract_DoubleDouble_B_ImplicitCast;  // 0x998 (0x998)
	double CallFunc_Subtract_DoubleDouble_B_ImplicitCast_2;  // 0x9A0 (0x9A0)
	double CallFunc_Subtract_DoubleDouble_B_ImplicitCast_3;  // 0x9A8 (0x9A8)
	float CallFunc_MakeRotator_Pitch_ImplicitCast;  // 0x9B0 (0x9B0)
	float CallFunc_MakeRotator_Yaw_ImplicitCast;  // 0x9B4 (0x9B4)
	float CallFunc_MakeRotator_Roll_ImplicitCast;  // 0x9B8 (0x9B8)


}; 
 
 