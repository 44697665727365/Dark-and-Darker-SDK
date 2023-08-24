#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_Barricade.GA_Barricade_C.ExecuteUbergraph_GA_Barricade
struct FExecuteUbergraph_GA_Barricade
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;  // 0x8 (0x8)
	int32_t CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue;  // 0x10 (0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x14 (0x14)
	char pad_36[4];  // 0x24 (0x24)
	struct UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue;  // 0x28 (0x28)
	struct FGameplayEventData Temp_struct_Variable;  // 0x30 (0x30)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0xE0 (0xE0)
	char pad_240_1 : 7;  // 0xF0 (0xF0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xF0 (0xF0)
	char pad_241[3];  // 0xF1 (0xF1)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0xF4 (0xF4)
	char pad_260[4];  // 0x104 (0x104)
	struct UAbilityTask_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemove_ReturnValue;  // 0x108 (0x108)
	char pad_272_1 : 7;  // 0x110 (0x110)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x110 (0x110)
	char pad_273_1 : 7;  // 0x111 (0x111)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x111 (0x111)


}; 
 
 