#pragma once 
#include <BP_Longsword_Unique_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_Longsword_Unique.BP_Longsword_Unique_C
// Size: 0x5C8(Inherited: 0x5A8)
struct ABP_Longsword_Unique_C : ABP_UniqueItemActor_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x5A8 (0x5A8)
	struct UNiagaraComponent* FXS_Fulgor_Trail_Ribbon;  // 0x5B0 (0x5B0)
	struct UNiagaraComponent* FXS_Flugor_ParticleTrail;  // 0x5B8 (0x5B8)
	struct UNiagaraComponent* FXS_Fulgor;  // 0x5C0 (0x5C0)


	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_Longsword_Unique.BP_Longsword_Unique_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_Longsword_Unique(int32_t EntryPoint); // Function BP_Longsword_Unique.BP_Longsword_Unique_C.ExecuteUbergraph_BP_Longsword_Unique
}; 
 
 


