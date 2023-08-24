#pragma once 
#include <CustomMeshComponent_Structs.h>
 
 
 
// Class CustomMeshComponent.CustomMeshComponent
// Size: 0x580(Inherited: 0x570)
struct UCustomMeshComponent : UMeshComponent
{
	char pad_1392[16];  // 0x570 (0x570)


	bool SetCustomMeshTriangles(struct TArray<struct FCustomMeshTriangle>& Triangles); // Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles
	void ClearCustomMeshTriangles(); // Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles
	void AddCustomMeshTriangles(struct TArray<struct FCustomMeshTriangle>& Triangles); // Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles
}; 
 
 


