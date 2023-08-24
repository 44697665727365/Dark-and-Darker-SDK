#pragma once 
#include <GA_FieldRation_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_FieldRation.GA_FieldRation_C
// Size: 0x680(Inherited: 0x678)
struct UGA_FieldRation_C : UGA_PlayerSkillInstant_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x678 (0x678)


	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_FieldRation.GA_FieldRation_C.AbilityActivated
	void ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag); // Function GA_FieldRation.GA_FieldRation_C.ServerOnSkillActivate
	void ExecuteUbergraph_GA_FieldRation(int32_t EntryPoint); // Function GA_FieldRation.GA_FieldRation_C.ExecuteUbergraph_GA_FieldRation
}; 
 
 


