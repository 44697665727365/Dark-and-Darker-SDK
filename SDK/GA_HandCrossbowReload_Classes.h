#pragma once 
#include <GA_HandCrossbowReload_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_HandCrossbowReload.GA_HandCrossbowReload_C
// Size: 0x590(Inherited: 0x588)
struct UGA_HandCrossbowReload_C : UGA_CrossbowReloadAmmoBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x588 (0x588)


	void SetEquippedItemsHidden(bool IsHide); // Function GA_HandCrossbowReload.GA_HandCrossbowReload_C.SetEquippedItemsHidden
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_HandCrossbowReload.GA_HandCrossbowReload_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_HandCrossbowReload.GA_HandCrossbowReload_C.AbilityActivated
	void ExecuteUbergraph_GA_HandCrossbowReload(int32_t EntryPoint); // Function GA_HandCrossbowReload.GA_HandCrossbowReload_C.ExecuteUbergraph_GA_HandCrossbowReload
}; 
 
 


