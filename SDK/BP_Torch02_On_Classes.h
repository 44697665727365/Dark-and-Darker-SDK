#pragma once 
#include <BP_Torch02_On_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_Torch02_On.BP_Torch02_On_C
// Size: 0x531(Inherited: 0x4F0)
struct ABP_Torch02_On_C : ABP_LightSourceBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4F0 (0x4F0)
	struct UStaticMeshComponent* Torch;  // 0x4F8 (0x4F8)
	struct USphereComponent* Sphere;  // 0x500 (0x500)
	struct UParticleSystemComponent* ParticleSystem;  // 0x508 (0x508)
	float Timeline_1______0_DEEB11B846F25D24C04590817E024F7C;  // 0x510 (0x510)
	enum class ETimelineDirection Timeline_1__Direction_DEEB11B846F25D24C04590817E024F7C;  // 0x514 (0x514)
	char pad_1301[3];  // 0x515 (0x515)
	struct UTimelineComponent* Timeline_2;  // 0x518 (0x518)
	float Timeline_0______0_8161C8EC4F2ECA1ED8A3D1A697D71FD4;  // 0x520 (0x520)
	enum class ETimelineDirection Timeline_0__Direction_8161C8EC4F2ECA1ED8A3D1A697D71FD4;  // 0x524 (0x524)
	char pad_1317[3];  // 0x525 (0x525)
	struct UTimelineComponent* Timeline_1;  // 0x528 (0x528)
	char pad_1328_1 : 7;  // 0x530 (0x530)
	bool bIsOverlapped : 1;  // 0x530 (0x530)


	void Timeline_0__FinishedFunc(); // Function BP_Torch02_On.BP_Torch02_On_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function BP_Torch02_On.BP_Torch02_On_C.Timeline_0__UpdateFunc
	void Timeline_1__FinishedFunc(); // Function BP_Torch02_On.BP_Torch02_On_C.Timeline_1__FinishedFunc
	void Timeline_1__UpdateFunc(); // Function BP_Torch02_On.BP_Torch02_On_C.Timeline_1__UpdateFunc
	void BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Torch02_On.BP_Torch02_On_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Torch02_On.BP_Torch02_On_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_Torch02_On.BP_Torch02_On_C.InteractSucceed
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_Torch02_On.BP_Torch02_On_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_Torch02_On(int32_t EntryPoint); // Function BP_Torch02_On.BP_Torch02_On_C.ExecuteUbergraph_BP_Torch02_On
}; 
 
 


