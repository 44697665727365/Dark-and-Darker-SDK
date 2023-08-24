#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_ItemAdditionalActivate.GA_ItemAdditionalActivate_C.ExecuteUbergraph_GA_ItemAdditionalActivate
struct FExecuteUbergraph_GA_ItemAdditionalActivate
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FGameplayTag K2Node_Event_EventTag;  // 0x4 (0x4)
	char pad_12[4];  // 0xC (0xC)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x10 (0x10)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0xC0 (0xC0)


}; 
 
 // Function GA_ItemAdditionalActivate.GA_ItemAdditionalActivate_C.ReceivedEvent
// Size: 0xB8(Inherited: 0xB8)
struct FReceivedEvent : FReceivedEvent
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 