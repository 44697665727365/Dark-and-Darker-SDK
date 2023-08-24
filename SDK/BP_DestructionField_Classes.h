#pragma once 
#include <BP_DestructionField_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_DestructionField.BP_DestructionField_C
// Size: 0x2B8(Inherited: 0x298)
struct ABP_DestructionField_C : AFieldSystemActor
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x298 (0x298)
	struct URadialVector* RadialVector;  // 0x2A0 (0x2A0)
	struct URadialFalloff* RadialFalloff;  // 0x2A8 (0x2A8)
	struct USphereComponent* Sphere;  // 0x2B0 (0x2B0)


	void ReceiveBeginPlay(); // Function BP_DestructionField.BP_DestructionField_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_DestructionField(int32_t EntryPoint); // Function BP_DestructionField.BP_DestructionField_C.ExecuteUbergraph_BP_DestructionField
}; 
 
 


