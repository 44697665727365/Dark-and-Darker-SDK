#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles
struct FAddCustomMeshTriangles
{
	struct TArray<struct FCustomMeshTriangle> Triangles;  // 0x0 (0x0)


}; 
 
 // ScriptStruct CustomMeshComponent.CustomMeshTriangle
struct FCustomMeshTriangle
{
	struct FVector Vertex0;  // 0x0 (0x0)
	struct FVector Vertex1;  // 0x18 (0x18)
	struct FVector Vertex2;  // 0x30 (0x30)


}; 
 
 // Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles
struct FSetCustomMeshTriangles
{
	struct TArray<struct FCustomMeshTriangle> Triangles;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 