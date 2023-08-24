#pragma once 
#include <BP_Roaster04On_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_Roaster04On.BP_Roaster04On_C
// Size: 0x528(Inherited: 0x4F0)
struct ABP_Roaster04On_C : ABP_LightSourceBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4F0 (0x4F0)
	struct UStaticMeshComponent* Roaster;  // 0x4F8 (0x4F8)
	struct UParticleSystemComponent* ParticleSystem;  // 0x500 (0x500)
	float Timeline_1______0_FB1059B347E7B2FADC45109FD93002EA;  // 0x508 (0x508)
	enum class ETimelineDirection Timeline_1__Direction_FB1059B347E7B2FADC45109FD93002EA;  // 0x50C (0x50C)
	char pad_1293[3];  // 0x50D (0x50D)
	struct UTimelineComponent* Timeline_2;  // 0x510 (0x510)
	float _____0______0_E06F0BBC4FD40BA5E9CEC4B80827E930;  // 0x518 (0x518)
	enum class ETimelineDirection _____0__Direction_E06F0BBC4FD40BA5E9CEC4B80827E930;  // 0x51C (0x51C)
	char pad_1309[3];  // 0x51D (0x51D)
	struct UTimelineComponent* _1;  // 0x520 (0x520)


	void (); // Function BP_Roaster04On.BP_Roaster04On_C.
	void (); // Function BP_Roaster04On.BP_Roaster04On_C.
	void Timeline_1__FinishedFunc(); // Function BP_Roaster04On.BP_Roaster04On_C.Timeline_1__FinishedFunc
	void Timeline_1__UpdateFunc(); // Function BP_Roaster04On.BP_Roaster04On_C.Timeline_1__UpdateFunc
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_Roaster04On.BP_Roaster04On_C.InteractSucceed
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_Roaster04On.BP_Roaster04On_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_Roaster04On(int32_t EntryPoint); // Function BP_Roaster04On.BP_Roaster04On_C.ExecuteUbergraph_BP_Roaster04On
}; 
 
 


