#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_GhostKing_Eating.GA_GhostKing_Eating_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_GhostKing_Eating.GA_GhostKing_Eating_C.EventReceived_AA4AB67146876402F8EBA39BF04EDC2D
struct FEventReceived_AA4AB67146876402F8EBA39BF04EDC2D
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_GhostKing_Eating.GA_GhostKing_Eating_C.OnDestroyedEvent
struct FOnDestroyedEvent
{
	struct AActor* DestroyedActor;  // 0x0 (0x0)


}; 
 
 // Function GA_GhostKing_Eating.GA_GhostKing_Eating_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_GhostKing_Eating.GA_GhostKing_Eating_C.ExecuteUbergraph_GA_GhostKing_Eating
struct FExecuteUbergraph_GA_GhostKing_Eating
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* K2Node_CustomEvent_DestroyedActor;  // 0x8 (0x8)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x10 (0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xC0 (0xC0)
	struct FGameplayEventData Temp_struct_Variable;  // 0xD0 (0xD0)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x180 (0x180)
	char pad_392_1 : 7;  // 0x188 (0x188)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x188 (0x188)
	char pad_393[3];  // 0x189 (0x189)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x18C (0x18C)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x19C (0x19C)
	char pad_428_1 : 7;  // 0x1AC (0x1AC)
	bool K2Node_Event_bWasCancelled : 1;  // 0x1AC (0x1AC)
	char pad_429[3];  // 0x1AD (0x1AD)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x1B0 (0x1B0)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x260 (0x260)
	char pad_616_1 : 7;  // 0x268 (0x268)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x268 (0x268)
	char pad_617[7];  // 0x269 (0x269)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base_2;  // 0x270 (0x270)
	char pad_632_1 : 7;  // 0x278 (0x278)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x278 (0x278)
	char pad_633[7];  // 0x279 (0x279)
	struct UAbilityAsync_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue;  // 0x280 (0x280)
	char pad_648_1 : 7;  // 0x288 (0x288)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x288 (0x288)
	char pad_649[7];  // 0x289 (0x289)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x290 (0x290)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x340 (0x340)
	struct UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue;  // 0x350 (0x350)
	char pad_856_1 : 7;  // 0x358 (0x358)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x358 (0x358)
	char pad_857[3];  // 0x359 (0x359)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4;  // 0x35C (0x35C)
	char pad_876[4];  // 0x36C (0x36C)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x370 (0x370)
	struct ABP_GhostKing_Common_C* K2Node_DynamicCast_AsBP_Ghost_King_Common;  // 0x378 (0x378)
	char pad_896_1 : 7;  // 0x380 (0x380)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x380 (0x380)
	char pad_897[7];  // 0x381 (0x381)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x388 (0x388)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x390 (0x390)


}; 
 
 