#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_DoubleAxe_UniquePassive.GA_DoubleAxe_UniquePassive_C.EventReceived_92F67D9442C2B2CF04064E88E63E2A1D
struct FEventReceived_92F67D9442C2B2CF04064E88E63E2A1D
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_DoubleAxe_UniquePassive.GA_DoubleAxe_UniquePassive_C.ExecuteUbergraph_GA_DoubleAxe_UniquePassive
struct FExecuteUbergraph_GA_DoubleAxe_UniquePassive
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData Temp_struct_Variable;  // 0x8 (0x8)
	struct FGameplayEventData Temp_struct_Variable_2;  // 0xB8 (0xB8)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x168 (0x168)
	struct FGameplayTag Temp_struct_Variable_3;  // 0x178 (0x178)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0x180 (0x180)
	struct FGameplayEventData Temp_struct_Variable_4;  // 0x188 (0x188)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue_2;  // 0x238 (0x238)
	char pad_584_1 : 7;  // 0x248 (0x248)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x248 (0x248)
	char pad_585[7];  // 0x249 (0x249)
	struct FGameplayEventData Temp_struct_Variable_5;  // 0x250 (0x250)
	struct FGameplayEventData Temp_struct_Variable_6;  // 0x300 (0x300)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue_3;  // 0x3B0 (0x3B0)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue_4;  // 0x3C0 (0x3C0)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x3D0 (0x3D0)
	struct FGameplayTagContainer CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;  // 0x480 (0x480)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;  // 0x4A0 (0x4A0)
	struct UObject* CallFunc_GetCurrentSourceObject_ReturnValue;  // 0x4A8 (0x4A8)
	int32_t CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue;  // 0x4B0 (0x4B0)
	char pad_1204[4];  // 0x4B4 (0x4B4)
	struct AItemActor* K2Node_DynamicCast_AsItem_Actor;  // 0x4B8 (0x4B8)
	char pad_1216_1 : 7;  // 0x4C0 (0x4C0)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x4C0 (0x4C0)
	char pad_1217[7];  // 0x4C1 (0x4C1)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x4C8 (0x4C8)
	struct FItemData CallFunc_GetItemData_ReturnValue;  // 0x4D0 (0x4D0)
	struct TScriptInterface<IBaseInterface> K2Node_DynamicCast_AsBase_Interface;  // 0x570 (0x570)
	char pad_1408_1 : 7;  // 0x580 (0x580)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x580 (0x580)
	char pad_1409_1 : 7;  // 0x581 (0x581)
	bool K2Node_Event_bWasCancelled : 1;  // 0x581 (0x581)
	char pad_1410[6];  // 0x582 (0x582)
	struct FMsgUsingItemUniqueFunction K2Node_MakeStruct_MsgUsingItemUniqueFunction;  // 0x588 (0x588)
	char pad_1456_1 : 7;  // 0x5B0 (0x5B0)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x5B0 (0x5B0)
	char pad_1457[7];  // 0x5B1 (0x5B1)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue_2;  // 0x5B8 (0x5B8)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0x5C0 (0x5C0)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0x5C8 (0x5C8)
	int32_t CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue_2;  // 0x678 (0x678)
	char pad_1660_1 : 7;  // 0x67C (0x67C)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x67C (0x67C)
	char pad_1661[3];  // 0x67D (0x67D)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x680 (0x680)
	char pad_1680_1 : 7;  // 0x690 (0x690)
	bool CallFunc_K2_HasAuthority_ReturnValue_2 : 1;  // 0x690 (0x690)
	char pad_1681_1 : 7;  // 0x691 (0x691)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x691 (0x691)


}; 
 
 // Function GA_DoubleAxe_UniquePassive.GA_DoubleAxe_UniquePassive_C.K2_ActivateAbilityFromEvent
// Size: 0xB0(Inherited: 0xB0)
struct FK2_ActivateAbilityFromEvent : FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 // Function GA_DoubleAxe_UniquePassive.GA_DoubleAxe_UniquePassive_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 