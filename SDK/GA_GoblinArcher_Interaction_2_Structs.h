#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_GoblinArcher_Interaction_2.GA_GoblinArcher_Interaction_1_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_GoblinArcher_Interaction_2.GA_GoblinArcher_Interaction_1_C.EventReceived_090DB0CE459F2E2DA5129AA346CDACE5
struct FEventReceived_090DB0CE459F2E2DA5129AA346CDACE5
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_GoblinArcher_Interaction_2.GA_GoblinArcher_Interaction_1_C.ExecuteUbergraph_GA_GoblinArcher_Interaction_2
struct FExecuteUbergraph_GA_GoblinArcher_Interaction_2
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xB8 (0xB8)
	struct FGameplayEventData Temp_struct_Variable;  // 0xC8 (0xC8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x178 (0x178)
	char pad_384_1 : 7;  // 0x180 (0x180)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x180 (0x180)
	char pad_385[7];  // 0x181 (0x181)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x188 (0x188)
	struct UDCAT_RotateToActor* CallFunc_RotateToActor_ReturnValue;  // 0x238 (0x238)
	char pad_576_1 : 7;  // 0x240 (0x240)
	bool K2Node_Event_bWasCancelled : 1;  // 0x240 (0x240)
	char pad_577_1 : 7;  // 0x241 (0x241)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x241 (0x241)


}; 
 
 // Function GA_GoblinArcher_Interaction_2.GA_GoblinArcher_Interaction_1_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 