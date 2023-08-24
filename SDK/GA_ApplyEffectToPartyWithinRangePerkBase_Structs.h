#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_ApplyEffectToPartyWithinRangePerkBase.GA_ApplyEffectToPartyWithinRangePerkBase_C.ApplyEffect
struct FApplyEffect
{
	struct ADCPlayerCharacterBase* Target;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x20 (0x20)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0xD0 (0xD0)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue_2;  // 0xE0 (0xE0)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0xF0 (0xF0)
	char pad_256_1 : 7;  // 0x100 (0x100)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x100 (0x100)


}; 
 
 // Function GA_ApplyEffectToPartyWithinRangePerkBase.GA_ApplyEffectToPartyWithinRangePerkBase_C.CreateAndAttachCollisionToOwner
struct FCreateAndAttachCollisionToOwner
{
	struct USphereComponent* Output_Get;  // 0x0 (0x0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct ADCPlayerCharacterBase* K2Node_DynamicCast_AsDCPlayer_Character_Base;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct FTransform CallFunc_GetSocketTransform_ReturnValue;  // 0x20 (0x20)
	struct FDesignDataPerk CallFunc_GetDesignDataPerk_ReturnValue;  // 0x80 (0x80)
	struct USphereComponent* CallFunc_AddComponentByClass_ReturnValue;  // 0x118 (0x118)


}; 
 
 // Function GA_ApplyEffectToPartyWithinRangePerkBase.GA_ApplyEffectToPartyWithinRangePerkBase_C.OnComponentEndOverlap
struct FOnComponentEndOverlap
{
	struct UPrimitiveComponent* OverlappedComponent;  // 0x0 (0x0)
	struct AActor* OtherActor;  // 0x8 (0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10 (0x10)
	int32_t OtherBodyIndex;  // 0x18 (0x18)


}; 
 
 // Function GA_ApplyEffectToPartyWithinRangePerkBase.GA_ApplyEffectToPartyWithinRangePerkBase_C.ExecuteUbergraph_GA_ApplyEffectToPartyWithinRangePerkBase
struct FExecuteUbergraph_GA_ApplyEffectToPartyWithinRangePerkBase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x10 (0x10)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x18 (0x18)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x1C (0x1C)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x20 (0x20)
	int32_t Temp_int_Loop_Counter_Variable_2;  // 0x30 (0x30)
	int32_t CallFunc_Add_IntInt_ReturnValue_2;  // 0x34 (0x34)
	int32_t Temp_int_Array_Index_Variable;  // 0x38 (0x38)
	int32_t Temp_int_Array_Index_Variable_2;  // 0x3C (0x3C)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x40 (0x40)
	char pad_240_1 : 7;  // 0xF0 (0xF0)
	bool CallFunc_IsServer_ReturnValue : 1;  // 0xF0 (0xF0)
	char pad_241_1 : 7;  // 0xF1 (0xF1)
	bool K2Node_Event_bWasCancelled : 1;  // 0xF1 (0xF1)
	char pad_242_1 : 7;  // 0xF2 (0xF2)
	bool CallFunc_IsServer_ReturnValue_2 : 1;  // 0xF2 (0xF2)
	char pad_243[5];  // 0xF3 (0xF3)
	struct UPrimitiveComponent* K2Node_CustomEvent_OverlappedComponent_2;  // 0xF8 (0xF8)
	struct AActor* K2Node_CustomEvent_OtherActor_2;  // 0x100 (0x100)
	struct UPrimitiveComponent* K2Node_CustomEvent_OtherComp_2;  // 0x108 (0x108)
	int32_t K2Node_CustomEvent_OtherBodyIndex_2;  // 0x110 (0x110)
	char pad_276_1 : 7;  // 0x114 (0x114)
	bool K2Node_CustomEvent_bFromSweep : 1;  // 0x114 (0x114)
	char pad_277[3];  // 0x115 (0x115)
	struct FHitResult K2Node_CustomEvent_SweepResult;  // 0x118 (0x118)
	struct UPrimitiveComponent* K2Node_CustomEvent_OverlappedComponent;  // 0x200 (0x200)
	struct AActor* K2Node_CustomEvent_OtherActor;  // 0x208 (0x208)
	struct UPrimitiveComponent* K2Node_CustomEvent_OtherComp;  // 0x210 (0x210)
	int32_t K2Node_CustomEvent_OtherBodyIndex;  // 0x218 (0x218)
	char pad_540[4];  // 0x21C (0x21C)
	struct ADCPlayerCharacterBase* K2Node_DynamicCast_AsDCPlayer_Character_Base;  // 0x220 (0x220)
	char pad_552_1 : 7;  // 0x228 (0x228)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x228 (0x228)
	char pad_553[7];  // 0x229 (0x229)
	struct ADCPlayerCharacterBase* K2Node_DynamicCast_AsDCPlayer_Character_Base_2;  // 0x230 (0x230)
	char pad_568_1 : 7;  // 0x238 (0x238)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x238 (0x238)
	char pad_569_1 : 7;  // 0x239 (0x239)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue : 1;  // 0x239 (0x239)
	char pad_570_1 : 7;  // 0x23A (0x23A)
	bool CallFunc_IsSameTeamWithPlayerCharacter_ReturnValue : 1;  // 0x23A (0x23A)
	char pad_571[1];  // 0x23B (0x23B)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x23C (0x23C)
	char pad_588[4];  // 0x24C (0x24C)
	struct USphereComponent* CallFunc_CreateAndAttachCollisionToOwner_Output_Get;  // 0x250 (0x250)
	struct ADCPlayerCharacterBase* CallFunc_Array_Get_Item;  // 0x258 (0x258)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x260 (0x260)
	char pad_612_1 : 7;  // 0x264 (0x264)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x264 (0x264)
	char pad_613_1 : 7;  // 0x265 (0x265)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x265 (0x265)
	char pad_614[2];  // 0x266 (0x266)
	struct TArray<struct AActor*> CallFunc_GetOverlappingActors_OverlappingActors;  // 0x268 (0x268)
	struct AActor* CallFunc_Array_Get_Item_2;  // 0x278 (0x278)
	int32_t CallFunc_Array_Length_ReturnValue_2;  // 0x280 (0x280)
	char pad_644[4];  // 0x284 (0x284)
	struct ADCPlayerCharacterBase* K2Node_DynamicCast_AsDCPlayer_Character_Base_3;  // 0x288 (0x288)
	char pad_656_1 : 7;  // 0x290 (0x290)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x290 (0x290)
	char pad_657_1 : 7;  // 0x291 (0x291)
	bool CallFunc_Less_IntInt_ReturnValue_2 : 1;  // 0x291 (0x291)
	char pad_658_1 : 7;  // 0x292 (0x292)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2 : 1;  // 0x292 (0x292)
	char pad_659_1 : 7;  // 0x293 (0x293)
	bool CallFunc_IsSameTeamWithPlayerCharacter_ReturnValue_2 : 1;  // 0x293 (0x293)
	int32_t CallFunc_Array_Add_ReturnValue;  // 0x294 (0x294)
	char pad_664_1 : 7;  // 0x298 (0x298)
	bool CallFunc_Array_RemoveItem_ReturnValue : 1;  // 0x298 (0x298)
	char pad_665[3];  // 0x299 (0x299)
	int32_t CallFunc_Array_Add_ReturnValue_2;  // 0x29C (0x29C)
	char pad_672_1 : 7;  // 0x2A0 (0x2A0)
	bool CallFunc_Array_Contains_ReturnValue : 1;  // 0x2A0 (0x2A0)


}; 
 
 // Function GA_ApplyEffectToPartyWithinRangePerkBase.GA_ApplyEffectToPartyWithinRangePerkBase_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_ApplyEffectToPartyWithinRangePerkBase.GA_ApplyEffectToPartyWithinRangePerkBase_C.GrantAbility
struct FGrantAbility
{
	struct AActor* Target;  // 0x0 (0x0)
	struct TArray<struct FDCGameplayAbilityData> K2Node_MakeArray_Array;  // 0x8 (0x8)
	struct FDesignDataGameplayAbility CallFunc_GetDesignDataGameplayAbility_ReturnValue;  // 0x18 (0x18)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool CallFunc_IsMatchingAbilityActivated_ReturnValue : 1;  // 0x70 (0x70)
	char pad_113[7];  // 0x71 (0x71)
	struct UObject* CallFunc_GetCurrentSourceObject_ReturnValue;  // 0x78 (0x78)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x80 (0x80)
	char pad_129[7];  // 0x81 (0x81)
	struct TArray<struct FGameplayAbilitySpecHandle> CallFunc_GiveAbilities_ReturnValue;  // 0x88 (0x88)


}; 
 
 // Function GA_ApplyEffectToPartyWithinRangePerkBase.GA_ApplyEffectToPartyWithinRangePerkBase_C.OnComponentBeginOverlap
struct FOnComponentBeginOverlap
{
	struct UPrimitiveComponent* OverlappedComponent;  // 0x0 (0x0)
	struct AActor* OtherActor;  // 0x8 (0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10 (0x10)
	int32_t OtherBodyIndex;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool bFromSweep : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	struct FHitResult SweepResult;  // 0x20 (0x20)


}; 
 
 // Function GA_ApplyEffectToPartyWithinRangePerkBase.GA_ApplyEffectToPartyWithinRangePerkBase_C.K2_ActivateAbilityFromEvent
// Size: 0xB0(Inherited: 0xB0)
struct FK2_ActivateAbilityFromEvent : FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 // Function GA_ApplyEffectToPartyWithinRangePerkBase.GA_ApplyEffectToPartyWithinRangePerkBase_C.RemoveEffect
struct FRemoveEffect
{
	struct ADCPlayerCharacterBase* Character;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x9 (0x9)
	char pad_10[6];  // 0xA (0xA)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_GetActiveEffects_ReturnValue;  // 0x10 (0x10)
	int32_t CallFunc_Array_LastIndex_ReturnValue;  // 0x20 (0x20)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool CallFunc_Array_IsNotEmpty_ReturnValue : 1;  // 0x24 (0x24)
	char pad_37_1 : 7;  // 0x25 (0x25)
	bool CallFunc_RemoveActiveGameplayEffect_ReturnValue : 1;  // 0x25 (0x25)


}; 
 
 