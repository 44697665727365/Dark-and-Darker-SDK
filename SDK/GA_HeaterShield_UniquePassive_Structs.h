#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_HeaterShield_UniquePassive.GA_HeaterShield_UniquePassive_C.EventReceived_4C9DC7AE41ED2229697FBD959A1A0518
struct FEventReceived_4C9DC7AE41ED2229697FBD959A1A0518
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_HeaterShield_UniquePassive.GA_HeaterShield_UniquePassive_C.ExecuteUbergraph_GA_HeaterShield_UniquePassive
struct FExecuteUbergraph_GA_HeaterShield_UniquePassive
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UObject* CallFunc_GetCurrentSourceObject_ReturnValue;  // 0x8 (0x8)
	struct FGameplayEventData Temp_struct_Variable;  // 0x10 (0x10)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0xC0 (0xC0)
	struct FGameplayEventData Temp_struct_Variable_2;  // 0xC8 (0xC8)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x178 (0x178)
	char pad_392_1 : 7;  // 0x188 (0x188)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x188 (0x188)
	char pad_393[3];  // 0x189 (0x189)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x18C (0x18C)
	char pad_412[4];  // 0x19C (0x19C)
	struct UAbilityTask_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemove_ReturnValue;  // 0x1A0 (0x1A0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x1A8 (0x1A8)
	char pad_440_1 : 7;  // 0x1B8 (0x1B8)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x1B8 (0x1B8)
	char pad_441[7];  // 0x1B9 (0x1B9)
	struct UAbilityTask_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemove_ReturnValue_2;  // 0x1C0 (0x1C0)
	struct FGameplayEventData Temp_struct_Variable_3;  // 0x1C8 (0x1C8)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue_2;  // 0x278 (0x278)
	char pad_648_1 : 7;  // 0x288 (0x288)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x288 (0x288)
	char pad_649[3];  // 0x289 (0x289)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x28C (0x28C)
	char pad_668[4];  // 0x29C (0x29C)
	struct UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue;  // 0x2A0 (0x2A0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4;  // 0x2A8 (0x2A8)
	char pad_696_1 : 7;  // 0x2B8 (0x2B8)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x2B8 (0x2B8)
	char pad_697[7];  // 0x2B9 (0x2B9)
	struct UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_2;  // 0x2C0 (0x2C0)
	struct FGameplayEventData Temp_struct_Variable_4;  // 0x2C8 (0x2C8)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue_3;  // 0x378 (0x378)
	char pad_904_1 : 7;  // 0x388 (0x388)
	bool CallFunc_IsValid_ReturnValue_5 : 1;  // 0x388 (0x388)
	char pad_905[3];  // 0x389 (0x389)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_5;  // 0x38C (0x38C)
	char pad_924[4];  // 0x39C (0x39C)
	struct UAbilityTask_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemove_ReturnValue_3;  // 0x3A0 (0x3A0)
	struct FGameplayEventData Temp_struct_Variable_5;  // 0x3A8 (0x3A8)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue_4;  // 0x458 (0x458)
	char pad_1128_1 : 7;  // 0x468 (0x468)
	bool CallFunc_IsValid_ReturnValue_6 : 1;  // 0x468 (0x468)
	char pad_1129[7];  // 0x469 (0x469)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x470 (0x470)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;  // 0x520 (0x520)
	char pad_1320_1 : 7;  // 0x528 (0x528)
	bool K2Node_Event_bWasCancelled : 1;  // 0x528 (0x528)
	char pad_1321[7];  // 0x529 (0x529)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x530 (0x530)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_6;  // 0x5E0 (0x5E0)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput;  // 0x5F0 (0x5F0)
	char pad_1536_1 : 7;  // 0x600 (0x600)
	bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue : 1;  // 0x600 (0x600)
	char pad_1537[7];  // 0x601 (0x601)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue_2;  // 0x608 (0x608)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue_3;  // 0x610 (0x610)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x618 (0x618)
	char pad_1576_1 : 7;  // 0x628 (0x628)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x628 (0x628)
	char pad_1577[7];  // 0x629 (0x629)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_2;  // 0x630 (0x630)
	char pad_1600_1 : 7;  // 0x640 (0x640)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_2 : 1;  // 0x640 (0x640)
	char pad_1601_1 : 7;  // 0x641 (0x641)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x641 (0x641)
	char pad_1602_1 : 7;  // 0x642 (0x642)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x642 (0x642)
	char pad_1603[1];  // 0x643 (0x643)
	int32_t CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue;  // 0x644 (0x644)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue_4;  // 0x648 (0x648)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x650 (0x650)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_3;  // 0x658 (0x658)
	char pad_1640_1 : 7;  // 0x668 (0x668)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_3 : 1;  // 0x668 (0x668)
	char pad_1641[7];  // 0x669 (0x669)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x670 (0x670)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue_5;  // 0x748 (0x748)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_4;  // 0x750 (0x750)
	char pad_1888_1 : 7;  // 0x760 (0x760)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_4 : 1;  // 0x760 (0x760)


}; 
 
 // Function GA_HeaterShield_UniquePassive.GA_HeaterShield_UniquePassive_C.K2_ActivateAbilityFromEvent
// Size: 0xB0(Inherited: 0xB0)
struct FK2_ActivateAbilityFromEvent : FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 // Function GA_HeaterShield_UniquePassive.GA_HeaterShield_UniquePassive_C.SetItemReflectable
struct FSetItemReflectable
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsReflectable : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct UObject* CallFunc_GetCurrentSourceObject_ReturnValue;  // 0x8 (0x8)
	struct AActor* K2Node_DynamicCast_As__;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x18 (0x18)


}; 
 
 // Function GA_HeaterShield_UniquePassive.GA_HeaterShield_UniquePassive_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 