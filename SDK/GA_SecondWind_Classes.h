#pragma once 
#include <GA_SecondWind_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SecondWind.GA_SecondWind_C
// Size: 0x680(Inherited: 0x678)
struct UGA_SecondWind_C : UGA_PlayerSkillInstant_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x678 (0x678)


	void ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag); // Function GA_SecondWind.GA_SecondWind_C.ServerOnSkillActivate
	void ExecuteUbergraph_GA_SecondWind(int32_t EntryPoint); // Function GA_SecondWind.GA_SecondWind_C.ExecuteUbergraph_GA_SecondWind
}; 
 
 


