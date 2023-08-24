#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_PowerofSacrificeSpell_OnGranted.GA_PowerofSacrificeSpell_OnGranted_C.ExecuteUbergraph_GA_PowerofSacrificeSpell_OnGranted
struct FExecuteUbergraph_GA_PowerofSacrificeSpell_OnGranted
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4 (0x4)
	char pad_20[4];  // 0x14 (0x14)
	struct UAbilityTask_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemove_ReturnValue;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x28 (0x28)
	char pad_216_1 : 7;  // 0xD8 (0xD8)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0xD8 (0xD8)
	char pad_217[7];  // 0xD9 (0xD9)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xE0 (0xE0)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyGameplayEffectByIds_ReturnValue;  // 0xE8 (0xE8)


}; 
 
 // Function GA_PowerofSacrificeSpell_OnGranted.GA_PowerofSacrificeSpell_OnGranted_C.K2_ActivateAbilityFromEvent
// Size: 0xB0(Inherited: 0xB0)
struct FK2_ActivateAbilityFromEvent : FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 