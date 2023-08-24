#pragma once 
#include <BP_Statue02_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_Statue02.BP_Statue02_C
// Size: 0x530(Inherited: 0x4B8)
struct ABP_Statue02_C : ABP_StatueBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4B8 (0x4B8)
	struct UNiagaraComponent* Niagara;  // 0x4C0 (0x4C0)
	struct UParticleSystemComponent* Orb_Particle;  // 0x4C8 (0x4C8)
	struct UStaticMeshComponent* Orb_Outer;  // 0x4D0 (0x4D0)
	struct USphereComponent* Sphere;  // 0x4D8 (0x4D8)
	struct UPointLightComponent* PointLight;  // 0x4E0 (0x4E0)
	struct UStaticMeshComponent* StaticMesh;  // 0x4E8 (0x4E8)
	float Timeline_1______0_E8D2329E4C09DF9548B91AAD8B3623E1;  // 0x4F0 (0x4F0)
	enum class ETimelineDirection Timeline_1__Direction_E8D2329E4C09DF9548B91AAD8B3623E1;  // 0x4F4 (0x4F4)
	char pad_1269[3];  // 0x4F5 (0x4F5)
	struct UTimelineComponent* Timeline_2;  // 0x4F8 (0x4F8)
	float Timeline_0______0_643F91084F5EEC64FE02DC861DBBAB98;  // 0x500 (0x500)
	enum class ETimelineDirection Timeline_0__Direction_643F91084F5EEC64FE02DC861DBBAB98;  // 0x504 (0x504)
	char pad_1285[3];  // 0x505 (0x505)
	struct UTimelineComponent* Timeline_1;  // 0x508 (0x508)
	char pad_1296_1 : 7;  // 0x510 (0x510)
	bool bIsOverlapped : 1;  // 0x510 (0x510)
	char pad_1297[7];  // 0x511 (0x511)
	double reactivationTime;  // 0x518 (0x518)
	struct FLinearColor Theme Colour;  // 0x520 (0x520)


	void Timeline_0__FinishedFunc(); // Function BP_Statue02.BP_Statue02_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function BP_Statue02.BP_Statue02_C.Timeline_0__UpdateFunc
	void Timeline_1__FinishedFunc(); // Function BP_Statue02.BP_Statue02_C.Timeline_1__FinishedFunc
	void Timeline_1__UpdateFunc(); // Function BP_Statue02.BP_Statue02_C.Timeline_1__UpdateFunc
	void BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Statue02.BP_Statue02_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Statue02.BP_Statue02_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_Statue02.BP_Statue02_C.InteractSucceed
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_Statue02.BP_Statue02_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_Statue02(int32_t EntryPoint); // Function BP_Statue02.BP_Statue02_C.ExecuteUbergraph_BP_Statue02
}; 
 
 


