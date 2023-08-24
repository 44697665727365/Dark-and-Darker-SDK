#pragma once 
#include <GA_PotionConsumeBase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_PotionConsumeBase.GA_PotionConsumeBase_C
// Size: 0x6B0(Inherited: 0x6A0)
struct UGA_PotionConsumeBase_C : UGA_ItemConsumeDrink
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6A0 (0x6A0)
	struct ABP_DrinkPotionActor_C* DrinkPotionActor;  // 0x6A8 (0x6A8)


	void K2_OnEndAbility(bool bWasCancelled); // Function GA_PotionConsumeBase.GA_PotionConsumeBase_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_PotionConsumeBase.GA_PotionConsumeBase_C.AbilityActivated
	void OnConsumeStartEventReceived(float ConsumeDuration); // Function GA_PotionConsumeBase.GA_PotionConsumeBase_C.OnConsumeStartEventReceived
	void OnConsumeEndEventReceived(); // Function GA_PotionConsumeBase.GA_PotionConsumeBase_C.OnConsumeEndEventReceived
	void ExecuteUbergraph_GA_PotionConsumeBase(int32_t EntryPoint); // Function GA_PotionConsumeBase.GA_PotionConsumeBase_C.ExecuteUbergraph_GA_PotionConsumeBase
}; 
 
 


