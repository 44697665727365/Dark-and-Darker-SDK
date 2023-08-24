#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_PotionConsumeBase.GA_PotionConsumeBase_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_PotionConsumeBase.GA_PotionConsumeBase_C.ExecuteUbergraph_GA_PotionConsumeBase
struct FExecuteUbergraph_GA_PotionConsumeBase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_IsLocallyControlled_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool K2Node_Event_bWasCancelled : 1;  // 0x5 (0x5)
	char pad_6[2];  // 0x6 (0x6)
	struct UObject* CallFunc_GetCurrentSourceObject_ReturnValue;  // 0x8 (0x8)
	struct ABP_DrinkPotionActor_C* K2Node_DynamicCast_AsBP_Drink_Potion_Actor;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x20 (0x20)
	float K2Node_Event_ConsumeDuration;  // 0xD0 (0xD0)
	char pad_212_1 : 7;  // 0xD4 (0xD4)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xD4 (0xD4)
	char pad_213_1 : 7;  // 0xD5 (0xD5)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0xD5 (0xD5)
	char pad_214_1 : 7;  // 0xD6 (0xD6)
	bool CallFunc_IsLocallyControlled_ReturnValue_2 : 1;  // 0xD6 (0xD6)
	char pad_215[1];  // 0xD7 (0xD7)
	int32_t CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue;  // 0xD8 (0xD8)
	char pad_220_1 : 7;  // 0xDC (0xDC)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0xDC (0xDC)
	char pad_221[3];  // 0xDD (0xDD)
	double CallFunc_SetDrinkingDuration_Duration_ImplicitCast;  // 0xE0 (0xE0)


}; 
 
 // Function GA_PotionConsumeBase.GA_PotionConsumeBase_C.OnConsumeStartEventReceived
// Size: 0x4(Inherited: 0x4)
struct FOnConsumeStartEventReceived : FOnConsumeStartEventReceived
{
	float ConsumeDuration;  // 0x0 (0x0)


}; 
 
 // Function GA_PotionConsumeBase.GA_PotionConsumeBase_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 