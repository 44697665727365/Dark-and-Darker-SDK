#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV
struct FSetVertexInstanceUV
{
	struct FVertexInstanceID VertexInstanceID;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector2D UV;  // 0x8 (0x8)
	int32_t UVIndex;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // ScriptStruct StaticMeshDescription.UVMapSettings
struct FUVMapSettings
{
	struct FVector Size;  // 0x0 (0x0)
	struct FVector2D UVTile;  // 0x18 (0x18)
	struct FVector Position;  // 0x28 (0x28)
	struct FRotator Rotation;  // 0x40 (0x40)
	struct FVector Scale;  // 0x58 (0x58)


}; 
 
 // Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName
struct FSetPolygonGroupMaterialSlotName
{
	struct FPolygonGroupID PolygonGroupID;  // 0x0 (0x0)
	struct FName SlotName;  // 0x4 (0x4)


}; 
 
 // Function StaticMeshDescription.StaticMeshDescription.CreateCube
struct FCreateCube
{
	struct FVector Center;  // 0x0 (0x0)
	struct FVector HalfExtents;  // 0x18 (0x18)
	struct FPolygonGroupID PolygonGroup;  // 0x30 (0x30)
	struct FPolygonID PolygonID_PlusX;  // 0x34 (0x34)
	struct FPolygonID PolygonID_MinusX;  // 0x38 (0x38)
	struct FPolygonID PolygonID_PlusY;  // 0x3C (0x3C)
	struct FPolygonID PolygonID_MinusY;  // 0x40 (0x40)
	struct FPolygonID PolygonID_PlusZ;  // 0x44 (0x44)
	struct FPolygonID PolygonID_MinusZ;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)


}; 
 
 // Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV
struct FGetVertexInstanceUV
{
	struct FVertexInstanceID VertexInstanceID;  // 0x0 (0x0)
	int32_t UVIndex;  // 0x4 (0x4)
	struct FVector2D ReturnValue;  // 0x8 (0x8)


}; 
 
 