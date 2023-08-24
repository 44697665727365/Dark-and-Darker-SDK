#pragma once 
#include <BP_TorchSkull_On_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_TorchSkull_On.BP_TorchSkull_On_C
// Size: 0x549(Inherited: 0x4F0)
struct ABP_TorchSkull_On_C : ABP_LightSourceBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4F0 (0x4F0)
	struct UStaticMeshComponent* SM_Plate-01-03;  // 0x4F8 (0x4F8)
	struct UStaticMeshComponent* SM_torch_low;  // 0x500 (0x500)
	struct UStaticMeshComponent* SM_Bones_Jaw;  // 0x508 (0x508)
	struct USphereComponent* Sphere;  // 0x510 (0x510)
	struct UParticleSystemComponent* ParticleSystem;  // 0x518 (0x518)
	struct UStaticMeshComponent* Torch;  // 0x520 (0x520)
	float Timeline_1______0_BD01FCFC4CF7F27B00934B8EC3EFF6D3;  // 0x528 (0x528)
	enum class ETimelineDirection Timeline_1__Direction_BD01FCFC4CF7F27B00934B8EC3EFF6D3;  // 0x52C (0x52C)
	char pad_1325[3];  // 0x52D (0x52D)
	struct UTimelineComponent* Timeline_2;  // 0x530 (0x530)
	float Timeline_0______0_123C7A3A4DB4CCD5BB7A05AA39699248;  // 0x538 (0x538)
	enum class ETimelineDirection Timeline_0__Direction_123C7A3A4DB4CCD5BB7A05AA39699248;  // 0x53C (0x53C)
	char pad_1341[3];  // 0x53D (0x53D)
	struct UTimelineComponent* Timeline_1;  // 0x540 (0x540)
	char pad_1352_1 : 7;  // 0x548 (0x548)
	bool bIsOverlapped : 1;  // 0x548 (0x548)


	void Timeline_0__FinishedFunc(); // Function BP_TorchSkull_On.BP_TorchSkull_On_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function BP_TorchSkull_On.BP_TorchSkull_On_C.Timeline_0__UpdateFunc
	void Timeline_1__FinishedFunc(); // Function BP_TorchSkull_On.BP_TorchSkull_On_C.Timeline_1__FinishedFunc
	void Timeline_1__UpdateFunc(); // Function BP_TorchSkull_On.BP_TorchSkull_On_C.Timeline_1__UpdateFunc
	void BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_TorchSkull_On.BP_TorchSkull_On_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_TorchSkull_On.BP_TorchSkull_On_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_TorchSkull_On.BP_TorchSkull_On_C.InteractSucceed
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_TorchSkull_On.BP_TorchSkull_On_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_TorchSkull_On(int32_t EntryPoint); // Function BP_TorchSkull_On.BP_TorchSkull_On_C.ExecuteUbergraph_BP_TorchSkull_On
}; 
 
 


