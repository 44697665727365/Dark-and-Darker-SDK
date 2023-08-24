#pragma once 
#include <BP_WoodenDoorWithSquareGrating_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_WoodenDoorWithSquareGrating.BP_WoodenDoorWithSquareGrating_C
// Size: 0x518(Inherited: 0x4E8)
struct ABP_WoodenDoorWithSquareGrating_C : ABP_DoorBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4E8 (0x4E8)
	struct UBoxComponent* Box;  // 0x4F0 (0x4F0)
	struct UDCGeometryCollectionComponent* GC_WoodenDoorWithSquareGrating_Open_Backward;  // 0x4F8 (0x4F8)
	struct UDCGeometryCollectionComponent* GC_WoodenDoorWithSquareGrating_Open_Forward;  // 0x500 (0x500)
	struct UDCGeometryCollectionComponent* GC_WoodenDoorWithSquareGrating_Default;  // 0x508 (0x508)
	struct UArrowComponent* Arrow;  // 0x510 (0x510)


	void ReceiveBeginPlay(); // Function BP_WoodenDoorWithSquareGrating.BP_WoodenDoorWithSquareGrating_C.ReceiveBeginPlay
	void DestructClient(); // Function BP_WoodenDoorWithSquareGrating.BP_WoodenDoorWithSquareGrating_C.DestructClient
	void ExecuteUbergraph_BP_WoodenDoorWithSquareGrating(int32_t EntryPoint); // Function BP_WoodenDoorWithSquareGrating.BP_WoodenDoorWithSquareGrating_C.ExecuteUbergraph_BP_WoodenDoorWithSquareGrating
}; 
 
 


