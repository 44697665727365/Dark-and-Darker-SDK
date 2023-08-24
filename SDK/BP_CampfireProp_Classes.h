#pragma once 
#include <BP_CampfireProp_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_CampfireProp.BP_CampfireProp_C
// Size: 0x508(Inherited: 0x4B8)
struct ABP_CampfireProp_C : ABP_PropsActorBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4B8 (0x4B8)
	struct UCapsuleComponent* Aura;  // 0x4C0 (0x4C0)
	struct UPointLightComponent* PointLight;  // 0x4C8 (0x4C8)
	struct UParticleSystemComponent* Fire;  // 0x4D0 (0x4D0)
	struct UStaticMeshComponent* StaticMesh;  // 0x4D8 (0x4D8)
	float Timeline_1______0_A316AC4B45AD92CD230538B035E174EE;  // 0x4E0 (0x4E0)
	enum class ETimelineDirection Timeline_1__Direction_A316AC4B45AD92CD230538B035E174EE;  // 0x4E4 (0x4E4)
	char pad_1253[3];  // 0x4E5 (0x4E5)
	struct UTimelineComponent* Timeline_2;  // 0x4E8 (0x4E8)
	float Timeline_0______0_F52FADC94B2EB587905777B2B0123A0C;  // 0x4F0 (0x4F0)
	enum class ETimelineDirection Timeline_0__Direction_F52FADC94B2EB587905777B2B0123A0C;  // 0x4F4 (0x4F4)
	char pad_1269[3];  // 0x4F5 (0x4F5)
	struct UTimelineComponent* Timeline_1;  // 0x4F8 (0x4F8)
	double Intensity;  // 0x500 (0x500)


	void Deactivate Particle System(); // Function BP_CampfireProp.BP_CampfireProp_C.Deactivate Particle System
	void Activate Particle System(); // Function BP_CampfireProp.BP_CampfireProp_C.Activate Particle System
	void Timeline_0__FinishedFunc(); // Function BP_CampfireProp.BP_CampfireProp_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function BP_CampfireProp.BP_CampfireProp_C.Timeline_0__UpdateFunc
	void Timeline_1__FinishedFunc(); // Function BP_CampfireProp.BP_CampfireProp_C.Timeline_1__FinishedFunc
	void Timeline_1__UpdateFunc(); // Function BP_CampfireProp.BP_CampfireProp_C.Timeline_1__UpdateFunc
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_CampfireProp.BP_CampfireProp_C.GameplayTagUpdated
	void OnOnSoundLoaded(struct UObject* InObjectLoaded); // Function BP_CampfireProp.BP_CampfireProp_C.OnOnSoundLoaded
	void OnOffSoundLoaded(struct UObject* InObjectLoaded); // Function BP_CampfireProp.BP_CampfireProp_C.OnOffSoundLoaded
	void ExecuteUbergraph_BP_CampfireProp(int32_t EntryPoint); // Function BP_CampfireProp.BP_CampfireProp_C.ExecuteUbergraph_BP_CampfireProp
}; 
 
 


