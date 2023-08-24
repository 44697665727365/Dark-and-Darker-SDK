#pragma once 
#include <BP_GoblinArcher_Arrow_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_GoblinArcher_Arrow.BP_GoblinArcher_Arrow_C
// Size: 0x6E8(Inherited: 0x6D0)
struct ABP_GoblinArcher_Arrow_C : ABP_ProjectileActor_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)
	struct UNiagaraComponent* FX_Poisoin;  // 0x6D8 (0x6D8)
	struct UParticleSystemComponent* ParticleSystem_1;  // 0x6E0 (0x6E0)


	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_GoblinArcher_Arrow.BP_GoblinArcher_Arrow_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_GoblinArcher_Arrow(int32_t EntryPoint); // Function BP_GoblinArcher_Arrow.BP_GoblinArcher_Arrow_C.ExecuteUbergraph_BP_GoblinArcher_Arrow
}; 
 
 


