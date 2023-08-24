#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_PerkGranted.GA_PerkGranted_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_PerkGranted.GA_PerkGranted_C.ExecuteUbergraph_GA_PerkGranted
struct FExecuteUbergraph_GA_PerkGranted
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4 (0x4)
	char pad_20[4];  // 0x14 (0x14)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x18 (0x18)
	char pad_200_1 : 7;  // 0xC8 (0xC8)
	bool K2Node_Event_bWasCancelled : 1;  // 0xC8 (0xC8)
	char pad_201[7];  // 0xC9 (0xC9)
	struct FGameplayTagContainer CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;  // 0xD0 (0xD0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xF0 (0xF0)
	struct FGameplayTagContainer CallFunc_GetOwnedGameplayTags_TagContainer;  // 0xF8 (0xF8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x118 (0x118)
	char pad_288_1 : 7;  // 0x120 (0x120)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x120 (0x120)
	char pad_289[7];  // 0x121 (0x121)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyGameplayEffectByIds_ReturnValue;  // 0x128 (0x128)
	struct UAbilityTask_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemove_ReturnValue;  // 0x138 (0x138)
	char pad_320_1 : 7;  // 0x140 (0x140)
	bool CallFunc_HasTag_ReturnValue : 1;  // 0x140 (0x140)
	char pad_321_1 : 7;  // 0x141 (0x141)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x141 (0x141)


}; 
 
 // Function GA_PerkGranted.GA_PerkGranted_C.K2_ActivateAbilityFromEvent
// Size: 0xB0(Inherited: 0xB0)
struct FK2_ActivateAbilityFromEvent : FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 