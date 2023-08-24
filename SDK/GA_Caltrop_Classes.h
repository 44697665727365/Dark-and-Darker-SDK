#pragma once 
#include <GA_Caltrop_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Caltrop.GA_Caltrop_C
// Size: 0x6B8(Inherited: 0x678)
struct UGA_Caltrop_C : UGA_PlayerSkillInstant_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x678 (0x678)
	double CaltropLifeTime;  // 0x680 (0x680)
	struct FText NotEnoughSpaceMessage;  // 0x688 (0x688)
	struct FText CannotFindLocationMessage;  // 0x6A0 (0x6A0)


	void BroadcastReason(uint8_t Reason); // Function GA_Caltrop.GA_Caltrop_C.BroadcastReason
	void Find Installable Location(struct FVector& FoundInstallLocation, uint8_t& SkillActivatableType); // Function GA_Caltrop.GA_Caltrop_C.Find Installable Location
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer& RelevantTags); // Function GA_Caltrop.GA_Caltrop_C.K2_CanActivateAbility
	void ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag); // Function GA_Caltrop.GA_Caltrop_C.ServerOnSkillActivate
	void ExecuteUbergraph_GA_Caltrop(int32_t EntryPoint); // Function GA_Caltrop.GA_Caltrop_C.ExecuteUbergraph_GA_Caltrop
}; 
 
 


