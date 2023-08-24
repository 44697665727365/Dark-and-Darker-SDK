#pragma once 
#include <BP_StickyTar_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_StickyTar.BP_StickyTar_C
// Size: 0x580(Inherited: 0x554)
struct ABP_StickyTar_C : ABP_TrapBase_C
{
	char pad_1364[4];  // 0x554 (0x554)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	struct UDecalComponent* Decal;  // 0x560 (0x560)
	struct UStaticMeshComponent* Sphere;  // 0x568 (0x568)
	struct UArrowComponent* Arrow;  // 0x570 (0x570)
	struct UStaticMeshComponent* Cylinder;  // 0x578 (0x578)


	void OnTrapActivate(); // Function BP_StickyTar.BP_StickyTar_C.OnTrapActivate
	void ReceiveBeginPlay(); // Function BP_StickyTar.BP_StickyTar_C.ReceiveBeginPlay
	void EventCollisionOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_StickyTar.BP_StickyTar_C.EventCollisionOverlapBegin
	void EventCollisionOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_StickyTar.BP_StickyTar_C.EventCollisionOverlapEnd
	void ExecuteUbergraph_BP_StickyTar(int32_t EntryPoint); // Function BP_StickyTar.BP_StickyTar_C.ExecuteUbergraph_BP_StickyTar
}; 
 
 


