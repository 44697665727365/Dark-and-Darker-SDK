#pragma once 
#include <GA_PerkGranted_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_PerkGranted.GA_PerkGranted_C
// Size: 0x580(Inherited: 0x558)
struct UGA_PerkGranted_C : UGA_ActivateOnGranted_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	struct FGameplayTag GrantedBuffTag;  // 0x560 (0x560)
	struct FGameplayTag BuffTag;  // 0x568 (0x568)
	struct TArray<struct FPrimaryAssetId> In Gameplay Effect Id Array;  // 0x570 (0x570)


	void Removed_99BC46A248ED96A63B3A4E913BC31F32(); // Function GA_PerkGranted.GA_PerkGranted_C.Removed_99BC46A248ED96A63B3A4E913BC31F32
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_PerkGranted.GA_PerkGranted_C.K2_ActivateAbilityFromEvent
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_PerkGranted.GA_PerkGranted_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_PerkGranted(int32_t EntryPoint); // Function GA_PerkGranted.GA_PerkGranted_C.ExecuteUbergraph_GA_PerkGranted
}; 
 
 


