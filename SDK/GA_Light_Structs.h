#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_Light.GA_Light_C.AbilityActivated
// Size: 0xB1(Inherited: 0xB8)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)
	char pad_360_1 : 7;  // 0x168 (0x168)
	bool bIsSocketSightBlocked : 1;  // 0xB0 (0xB0)


}; 
 
 // Function GA_Light.GA_Light_C.Cancelled_5941290D49EFDA57A6C2A1B9C1DAC65E
struct FCancelled_5941290D49EFDA57A6C2A1B9C1DAC65E
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 // Function GA_Light.GA_Light_C.ExecuteUbergraph_GA_Light
struct FExecuteUbergraph_GA_Light
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayAbilityTargetDataHandle K2Node_CustomEvent_Data_2;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x30 (0x30)
	struct FGameplayAbilityTargetDataHandle K2Node_CustomEvent_Data;  // 0x40 (0x40)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x68 (0x68)
	struct FGameplayAbilityTargetDataHandle Temp_struct_Variable;  // 0x78 (0x78)
	struct UAbilityTask_WaitTargetData* CallFunc_WaitTargetData_ReturnValue;  // 0xA0 (0xA0)
	char pad_168_1 : 7;  // 0xA8 (0xA8)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xA8 (0xA8)
	char pad_169[7];  // 0xA9 (0xA9)
	struct AGameplayAbilityTargetActor* CallFunc_BeginSpawningActor_SpawnedActor;  // 0xB0 (0xB0)
	char pad_184_1 : 7;  // 0xB8 (0xB8)
	bool CallFunc_BeginSpawningActor_ReturnValue : 1;  // 0xB8 (0xB8)
	char pad_185_1 : 7;  // 0xB9 (0xB9)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0xB9 (0xB9)
	char pad_186[6];  // 0xBA (0xBA)
	struct FHitResult CallFunc_GetHitResultFromTargetData_ReturnValue;  // 0xC0 (0xC0)
	struct AProjectileActor* CallFunc_FireProjectile_ReturnValue;  // 0x1A8 (0x1A8)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x1B0 (0x1B0)
	char pad_608_1 : 7;  // 0x260 (0x260)
	bool K2Node_Event_bIsSocketSightBlocked : 1;  // 0x260 (0x260)
	char pad_609_1 : 7;  // 0x261 (0x261)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x261 (0x261)
	char pad_610[2];  // 0x262 (0x262)
	float CallFunc_GetRange_ReturnValue;  // 0x264 (0x264)
	double CallFunc_SetDoublePropertyByName_Value_ImplicitCast;  // 0x268 (0x268)


}; 
 
 // Function GA_Light.GA_Light_C.ValidData_5941290D49EFDA57A6C2A1B9C1DAC65E
struct FValidData_5941290D49EFDA57A6C2A1B9C1DAC65E
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 