#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_MoraleBoost.GA_MoraleBoost_C.EventReceived_DD9B0D124BA472F9DBB2D6B6EE31F700
struct FEventReceived_DD9B0D124BA472F9DBB2D6B6EE31F700
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_MoraleBoost.GA_MoraleBoost_C.K2_ActivateAbilityFromEvent
// Size: 0xB0(Inherited: 0xB0)
struct FK2_ActivateAbilityFromEvent : FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 // Function GA_MoraleBoost.GA_MoraleBoost_C.ExecuteUbergraph_GA_MoraleBoost
struct FExecuteUbergraph_GA_MoraleBoost
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_IsLocallyControlled_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x8 (0x8)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0x18 (0x18)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0x20 (0x20)
	struct FGameplayEventData Temp_struct_Variable;  // 0xD0 (0xD0)
	struct FGameplayTag Temp_struct_Variable_2;  // 0x180 (0x180)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0x188 (0x188)
	struct ADCPlayerCharacterBase* K2Node_DynamicCast_AsDCPlayer_Character_Base;  // 0x190 (0x190)
	char pad_408_1 : 7;  // 0x198 (0x198)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x198 (0x198)
	char pad_409_1 : 7;  // 0x199 (0x199)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x199 (0x199)
	char pad_410_1 : 7;  // 0x19A (0x19A)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x19A (0x19A)
	char pad_411[5];  // 0x19B (0x19B)
	struct FGameplayEventData Temp_struct_Variable_3;  // 0x1A0 (0x1A0)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x250 (0x250)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x260 (0x260)


}; 
 
 