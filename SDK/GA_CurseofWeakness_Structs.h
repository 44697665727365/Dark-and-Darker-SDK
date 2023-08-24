#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_CurseofWeakness.GA_CurseofWeakness_C.AbilityActivated
// Size: 0xB1(Inherited: 0xB8)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)
	char pad_360_1 : 7;  // 0x168 (0x168)
	bool bIsSocketSightBlocked : 1;  // 0xB0 (0xB0)


}; 
 
 // Function GA_CurseofWeakness.GA_CurseofWeakness_C.Cancelled_E0DFF2094ED6EA9BC449339A474F2CAA
struct FCancelled_E0DFF2094ED6EA9BC449339A474F2CAA
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 // Function GA_CurseofWeakness.GA_CurseofWeakness_C.ExecuteUbergraph_GA_CurseofWeakness
struct FExecuteUbergraph_GA_CurseofWeakness
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
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x1A8 (0x1A8)
	char pad_600_1 : 7;  // 0x258 (0x258)
	bool K2Node_Event_bIsSocketSightBlocked : 1;  // 0x258 (0x258)
	char pad_601[3];  // 0x259 (0x259)
	float CallFunc_GetRange_ReturnValue;  // 0x25C (0x25C)
	double CallFunc_SetDoublePropertyByName_Value_ImplicitCast;  // 0x260 (0x260)


}; 
 
 // Function GA_CurseofWeakness.GA_CurseofWeakness_C.ValidData_E0DFF2094ED6EA9BC449339A474F2CAA
struct FValidData_E0DFF2094ED6EA9BC449339A474F2CAA
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 