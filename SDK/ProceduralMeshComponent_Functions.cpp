#include "pch.h"
#include "SDK.h"

void UKismetProceduralMeshLibrary::SliceProceduralMesh(struct UProceduralMeshComponent* InProcMesh, struct FVector PlanePosition, struct FVector PlaneNormal, bool bCreateOtherHalf, struct UProceduralMeshComponent*& OutOtherHalfProcMesh, uint8_t CapOption, struct UMaterialInterface* CapMaterial){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh");

	FSliceProceduralMesh parms{};	
	parms.InProcMesh = InProcMesh;
	parms.PlanePosition = PlanePosition;
	parms.PlaneNormal = PlaneNormal;
	parms.bCreateOtherHalf = bCreateOtherHalf;
	parms.OutOtherHalfProcMesh = OutOtherHalfProcMesh;
	parms.CapOption = CapOption;
	parms.CapMaterial = CapMaterial;

	ProcessEvent(fn, &parms);
}

void UKismetProceduralMeshLibrary::GetSectionFromStaticMesh(struct UStaticMesh* InMesh, int32_t LODIndex, int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UVs, struct TArray<struct FProcMeshTangent>& Tangents){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh");

	FGetSectionFromStaticMesh parms{};	
	parms.InMesh = InMesh;
	parms.LODIndex = LODIndex;
	parms.SectionIndex = SectionIndex;
	parms.Vertices = Vertices;
	parms.Triangles = Triangles;
	parms.Normals = Normals;
	parms.UVs = UVs;
	parms.Tangents = Tangents;

	ProcessEvent(fn, &parms);
}

void UKismetProceduralMeshLibrary::GetSectionFromProceduralMesh(struct UProceduralMeshComponent* InProcMesh, int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UVs, struct TArray<struct FProcMeshTangent>& Tangents){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh");

	FGetSectionFromProceduralMesh parms{};	
	parms.InProcMesh = InProcMesh;
	parms.SectionIndex = SectionIndex;
	parms.Vertices = Vertices;
	parms.Triangles = Triangles;
	parms.Normals = Normals;
	parms.UVs = UVs;
	parms.Tangents = Tangents;

	ProcessEvent(fn, &parms);
}

void UKismetProceduralMeshLibrary::GenerateBoxMesh(struct FVector BoxRadius, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UVs, struct TArray<struct FProcMeshTangent>& Tangents){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh");

	FGenerateBoxMesh parms{};	
	parms.BoxRadius = BoxRadius;
	parms.Vertices = Vertices;
	parms.Triangles = Triangles;
	parms.Normals = Normals;
	parms.UVs = UVs;
	parms.Tangents = Tangents;

	ProcessEvent(fn, &parms);
}

void UKismetProceduralMeshLibrary::CreateGridMeshWelded(int32_t NumX, int32_t NumY, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Vertices, struct TArray<struct FVector2D>& UVs, float GridSpacing){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshWelded");

	FCreateGridMeshWelded parms{};	
	parms.NumX = NumX;
	parms.NumY = NumY;
	parms.Triangles = Triangles;
	parms.Vertices = Vertices;
	parms.UVs = UVs;
	parms.GridSpacing = GridSpacing;

	ProcessEvent(fn, &parms);
}

void UKismetProceduralMeshLibrary::CreateGridMeshTriangles(int32_t NumX, int32_t NumY, bool bWinding, struct TArray<int32_t>& Triangles){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles");

	FCreateGridMeshTriangles parms{};	
	parms.NumX = NumX;
	parms.NumY = NumY;
	parms.bWinding = bWinding;
	parms.Triangles = Triangles;

	ProcessEvent(fn, &parms);
}

void UKismetProceduralMeshLibrary::CreateGridMeshSplit(int32_t NumX, int32_t NumY, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Vertices, struct TArray<struct FVector2D>& UVs, struct TArray<struct FVector2D>& UV1s, float GridSpacing){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshSplit");

	FCreateGridMeshSplit parms{};	
	parms.NumX = NumX;
	parms.NumY = NumY;
	parms.Triangles = Triangles;
	parms.Vertices = Vertices;
	parms.UVs = UVs;
	parms.UV1s = UV1s;
	parms.GridSpacing = GridSpacing;

	ProcessEvent(fn, &parms);
}

void UKismetProceduralMeshLibrary::CopyProceduralMeshFromStaticMeshComponent(struct UStaticMeshComponent* StaticMeshComponent, int32_t LODIndex, struct UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent");

	FCopyProceduralMeshFromStaticMeshComponent parms{};	
	parms.StaticMeshComponent = StaticMeshComponent;
	parms.LODIndex = LODIndex;
	parms.ProcMeshComponent = ProcMeshComponent;
	parms.bCreateCollision = bCreateCollision;

	ProcessEvent(fn, &parms);
}

void UKismetProceduralMeshLibrary::ConvertQuadToTriangles(struct TArray<int32_t>& Triangles, int32_t Vert0, int32_t Vert1, int32_t Vert2, int32_t Vert3){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles");

	FConvertQuadToTriangles parms{};	
	parms.Triangles = Triangles;
	parms.Vert0 = Vert0;
	parms.Vert1 = Vert1;
	parms.Vert2 = Vert2;
	parms.Vert3 = Vert3;

	ProcessEvent(fn, &parms);
}

void UKismetProceduralMeshLibrary::CalculateTangentsForMesh(struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector2D>& UVs, struct TArray<struct FVector>& Normals, struct TArray<struct FProcMeshTangent>& Tangents){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh");

	FCalculateTangentsForMesh parms{};	
	parms.Vertices = Vertices;
	parms.Triangles = Triangles;
	parms.UVs = UVs;
	parms.Normals = Normals;
	parms.Tangents = Tangents;

	ProcessEvent(fn, &parms);
}

void UProceduralMeshComponent::UpdateMeshSection_LinearColor(int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UV0, struct TArray<struct FVector2D>& UV1, struct TArray<struct FVector2D>& UV2, struct TArray<struct FVector2D>& UV3, struct TArray<struct FLinearColor>& VertexColors, struct TArray<struct FProcMeshTangent>& Tangents, bool bSRGBConversion){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor");

	FUpdateMeshSection_LinearColor parms{};	
	parms.SectionIndex = SectionIndex;
	parms.Vertices = Vertices;
	parms.Normals = Normals;
	parms.UV0 = UV0;
	parms.UV1 = UV1;
	parms.UV2 = UV2;
	parms.UV3 = UV3;
	parms.VertexColors = VertexColors;
	parms.Tangents = Tangents;
	parms.bSRGBConversion = bSRGBConversion;

	ProcessEvent(fn, &parms);
}

void UProceduralMeshComponent::UpdateMeshSection(int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UV0, struct TArray<struct FColor>& VertexColors, struct TArray<struct FProcMeshTangent>& Tangents){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection");

	FUpdateMeshSection parms{};	
	parms.SectionIndex = SectionIndex;
	parms.Vertices = Vertices;
	parms.Normals = Normals;
	parms.UV0 = UV0;
	parms.VertexColors = VertexColors;
	parms.Tangents = Tangents;

	ProcessEvent(fn, &parms);
}

void UProceduralMeshComponent::SetMeshSectionVisible(int32_t SectionIndex, bool bNewVisibility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible");

	FSetMeshSectionVisible parms{};	
	parms.SectionIndex = SectionIndex;
	parms.bNewVisibility = bNewVisibility;

	ProcessEvent(fn, &parms);
}

bool UProceduralMeshComponent::IsMeshSectionVisible(int32_t SectionIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible");

	FIsMeshSectionVisible parms{};	
	parms.SectionIndex = SectionIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UProceduralMeshComponent::GetNumSections(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections");

	FGetNumSections parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UProceduralMeshComponent::CreateMeshSection_LinearColor(int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UV0, struct TArray<struct FVector2D>& UV1, struct TArray<struct FVector2D>& UV2, struct TArray<struct FVector2D>& UV3, struct TArray<struct FLinearColor>& VertexColors, struct TArray<struct FProcMeshTangent>& Tangents, bool bCreateCollision, bool bSRGBConversion){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor");

	FCreateMeshSection_LinearColor parms{};	
	parms.SectionIndex = SectionIndex;
	parms.Vertices = Vertices;
	parms.Triangles = Triangles;
	parms.Normals = Normals;
	parms.UV0 = UV0;
	parms.UV1 = UV1;
	parms.UV2 = UV2;
	parms.UV3 = UV3;
	parms.VertexColors = VertexColors;
	parms.Tangents = Tangents;
	parms.bCreateCollision = bCreateCollision;
	parms.bSRGBConversion = bSRGBConversion;

	ProcessEvent(fn, &parms);
}

void UProceduralMeshComponent::CreateMeshSection(int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UV0, struct TArray<struct FColor>& VertexColors, struct TArray<struct FProcMeshTangent>& Tangents, bool bCreateCollision){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection");

	FCreateMeshSection parms{};	
	parms.SectionIndex = SectionIndex;
	parms.Vertices = Vertices;
	parms.Triangles = Triangles;
	parms.Normals = Normals;
	parms.UV0 = UV0;
	parms.VertexColors = VertexColors;
	parms.Tangents = Tangents;
	parms.bCreateCollision = bCreateCollision;

	ProcessEvent(fn, &parms);
}

void UProceduralMeshComponent::ClearMeshSection(int32_t SectionIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection");

	FClearMeshSection parms{};	
	parms.SectionIndex = SectionIndex;

	ProcessEvent(fn, &parms);
}

void UProceduralMeshComponent::ClearCollisionConvexMeshes(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes");

	FClearCollisionConvexMeshes parms{};	

	ProcessEvent(fn, &parms);
}

void UProceduralMeshComponent::ClearAllMeshSections(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections");

	FClearAllMeshSections parms{};	

	ProcessEvent(fn, &parms);
}

void UProceduralMeshComponent::AddCollisionConvexMesh(struct TArray<struct FVector> ConvexVerts){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh");

	FAddCollisionConvexMesh parms{};	
	parms.ConvexVerts = ConvexVerts;

	ProcessEvent(fn, &parms);
}

