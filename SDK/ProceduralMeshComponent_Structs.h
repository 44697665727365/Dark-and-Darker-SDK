#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ProceduralMeshComponent.ProcMeshTangent
struct FProcMeshTangent
{
	struct FVector TangentX;  // 0x0 (0x0)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bFlipTangentY : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
struct FClearMeshSection
{
	int32_t SectionIndex;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ProceduralMeshComponent.ProcMeshVertex
struct FProcMeshVertex
{
	struct FVector Position;  // 0x0 (0x0)
	struct FVector Normal;  // 0x18 (0x18)
	struct FProcMeshTangent Tangent;  // 0x30 (0x30)
	struct FColor Color;  // 0x50 (0x50)
	char pad_84[4];  // 0x54 (0x54)
	struct FVector2D UV0;  // 0x58 (0x58)
	struct FVector2D UV1;  // 0x68 (0x68)
	struct FVector2D UV2;  // 0x78 (0x78)
	struct FVector2D UV3;  // 0x88 (0x88)


}; 
 
 // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh
struct FSliceProceduralMesh
{
	struct UProceduralMeshComponent* InProcMesh;  // 0x0 (0x0)
	struct FVector PlanePosition;  // 0x8 (0x8)
	struct FVector PlaneNormal;  // 0x20 (0x20)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bCreateOtherHalf : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct UProceduralMeshComponent* OutOtherHalfProcMesh;  // 0x40 (0x40)
	uint8_t CapOption;  // 0x48 (0x48)
	char pad_73[7];  // 0x49 (0x49)
	struct UMaterialInterface* CapMaterial;  // 0x50 (0x50)


}; 
 
 // ScriptStruct ProceduralMeshComponent.ProcMeshSection
struct FProcMeshSection
{
	struct TArray<struct FProcMeshVertex> ProcVertexBuffer;  // 0x0 (0x0)
	struct TArray<uint32_t> ProcIndexBuffer;  // 0x10 (0x10)
	struct FBox SectionLocalBox;  // 0x20 (0x20)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool bEnableCollision : 1;  // 0x58 (0x58)
	char pad_89_1 : 7;  // 0x59 (0x59)
	bool bSectionVisible : 1;  // 0x59 (0x59)
	char pad_90[6];  // 0x5A (0x5A)


}; 
 
 // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh
struct FCalculateTangentsForMesh
{
	struct TArray<struct FVector> Vertices;  // 0x0 (0x0)
	struct TArray<int32_t> Triangles;  // 0x10 (0x10)
	struct TArray<struct FVector2D> UVs;  // 0x20 (0x20)
	struct TArray<struct FVector> Normals;  // 0x30 (0x30)
	struct TArray<struct FProcMeshTangent> Tangents;  // 0x40 (0x40)


}; 
 
 // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles
struct FCreateGridMeshTriangles
{
	int32_t NumX;  // 0x0 (0x0)
	int32_t NumY;  // 0x4 (0x4)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bWinding : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct TArray<int32_t> Triangles;  // 0x10 (0x10)


}; 
 
 // Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
struct FCreateMeshSection
{
	int32_t SectionIndex;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FVector> Vertices;  // 0x8 (0x8)
	struct TArray<int32_t> Triangles;  // 0x18 (0x18)
	struct TArray<struct FVector> Normals;  // 0x28 (0x28)
	struct TArray<struct FVector2D> UV0;  // 0x38 (0x38)
	struct TArray<struct FColor> VertexColors;  // 0x48 (0x48)
	struct TArray<struct FProcMeshTangent> Tangents;  // 0x58 (0x58)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool bCreateCollision : 1;  // 0x68 (0x68)
	char pad_105[7];  // 0x69 (0x69)


}; 
 
 // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles
struct FConvertQuadToTriangles
{
	struct TArray<int32_t> Triangles;  // 0x0 (0x0)
	int32_t Vert0;  // 0x10 (0x10)
	int32_t Vert1;  // 0x14 (0x14)
	int32_t Vert2;  // 0x18 (0x18)
	int32_t Vert3;  // 0x1C (0x1C)


}; 
 
 // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshSplit
struct FCreateGridMeshSplit
{
	int32_t NumX;  // 0x0 (0x0)
	int32_t NumY;  // 0x4 (0x4)
	struct TArray<int32_t> Triangles;  // 0x8 (0x8)
	struct TArray<struct FVector> Vertices;  // 0x18 (0x18)
	struct TArray<struct FVector2D> UVs;  // 0x28 (0x28)
	struct TArray<struct FVector2D> UV1s;  // 0x38 (0x38)
	float GridSpacing;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)


}; 
 
 // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent
struct FCopyProceduralMeshFromStaticMeshComponent
{
	struct UStaticMeshComponent* StaticMeshComponent;  // 0x0 (0x0)
	int32_t LODIndex;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct UProceduralMeshComponent* ProcMeshComponent;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bCreateCollision : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshWelded
struct FCreateGridMeshWelded
{
	int32_t NumX;  // 0x0 (0x0)
	int32_t NumY;  // 0x4 (0x4)
	struct TArray<int32_t> Triangles;  // 0x8 (0x8)
	struct TArray<struct FVector> Vertices;  // 0x18 (0x18)
	struct TArray<struct FVector2D> UVs;  // 0x28 (0x28)
	float GridSpacing;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)


}; 
 
 // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh
struct FGenerateBoxMesh
{
	struct FVector BoxRadius;  // 0x0 (0x0)
	struct TArray<struct FVector> Vertices;  // 0x18 (0x18)
	struct TArray<int32_t> Triangles;  // 0x28 (0x28)
	struct TArray<struct FVector> Normals;  // 0x38 (0x38)
	struct TArray<struct FVector2D> UVs;  // 0x48 (0x48)
	struct TArray<struct FProcMeshTangent> Tangents;  // 0x58 (0x58)


}; 
 
 // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh
struct FGetSectionFromProceduralMesh
{
	struct UProceduralMeshComponent* InProcMesh;  // 0x0 (0x0)
	int32_t SectionIndex;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct TArray<struct FVector> Vertices;  // 0x10 (0x10)
	struct TArray<int32_t> Triangles;  // 0x20 (0x20)
	struct TArray<struct FVector> Normals;  // 0x30 (0x30)
	struct TArray<struct FVector2D> UVs;  // 0x40 (0x40)
	struct TArray<struct FProcMeshTangent> Tangents;  // 0x50 (0x50)


}; 
 
 // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh
struct FGetSectionFromStaticMesh
{
	struct UStaticMesh* InMesh;  // 0x0 (0x0)
	int32_t LODIndex;  // 0x8 (0x8)
	int32_t SectionIndex;  // 0xC (0xC)
	struct TArray<struct FVector> Vertices;  // 0x10 (0x10)
	struct TArray<int32_t> Triangles;  // 0x20 (0x20)
	struct TArray<struct FVector> Normals;  // 0x30 (0x30)
	struct TArray<struct FVector2D> UVs;  // 0x40 (0x40)
	struct TArray<struct FProcMeshTangent> Tangents;  // 0x50 (0x50)


}; 
 
 // Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
struct FAddCollisionConvexMesh
{
	struct TArray<struct FVector> ConvexVerts;  // 0x0 (0x0)


}; 
 
 // Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
struct FUpdateMeshSection
{
	int32_t SectionIndex;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FVector> Vertices;  // 0x8 (0x8)
	struct TArray<struct FVector> Normals;  // 0x18 (0x18)
	struct TArray<struct FVector2D> UV0;  // 0x28 (0x28)
	struct TArray<struct FColor> VertexColors;  // 0x38 (0x38)
	struct TArray<struct FProcMeshTangent> Tangents;  // 0x48 (0x48)


}; 
 
 // Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
struct FCreateMeshSection_LinearColor
{
	int32_t SectionIndex;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FVector> Vertices;  // 0x8 (0x8)
	struct TArray<int32_t> Triangles;  // 0x18 (0x18)
	struct TArray<struct FVector> Normals;  // 0x28 (0x28)
	struct TArray<struct FVector2D> UV0;  // 0x38 (0x38)
	struct TArray<struct FVector2D> UV1;  // 0x48 (0x48)
	struct TArray<struct FVector2D> UV2;  // 0x58 (0x58)
	struct TArray<struct FVector2D> UV3;  // 0x68 (0x68)
	struct TArray<struct FLinearColor> VertexColors;  // 0x78 (0x78)
	struct TArray<struct FProcMeshTangent> Tangents;  // 0x88 (0x88)
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool bCreateCollision : 1;  // 0x98 (0x98)
	char pad_153_1 : 7;  // 0x99 (0x99)
	bool bSRGBConversion : 1;  // 0x99 (0x99)
	char pad_154[6];  // 0x9A (0x9A)


}; 
 
 // Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
struct FGetNumSections
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
struct FIsMeshSectionVisible
{
	int32_t SectionIndex;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
struct FSetMeshSectionVisible
{
	int32_t SectionIndex;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bNewVisibility : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
struct FUpdateMeshSection_LinearColor
{
	int32_t SectionIndex;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FVector> Vertices;  // 0x8 (0x8)
	struct TArray<struct FVector> Normals;  // 0x18 (0x18)
	struct TArray<struct FVector2D> UV0;  // 0x28 (0x28)
	struct TArray<struct FVector2D> UV1;  // 0x38 (0x38)
	struct TArray<struct FVector2D> UV2;  // 0x48 (0x48)
	struct TArray<struct FVector2D> UV3;  // 0x58 (0x58)
	struct TArray<struct FLinearColor> VertexColors;  // 0x68 (0x68)
	struct TArray<struct FProcMeshTangent> Tangents;  // 0x78 (0x78)
	char pad_136_1 : 7;  // 0x88 (0x88)
	bool bSRGBConversion : 1;  // 0x88 (0x88)
	char pad_137[7];  // 0x89 (0x89)


}; 
 
 