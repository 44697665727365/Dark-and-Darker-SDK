#pragma once 
#include <ProceduralMeshComponent_Structs.h>
 
 
 
// Class ProceduralMeshComponent.KismetProceduralMeshLibrary
// Size: 0x28(Inherited: 0x28)
struct UKismetProceduralMeshLibrary : UBlueprintFunctionLibrary
{


	void SliceProceduralMesh(struct UProceduralMeshComponent* InProcMesh, struct FVector PlanePosition, struct FVector PlaneNormal, bool bCreateOtherHalf, struct UProceduralMeshComponent*& OutOtherHalfProcMesh, uint8_t CapOption, struct UMaterialInterface* CapMaterial); // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh
	void GetSectionFromStaticMesh(struct UStaticMesh* InMesh, int32_t LODIndex, int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UVs, struct TArray<struct FProcMeshTangent>& Tangents); // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh
	void GetSectionFromProceduralMesh(struct UProceduralMeshComponent* InProcMesh, int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UVs, struct TArray<struct FProcMeshTangent>& Tangents); // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh
	void GenerateBoxMesh(struct FVector BoxRadius, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UVs, struct TArray<struct FProcMeshTangent>& Tangents); // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh
	void CreateGridMeshWelded(int32_t NumX, int32_t NumY, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Vertices, struct TArray<struct FVector2D>& UVs, float GridSpacing); // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshWelded
	void CreateGridMeshTriangles(int32_t NumX, int32_t NumY, bool bWinding, struct TArray<int32_t>& Triangles); // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles
	void CreateGridMeshSplit(int32_t NumX, int32_t NumY, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Vertices, struct TArray<struct FVector2D>& UVs, struct TArray<struct FVector2D>& UV1s, float GridSpacing); // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshSplit
	void CopyProceduralMeshFromStaticMeshComponent(struct UStaticMeshComponent* StaticMeshComponent, int32_t LODIndex, struct UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision); // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent
	void ConvertQuadToTriangles(struct TArray<int32_t>& Triangles, int32_t Vert0, int32_t Vert1, int32_t Vert2, int32_t Vert3); // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles
	void CalculateTangentsForMesh(struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector2D>& UVs, struct TArray<struct FVector>& Normals, struct TArray<struct FProcMeshTangent>& Tangents); // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh
}; 
 
 


// Class ProceduralMeshComponent.ProceduralMeshComponent
// Size: 0x5F0(Inherited: 0x570)
struct UProceduralMeshComponent : UMeshComponent
{
	char pad_1392[8];  // 0x570 (0x570)
	char pad_1400_1 : 7;  // 0x578 (0x578)
	bool bUseComplexAsSimpleCollision : 1;  // 0x578 (0x578)
	char pad_1401_1 : 7;  // 0x579 (0x579)
	bool bUseAsyncCooking : 1;  // 0x579 (0x579)
	char pad_1402[6];  // 0x57A (0x57A)
	struct UBodySetup* ProcMeshBodySetup;  // 0x580 (0x580)
	struct TArray<struct FProcMeshSection> ProcMeshSections;  // 0x588 (0x588)
	struct TArray<struct FKConvexElem> CollisionConvexElems;  // 0x598 (0x598)
	struct FBoxSphereBounds LocalBounds;  // 0x5A8 (0x5A8)
	struct TArray<struct UBodySetup*> AsyncBodySetupQueue;  // 0x5E0 (0x5E0)


	void UpdateMeshSection_LinearColor(int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UV0, struct TArray<struct FVector2D>& UV1, struct TArray<struct FVector2D>& UV2, struct TArray<struct FVector2D>& UV3, struct TArray<struct FLinearColor>& VertexColors, struct TArray<struct FProcMeshTangent>& Tangents, bool bSRGBConversion); // Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
	void UpdateMeshSection(int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UV0, struct TArray<struct FColor>& VertexColors, struct TArray<struct FProcMeshTangent>& Tangents); // Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
	void SetMeshSectionVisible(int32_t SectionIndex, bool bNewVisibility); // Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
	bool IsMeshSectionVisible(int32_t SectionIndex); // Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
	int32_t GetNumSections(); // Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
	void CreateMeshSection_LinearColor(int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UV0, struct TArray<struct FVector2D>& UV1, struct TArray<struct FVector2D>& UV2, struct TArray<struct FVector2D>& UV3, struct TArray<struct FLinearColor>& VertexColors, struct TArray<struct FProcMeshTangent>& Tangents, bool bCreateCollision, bool bSRGBConversion); // Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
	void CreateMeshSection(int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UV0, struct TArray<struct FColor>& VertexColors, struct TArray<struct FProcMeshTangent>& Tangents, bool bCreateCollision); // Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
	void ClearMeshSection(int32_t SectionIndex); // Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
	void ClearCollisionConvexMeshes(); // Function ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes
	void ClearAllMeshSections(); // Function ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections
	void AddCollisionConvexMesh(struct TArray<struct FVector> ConvexVerts); // Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
}; 
 
 


