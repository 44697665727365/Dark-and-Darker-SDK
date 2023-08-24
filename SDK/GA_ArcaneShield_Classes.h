#pragma once 
#include <GA_ArcaneShield_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_ArcaneShield.GA_ArcaneShield_C
// Size: 0x698(Inherited: 0x680)
struct UGA_ArcaneShield_C : UGA_PlayerSkillInstantAndWaitForEnd_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x680 (0x680)
	char pad_1672_1 : 7;  // 0x688 (0x688)
	bool OnShieldBreak : 1;  // 0x688 (0x688)
	char pad_1673[7];  // 0x689 (0x689)
	struct UDCAT_WaitAttributeChangeByExecution* WaitTask_HealthChange;  // 0x690 (0x690)


	void ShieldBraekAttack(); // Function GA_ArcaneShield.GA_ArcaneShield_C.ShieldBraekAttack
	void SameParty(struct ADCCharacterBase* TargetActor, bool& Result); // Function GA_ArcaneShield.GA_ArcaneShield_C.SameParty
	void InvalidHandle_7D9C58AD4F43BA6F4618D789299B2871(struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo); // Function GA_ArcaneShield.GA_ArcaneShield_C.InvalidHandle_7D9C58AD4F43BA6F4618D789299B2871
	void OnRemoved_7D9C58AD4F43BA6F4618D789299B2871(struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo); // Function GA_ArcaneShield.GA_ArcaneShield_C.OnRemoved_7D9C58AD4F43BA6F4618D789299B2871
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_ArcaneShield.GA_ArcaneShield_C.AbilityActivated
	void ExecuteUbergraph_GA_ArcaneShield(int32_t EntryPoint); // Function GA_ArcaneShield.GA_ArcaneShield_C.ExecuteUbergraph_GA_ArcaneShield
}; 
 
 


