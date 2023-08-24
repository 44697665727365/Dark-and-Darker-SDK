#pragma once 
#include <BP_DoubleAxe_Unique_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_DoubleAxe_Unique.BP_DoubleAxe_Unique_C
// Size: 0x5D0(Inherited: 0x5A8)
struct ABP_DoubleAxe_Unique_C : ABP_UniqueItemActor_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x5A8 (0x5A8)
	struct UNiagaraComponent* FXS_LifeAfterDeath_Trail;  // 0x5B0 (0x5B0)
	struct UNiagaraComponent* FXS_LifeAfterDeath_OnWeapon;  // 0x5B8 (0x5B8)
	struct UMaterialInterface* M_Activation;  // 0x5C0 (0x5C0)
	struct UMaterialInterface* M_Deactivation;  // 0x5C8 (0x5C8)


	void Activate(); // Function BP_DoubleAxe_Unique.BP_DoubleAxe_Unique_C.Activate
	void Deactivate(); // Function BP_DoubleAxe_Unique.BP_DoubleAxe_Unique_C.Deactivate
	void ExecuteUbergraph_BP_DoubleAxe_Unique(int32_t EntryPoint); // Function BP_DoubleAxe_Unique.BP_DoubleAxe_Unique_C.ExecuteUbergraph_BP_DoubleAxe_Unique
}; 
 
 


