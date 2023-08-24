#pragma once 
#include <GA_SmokePot_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SmokePot.GA_SmokePot_C
// Size: 0x688(Inherited: 0x678)
struct UGA_SmokePot_C : UGA_PlayerSkillInstant_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x678 (0x678)
	ADCAoeBase* Aoe Class;  // 0x680 (0x680)


	void ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag); // Function GA_SmokePot.GA_SmokePot_C.ServerOnSkillActivate
	void ExecuteUbergraph_GA_SmokePot(int32_t EntryPoint); // Function GA_SmokePot.GA_SmokePot_C.ExecuteUbergraph_GA_SmokePot
}; 
 
 


