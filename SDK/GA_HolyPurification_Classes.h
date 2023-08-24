#pragma once 
#include <GA_HolyPurification_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_HolyPurification.GA_HolyPurification_C
// Size: 0x760(Inherited: 0x758)
struct UGA_HolyPurification_C : UGA_PlayerSkillCast_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x758 (0x758)


	void ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag); // Function GA_HolyPurification.GA_HolyPurification_C.ServerOnSkillActivate
	void ExecuteUbergraph_GA_HolyPurification(int32_t EntryPoint); // Function GA_HolyPurification.GA_HolyPurification_C.ExecuteUbergraph_GA_HolyPurification
}; 
 
 


