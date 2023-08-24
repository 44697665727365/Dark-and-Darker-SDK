#pragma once 
#include <GA_AddWearableWeaponPerkBase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_AddWearableWeaponPerkBase.GA_AddWearableWeaponPerkBase_C
// Size: 0x5C0(Inherited: 0x5A8)
struct UGA_AddWearableWeaponPerkBase_C : UGA_WeaponPerkBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x5A8 (0x5A8)
	struct FPrimaryAssetId IdGroupAssetId;  // 0x5B0 (0x5B0)


	void K2_ActivateAbility(); // Function GA_AddWearableWeaponPerkBase.GA_AddWearableWeaponPerkBase_C.K2_ActivateAbility
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_AddWearableWeaponPerkBase.GA_AddWearableWeaponPerkBase_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_AddWearableWeaponPerkBase(int32_t EntryPoint); // Function GA_AddWearableWeaponPerkBase.GA_AddWearableWeaponPerkBase_C.ExecuteUbergraph_GA_AddWearableWeaponPerkBase
}; 
 
 


