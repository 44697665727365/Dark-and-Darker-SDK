#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_FlameSpoutDeactivate.GA_FlameSpoutDeactivate_C.EventReceived_BAE8241E4992256FE025C3B5840FF2DD
struct FEventReceived_BAE8241E4992256FE025C3B5840FF2DD
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_FlameSpoutDeactivate.GA_FlameSpoutDeactivate_C.ExecuteUbergraph_GA_FlameSpoutDeactivate
struct FExecuteUbergraph_GA_FlameSpoutDeactivate
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4 (0x4)
	char pad_20[4];  // 0x14 (0x14)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x18 (0x18)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0xC8 (0xC8)
	struct FGameplayEventData Temp_struct_Variable;  // 0xD8 (0xD8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x188 (0x188)
	char pad_400_1 : 7;  // 0x190 (0x190)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x190 (0x190)
	char pad_401[7];  // 0x191 (0x191)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x198 (0x198)
	struct FGameplayEventData Temp_struct_Variable_2;  // 0x248 (0x248)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x2F8 (0x2F8)
	struct UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue;  // 0x308 (0x308)
	char pad_784_1 : 7;  // 0x310 (0x310)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x310 (0x310)


}; 
 
 // Function GA_FlameSpoutDeactivate.GA_FlameSpoutDeactivate_C.K2_ActivateAbilityFromEvent
// Size: 0xB0(Inherited: 0xB0)
struct FK2_ActivateAbilityFromEvent : FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 