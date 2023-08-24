#pragma once 
#include <BP_DoubleWoodenDoor_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_DoubleWoodenDoor.BP_DoubleWoodenDoor_C
// Size: 0x510(Inherited: 0x4E8)
struct ABP_DoubleWoodenDoor_C : ABP_DoorBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4E8 (0x4E8)
	struct UDCGeometryCollectionComponent* GC_DoubleWoodenDoor06_Open_Backward;  // 0x4F0 (0x4F0)
	struct UDCGeometryCollectionComponent* GC_DoubleWoodenDoor06_Open_Forward;  // 0x4F8 (0x4F8)
	struct UDCGeometryCollectionComponent* GC_DoubleWoodenDoor06_Default;  // 0x500 (0x500)
	struct UArrowComponent* Arrow;  // 0x508 (0x508)


	void ReceiveBeginPlay(); // Function BP_DoubleWoodenDoor.BP_DoubleWoodenDoor_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_DoubleWoodenDoor(int32_t EntryPoint); // Function BP_DoubleWoodenDoor.BP_DoubleWoodenDoor_C.ExecuteUbergraph_BP_DoubleWoodenDoor
}; 
 
 


