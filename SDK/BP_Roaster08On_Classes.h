#pragma once 
#include <BP_Roaster08On_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_Roaster08On.BP_Roaster08On_C
// Size: 0x538(Inherited: 0x4F0)
struct ABP_Roaster08On_C : ABP_LightSourceBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4F0 (0x4F0)
	struct UStaticMeshComponent* Brazier_03;  // 0x4F8 (0x4F8)
	struct UStaticMeshComponent* SM_Base_09;  // 0x500 (0x500)
	struct UParticleSystemComponent* ParticleSystem;  // 0x508 (0x508)
	struct UStaticMeshComponent* Roaster;  // 0x510 (0x510)
	float Timeline_1______0_EB807DA941AC41C7642B37A3F191A522;  // 0x518 (0x518)
	enum class ETimelineDirection Timeline_1__Direction_EB807DA941AC41C7642B37A3F191A522;  // 0x51C (0x51C)
	char pad_1309[3];  // 0x51D (0x51D)
	struct UTimelineComponent* Timeline_2;  // 0x520 (0x520)
	float _____0______0_0147D39C4F0A7E369C283A9F0190F18B;  // 0x528 (0x528)
	enum class ETimelineDirection _____0__Direction_0147D39C4F0A7E369C283A9F0190F18B;  // 0x52C (0x52C)
	char pad_1325[3];  // 0x52D (0x52D)
	struct UTimelineComponent* _1;  // 0x530 (0x530)


	void (); // Function BP_Roaster08On.BP_Roaster08On_C.
	void (); // Function BP_Roaster08On.BP_Roaster08On_C.
	void Timeline_1__FinishedFunc(); // Function BP_Roaster08On.BP_Roaster08On_C.Timeline_1__FinishedFunc
	void Timeline_1__UpdateFunc(); // Function BP_Roaster08On.BP_Roaster08On_C.Timeline_1__UpdateFunc
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_Roaster08On.BP_Roaster08On_C.InteractSucceed
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_Roaster08On.BP_Roaster08On_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_Roaster08On(int32_t EntryPoint); // Function BP_Roaster08On.BP_Roaster08On_C.ExecuteUbergraph_BP_Roaster08On
}; 
 
 


