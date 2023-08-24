#pragma once 
#include <GA_ZombiePoisonCloud_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_ZombiePoisonCloud.GA_ZombiePoisonCloud_C
// Size: 0x610(Inherited: 0x608)
struct UGA_ZombiePoisonCloud_C : UGA_AoeCallerAtLocationFromMontage_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x608 (0x608)


	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_ZombiePoisonCloud.GA_ZombiePoisonCloud_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_ZombiePoisonCloud.GA_ZombiePoisonCloud_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_ZombiePoisonCloud(int32_t EntryPoint); // Function GA_ZombiePoisonCloud.GA_ZombiePoisonCloud_C.ExecuteUbergraph_GA_ZombiePoisonCloud
}; 
 
 


