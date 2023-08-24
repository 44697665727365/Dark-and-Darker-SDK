#pragma once 
#include <BP_FootTrace_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_FootTrace.BP_FootTrace_C
// Size: 0x3C8(Inherited: 0x298)
struct ABP_FootTrace_C : ADecalActor
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x298 (0x298)
	struct UDCTagCollisionDetectorComponent* DCTagCollisionDetector;  // 0x2A0 (0x2A0)
	struct TMap<int32_t, struct UMaterialInstance*> FootTraceMaterialMap;  // 0x2A8 (0x2A8)
	char pad_760_1 : 7;  // 0x2F8 (0x2F8)
	bool bLeftFoot : 1;  // 0x2F8 (0x2F8)
	char pad_761[7];  // 0x2F9 (0x2F9)
	struct FRotator InRotator;  // 0x300 (0x300)
	struct UMaterialInstanceDynamic* DecalMaterialInstance;  // 0x318 (0x318)
	double FootTraceDuration;  // 0x320 (0x320)
	double CurrentDuration;  // 0x328 (0x328)
	struct FAccountDataReplication OwnerAccountDataReplication;  // 0x330 (0x330)
	struct FLinearColor Colour A;  // 0x3A8 (0x3A8)
	struct FLinearColor Colour B;  // 0x3B8 (0x3B8)


	void ReceiveBeginPlay(); // Function BP_FootTrace.BP_FootTrace_C.ReceiveBeginPlay
	void ReceiveTick(float DeltaSeconds); // Function BP_FootTrace.BP_FootTrace_C.ReceiveTick
	void BndEvt__BP_Footprint_DCTagCollisionDetector_K2Node_ComponentBoundEvent_0_GameplayTagCollisionDetectedSignature__DelegateSignature(bool bDetected, struct FAccountDataReplication AccountDataReplication); // Function BP_FootTrace.BP_FootTrace_C.BndEvt__BP_Footprint_DCTagCollisionDetector_K2Node_ComponentBoundEvent_0_GameplayTagCollisionDetectedSignature__DelegateSignature
	void ExecuteUbergraph_BP_FootTrace(int32_t EntryPoint); // Function BP_FootTrace.BP_FootTrace_C.ExecuteUbergraph_BP_FootTrace
}; 
 
 


