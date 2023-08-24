#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance
struct FGetTriangleVertexInstance
{
	struct FTriangleID TriangleID;  // 0x0 (0x0)
	int32_t Index;  // 0x4 (0x4)
	struct FVertexInstanceID ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct MeshDescription.EdgeID
// Size: 0x4(Inherited: 0x4)
struct FEdgeID : FElementID
{


}; 
 
 // ScriptStruct MeshDescription.VertexInstanceID
// Size: 0x4(Inherited: 0x4)
struct FVertexInstanceID : FElementID
{


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices
struct FGetNumPolygonVertices
{
	struct FPolygonID PolygonID;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x4 (0x4)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid
struct FIsPolygonGroupValid
{
	struct FPolygonGroupID PolygonGroupID;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // ScriptStruct MeshDescription.ElementID
struct FElementID
{
	int32_t IDValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MeshDescription.VertexID
// Size: 0x4(Inherited: 0x4)
struct FVertexID : FElementID
{


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetEdgeVertex
struct FGetEdgeVertex
{
	struct FEdgeID EdgeID;  // 0x0 (0x0)
	int32_t VertexNumber;  // 0x4 (0x4)
	struct FVertexID ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup
struct FCreatePolygonGroup
{
	struct FPolygonGroupID ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MeshDescription.UVID
// Size: 0x4(Inherited: 0x4)
struct FUVID : FElementID
{


}; 
 
 // ScriptStruct MeshDescription.TriangleID
// Size: 0x4(Inherited: 0x4)
struct FTriangleID : FElementID
{


}; 
 
 // ScriptStruct MeshDescription.PolygonGroupID
// Size: 0x4(Inherited: 0x4)
struct FPolygonGroupID : FElementID
{


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetPolygonGroupCount
struct FGetPolygonGroupCount
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons
struct FGetNumVertexConnectedPolygons
{
	struct FVertexID VertexID;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x4 (0x4)


}; 
 
 // ScriptStruct MeshDescription.PolygonID
// Size: 0x4(Inherited: 0x4)
struct FPolygonID : FElementID
{


}; 
 
 // Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation
struct FComputePolygonTriangulation
{
	struct FPolygonID PolygonID;  // 0x0 (0x0)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.CreateEdge
struct FCreateEdge
{
	struct FVertexID VertexID0;  // 0x0 (0x0)
	struct FVertexID VertexID1;  // 0x4 (0x4)
	struct FEdgeID ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetTriangleVertices
struct FGetTriangleVertices
{
	struct FTriangleID TriangleID;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FVertexID> OutVertexIDs;  // 0x8 (0x8)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles
struct FGetNumVertexInstanceConnectedTriangles
{
	struct FVertexInstanceID VertexInstanceID;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x4 (0x4)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.DeletePolygon
struct FDeletePolygon
{
	struct FPolygonID PolygonID;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FEdgeID> OrphanedEdges;  // 0x8 (0x8)
	struct TArray<struct FVertexInstanceID> OrphanedVertexInstances;  // 0x18 (0x18)
	struct TArray<struct FPolygonGroupID> OrphanedPolygonGroups;  // 0x28 (0x28)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID
struct FCreateEdgeWithID
{
	struct FEdgeID EdgeID;  // 0x0 (0x0)
	struct FVertexID VertexID0;  // 0x4 (0x4)
	struct FVertexID VertexID1;  // 0x8 (0x8)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.CreatePolygon
struct FCreatePolygon
{
	struct FPolygonGroupID PolygonGroupID;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FVertexInstanceID> VertexInstanceIDs;  // 0x8 (0x8)
	struct TArray<struct FEdgeID> NewEdgeIDs;  // 0x18 (0x18)
	struct FPolygonID ReturnValue;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.CreateTriangle
struct FCreateTriangle
{
	struct FPolygonGroupID PolygonGroupID;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FVertexInstanceID> VertexInstanceIDs;  // 0x8 (0x8)
	struct TArray<struct FEdgeID> NewEdgeIDs;  // 0x18 (0x18)
	struct FTriangleID ReturnValue;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID
struct FCreatePolygonGroupWithID
{
	struct FPolygonGroupID PolygonGroupID;  // 0x0 (0x0)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetPolygonVertices
struct FGetPolygonVertices
{
	struct FPolygonID PolygonID;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FVertexID> OutVertexIDs;  // 0x8 (0x8)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID
struct FCreatePolygonWithID
{
	struct FPolygonID PolygonID;  // 0x0 (0x0)
	struct FPolygonGroupID PolygonGroupID;  // 0x4 (0x4)
	struct TArray<struct FVertexInstanceID> VertexInstanceIDs;  // 0x8 (0x8)
	struct TArray<struct FEdgeID> NewEdgeIDs;  // 0x18 (0x18)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID
struct FCreateTriangleWithID
{
	struct FTriangleID TriangleID;  // 0x0 (0x0)
	struct FPolygonGroupID PolygonGroupID;  // 0x4 (0x4)
	struct TArray<struct FVertexInstanceID> VertexInstanceIDs;  // 0x8 (0x8)
	struct TArray<struct FEdgeID> NewEdgeIDs;  // 0x18 (0x18)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices
struct FGetVertexAdjacentVertices
{
	struct FVertexID VertexID;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FVertexID> OutAdjacentVertexIDs;  // 0x8 (0x8)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances
struct FGetPolygonVertexInstances
{
	struct FPolygonID PolygonID;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FVertexInstanceID> OutVertexInstanceIDs;  // 0x8 (0x8)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances
struct FGetNumVertexVertexInstances
{
	struct FVertexID VertexID;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x4 (0x4)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.CreateVertex
struct FCreateVertex
{
	struct FVertexID ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons
struct FGetNumPolygonGroupPolygons
{
	struct FPolygonGroupID PolygonGroupID;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x4 (0x4)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.CreateVertexInstance
struct FCreateVertexInstance
{
	struct FVertexID VertexID;  // 0x0 (0x0)
	struct FVertexInstanceID ReturnValue;  // 0x4 (0x4)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID
struct FCreateVertexInstanceWithID
{
	struct FVertexInstanceID VertexInstanceID;  // 0x0 (0x0)
	struct FVertexID VertexID;  // 0x4 (0x4)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons
struct FGetEdgeConnectedPolygons
{
	struct FEdgeID EdgeID;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FPolygonID> OutConnectedPolygonIDs;  // 0x8 (0x8)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.CreateVertexWithID
struct FCreateVertexWithID
{
	struct FVertexID VertexID;  // 0x0 (0x0)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon
struct FGetTrianglePolygon
{
	struct FTriangleID TriangleID;  // 0x0 (0x0)
	struct FPolygonID ReturnValue;  // 0x4 (0x4)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstances
struct FSetPolygonVertexInstances
{
	struct FPolygonID PolygonID;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FVertexInstanceID> VertexInstanceIDs;  // 0x8 (0x8)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.DeleteEdge
struct FDeleteEdge
{
	struct FEdgeID EdgeID;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FVertexID> OrphanedVertices;  // 0x8 (0x8)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetTriangleEdges
struct FGetTriangleEdges
{
	struct FTriangleID TriangleID;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FEdgeID> OutEdgeIDs;  // 0x8 (0x8)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex
struct FGetVertexInstanceForTriangleVertex
{
	struct FTriangleID TriangleID;  // 0x0 (0x0)
	struct FVertexID VertexID;  // 0x4 (0x4)
	struct FVertexInstanceID ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup
struct FDeletePolygonGroup
{
	struct FPolygonGroupID PolygonGroupID;  // 0x0 (0x0)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup
struct FGetTrianglePolygonGroup
{
	struct FTriangleID TriangleID;  // 0x0 (0x0)
	struct FPolygonGroupID ReturnValue;  // 0x4 (0x4)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetTriangleCount
struct FGetTriangleCount
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.DeleteTriangle
struct FDeleteTriangle
{
	struct FTriangleID TriangleID;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FEdgeID> OrphanedEdges;  // 0x8 (0x8)
	struct TArray<struct FVertexInstanceID> OrphanedVertexInstances;  // 0x18 (0x18)
	struct TArray<struct FPolygonGroupID> OrphanedPolygonGroupsPtr;  // 0x28 (0x28)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.DeleteVertex
struct FDeleteVertex
{
	struct FVertexID VertexID;  // 0x0 (0x0)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.DeleteVertexInstance
struct FDeleteVertexInstance
{
	struct FVertexInstanceID VertexInstanceID;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FVertexID> OrphanedVertices;  // 0x8 (0x8)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons
struct FGetPolygonAdjacentPolygons
{
	struct FPolygonID PolygonID;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FPolygonID> OutPolygonIDs;  // 0x8 (0x8)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles
struct FGetEdgeConnectedTriangles
{
	struct FEdgeID EdgeID;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FTriangleID> OutConnectedTriangleIDs;  // 0x8 (0x8)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons
struct FGetPolygonGroupPolygons
{
	struct FPolygonGroupID PolygonGroupID;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FPolygonID> OutPolygonIDs;  // 0x8 (0x8)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetEdgeCount
struct FGetEdgeCount
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetEdgeVertices
struct FGetEdgeVertices
{
	struct FEdgeID EdgeID;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FVertexID> OutVertexIDs;  // 0x8 (0x8)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges
struct FGetPolygonPerimeterEdges
{
	struct FPolygonID PolygonID;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FEdgeID> OutEdgeIDs;  // 0x8 (0x8)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges
struct FGetNumVertexConnectedEdges
{
	struct FVertexID VertexID;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x4 (0x4)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons
struct FGetNumEdgeConnectedPolygons
{
	struct FEdgeID EdgeID;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x4 (0x4)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles
struct FGetNumEdgeConnectedTriangles
{
	struct FEdgeID EdgeID;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x4 (0x4)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetPolygonCount
struct FGetPolygonCount
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges
struct FGetNumPolygonInternalEdges
{
	struct FPolygonID PolygonID;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x4 (0x4)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles
struct FGetTriangleAdjacentTriangles
{
	struct FTriangleID TriangleID;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FTriangleID> OutTriangleIDs;  // 0x8 (0x8)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles
struct FGetNumPolygonTriangles
{
	struct FPolygonID PolygonID;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x4 (0x4)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles
struct FGetNumVertexConnectedTriangles
{
	struct FVertexID VertexID;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x4 (0x4)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons
struct FGetNumVertexInstanceConnectedPolygons
{
	struct FVertexInstanceID VertexInstanceID;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x4 (0x4)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges
struct FGetPolygonInternalEdges
{
	struct FPolygonID PolygonID;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FEdgeID> OutEdgeIDs;  // 0x8 (0x8)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup
struct FGetPolygonPolygonGroup
{
	struct FPolygonID PolygonID;  // 0x0 (0x0)
	struct FPolygonGroupID ReturnValue;  // 0x4 (0x4)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles
struct FGetPolygonTriangles
{
	struct FPolygonID PolygonID;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FTriangleID> OutTriangleIDs;  // 0x8 (0x8)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances
struct FGetTriangleVertexInstances
{
	struct FTriangleID TriangleID;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FVertexInstanceID> OutVertexInstanceIDs;  // 0x8 (0x8)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges
struct FGetVertexConnectedEdges
{
	struct FVertexID VertexID;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FEdgeID> OutEdgeIDs;  // 0x8 (0x8)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons
struct FGetVertexConnectedPolygons
{
	struct FVertexID VertexID;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FPolygonID> OutConnectedPolygonIDs;  // 0x8 (0x8)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles
struct FGetVertexConnectedTriangles
{
	struct FVertexID VertexID;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FTriangleID> OutConnectedTriangleIDs;  // 0x8 (0x8)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons
struct FReserveNewPolygons
{
	int32_t NumberOfNewPolygons;  // 0x0 (0x0)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetVertexCount
struct FGetVertexCount
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons
struct FGetVertexInstanceConnectedPolygons
{
	struct FVertexInstanceID VertexInstanceID;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FPolygonID> OutConnectedPolygonIDs;  // 0x8 (0x8)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles
struct FGetVertexInstanceConnectedTriangles
{
	struct FVertexInstanceID VertexInstanceID;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FTriangleID> OutConnectedTriangleIDs;  // 0x8 (0x8)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceCount
struct FGetVertexInstanceCount
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex
struct FGetVertexInstanceForPolygonVertex
{
	struct FPolygonID PolygonID;  // 0x0 (0x0)
	struct FVertexID VertexID;  // 0x4 (0x4)
	struct FVertexInstanceID ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.ReserveNewEdges
struct FReserveNewEdges
{
	int32_t NumberOfNewEdges;  // 0x0 (0x0)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge
struct FGetVertexInstancePairEdge
{
	struct FVertexInstanceID VertexInstanceID0;  // 0x0 (0x0)
	struct FVertexInstanceID VertexInstanceID1;  // 0x4 (0x4)
	struct FEdgeID ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex
struct FGetVertexInstanceVertex
{
	struct FVertexInstanceID VertexInstanceID;  // 0x0 (0x0)
	struct FVertexID ReturnValue;  // 0x4 (0x4)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge
struct FGetVertexPairEdge
{
	struct FVertexID VertexID0;  // 0x0 (0x0)
	struct FVertexID VertexID1;  // 0x4 (0x4)
	struct FEdgeID ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetVertexPosition
struct FGetVertexPosition
{
	struct FVertexID VertexID;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances
struct FGetVertexVertexInstances
{
	struct FVertexID VertexID;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FVertexInstanceID> OutVertexInstanceIDs;  // 0x8 (0x8)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.IsEdgeInternal
struct FIsEdgeInternal
{
	struct FEdgeID EdgeID;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon
struct FIsEdgeInternalToPolygon
{
	struct FEdgeID EdgeID;  // 0x0 (0x0)
	struct FPolygonID PolygonID;  // 0x4 (0x4)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.IsEdgeValid
struct FIsEdgeValid
{
	struct FEdgeID EdgeID;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.IsEmpty
struct FIsEmpty
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.IsPolygonValid
struct FIsPolygonValid
{
	struct FPolygonID PolygonID;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon
struct FIsTrianglePartOfNgon
{
	struct FTriangleID TriangleID;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.IsTriangleValid
struct FIsTriangleValid
{
	struct FTriangleID TriangleID;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid
struct FIsVertexInstanceValid
{
	struct FVertexInstanceID VertexInstanceID;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned
struct FIsVertexOrphaned
{
	struct FVertexID VertexID;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.IsVertexValid
struct FIsVertexValid
{
	struct FVertexID VertexID;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups
struct FReserveNewPolygonGroups
{
	int32_t NumberOfNewPolygonGroups;  // 0x0 (0x0)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles
struct FReserveNewTriangles
{
	int32_t NumberOfNewTriangles;  // 0x0 (0x0)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances
struct FReserveNewVertexInstances
{
	int32_t NumberOfNewVertexInstances;  // 0x0 (0x0)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.ReserveNewVertices
struct FReserveNewVertices
{
	int32_t NumberOfNewVertices;  // 0x0 (0x0)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing
struct FReversePolygonFacing
{
	struct FPolygonID PolygonID;  // 0x0 (0x0)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup
struct FSetPolygonPolygonGroup
{
	struct FPolygonID PolygonID;  // 0x0 (0x0)
	struct FPolygonGroupID PolygonGroupID;  // 0x4 (0x4)


}; 
 
 // Function MeshDescription.MeshDescriptionBase.SetVertexPosition
struct FSetVertexPosition
{
	struct FVertexID VertexID;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector Position;  // 0x8 (0x8)


}; 
 
 