#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_Hellfire.GA_Hellfire_C.ValidData_40C4F9EA4B8157D2AAF165A5EC6D1EBF
struct FValidData_40C4F9EA4B8157D2AAF165A5EC6D1EBF
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 // Function GA_Hellfire.GA_Hellfire_C.AbilityActivated
// Size: 0xB1(Inherited: 0xB8)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)
	char pad_360_1 : 7;  // 0x168 (0x168)
	bool bIsSocketSightBlocked : 1;  // 0xB0 (0xB0)


}; 
 
 // Function GA_Hellfire.GA_Hellfire_C.Cancelled_40C4F9EA4B8157D2AAF165A5EC6D1EBF
struct FCancelled_40C4F9EA4B8157D2AAF165A5EC6D1EBF
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 // Function GA_Hellfire.GA_Hellfire_C.DestroyHellfireActor
struct FDestroyHellfireActor
{
	int32_t Temp_int_Array_Index_Variable;  // 0x0 (0x0)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x4 (0x4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x10 (0x10)
	struct TArray<struct ABP_HellfireProjectile_C*> CallFunc_GetAllActorsOfClass_OutActors;  // 0x18 (0x18)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)
	struct ABP_HellfireProjectile_C* CallFunc_Array_Get_Item;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x38 (0x38)
	char pad_57_1 : 7;  // 0x39 (0x39)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue : 1;  // 0x39 (0x39)


}; 
 
 // Function GA_Hellfire.GA_Hellfire_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_Hellfire.GA_Hellfire_C.ExecuteUbergraph_GA_Hellfire
struct FExecuteUbergraph_GA_Hellfire
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct ABP_HellfireProjectile_C* K2Node_DynamicCast_AsBP_Hellfire_Projectile;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x14 (0x14)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)
	struct FGameplayAbilityTargetDataHandle K2Node_CustomEvent_Data_2;  // 0x28 (0x28)
	struct FGameplayAbilityTargetDataHandle K2Node_CustomEvent_Data;  // 0x50 (0x50)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x78 (0x78)
	struct FGameplayAbilityTargetDataHandle Temp_struct_Variable;  // 0x88 (0x88)
	struct UAbilityTask_WaitTargetData* CallFunc_WaitTargetData_ReturnValue;  // 0xB0 (0xB0)
	char pad_184_1 : 7;  // 0xB8 (0xB8)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0xB8 (0xB8)
	char pad_185[7];  // 0xB9 (0xB9)
	struct AGameplayAbilityTargetActor* CallFunc_BeginSpawningActor_SpawnedActor;  // 0xC0 (0xC0)
	char pad_200_1 : 7;  // 0xC8 (0xC8)
	bool CallFunc_BeginSpawningActor_ReturnValue : 1;  // 0xC8 (0xC8)
	char pad_201_1 : 7;  // 0xC9 (0xC9)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0xC9 (0xC9)
	char pad_202[6];  // 0xCA (0xCA)
	struct FHitResult CallFunc_GetHitResultFromTargetData_ReturnValue;  // 0xD0 (0xD0)
	struct AProjectileActor* CallFunc_FireProjectile_ReturnValue;  // 0x1B8 (0x1B8)
	char pad_448_1 : 7;  // 0x1C0 (0x1C0)
	bool K2Node_Event_bWasCancelled : 1;  // 0x1C0 (0x1C0)
	char pad_449[7];  // 0x1C1 (0x1C1)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x1C8 (0x1C8)
	char pad_632_1 : 7;  // 0x278 (0x278)
	bool K2Node_Event_bIsSocketSightBlocked : 1;  // 0x278 (0x278)
	char pad_633_1 : 7;  // 0x279 (0x279)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x279 (0x279)
	char pad_634[2];  // 0x27A (0x27A)
	float CallFunc_GetRange_ReturnValue;  // 0x27C (0x27C)
	double CallFunc_SetDoublePropertyByName_Value_ImplicitCast;  // 0x280 (0x280)


}; 
 
 