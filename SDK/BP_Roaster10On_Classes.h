#pragma once 
#include <BP_Roaster10On_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_Roaster10On.BP_Roaster10On_C
// Size: 0x530(Inherited: 0x4F0)
struct ABP_Roaster10On_C : ABP_LightSourceBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4F0 (0x4F0)
	struct UStaticMeshComponent* SM_Decor_Vase_4;  // 0x4F8 (0x4F8)
	struct UParticleSystemComponent* ParticleSystem;  // 0x500 (0x500)
	struct UStaticMeshComponent* Roaster;  // 0x508 (0x508)
	float Timeline_1______0_32397D984310C4F89D0E64A8A6FD20DA;  // 0x510 (0x510)
	enum class ETimelineDirection Timeline_1__Direction_32397D984310C4F89D0E64A8A6FD20DA;  // 0x514 (0x514)
	char pad_1301[3];  // 0x515 (0x515)
	struct UTimelineComponent* Timeline_2;  // 0x518 (0x518)
	float _____0______0_BB4B708E4147C1CC2F6722862E35D315;  // 0x520 (0x520)
	enum class ETimelineDirection _____0__Direction_BB4B708E4147C1CC2F6722862E35D315;  // 0x524 (0x524)
	char pad_1317[3];  // 0x525 (0x525)
	struct UTimelineComponent* _1;  // 0x528 (0x528)


	void (); // Function BP_Roaster10On.BP_Roaster10On_C.
	void (); // Function BP_Roaster10On.BP_Roaster10On_C.
	void Timeline_1__FinishedFunc(); // Function BP_Roaster10On.BP_Roaster10On_C.Timeline_1__FinishedFunc
	void Timeline_1__UpdateFunc(); // Function BP_Roaster10On.BP_Roaster10On_C.Timeline_1__UpdateFunc
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_Roaster10On.BP_Roaster10On_C.InteractSucceed
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_Roaster10On.BP_Roaster10On_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_Roaster10On(int32_t EntryPoint); // Function BP_Roaster10On.BP_Roaster10On_C.ExecuteUbergraph_BP_Roaster10On
}; 
 
 


