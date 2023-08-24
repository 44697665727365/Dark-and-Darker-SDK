#pragma once 
#include <BP_Roaster03On_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_Roaster03On.BP_Roaster03On_C
// Size: 0x528(Inherited: 0x4F0)
struct ABP_Roaster03On_C : ABP_LightSourceBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4F0 (0x4F0)
	struct UParticleSystemComponent* ParticleSystem;  // 0x4F8 (0x4F8)
	struct UStaticMeshComponent* Roaster;  // 0x500 (0x500)
	float Timeline_1______0_B16D46F84A6F4703D6A4F1B3D9388CC6;  // 0x508 (0x508)
	enum class ETimelineDirection Timeline_1__Direction_B16D46F84A6F4703D6A4F1B3D9388CC6;  // 0x50C (0x50C)
	char pad_1293[3];  // 0x50D (0x50D)
	struct UTimelineComponent* Timeline_2;  // 0x510 (0x510)
	float _____0______0_D5401464413E98B233A5D58C0DF85BF4;  // 0x518 (0x518)
	enum class ETimelineDirection _____0__Direction_D5401464413E98B233A5D58C0DF85BF4;  // 0x51C (0x51C)
	char pad_1309[3];  // 0x51D (0x51D)
	struct UTimelineComponent* _1;  // 0x520 (0x520)


	void (); // Function BP_Roaster03On.BP_Roaster03On_C.
	void (); // Function BP_Roaster03On.BP_Roaster03On_C.
	void Timeline_1__FinishedFunc(); // Function BP_Roaster03On.BP_Roaster03On_C.Timeline_1__FinishedFunc
	void Timeline_1__UpdateFunc(); // Function BP_Roaster03On.BP_Roaster03On_C.Timeline_1__UpdateFunc
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_Roaster03On.BP_Roaster03On_C.InteractSucceed
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_Roaster03On.BP_Roaster03On_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_Roaster03On(int32_t EntryPoint); // Function BP_Roaster03On.BP_Roaster03On_C.ExecuteUbergraph_BP_Roaster03On
}; 
 
 


