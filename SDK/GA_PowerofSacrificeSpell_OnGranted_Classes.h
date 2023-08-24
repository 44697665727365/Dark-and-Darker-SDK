#pragma once 
#include <GA_PowerofSacrificeSpell_OnGranted_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_PowerofSacrificeSpell_OnGranted.GA_PowerofSacrificeSpell_OnGranted_C
// Size: 0x570(Inherited: 0x558)
struct UGA_PowerofSacrificeSpell_OnGranted_C : UGA_ActivateOnAbilityHandleData_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	struct TArray<struct FPrimaryAssetId> PowerofSacrificeEffect;  // 0x560 (0x560)


	void Removed_2EA363F149D0E4E7E8F1E6948FBAD6DE(); // Function GA_PowerofSacrificeSpell_OnGranted.GA_PowerofSacrificeSpell_OnGranted_C.Removed_2EA363F149D0E4E7E8F1E6948FBAD6DE
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_PowerofSacrificeSpell_OnGranted.GA_PowerofSacrificeSpell_OnGranted_C.K2_ActivateAbilityFromEvent
	void ExecuteUbergraph_GA_PowerofSacrificeSpell_OnGranted(int32_t EntryPoint); // Function GA_PowerofSacrificeSpell_OnGranted.GA_PowerofSacrificeSpell_OnGranted_C.ExecuteUbergraph_GA_PowerofSacrificeSpell_OnGranted
}; 
 
 


