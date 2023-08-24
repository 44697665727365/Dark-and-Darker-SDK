#pragma once 
#include <GA_PowerofSacrifice_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_PowerofSacrifice.GA_PowerofSacrifice_C
// Size: 0x730(Inherited: 0x618)
struct UGA_PowerofSacrifice_C : UGA_Spell_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x618 (0x618)
	struct FGameplayCueParameters CueParam;  // 0x620 (0x620)
	struct FPrimaryAssetId GrantingAbilityId;  // 0x6F8 (0x6F8)
	struct FDCGameplayAbilityData OutGameplayAbilityData;  // 0x708 (0x708)


	void Cancelled_B9BF17034DF78B504CB93C89E45D98B3(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_PowerofSacrifice.GA_PowerofSacrifice_C.Cancelled_B9BF17034DF78B504CB93C89E45D98B3
	void ValidData_B9BF17034DF78B504CB93C89E45D98B3(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_PowerofSacrifice.GA_PowerofSacrifice_C.ValidData_B9BF17034DF78B504CB93C89E45D98B3
	void AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked); // Function GA_PowerofSacrifice.GA_PowerofSacrifice_C.AbilityActivated
	void OnCasted(struct AActor* InTarget); // Function GA_PowerofSacrifice.GA_PowerofSacrifice_C.OnCasted
	void ExecuteUbergraph_GA_PowerofSacrifice(int32_t EntryPoint); // Function GA_PowerofSacrifice.GA_PowerofSacrifice_C.ExecuteUbergraph_GA_PowerofSacrifice
}; 
 
 


