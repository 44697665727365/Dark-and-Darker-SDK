#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_DualWield.GA_DualWield_C.OnCountChanged_E7DAE38A4964DF8EED1204AF3A2217C4
struct FOnCountChanged_E7DAE38A4964DF8EED1204AF3A2217C4
{
	int32_t TagCount;  // 0x0 (0x0)


}; 
 
 // Function GA_DualWield.GA_DualWield_C.Added_E7DAE38A4964DF8EED1204AF3A2217C4
struct FAdded_E7DAE38A4964DF8EED1204AF3A2217C4
{
	int32_t TagCount;  // 0x0 (0x0)


}; 
 
 // Function GA_DualWield.GA_DualWield_C.ExecuteUbergraph_GA_DualWield
struct FExecuteUbergraph_GA_DualWield
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;  // 0x8 (0x8)
	int32_t CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue;  // 0x10 (0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x14 (0x14)
	int32_t K2Node_CustomEvent_TagCount_3;  // 0x24 (0x24)
	int32_t K2Node_CustomEvent_TagCount_2;  // 0x28 (0x28)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x2C (0x2C)
	int32_t K2Node_CustomEvent_TagCount;  // 0x3C (0x3C)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x40 (0x40)
	int32_t Temp_int_Variable;  // 0x50 (0x50)
	char pad_84[4];  // 0x54 (0x54)
	struct UDCAT_WaitTargetGameplayTagEvent* CallFunc_WaitTargetGameplayTagEvent_ReturnValue;  // 0x58 (0x58)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0x60 (0x60)
	char pad_97_1 : 7;  // 0x61 (0x61)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x61 (0x61)
	char pad_98[6];  // 0x62 (0x62)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x68 (0x68)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue_2;  // 0x118 (0x118)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x120 (0x120)
	char pad_304_1 : 7;  // 0x130 (0x130)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x130 (0x130)
	char pad_305_1 : 7;  // 0x131 (0x131)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x131 (0x131)
	char pad_306[6];  // 0x132 (0x132)
	struct FGameplayEventData Temp_struct_Variable;  // 0x138 (0x138)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x1E8 (0x1E8)


}; 
 
 // Function GA_DualWield.GA_DualWield_C.K2_ActivateAbilityFromEvent
// Size: 0xB0(Inherited: 0xB0)
struct FK2_ActivateAbilityFromEvent : FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 // Function GA_DualWield.GA_DualWield_C.Removed_E7DAE38A4964DF8EED1204AF3A2217C4
struct FRemoved_E7DAE38A4964DF8EED1204AF3A2217C4
{
	int32_t TagCount;  // 0x0 (0x0)


}; 
 
 