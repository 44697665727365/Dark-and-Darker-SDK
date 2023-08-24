#pragma once 
#include <GA_WindlassCrossbowReload_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_WindlassCrossbowReload.GA_WindlassCrossbowReload_C
// Size: 0x590(Inherited: 0x588)
struct UGA_WindlassCrossbowReload_C : UGA_CrossbowReloadAmmoBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x588 (0x588)


	void K2_OnEndAbility(bool bWasCancelled); // Function GA_WindlassCrossbowReload.GA_WindlassCrossbowReload_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_WindlassCrossbowReload.GA_WindlassCrossbowReload_C.AbilityActivated
	void ExecuteUbergraph_GA_WindlassCrossbowReload(int32_t EntryPoint); // Function GA_WindlassCrossbowReload.GA_WindlassCrossbowReload_C.ExecuteUbergraph_GA_WindlassCrossbowReload
}; 
 
 


