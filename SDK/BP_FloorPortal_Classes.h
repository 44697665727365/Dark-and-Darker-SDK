#pragma once 
#include <BP_FloorPortal_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_FloorPortal.BP_FloorPortal_C
// Size: 0x438(Inherited: 0x410)
struct ABP_FloorPortal_C : AFloorPortalBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x410 (0x410)
	struct UArrowComponent* FloorPortalScrollHolder2;  // 0x418 (0x418)
	struct UArrowComponent* FloorPortalScrollHolder1;  // 0x420 (0x420)
	struct UArrowComponent* FloorPortalScrollHolder;  // 0x428 (0x428)
	struct USceneComponent* Root;  // 0x430 (0x430)


	void UserConstructionScript(); // Function BP_FloorPortal.BP_FloorPortal_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function BP_FloorPortal.BP_FloorPortal_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_FloorPortal(int32_t EntryPoint); // Function BP_FloorPortal.BP_FloorPortal_C.ExecuteUbergraph_BP_FloorPortal
}; 
 
 


