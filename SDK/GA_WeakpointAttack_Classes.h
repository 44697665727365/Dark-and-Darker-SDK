#pragma once 
#include <GA_WeakpointAttack_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_WeakpointAttack.GA_WeakpointAttack_C
// Size: 0x688(Inherited: 0x680)
struct UGA_WeakpointAttack_C : UGA_PlayerSkillInstantAndWaitForEnd_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x680 (0x680)


	void EventReceived_8E6DDD2E4967A9D071A2EAACDCDADCEE(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_WeakpointAttack.GA_WeakpointAttack_C.EventReceived_8E6DDD2E4967A9D071A2EAACDCDADCEE
	void ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag); // Function GA_WeakpointAttack.GA_WeakpointAttack_C.ServerOnSkillActivate
	void ExecuteUbergraph_GA_WeakpointAttack(int32_t EntryPoint); // Function GA_WeakpointAttack.GA_WeakpointAttack_C.ExecuteUbergraph_GA_WeakpointAttack
}; 
 
 


