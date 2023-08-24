#pragma once 
#include <BP_CandleWallOn_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_CandleWallOn.BP_CandleWallOn_C
// Size: 0x539(Inherited: 0x4F0)
struct ABP_CandleWallOn_C : ABP_LightSourceBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4F0 (0x4F0)
	struct UGeometryCollectionComponent* GC_CandleWall_Default;  // 0x4F8 (0x4F8)
	struct USphereComponent* Sphere;  // 0x500 (0x500)
	struct UParticleSystemComponent* Candleflame1;  // 0x508 (0x508)
	struct UStaticMeshComponent* StaticMesh;  // 0x510 (0x510)
	float Timeline_1______0_D79FC35C46B71E6C77EB58A8BB75CF8D;  // 0x518 (0x518)
	enum class ETimelineDirection Timeline_1__Direction_D79FC35C46B71E6C77EB58A8BB75CF8D;  // 0x51C (0x51C)
	char pad_1309[3];  // 0x51D (0x51D)
	struct UTimelineComponent* Timeline_2;  // 0x520 (0x520)
	float Timeline_0______0_6B57DBD44B66ECDFFED8328195181D5F;  // 0x528 (0x528)
	enum class ETimelineDirection Timeline_0__Direction_6B57DBD44B66ECDFFED8328195181D5F;  // 0x52C (0x52C)
	char pad_1325[3];  // 0x52D (0x52D)
	struct UTimelineComponent* Timeline_1;  // 0x530 (0x530)
	char pad_1336_1 : 7;  // 0x538 (0x538)
	bool bIsOverlapped : 1;  // 0x538 (0x538)


	void Timeline_0__FinishedFunc(); // Function BP_CandleWallOn.BP_CandleWallOn_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function BP_CandleWallOn.BP_CandleWallOn_C.Timeline_0__UpdateFunc
	void Timeline_1__FinishedFunc(); // Function BP_CandleWallOn.BP_CandleWallOn_C.Timeline_1__FinishedFunc
	void Timeline_1__UpdateFunc(); // Function BP_CandleWallOn.BP_CandleWallOn_C.Timeline_1__UpdateFunc
	void BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_CandleWallOn.BP_CandleWallOn_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_CandleWallOn.BP_CandleWallOn_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_CandleWallOn.BP_CandleWallOn_C.InteractSucceed
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_CandleWallOn.BP_CandleWallOn_C.GameplayTagUpdated
	void DestructClient(); // Function BP_CandleWallOn.BP_CandleWallOn_C.DestructClient
	void ExecuteUbergraph_BP_CandleWallOn(int32_t EntryPoint); // Function BP_CandleWallOn.BP_CandleWallOn_C.ExecuteUbergraph_BP_CandleWallOn
}; 
 
 


