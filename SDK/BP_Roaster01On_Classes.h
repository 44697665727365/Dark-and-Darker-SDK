#pragma once 
#include <BP_Roaster01On_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_Roaster01On.BP_Roaster01On_C
// Size: 0x528(Inherited: 0x4F0)
struct ABP_Roaster01On_C : ABP_LightSourceBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4F0 (0x4F0)
	struct UStaticMeshComponent* Roaster;  // 0x4F8 (0x4F8)
	struct UParticleSystemComponent* ParticleSystem;  // 0x500 (0x500)
	float _____3______0_C4FA88704011592143ACB7A96B95A113;  // 0x508 (0x508)
	enum class ETimelineDirection _____3__Direction_C4FA88704011592143ACB7A96B95A113;  // 0x50C (0x50C)
	char pad_1293[3];  // 0x50D (0x50D)
	struct UTimelineComponent* _4;  // 0x510 (0x510)
	float _____2______0_925DF731483706E4E8C542A9F0F6A905;  // 0x518 (0x518)
	enum class ETimelineDirection _____2__Direction_925DF731483706E4E8C542A9F0F6A905;  // 0x51C (0x51C)
	char pad_1309[3];  // 0x51D (0x51D)
	struct UTimelineComponent* _3;  // 0x520 (0x520)


	void (); // Function BP_Roaster01On.BP_Roaster01On_C.
	void (); // Function BP_Roaster01On.BP_Roaster01On_C.
	void (); // Function BP_Roaster01On.BP_Roaster01On_C.
	void (); // Function BP_Roaster01On.BP_Roaster01On_C.
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_Roaster01On.BP_Roaster01On_C.InteractSucceed
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_Roaster01On.BP_Roaster01On_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_Roaster01On(int32_t EntryPoint); // Function BP_Roaster01On.BP_Roaster01On_C.ExecuteUbergraph_BP_Roaster01On
}; 
 
 


