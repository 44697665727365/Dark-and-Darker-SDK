#pragma once 
#include <GA_Rupture_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Rupture.GA_Rupture_C
// Size: 0x688(Inherited: 0x680)
struct UGA_Rupture_C : UGA_PlayerSkillInstantAndWaitForEnd_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x680 (0x680)


	void EventReceived_EE5F81C54BEED75940848E8847E89F65(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_Rupture.GA_Rupture_C.EventReceived_EE5F81C54BEED75940848E8847E89F65
	void ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag); // Function GA_Rupture.GA_Rupture_C.ServerOnSkillActivate
	void ExecuteUbergraph_GA_Rupture(int32_t EntryPoint); // Function GA_Rupture.GA_Rupture_C.ExecuteUbergraph_GA_Rupture
}; 
 
 


