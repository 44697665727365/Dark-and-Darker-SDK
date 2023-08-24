#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_IceBolt.GA_IceBolt_C.AbilityActivated
// Size: 0xB1(Inherited: 0xB8)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)
	char pad_360_1 : 7;  // 0x168 (0x168)
	bool bIsSocketSightBlocked : 1;  // 0xB0 (0xB0)


}; 
 
 // Function GA_IceBolt.GA_IceBolt_C.Cancelled_581501F64E87E564129EFA91E4613987
struct FCancelled_581501F64E87E564129EFA91E4613987
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 // Function GA_IceBolt.GA_IceBolt_C.ExecuteUbergraph_GA_IceBolt
struct FExecuteUbergraph_GA_IceBolt
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x8 (0x8)
	char pad_184_1 : 7;  // 0xB8 (0xB8)
	bool K2Node_Event_bIsSocketSightBlocked : 1;  // 0xB8 (0xB8)
	char pad_185[3];  // 0xB9 (0xB9)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xBC (0xBC)
	char pad_204[4];  // 0xCC (0xCC)
	struct FGameplayAbilityTargetDataHandle K2Node_CustomEvent_Data_2;  // 0xD0 (0xD0)
	struct FGameplayAbilityTargetDataHandle K2Node_CustomEvent_Data;  // 0xF8 (0xF8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x120 (0x120)
	struct FGameplayAbilityTargetDataHandle Temp_struct_Variable;  // 0x130 (0x130)
	struct UAbilityTask_WaitTargetData* CallFunc_WaitTargetData_ReturnValue;  // 0x158 (0x158)
	char pad_352_1 : 7;  // 0x160 (0x160)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x160 (0x160)
	char pad_353[7];  // 0x161 (0x161)
	struct AGameplayAbilityTargetActor* CallFunc_BeginSpawningActor_SpawnedActor;  // 0x168 (0x168)
	char pad_368_1 : 7;  // 0x170 (0x170)
	bool CallFunc_BeginSpawningActor_ReturnValue : 1;  // 0x170 (0x170)
	char pad_369_1 : 7;  // 0x171 (0x171)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x171 (0x171)
	char pad_370[6];  // 0x172 (0x172)
	struct FHitResult CallFunc_GetHitResultFromTargetData_ReturnValue;  // 0x178 (0x178)
	struct AProjectileActor* CallFunc_FireProjectile_ReturnValue;  // 0x260 (0x260)
	char pad_616_1 : 7;  // 0x268 (0x268)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x268 (0x268)
	char pad_617[3];  // 0x269 (0x269)
	float CallFunc_GetRange_ReturnValue;  // 0x26C (0x26C)
	double CallFunc_SetDoublePropertyByName_Value_ImplicitCast;  // 0x270 (0x270)


}; 
 
 // Function GA_IceBolt.GA_IceBolt_C.ValidData_581501F64E87E564129EFA91E4613987
struct FValidData_581501F64E87E564129EFA91E4613987
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 