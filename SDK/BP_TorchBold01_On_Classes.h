#pragma once 
#include <BP_TorchBold01_On_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_TorchBold01_On.BP_TorchBold01_On_C
// Size: 0x531(Inherited: 0x4F0)
struct ABP_TorchBold01_On_C : ABP_LightSourceBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4F0 (0x4F0)
	struct USphereComponent* Sphere;  // 0x4F8 (0x4F8)
	struct UParticleSystemComponent* ParticleSystem;  // 0x500 (0x500)
	struct UStaticMeshComponent* Torch;  // 0x508 (0x508)
	float Timeline_1______0_E54836FE4091C02E32A525B117F93AE1;  // 0x510 (0x510)
	enum class ETimelineDirection Timeline_1__Direction_E54836FE4091C02E32A525B117F93AE1;  // 0x514 (0x514)
	char pad_1301[3];  // 0x515 (0x515)
	struct UTimelineComponent* Timeline_2;  // 0x518 (0x518)
	float Timeline_0______0_043D6CBA4557ACEA421D01BE31D968DB;  // 0x520 (0x520)
	enum class ETimelineDirection Timeline_0__Direction_043D6CBA4557ACEA421D01BE31D968DB;  // 0x524 (0x524)
	char pad_1317[3];  // 0x525 (0x525)
	struct UTimelineComponent* Timeline_1;  // 0x528 (0x528)
	char pad_1328_1 : 7;  // 0x530 (0x530)
	bool bIsOverlapped : 1;  // 0x530 (0x530)


	void Timeline_0__FinishedFunc(); // Function BP_TorchBold01_On.BP_TorchBold01_On_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function BP_TorchBold01_On.BP_TorchBold01_On_C.Timeline_0__UpdateFunc
	void Timeline_1__FinishedFunc(); // Function BP_TorchBold01_On.BP_TorchBold01_On_C.Timeline_1__FinishedFunc
	void Timeline_1__UpdateFunc(); // Function BP_TorchBold01_On.BP_TorchBold01_On_C.Timeline_1__UpdateFunc
	void BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_TorchBold01_On.BP_TorchBold01_On_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_TorchBold01_On.BP_TorchBold01_On_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_TorchBold01_On.BP_TorchBold01_On_C.InteractSucceed
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_TorchBold01_On.BP_TorchBold01_On_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_TorchBold01_On(int32_t EntryPoint); // Function BP_TorchBold01_On.BP_TorchBold01_On_C.ExecuteUbergraph_BP_TorchBold01_On
}; 
 
 


