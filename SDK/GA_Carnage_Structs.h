#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_Carnage.GA_Carnage_C.EventReceived_660BEE954716E695D29F27AB6125BFEA
struct FEventReceived_660BEE954716E695D29F27AB6125BFEA
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_Carnage.GA_Carnage_C.ExecuteUbergraph_GA_Carnage
struct FExecuteUbergraph_GA_Carnage
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_IsLocallyControlled_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct FGameplayEventData Temp_struct_Variable;  // 0x8 (0x8)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0xB8 (0xB8)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0xC8 (0xC8)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0xD0 (0xD0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x180 (0x180)
	struct FGameplayEventData Temp_struct_Variable_2;  // 0x190 (0x190)
	struct FGameplayTag Temp_struct_Variable_3;  // 0x240 (0x240)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0x248 (0x248)
	char pad_592_1 : 7;  // 0x250 (0x250)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x250 (0x250)
	char pad_593[7];  // 0x251 (0x251)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x258 (0x258)


}; 
 
 // Function GA_Carnage.GA_Carnage_C.K2_ActivateAbilityFromEvent
// Size: 0xB0(Inherited: 0xB0)
struct FK2_ActivateAbilityFromEvent : FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 