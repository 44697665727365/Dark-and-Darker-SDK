#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_ComboAttack.GA_ComboAttack_C.EventReceived_0EF528F1414939B2DA8CE9A5C5B64691
struct FEventReceived_0EF528F1414939B2DA8CE9A5C5B64691
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_ComboAttack.GA_ComboAttack_C.ExecuteUbergraph_GA_ComboAttack
struct FExecuteUbergraph_GA_ComboAttack
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4 (0x4)
	char pad_20[4];  // 0x14 (0x14)
	struct UDCAT_WaitDelayRestartable* CallFunc_WaitDelay_ReturnValue;  // 0x18 (0x18)
	struct FGameplayEventData Temp_struct_Variable;  // 0x20 (0x20)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0xD0 (0xD0)
	char pad_224_1 : 7;  // 0xE0 (0xE0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xE0 (0xE0)
	char pad_225[3];  // 0xE1 (0xE1)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0xE4 (0xE4)
	char pad_236[4];  // 0xEC (0xEC)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0xF0 (0xF0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x1A0 (0x1A0)
	struct FGameplayEventData Temp_struct_Variable_2;  // 0x1B0 (0x1B0)
	struct FGameplayTag Temp_struct_Variable_3;  // 0x260 (0x260)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0x268 (0x268)
	char pad_624_1 : 7;  // 0x270 (0x270)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x270 (0x270)
	char pad_625[7];  // 0x271 (0x271)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x278 (0x278)
	char pad_808_1 : 7;  // 0x328 (0x328)
	bool CallFunc_IsLocallyControlled_ReturnValue : 1;  // 0x328 (0x328)


}; 
 
 // Function GA_ComboAttack.GA_ComboAttack_C.K2_ActivateAbilityFromEvent
// Size: 0xB0(Inherited: 0xB0)
struct FK2_ActivateAbilityFromEvent : FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 