#pragma once 
#include <GA_Ignite_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Ignite.GA_Ignite_C
// Size: 0x740(Inherited: 0x618)
struct UGA_Ignite_C : UGA_Spell_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x618 (0x618)
	struct FGameplayCueParameters CueParam;  // 0x620 (0x620)
	struct FPrimaryAssetId EffectId;  // 0x6F8 (0x6F8)
	struct FPrimaryAssetId GrantingAbilityId;  // 0x708 (0x708)
	struct FDCGameplayAbilityData OutGameplayAbilityData;  // 0x718 (0x718)


	void Cancelled_7B308F884F7D295326C8F096A391101B(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_Ignite.GA_Ignite_C.Cancelled_7B308F884F7D295326C8F096A391101B
	void ValidData_7B308F884F7D295326C8F096A391101B(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_Ignite.GA_Ignite_C.ValidData_7B308F884F7D295326C8F096A391101B
	void AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked); // Function GA_Ignite.GA_Ignite_C.AbilityActivated
	void OnCasted(struct AActor* InTarget); // Function GA_Ignite.GA_Ignite_C.OnCasted
	void ExecuteUbergraph_GA_Ignite(int32_t EntryPoint); // Function GA_Ignite.GA_Ignite_C.ExecuteUbergraph_GA_Ignite
}; 
 
 


