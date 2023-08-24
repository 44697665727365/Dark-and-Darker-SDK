#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_Stealth.GA_Stealth_C.ExecuteUbergraph_GA_Stealth
struct FExecuteUbergraph_GA_Stealth
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct FAbilityEndedData K2Node_CustomEvent_AbilityEndedData;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)
	struct FGameplayTagContainer CallFunc_GetOwnedGameplayTags_TagContainer;  // 0x28 (0x28)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool CallFunc_HasTag_ReturnValue : 1;  // 0x48 (0x48)
	char pad_73[3];  // 0x49 (0x49)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4C (0x4C)
	char pad_92[4];  // 0x5C (0x5C)
	struct UGameplayAbility* K2Node_CustomEvent_ActivatedAbility;  // 0x60 (0x60)
	struct UGameplayAbility* Temp_object_Variable;  // 0x68 (0x68)
	struct UDCAT_WaitGameplayAbilityActivateOrEnd* CallFunc_WaitForAbilityActivateOrEnd_ReturnValue;  // 0x70 (0x70)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x78 (0x78)
	char pad_121[3];  // 0x79 (0x79)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x7C (0x7C)
	char pad_140[4];  // 0x8C (0x8C)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x90 (0x90)
	struct FGameplayEventData Temp_struct_Variable;  // 0x140 (0x140)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x1F0 (0x1F0)
	char pad_504_1 : 7;  // 0x1F8 (0x1F8)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x1F8 (0x1F8)
	char pad_505[7];  // 0x1F9 (0x1F9)
	struct FGameplayEventData Temp_struct_Variable_2;  // 0x200 (0x200)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x2B0 (0x2B0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x2C0 (0x2C0)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x2D0 (0x2D0)
	char pad_896_1 : 7;  // 0x380 (0x380)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x380 (0x380)
	char pad_897_1 : 7;  // 0x381 (0x381)
	bool K2Node_Event_bWasCancelled : 1;  // 0x381 (0x381)
	char pad_898[2];  // 0x382 (0x382)
	int32_t Temp_int_Variable;  // 0x384 (0x384)
	char pad_904_1 : 7;  // 0x388 (0x388)
	bool CallFunc_LessEqual_IntInt_ReturnValue : 1;  // 0x388 (0x388)
	char pad_905[3];  // 0x389 (0x389)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x38C (0x38C)


}; 
 
 // Function GA_Stealth.GA_Stealth_C.EventReceived_A2B666894B9BF5ED7FBC4680EEA57EE4
struct FEventReceived_A2B666894B9BF5ED7FBC4680EEA57EE4
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_Stealth.GA_Stealth_C.K2_ActivateAbilityFromEvent
// Size: 0xB0(Inherited: 0xB0)
struct FK2_ActivateAbilityFromEvent : FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 // Function GA_Stealth.GA_Stealth_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_Stealth.GA_Stealth_C.OnAbilityActivated_7D86188843FD6F02309B4BBF24B683C5
struct FOnAbilityActivated_7D86188843FD6F02309B4BBF24B683C5
{
	struct UGameplayAbility* ActivatedAbility;  // 0x0 (0x0)


}; 
 
 // Function GA_Stealth.GA_Stealth_C.OnAbilityEnded_7D86188843FD6F02309B4BBF24B683C5
struct FOnAbilityEnded_7D86188843FD6F02309B4BBF24B683C5
{
	struct FAbilityEndedData AbilityEndedData;  // 0x0 (0x0)


}; 
 
 