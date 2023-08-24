#pragma once 
#include <BP_Roaster09On_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_Roaster09On.BP_Roaster09On_C
// Size: 0x528(Inherited: 0x4F0)
struct ABP_Roaster09On_C : ABP_LightSourceBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4F0 (0x4F0)
	struct UParticleSystemComponent* ParticleSystem;  // 0x4F8 (0x4F8)
	struct UStaticMeshComponent* Roaster;  // 0x500 (0x500)
	float Timeline_1______0_D8C7B117448D673D5907B59328A286FA;  // 0x508 (0x508)
	enum class ETimelineDirection Timeline_1__Direction_D8C7B117448D673D5907B59328A286FA;  // 0x50C (0x50C)
	char pad_1293[3];  // 0x50D (0x50D)
	struct UTimelineComponent* Timeline_2;  // 0x510 (0x510)
	float _____0______0_FFE4183C46F8A6191B66F2BB15B688C5;  // 0x518 (0x518)
	enum class ETimelineDirection _____0__Direction_FFE4183C46F8A6191B66F2BB15B688C5;  // 0x51C (0x51C)
	char pad_1309[3];  // 0x51D (0x51D)
	struct UTimelineComponent* _1;  // 0x520 (0x520)


	void (); // Function BP_Roaster09On.BP_Roaster09On_C.
	void (); // Function BP_Roaster09On.BP_Roaster09On_C.
	void Timeline_1__FinishedFunc(); // Function BP_Roaster09On.BP_Roaster09On_C.Timeline_1__FinishedFunc
	void Timeline_1__UpdateFunc(); // Function BP_Roaster09On.BP_Roaster09On_C.Timeline_1__UpdateFunc
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_Roaster09On.BP_Roaster09On_C.InteractSucceed
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_Roaster09On.BP_Roaster09On_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_Roaster09On(int32_t EntryPoint); // Function BP_Roaster09On.BP_Roaster09On_C.ExecuteUbergraph_BP_Roaster09On
}; 
 
 


