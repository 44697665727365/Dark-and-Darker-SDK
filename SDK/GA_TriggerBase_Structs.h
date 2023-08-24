#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_TriggerBase.GA_TriggerBase_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_TriggerBase.GA_TriggerBase_C.ExecuteUbergraph_GA_TriggerBase
struct FExecuteUbergraph_GA_TriggerBase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FObjectLinkRequestEvent K2Node_MakeStruct_ObjectLinkRequestEvent;  // 0x8 (0x8)
	char pad_184_1 : 7;  // 0xB8 (0xB8)
	bool K2Node_Event_bWasCancelled : 1;  // 0xB8 (0xB8)
	char pad_185[7];  // 0xB9 (0xB9)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xC0 (0xC0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0xC8 (0xC8)
	struct ABP_TriggerBase_C* K2Node_DynamicCast_AsBP_Trigger_Base;  // 0xD0 (0xD0)
	char pad_216_1 : 7;  // 0xD8 (0xD8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xD8 (0xD8)
	char pad_217[7];  // 0xD9 (0xD9)
	struct ABP_TriggerBase_C* K2Node_DynamicCast_AsBP_Trigger_Base_2;  // 0xE0 (0xE0)
	char pad_232_1 : 7;  // 0xE8 (0xE8)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0xE8 (0xE8)
	char pad_233[7];  // 0xE9 (0xE9)
	struct TArray<struct FObjectLinkResponeEvent> CallFunc_RequestToLinkers_ReturnValue;  // 0xF0 (0xF0)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x100 (0x100)
	struct FObjectLinkRequestEvent K2Node_MakeStruct_ObjectLinkRequestEvent_2;  // 0x1B0 (0x1B0)
	struct TArray<struct FObjectLinkResponeEvent> CallFunc_RequestToLinkers_ReturnValue_2;  // 0x260 (0x260)


}; 
 
 // Function GA_TriggerBase.GA_TriggerBase_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 