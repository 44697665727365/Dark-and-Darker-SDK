#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_Ambush.GA_Ambush_C.EventReceived_9753C2834B13EF3A8411BE9074E3DB22
struct FEventReceived_9753C2834B13EF3A8411BE9074E3DB22
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_Ambush.GA_Ambush_C.ExecuteUbergraph_GA_Ambush
struct FExecuteUbergraph_GA_Ambush
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;  // 0x8 (0x8)
	int32_t CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue;  // 0x10 (0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x14 (0x14)
	char pad_36[4];  // 0x24 (0x24)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x28 (0x28)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct UAbilityTask_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemove_ReturnValue;  // 0x40 (0x40)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x48 (0x48)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x58 (0x58)
	char pad_89[3];  // 0x59 (0x59)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0x5C (0x5C)
	char pad_100[4];  // 0x64 (0x64)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0x68 (0x68)
	struct FGameplayEventData Temp_struct_Variable;  // 0x118 (0x118)
	struct FGameplayTag Temp_struct_Variable_2;  // 0x1C8 (0x1C8)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0x1D0 (0x1D0)
	struct FGameplayEventData Temp_struct_Variable_3;  // 0x1D8 (0x1D8)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x288 (0x288)
	char pad_664_1 : 7;  // 0x298 (0x298)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x298 (0x298)
	char pad_665_1 : 7;  // 0x299 (0x299)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x299 (0x299)


}; 
 
 