#pragma once 
#include <BP_PushingBlock_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_PushingBlock.BP_PushingBlock_C
// Size: 0x570(Inherited: 0x554)
struct ABP_PushingBlock_C : ABP_TrapBase_C
{
	char pad_1364[4];  // 0x554 (0x554)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	struct UBoxComponent* CollisionBox;  // 0x560 (0x560)
	struct UStaticMeshComponent* StaticMesh;  // 0x568 (0x568)


	void ReceiveTick(float DeltaSeconds); // Function BP_PushingBlock.BP_PushingBlock_C.ReceiveTick
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function BP_PushingBlock.BP_PushingBlock_C.ReceiveActorBeginOverlap
	void ReceiveBeginPlay(); // Function BP_PushingBlock.BP_PushingBlock_C.ReceiveBeginPlay
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_PushingBlock.BP_PushingBlock_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_PushingBlock(int32_t EntryPoint); // Function BP_PushingBlock.BP_PushingBlock_C.ExecuteUbergraph_BP_PushingBlock
}; 
 
 


