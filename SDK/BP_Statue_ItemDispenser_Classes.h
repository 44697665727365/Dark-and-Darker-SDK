#pragma once 
#include <BP_Statue_ItemDispenser_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_Statue_ItemDispenser.BP_Statue_ItemDispenser_C
// Size: 0x518(Inherited: 0x4B8)
struct ABP_Statue_ItemDispenser_C : ABP_StatueBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4B8 (0x4B8)
	struct UItemRandomGenerateComponent* ItemRandomGenerate;  // 0x4C0 (0x4C0)
	struct UParticleSystemComponent* Candleflame1;  // 0x4C8 (0x4C8)
	struct UStaticMeshComponent* Orb_Outer;  // 0x4D0 (0x4D0)
	struct USphereComponent* Sphere;  // 0x4D8 (0x4D8)
	struct UPointLightComponent* PointLight;  // 0x4E0 (0x4E0)
	struct UStaticMeshComponent* StaticMesh;  // 0x4E8 (0x4E8)
	float Timeline_0______0_63B01F7846C549DA37E35182AE08B215;  // 0x4F0 (0x4F0)
	enum class ETimelineDirection Timeline_0__Direction_63B01F7846C549DA37E35182AE08B215;  // 0x4F4 (0x4F4)
	char pad_1269[3];  // 0x4F5 (0x4F5)
	struct UTimelineComponent* Timeline_1;  // 0x4F8 (0x4F8)
	char pad_1280_1 : 7;  // 0x500 (0x500)
	bool bIsOverlapped : 1;  // 0x500 (0x500)
	char pad_1281[7];  // 0x501 (0x501)
	double reactivationTime;  // 0x508 (0x508)
	struct AActor* Target;  // 0x510 (0x510)


	void Timeline_0__FinishedFunc(); // Function BP_Statue_ItemDispenser.BP_Statue_ItemDispenser_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function BP_Statue_ItemDispenser.BP_Statue_ItemDispenser_C.Timeline_0__UpdateFunc
	void BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Statue_ItemDispenser.BP_Statue_ItemDispenser_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Statue_ItemDispenser.BP_Statue_ItemDispenser_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_Statue_ItemDispenser.BP_Statue_ItemDispenser_C.InteractSucceed
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_Statue_ItemDispenser.BP_Statue_ItemDispenser_C.GameplayTagUpdated
	void BndEvt__BP_Statue_ATM_ItemRandomGenerate_K2Node_ComponentBoundEvent_2_ItemGenerationFinishedSignature__DelegateSignature(struct TArray<struct FItemData>& ResultItems); // Function BP_Statue_ItemDispenser.BP_Statue_ItemDispenser_C.BndEvt__BP_Statue_ATM_ItemRandomGenerate_K2Node_ComponentBoundEvent_2_ItemGenerationFinishedSignature__DelegateSignature
	void ExecuteUbergraph_BP_Statue_ItemDispenser(int32_t EntryPoint); // Function BP_Statue_ItemDispenser.BP_Statue_ItemDispenser_C.ExecuteUbergraph_BP_Statue_ItemDispenser
}; 
 
 


