#pragma once 
#include <BP_TorchBold02_On_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_TorchBold02_On.BP_TorchBold02_On_C
// Size: 0x559(Inherited: 0x4F0)
struct ABP_TorchBold02_On_C : ABP_LightSourceBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4F0 (0x4F0)
	struct UStaticMeshComponent* SM_Silver_Ring1;  // 0x4F8 (0x4F8)
	struct UStaticMeshComponent* SM_Silver_Ring;  // 0x500 (0x500)
	struct UStaticMeshComponent* Mechanism03;  // 0x508 (0x508)
	struct UStaticMeshComponent* SM_Iron_Nail1;  // 0x510 (0x510)
	struct UStaticMeshComponent* SM_Iron_Nail;  // 0x518 (0x518)
	struct USphereComponent* Sphere;  // 0x520 (0x520)
	struct UParticleSystemComponent* ParticleSystem;  // 0x528 (0x528)
	struct UStaticMeshComponent* Torch;  // 0x530 (0x530)
	float Timeline_1______0_7FBDE6B8419C9E76DFDC37B91049D1E7;  // 0x538 (0x538)
	enum class ETimelineDirection Timeline_1__Direction_7FBDE6B8419C9E76DFDC37B91049D1E7;  // 0x53C (0x53C)
	char pad_1341[3];  // 0x53D (0x53D)
	struct UTimelineComponent* Timeline_2;  // 0x540 (0x540)
	float Timeline_0______0_ECC9911245B50C02A1D60B91268D20E4;  // 0x548 (0x548)
	enum class ETimelineDirection Timeline_0__Direction_ECC9911245B50C02A1D60B91268D20E4;  // 0x54C (0x54C)
	char pad_1357[3];  // 0x54D (0x54D)
	struct UTimelineComponent* Timeline_1;  // 0x550 (0x550)
	char pad_1368_1 : 7;  // 0x558 (0x558)
	bool bIsOverlapped : 1;  // 0x558 (0x558)


	void Timeline_0__FinishedFunc(); // Function BP_TorchBold02_On.BP_TorchBold02_On_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function BP_TorchBold02_On.BP_TorchBold02_On_C.Timeline_0__UpdateFunc
	void Timeline_1__FinishedFunc(); // Function BP_TorchBold02_On.BP_TorchBold02_On_C.Timeline_1__FinishedFunc
	void Timeline_1__UpdateFunc(); // Function BP_TorchBold02_On.BP_TorchBold02_On_C.Timeline_1__UpdateFunc
	void BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_TorchBold02_On.BP_TorchBold02_On_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_TorchBold02_On.BP_TorchBold02_On_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_TorchBold02_On.BP_TorchBold02_On_C.InteractSucceed
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_TorchBold02_On.BP_TorchBold02_On_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_TorchBold02_On(int32_t EntryPoint); // Function BP_TorchBold02_On.BP_TorchBold02_On_C.ExecuteUbergraph_BP_TorchBold02_On
}; 
 
 


