#pragma once 
#include <BP_TrapBase_StaticMesh_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_TrapBase_StaticMesh.BP_TrapBase_StaticMesh_C
// Size: 0x554(Inherited: 0x4B8)
struct ABP_TrapBase_StaticMesh_C : ABP_PropsActorBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4B8 (0x4B8)
	struct UStaticMeshComponent* StaticMesh;  // 0x4C0 (0x4C0)
	struct UDCTagCollisionDetectorComponent* DCTagCollisionDetector;  // 0x4C8 (0x4C8)
	struct FAccountDataReplication OwnerAccountDataReplication;  // 0x4D0 (0x4D0)
	int32_t DepthIndex;  // 0x548 (0x548)
	struct FGameplayTag AbilityTriggerTag;  // 0x54C (0x54C)


	void OnTrapDetectingByInteract(bool IsDetecting); // Function BP_TrapBase_StaticMesh.BP_TrapBase_StaticMesh_C.OnTrapDetectingByInteract
	void OffTrapDetecting(); // Function BP_TrapBase_StaticMesh.BP_TrapBase_StaticMesh_C.OffTrapDetecting
	void OnTrapDetecting(bool IsDetecting, struct FAccountDataReplication AccountDataReplication); // Function BP_TrapBase_StaticMesh.BP_TrapBase_StaticMesh_C.OnTrapDetecting
	void UpdateInteractDepthValue(int32_t DepthValue); // Function BP_TrapBase_StaticMesh.BP_TrapBase_StaticMesh_C.UpdateInteractDepthValue
	void BndEvt__BP_HuntingTrapProp_DCTagCollisionDetector_K2Node_ComponentBoundEvent_3_GameplayTagCollisionDetectedSignature__DelegateSignature(bool bDetected, struct FAccountDataReplication AccountDataReplication); // Function BP_TrapBase_StaticMesh.BP_TrapBase_StaticMesh_C.BndEvt__BP_HuntingTrapProp_DCTagCollisionDetector_K2Node_ComponentBoundEvent_3_GameplayTagCollisionDetectedSignature__DelegateSignature
	void ExecuteUbergraph_BP_TrapBase_StaticMesh(int32_t EntryPoint); // Function BP_TrapBase_StaticMesh.BP_TrapBase_StaticMesh_C.ExecuteUbergraph_BP_TrapBase_StaticMesh
}; 
 
 


