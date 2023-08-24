#pragma once 
#include <GA_WeaponPerkBase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_WeaponPerkBase.GA_WeaponPerkBase_C
// Size: 0x5A8(Inherited: 0x558)
struct UGA_WeaponPerkBase_C : UGA_ActivateOnAbilityHandleData_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	struct UDCPerkDataComponent* PerkComp;  // 0x560 (0x560)
	struct FGameplayTagContainer AllowTags;  // 0x568 (0x568)
	struct FGameplayTagContainer NotAllowTags;  // 0x588 (0x588)


	void FinishNotAllow(); // Function GA_WeaponPerkBase.GA_WeaponPerkBase_C.FinishNotAllow
	void FinishAllow(); // Function GA_WeaponPerkBase.GA_WeaponPerkBase_C.FinishAllow
	void StartNotAllow(struct FPrimaryAssetId AssetId); // Function GA_WeaponPerkBase.GA_WeaponPerkBase_C.StartNotAllow
	void StartAllow(struct FPrimaryAssetId AssetId); // Function GA_WeaponPerkBase.GA_WeaponPerkBase_C.StartAllow
	void K2_ActivateAbility(); // Function GA_WeaponPerkBase.GA_WeaponPerkBase_C.K2_ActivateAbility
	void ExecuteUbergraph_GA_WeaponPerkBase(int32_t EntryPoint); // Function GA_WeaponPerkBase.GA_WeaponPerkBase_C.ExecuteUbergraph_GA_WeaponPerkBase
}; 
 
 


