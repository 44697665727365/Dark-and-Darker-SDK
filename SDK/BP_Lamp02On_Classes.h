#pragma once 
#include <BP_Lamp02On_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_Lamp02On.BP_Lamp02On_C
// Size: 0x541(Inherited: 0x4F0)
struct ABP_Lamp02On_C : ABP_LightSourceBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4F0 (0x4F0)
	struct UNiagaraComponent* FXS_CandleFlame;  // 0x4F8 (0x4F8)
	struct UStaticMeshComponent* SM_wood_support_low_wood_support_low;  // 0x500 (0x500)
	struct UStaticMeshComponent* Torch;  // 0x508 (0x508)
	struct USphereComponent* Sphere;  // 0x510 (0x510)
	struct UParticleSystemComponent* ParticleSystem;  // 0x518 (0x518)
	float Timeline_1______0_880E3B4943383BF3137FBA8105F54BEF;  // 0x520 (0x520)
	enum class ETimelineDirection Timeline_1__Direction_880E3B4943383BF3137FBA8105F54BEF;  // 0x524 (0x524)
	char pad_1317[3];  // 0x525 (0x525)
	struct UTimelineComponent* Timeline_2;  // 0x528 (0x528)
	float Timeline_0______0_4566267841C10261712DC38A0CE24984;  // 0x530 (0x530)
	enum class ETimelineDirection Timeline_0__Direction_4566267841C10261712DC38A0CE24984;  // 0x534 (0x534)
	char pad_1333[3];  // 0x535 (0x535)
	struct UTimelineComponent* Timeline_1;  // 0x538 (0x538)
	char pad_1344_1 : 7;  // 0x540 (0x540)
	bool bIsOverlapped : 1;  // 0x540 (0x540)


	void Timeline_0__FinishedFunc(); // Function BP_Lamp02On.BP_Lamp02On_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function BP_Lamp02On.BP_Lamp02On_C.Timeline_0__UpdateFunc
	void Timeline_1__FinishedFunc(); // Function BP_Lamp02On.BP_Lamp02On_C.Timeline_1__FinishedFunc
	void Timeline_1__UpdateFunc(); // Function BP_Lamp02On.BP_Lamp02On_C.Timeline_1__UpdateFunc
	void BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Lamp02On.BP_Lamp02On_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Lamp02On.BP_Lamp02On_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_Lamp02On.BP_Lamp02On_C.InteractSucceed
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_Lamp02On.BP_Lamp02On_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_Lamp02On(int32_t EntryPoint); // Function BP_Lamp02On.BP_Lamp02On_C.ExecuteUbergraph_BP_Lamp02On
}; 
 
 


