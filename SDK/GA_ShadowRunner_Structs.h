#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_ShadowRunner.GA_ShadowRunner_C.ExecuteUbergraph_GA_ShadowRunner
struct FExecuteUbergraph_GA_ShadowRunner
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x8 (0x8)
	struct UAbilityTask_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemove_ReturnValue;  // 0x18 (0x18)
	struct FGameplayEventData Temp_struct_Variable;  // 0x20 (0x20)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0xD0 (0xD0)
	char pad_224_1 : 7;  // 0xE0 (0xE0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xE0 (0xE0)


}; 
 
 