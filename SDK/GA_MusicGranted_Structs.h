#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_MusicGranted.GA_MusicGranted_C.ExecuteUbergraph_GA_MusicGranted
struct FExecuteUbergraph_GA_MusicGranted
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UAbilityTask_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemove_ReturnValue;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x28 (0x28)
	char pad_216_1 : 7;  // 0xD8 (0xD8)
	bool K2Node_Event_bWasCancelled : 1;  // 0xD8 (0xD8)
	char pad_217[7];  // 0xD9 (0xD9)
	struct FGameplayTagContainer CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;  // 0xE0 (0xE0)


}; 
 
 // Function GA_MusicGranted.GA_MusicGranted_C.K2_ActivateAbilityFromEvent
// Size: 0xB0(Inherited: 0xB0)
struct FK2_ActivateAbilityFromEvent : FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 // Function GA_MusicGranted.GA_MusicGranted_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 