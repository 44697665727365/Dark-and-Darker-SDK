#pragma once 
#include <BP_PressurePlate_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_PressurePlate.BP_PressurePlate_C
// Size: 0x4EC(Inherited: 0x4D8)
struct ABP_PressurePlate_C : ABP_TriggerBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4D8 (0x4D8)
	struct UBoxComponent* ActiveBox;  // 0x4E0 (0x4E0)
	int32_t Count;  // 0x4E8 (0x4E8)


	void BndEvt__BP_FloorSpikeTrap_ActiveBox_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_PressurePlate.BP_PressurePlate_C.BndEvt__BP_FloorSpikeTrap_ActiveBox_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__BP_PressurePlates_ActiveBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_PressurePlate.BP_PressurePlate_C.BndEvt__BP_PressurePlates_ActiveBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
	void ExecuteUbergraph_BP_PressurePlate(int32_t EntryPoint); // Function BP_PressurePlate.BP_PressurePlate_C.ExecuteUbergraph_BP_PressurePlate
}; 
 
 


