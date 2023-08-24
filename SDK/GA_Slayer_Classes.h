#pragma once 
#include <GA_Slayer_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Slayer.GA_Slayer_C
// Size: 0x5E0(Inherited: 0x5C0)
struct UGA_Slayer_C : UGA_AddRestrictedItemsPerkBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x5C0 (0x5C0)
	char pad_1480_1 : 7;  // 0x5C8 (0x5C8)
	bool bActivated : 1;  // 0x5C8 (0x5C8)
	char pad_1481[7];  // 0x5C9 (0x5C9)
	struct TArray<struct FActiveGameplayEffectHandle> ApplyEffectHandles;  // 0x5D0 (0x5D0)


	void Removed_A6ACC65E49785454FF743EA5D4B43272(int32_t TagCount); // Function GA_Slayer.GA_Slayer_C.Removed_A6ACC65E49785454FF743EA5D4B43272
	void OnCountChanged_A6ACC65E49785454FF743EA5D4B43272(int32_t TagCount); // Function GA_Slayer.GA_Slayer_C.OnCountChanged_A6ACC65E49785454FF743EA5D4B43272
	void Added_A6ACC65E49785454FF743EA5D4B43272(int32_t TagCount); // Function GA_Slayer.GA_Slayer_C.Added_A6ACC65E49785454FF743EA5D4B43272
	void K2_ActivateAbility(); // Function GA_Slayer.GA_Slayer_C.K2_ActivateAbility
	void ExecuteUbergraph_GA_Slayer(int32_t EntryPoint); // Function GA_Slayer.GA_Slayer_C.ExecuteUbergraph_GA_Slayer
}; 
 
 


