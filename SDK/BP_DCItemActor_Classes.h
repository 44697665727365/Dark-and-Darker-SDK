#pragma once 
#include <BP_DCItemActor_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_DCItemActor.BP_DCItemActor_C
// Size: 0x580(Inherited: 0x570)
struct ABP_DCItemActor_C : AItemActor
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x570 (0x570)
	struct UDCAkComponent* DCAk;  // 0x578 (0x578)


	void ReceiveBeginPlay(); // Function BP_DCItemActor.BP_DCItemActor_C.ReceiveBeginPlay
	void ReceiveTick(float DeltaSeconds); // Function BP_DCItemActor.BP_DCItemActor_C.ReceiveTick
	void ExecuteUbergraph_BP_DCItemActor(int32_t EntryPoint); // Function BP_DCItemActor.BP_DCItemActor_C.ExecuteUbergraph_BP_DCItemActor
}; 
 
 


