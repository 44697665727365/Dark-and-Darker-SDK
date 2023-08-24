#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_JollyTime.GA_JollyTime_C.ExecuteUbergraph_GA_JollyTime
struct FExecuteUbergraph_GA_JollyTime
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4 (0x4)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x14 (0x14)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)
	struct FGameplayEventData Temp_struct_Variable;  // 0x28 (0x28)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0xD8 (0xD8)
	struct UAbilityTask_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemove_ReturnValue;  // 0xE8 (0xE8)
	struct UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue;  // 0xF0 (0xF0)
	char pad_248_1 : 7;  // 0xF8 (0xF8)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xF8 (0xF8)
	char pad_249_1 : 7;  // 0xF9 (0xF9)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0xF9 (0xF9)


}; 
 
 