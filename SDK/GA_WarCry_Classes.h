#pragma once 
#include <GA_WarCry_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_WarCry.GA_WarCry_C
// Size: 0x680(Inherited: 0x678)
struct UGA_WarCry_C : UGA_PlayerSkillInstant_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x678 (0x678)


	void ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag); // Function GA_WarCry.GA_WarCry_C.ServerOnSkillActivate
	void ExecuteUbergraph_GA_WarCry(int32_t EntryPoint); // Function GA_WarCry.GA_WarCry_C.ExecuteUbergraph_GA_WarCry
}; 
 
 


