#pragma once 
#include <BP_ExplosionBottle_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_ExplosionBottle.BP_ExplosionBottle_C
// Size: 0x5C0(Inherited: 0x580)
struct ABP_ExplosionBottle_C : ABP_DCItemActor_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct UNiagaraComponent* Fire;  // 0x588 (0x588)
	struct UPointLightComponent* PointLight;  // 0x590 (0x590)
	struct UParticleSystemComponent* ParticleSystem;  // 0x598 (0x598)
	float Timeline_2_NewTrack_3_DA369AFD410D59906C46EFACBE21A253;  // 0x5A0 (0x5A0)
	enum class ETimelineDirection Timeline_2__Direction_DA369AFD410D59906C46EFACBE21A253;  // 0x5A4 (0x5A4)
	char pad_1445[3];  // 0x5A5 (0x5A5)
	struct UTimelineComponent* Timeline_3;  // 0x5A8 (0x5A8)
	float Timeline_1_NewTrack_3_B8A112CE407CCFF2DE3680AD561516E6;  // 0x5B0 (0x5B0)
	enum class ETimelineDirection Timeline_1__Direction_B8A112CE407CCFF2DE3680AD561516E6;  // 0x5B4 (0x5B4)
	char pad_1461[3];  // 0x5B5 (0x5B5)
	struct UTimelineComponent* Timeline_2;  // 0x5B8 (0x5B8)


	void Timeline_1__FinishedFunc(); // Function BP_ExplosionBottle.BP_ExplosionBottle_C.Timeline_1__FinishedFunc
	void Timeline_1__UpdateFunc(); // Function BP_ExplosionBottle.BP_ExplosionBottle_C.Timeline_1__UpdateFunc
	void Timeline_2__FinishedFunc(); // Function BP_ExplosionBottle.BP_ExplosionBottle_C.Timeline_2__FinishedFunc
	void Timeline_2__UpdateFunc(); // Function BP_ExplosionBottle.BP_ExplosionBottle_C.Timeline_2__UpdateFunc
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_ExplosionBottle.BP_ExplosionBottle_C.GameplayTagUpdated
	void OnDeactive(); // Function BP_ExplosionBottle.BP_ExplosionBottle_C.OnDeactive
	void ExecuteUbergraph_BP_ExplosionBottle(int32_t EntryPoint); // Function BP_ExplosionBottle.BP_ExplosionBottle_C.ExecuteUbergraph_BP_ExplosionBottle
}; 
 
 


