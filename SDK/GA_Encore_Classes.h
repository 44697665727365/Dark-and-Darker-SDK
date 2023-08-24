#pragma once 
#include <GA_Encore_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Encore.GA_Encore_C
// Size: 0x688(Inherited: 0x680)
struct UGA_Encore_C : UGA_PlayerSkillInstantAndWaitForEnd_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x680 (0x680)


	void EventReceived_1D679BCA4BE8738D12DAEB8FB3E837DD(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_Encore.GA_Encore_C.EventReceived_1D679BCA4BE8738D12DAEB8FB3E837DD
	void ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag); // Function GA_Encore.GA_Encore_C.ServerOnSkillActivate
	void ExecuteUbergraph_GA_Encore(int32_t EntryPoint); // Function GA_Encore.GA_Encore_C.ExecuteUbergraph_GA_Encore
}; 
 
 


