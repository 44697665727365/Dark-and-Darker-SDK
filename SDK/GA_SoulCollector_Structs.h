#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SoulCollector.GA_SoulCollector_C.EventReceived_8AF98B894782B08BACFA3A8E23DB16CE
struct FEventReceived_8AF98B894782B08BACFA3A8E23DB16CE
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_SoulCollector.GA_SoulCollector_C.ExecuteUbergraph_GA_SoulCollector
struct FExecuteUbergraph_GA_SoulCollector
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0x4 (0x4)
	char pad_12[4];  // 0xC (0xC)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0x10 (0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xC0 (0xC0)
	struct FGameplayEventData Temp_struct_Variable;  // 0xD0 (0xD0)
	struct FGameplayTag Temp_struct_Variable_2;  // 0x180 (0x180)
	char pad_392_1 : 7;  // 0x188 (0x188)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x188 (0x188)
	char pad_393[7];  // 0x189 (0x189)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0x190 (0x190)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x198 (0x198)
	char pad_416_1 : 7;  // 0x1A0 (0x1A0)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x1A0 (0x1A0)
	char pad_417_1 : 7;  // 0x1A1 (0x1A1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x1A1 (0x1A1)
	char pad_418[6];  // 0x1A2 (0x1A2)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x1A8 (0x1A8)
	struct FGameplayEventData Temp_struct_Variable_3;  // 0x258 (0x258)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x308 (0x308)


}; 
 
 // Function GA_SoulCollector.GA_SoulCollector_C.K2_ActivateAbilityFromEvent
// Size: 0xB0(Inherited: 0xB0)
struct FK2_ActivateAbilityFromEvent : FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 