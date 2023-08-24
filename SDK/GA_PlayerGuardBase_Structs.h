#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_PlayerGuardBase.GA_PlayerGuardBase_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_PlayerGuardBase.GA_PlayerGuardBase_C.ExecuteUbergraph_GA_PlayerGuardBase
struct FExecuteUbergraph_GA_PlayerGuardBase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4 (0x4)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x14 (0x14)
	struct FGameplayTag K2Node_Event_EventTag;  // 0x24 (0x24)
	char pad_44[4];  // 0x2C (0x2C)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x30 (0x30)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0xE0 (0xE0)
	char pad_400_1 : 7;  // 0x190 (0x190)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x190 (0x190)
	char pad_401[7];  // 0x191 (0x191)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;  // 0x198 (0x198)
	char pad_416_1 : 7;  // 0x1A0 (0x1A0)
	bool CallFunc_IsLocallyControlled_ReturnValue : 1;  // 0x1A0 (0x1A0)
	char pad_417[7];  // 0x1A1 (0x1A1)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x1A8 (0x1A8)
	char pad_440_1 : 7;  // 0x1B8 (0x1B8)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x1B8 (0x1B8)
	char pad_441[7];  // 0x1B9 (0x1B9)
	struct UDCAT_WaitForInputAction* CallFunc_WaitForInputAction_ReturnValue;  // 0x1C0 (0x1C0)
	char pad_456_1 : 7;  // 0x1C8 (0x1C8)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x1C8 (0x1C8)


}; 
 
 // Function GA_PlayerGuardBase.GA_PlayerGuardBase_C.ReceivedEvent
// Size: 0xB8(Inherited: 0xB8)
struct FReceivedEvent : FReceivedEvent
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 