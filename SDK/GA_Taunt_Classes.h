#pragma once 
#include <GA_Taunt_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Taunt.GA_Taunt_C
// Size: 0x680(Inherited: 0x678)
struct UGA_Taunt_C : UGA_PlayerSkillInstant_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x678 (0x678)


	void ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag); // Function GA_Taunt.GA_Taunt_C.ServerOnSkillActivate
	void ExecuteUbergraph_GA_Taunt(int32_t EntryPoint); // Function GA_Taunt.GA_Taunt_C.ExecuteUbergraph_GA_Taunt
}; 
 
 


