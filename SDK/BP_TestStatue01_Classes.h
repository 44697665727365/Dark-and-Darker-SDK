#pragma once 
#include <BP_TestStatue01_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_TestStatue01.BP_TestStatue01_C
// Size: 0x518(Inherited: 0x4B8)
struct ABP_TestStatue01_C : ABP_StatueBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4B8 (0x4B8)
	struct UStaticMeshComponent* Orb_Outer;  // 0x4C0 (0x4C0)
	struct UParticleSystemComponent* Candleflame2;  // 0x4C8 (0x4C8)
	struct USphereComponent* Sphere;  // 0x4D0 (0x4D0)
	struct UPointLightComponent* PointLight;  // 0x4D8 (0x4D8)
	struct UStaticMeshComponent* StaticMesh;  // 0x4E0 (0x4E0)
	float Timeline_1______0_37C9B48D46842BF23562769414578952;  // 0x4E8 (0x4E8)
	enum class ETimelineDirection Timeline_1__Direction_37C9B48D46842BF23562769414578952;  // 0x4EC (0x4EC)
	char pad_1261[3];  // 0x4ED (0x4ED)
	struct UTimelineComponent* Timeline_2;  // 0x4F0 (0x4F0)
	float Timeline_0______0_3B4B6C994901505A497911AFC541C92F;  // 0x4F8 (0x4F8)
	enum class ETimelineDirection Timeline_0__Direction_3B4B6C994901505A497911AFC541C92F;  // 0x4FC (0x4FC)
	char pad_1277[3];  // 0x4FD (0x4FD)
	struct UTimelineComponent* Timeline_1;  // 0x500 (0x500)
	char pad_1288_1 : 7;  // 0x508 (0x508)
	bool bIsOverlapped : 1;  // 0x508 (0x508)
	char pad_1289[7];  // 0x509 (0x509)
	double reactivationTime;  // 0x510 (0x510)


	void Timeline_0__FinishedFunc(); // Function BP_TestStatue01.BP_TestStatue01_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function BP_TestStatue01.BP_TestStatue01_C.Timeline_0__UpdateFunc
	void Timeline_1__FinishedFunc(); // Function BP_TestStatue01.BP_TestStatue01_C.Timeline_1__FinishedFunc
	void Timeline_1__UpdateFunc(); // Function BP_TestStatue01.BP_TestStatue01_C.Timeline_1__UpdateFunc
	void BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_TestStatue01.BP_TestStatue01_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_TestStatue01.BP_TestStatue01_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_TestStatue01.BP_TestStatue01_C.InteractSucceed
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_TestStatue01.BP_TestStatue01_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_TestStatue01(int32_t EntryPoint); // Function BP_TestStatue01.BP_TestStatue01_C.ExecuteUbergraph_BP_TestStatue01
}; 
 
 


