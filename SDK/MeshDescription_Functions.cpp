#include "pch.h"
#include "SDK.h"

void UMeshDescriptionBase::SetVertexPosition(struct FVertexID VertexID, struct FVector& Position){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.SetVertexPosition");

	FSetVertexPosition parms{};	
	parms.VertexID = VertexID;
	parms.Position = Position;

	ProcessEvent(fn, &parms);
}

void UMeshDescriptionBase::SetPolygonVertexInstances(struct FPolygonID PolygonID, struct TArray<struct FVertexInstanceID>& VertexInstanceIDs){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstances");

	FSetPolygonVertexInstances parms{};	
	parms.PolygonID = PolygonID;
	parms.VertexInstanceIDs = VertexInstanceIDs;

	ProcessEvent(fn, &parms);
}

void UMeshDescriptionBase::SetPolygonPolygonGroup(struct FPolygonID PolygonID, struct FPolygonGroupID PolygonGroupID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup");

	FSetPolygonPolygonGroup parms{};	
	parms.PolygonID = PolygonID;
	parms.PolygonGroupID = PolygonGroupID;

	ProcessEvent(fn, &parms);
}

void UMeshDescriptionBase::ReversePolygonFacing(struct FPolygonID PolygonID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing");

	FReversePolygonFacing parms{};	
	parms.PolygonID = PolygonID;

	ProcessEvent(fn, &parms);
}

void UMeshDescriptionBase::ReserveNewVertices(int32_t NumberOfNewVertices){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.ReserveNewVertices");

	FReserveNewVertices parms{};	
	parms.NumberOfNewVertices = NumberOfNewVertices;

	ProcessEvent(fn, &parms);
}

void UMeshDescriptionBase::ReserveNewVertexInstances(int32_t NumberOfNewVertexInstances){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances");

	FReserveNewVertexInstances parms{};	
	parms.NumberOfNewVertexInstances = NumberOfNewVertexInstances;

	ProcessEvent(fn, &parms);
}

void UMeshDescriptionBase::ReserveNewTriangles(int32_t NumberOfNewTriangles){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles");

	FReserveNewTriangles parms{};	
	parms.NumberOfNewTriangles = NumberOfNewTriangles;

	ProcessEvent(fn, &parms);
}

void UMeshDescriptionBase::ReserveNewPolygons(int32_t NumberOfNewPolygons){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons");

	FReserveNewPolygons parms{};	
	parms.NumberOfNewPolygons = NumberOfNewPolygons;

	ProcessEvent(fn, &parms);
}

void UMeshDescriptionBase::ReserveNewPolygonGroups(int32_t NumberOfNewPolygonGroups){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups");

	FReserveNewPolygonGroups parms{};	
	parms.NumberOfNewPolygonGroups = NumberOfNewPolygonGroups;

	ProcessEvent(fn, &parms);
}

void UMeshDescriptionBase::ReserveNewEdges(int32_t NumberOfNewEdges){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.ReserveNewEdges");

	FReserveNewEdges parms{};	
	parms.NumberOfNewEdges = NumberOfNewEdges;

	ProcessEvent(fn, &parms);
}

bool UMeshDescriptionBase::IsVertexValid(struct FVertexID VertexID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsVertexValid");

	FIsVertexValid parms{};	
	parms.VertexID = VertexID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMeshDescriptionBase::IsVertexOrphaned(struct FVertexID VertexID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned");

	FIsVertexOrphaned parms{};	
	parms.VertexID = VertexID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMeshDescriptionBase::IsVertexInstanceValid(struct FVertexInstanceID VertexInstanceID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid");

	FIsVertexInstanceValid parms{};	
	parms.VertexInstanceID = VertexInstanceID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMeshDescriptionBase::IsTriangleValid(struct FTriangleID TriangleID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsTriangleValid");

	FIsTriangleValid parms{};	
	parms.TriangleID = TriangleID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMeshDescriptionBase::IsTrianglePartOfNgon(struct FTriangleID TriangleID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon");

	FIsTrianglePartOfNgon parms{};	
	parms.TriangleID = TriangleID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMeshDescriptionBase::IsPolygonValid(struct FPolygonID PolygonID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsPolygonValid");

	FIsPolygonValid parms{};	
	parms.PolygonID = PolygonID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMeshDescriptionBase::IsPolygonGroupValid(struct FPolygonGroupID PolygonGroupID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid");

	FIsPolygonGroupValid parms{};	
	parms.PolygonGroupID = PolygonGroupID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMeshDescriptionBase::IsEmpty(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsEmpty");

	FIsEmpty parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMeshDescriptionBase::IsEdgeValid(struct FEdgeID EdgeID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsEdgeValid");

	FIsEdgeValid parms{};	
	parms.EdgeID = EdgeID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMeshDescriptionBase::IsEdgeInternalToPolygon(struct FEdgeID EdgeID, struct FPolygonID PolygonID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon");

	FIsEdgeInternalToPolygon parms{};	
	parms.EdgeID = EdgeID;
	parms.PolygonID = PolygonID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMeshDescriptionBase::IsEdgeInternal(struct FEdgeID EdgeID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsEdgeInternal");

	FIsEdgeInternal parms{};	
	parms.EdgeID = EdgeID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMeshDescriptionBase::GetVertexVertexInstances(struct FVertexID VertexID, struct TArray<struct FVertexInstanceID>& OutVertexInstanceIDs){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances");

	FGetVertexVertexInstances parms{};	
	parms.VertexID = VertexID;
	parms.OutVertexInstanceIDs = OutVertexInstanceIDs;

	ProcessEvent(fn, &parms);
}

struct FVector UMeshDescriptionBase::GetVertexPosition(struct FVertexID VertexID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexPosition");

	FGetVertexPosition parms{};	
	parms.VertexID = VertexID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FEdgeID UMeshDescriptionBase::GetVertexPairEdge(struct FVertexID VertexID0, struct FVertexID VertexID1){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge");

	FGetVertexPairEdge parms{};	
	parms.VertexID0 = VertexID0;
	parms.VertexID1 = VertexID1;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVertexID UMeshDescriptionBase::GetVertexInstanceVertex(struct FVertexInstanceID VertexInstanceID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex");

	FGetVertexInstanceVertex parms{};	
	parms.VertexInstanceID = VertexInstanceID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FEdgeID UMeshDescriptionBase::GetVertexInstancePairEdge(struct FVertexInstanceID VertexInstanceID0, struct FVertexInstanceID VertexInstanceID1){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge");

	FGetVertexInstancePairEdge parms{};	
	parms.VertexInstanceID0 = VertexInstanceID0;
	parms.VertexInstanceID1 = VertexInstanceID1;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVertexInstanceID UMeshDescriptionBase::GetVertexInstanceForTriangleVertex(struct FTriangleID TriangleID, struct FVertexID VertexID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex");

	FGetVertexInstanceForTriangleVertex parms{};	
	parms.TriangleID = TriangleID;
	parms.VertexID = VertexID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVertexInstanceID UMeshDescriptionBase::GetVertexInstanceForPolygonVertex(struct FPolygonID PolygonID, struct FVertexID VertexID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex");

	FGetVertexInstanceForPolygonVertex parms{};	
	parms.PolygonID = PolygonID;
	parms.VertexID = VertexID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMeshDescriptionBase::GetVertexInstanceCount(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceCount");

	FGetVertexInstanceCount parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMeshDescriptionBase::GetVertexInstanceConnectedTriangles(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FTriangleID>& OutConnectedTriangleIDs){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles");

	FGetVertexInstanceConnectedTriangles parms{};	
	parms.VertexInstanceID = VertexInstanceID;
	parms.OutConnectedTriangleIDs = OutConnectedTriangleIDs;

	ProcessEvent(fn, &parms);
}

void UMeshDescriptionBase::GetVertexInstanceConnectedPolygons(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons");

	FGetVertexInstanceConnectedPolygons parms{};	
	parms.VertexInstanceID = VertexInstanceID;
	parms.OutConnectedPolygonIDs = OutConnectedPolygonIDs;

	ProcessEvent(fn, &parms);
}

int32_t UMeshDescriptionBase::GetVertexCount(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexCount");

	FGetVertexCount parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMeshDescriptionBase::GetVertexConnectedTriangles(struct FVertexID VertexID, struct TArray<struct FTriangleID>& OutConnectedTriangleIDs){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles");

	FGetVertexConnectedTriangles parms{};	
	parms.VertexID = VertexID;
	parms.OutConnectedTriangleIDs = OutConnectedTriangleIDs;

	ProcessEvent(fn, &parms);
}

void UMeshDescriptionBase::GetVertexConnectedPolygons(struct FVertexID VertexID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons");

	FGetVertexConnectedPolygons parms{};	
	parms.VertexID = VertexID;
	parms.OutConnectedPolygonIDs = OutConnectedPolygonIDs;

	ProcessEvent(fn, &parms);
}

void UMeshDescriptionBase::GetVertexConnectedEdges(struct FVertexID VertexID, struct TArray<struct FEdgeID>& OutEdgeIDs){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges");

	FGetVertexConnectedEdges parms{};	
	parms.VertexID = VertexID;
	parms.OutEdgeIDs = OutEdgeIDs;

	ProcessEvent(fn, &parms);
}

void UMeshDescriptionBase::GetVertexAdjacentVertices(struct FVertexID VertexID, struct TArray<struct FVertexID>& OutAdjacentVertexIDs){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices");

	FGetVertexAdjacentVertices parms{};	
	parms.VertexID = VertexID;
	parms.OutAdjacentVertexIDs = OutAdjacentVertexIDs;

	ProcessEvent(fn, &parms);
}

void UMeshDescriptionBase::GetTriangleVertices(struct FTriangleID TriangleID, struct TArray<struct FVertexID>& OutVertexIDs){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetTriangleVertices");

	FGetTriangleVertices parms{};	
	parms.TriangleID = TriangleID;
	parms.OutVertexIDs = OutVertexIDs;

	ProcessEvent(fn, &parms);
}

void UMeshDescriptionBase::GetTriangleVertexInstances(struct FTriangleID TriangleID, struct TArray<struct FVertexInstanceID>& OutVertexInstanceIDs){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances");

	FGetTriangleVertexInstances parms{};	
	parms.TriangleID = TriangleID;
	parms.OutVertexInstanceIDs = OutVertexInstanceIDs;

	ProcessEvent(fn, &parms);
}

struct FVertexInstanceID UMeshDescriptionBase::GetTriangleVertexInstance(struct FTriangleID TriangleID, int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance");

	FGetTriangleVertexInstance parms{};	
	parms.TriangleID = TriangleID;
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FPolygonGroupID UMeshDescriptionBase::GetTrianglePolygonGroup(struct FTriangleID TriangleID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup");

	FGetTrianglePolygonGroup parms{};	
	parms.TriangleID = TriangleID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FPolygonID UMeshDescriptionBase::GetTrianglePolygon(struct FTriangleID TriangleID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon");

	FGetTrianglePolygon parms{};	
	parms.TriangleID = TriangleID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMeshDescriptionBase::GetTriangleEdges(struct FTriangleID TriangleID, struct TArray<struct FEdgeID>& OutEdgeIDs){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetTriangleEdges");

	FGetTriangleEdges parms{};	
	parms.TriangleID = TriangleID;
	parms.OutEdgeIDs = OutEdgeIDs;

	ProcessEvent(fn, &parms);
}

int32_t UMeshDescriptionBase::GetTriangleCount(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetTriangleCount");

	FGetTriangleCount parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMeshDescriptionBase::GetTriangleAdjacentTriangles(struct FTriangleID TriangleID, struct TArray<struct FTriangleID>& OutTriangleIDs){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles");

	FGetTriangleAdjacentTriangles parms{};	
	parms.TriangleID = TriangleID;
	parms.OutTriangleIDs = OutTriangleIDs;

	ProcessEvent(fn, &parms);
}

void UMeshDescriptionBase::GetPolygonVertices(struct FPolygonID PolygonID, struct TArray<struct FVertexID>& OutVertexIDs){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetPolygonVertices");

	FGetPolygonVertices parms{};	
	parms.PolygonID = PolygonID;
	parms.OutVertexIDs = OutVertexIDs;

	ProcessEvent(fn, &parms);
}

void UMeshDescriptionBase::GetPolygonVertexInstances(struct FPolygonID PolygonID, struct TArray<struct FVertexInstanceID>& OutVertexInstanceIDs){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances");

	FGetPolygonVertexInstances parms{};	
	parms.PolygonID = PolygonID;
	parms.OutVertexInstanceIDs = OutVertexInstanceIDs;

	ProcessEvent(fn, &parms);
}

void UMeshDescriptionBase::GetPolygonTriangles(struct FPolygonID PolygonID, struct TArray<struct FTriangleID>& OutTriangleIDs){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles");

	FGetPolygonTriangles parms{};	
	parms.PolygonID = PolygonID;
	parms.OutTriangleIDs = OutTriangleIDs;

	ProcessEvent(fn, &parms);
}

struct FPolygonGroupID UMeshDescriptionBase::GetPolygonPolygonGroup(struct FPolygonID PolygonID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup");

	FGetPolygonPolygonGroup parms{};	
	parms.PolygonID = PolygonID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMeshDescriptionBase::GetPolygonPerimeterEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OutEdgeIDs){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges");

	FGetPolygonPerimeterEdges parms{};	
	parms.PolygonID = PolygonID;
	parms.OutEdgeIDs = OutEdgeIDs;

	ProcessEvent(fn, &parms);
}

void UMeshDescriptionBase::GetPolygonInternalEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OutEdgeIDs){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges");

	FGetPolygonInternalEdges parms{};	
	parms.PolygonID = PolygonID;
	parms.OutEdgeIDs = OutEdgeIDs;

	ProcessEvent(fn, &parms);
}

void UMeshDescriptionBase::GetPolygonGroupPolygons(struct FPolygonGroupID PolygonGroupID, struct TArray<struct FPolygonID>& OutPolygonIDs){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons");

	FGetPolygonGroupPolygons parms{};	
	parms.PolygonGroupID = PolygonGroupID;
	parms.OutPolygonIDs = OutPolygonIDs;

	ProcessEvent(fn, &parms);
}

int32_t UMeshDescriptionBase::GetPolygonGroupCount(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetPolygonGroupCount");

	FGetPolygonGroupCount parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMeshDescriptionBase::GetPolygonCount(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetPolygonCount");

	FGetPolygonCount parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMeshDescriptionBase::GetPolygonAdjacentPolygons(struct FPolygonID PolygonID, struct TArray<struct FPolygonID>& OutPolygonIDs){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons");

	FGetPolygonAdjacentPolygons parms{};	
	parms.PolygonID = PolygonID;
	parms.OutPolygonIDs = OutPolygonIDs;

	ProcessEvent(fn, &parms);
}

int32_t UMeshDescriptionBase::GetNumVertexVertexInstances(struct FVertexID VertexID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances");

	FGetNumVertexVertexInstances parms{};	
	parms.VertexID = VertexID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMeshDescriptionBase::GetNumVertexInstanceConnectedTriangles(struct FVertexInstanceID VertexInstanceID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles");

	FGetNumVertexInstanceConnectedTriangles parms{};	
	parms.VertexInstanceID = VertexInstanceID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMeshDescriptionBase::GetNumVertexInstanceConnectedPolygons(struct FVertexInstanceID VertexInstanceID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons");

	FGetNumVertexInstanceConnectedPolygons parms{};	
	parms.VertexInstanceID = VertexInstanceID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMeshDescriptionBase::GetNumVertexConnectedTriangles(struct FVertexID VertexID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles");

	FGetNumVertexConnectedTriangles parms{};	
	parms.VertexID = VertexID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMeshDescriptionBase::GetNumVertexConnectedPolygons(struct FVertexID VertexID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons");

	FGetNumVertexConnectedPolygons parms{};	
	parms.VertexID = VertexID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMeshDescriptionBase::GetNumVertexConnectedEdges(struct FVertexID VertexID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges");

	FGetNumVertexConnectedEdges parms{};	
	parms.VertexID = VertexID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMeshDescriptionBase::GetNumPolygonVertices(struct FPolygonID PolygonID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices");

	FGetNumPolygonVertices parms{};	
	parms.PolygonID = PolygonID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMeshDescriptionBase::GetNumPolygonTriangles(struct FPolygonID PolygonID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles");

	FGetNumPolygonTriangles parms{};	
	parms.PolygonID = PolygonID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMeshDescriptionBase::GetNumPolygonInternalEdges(struct FPolygonID PolygonID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges");

	FGetNumPolygonInternalEdges parms{};	
	parms.PolygonID = PolygonID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMeshDescriptionBase::GetNumPolygonGroupPolygons(struct FPolygonGroupID PolygonGroupID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons");

	FGetNumPolygonGroupPolygons parms{};	
	parms.PolygonGroupID = PolygonGroupID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMeshDescriptionBase::GetNumEdgeConnectedTriangles(struct FEdgeID EdgeID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles");

	FGetNumEdgeConnectedTriangles parms{};	
	parms.EdgeID = EdgeID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMeshDescriptionBase::GetNumEdgeConnectedPolygons(struct FEdgeID EdgeID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons");

	FGetNumEdgeConnectedPolygons parms{};	
	parms.EdgeID = EdgeID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMeshDescriptionBase::GetEdgeVertices(struct FEdgeID EdgeID, struct TArray<struct FVertexID>& OutVertexIDs){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetEdgeVertices");

	FGetEdgeVertices parms{};	
	parms.EdgeID = EdgeID;
	parms.OutVertexIDs = OutVertexIDs;

	ProcessEvent(fn, &parms);
}

struct FVertexID UMeshDescriptionBase::GetEdgeVertex(struct FEdgeID EdgeID, int32_t VertexNumber){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetEdgeVertex");

	FGetEdgeVertex parms{};	
	parms.EdgeID = EdgeID;
	parms.VertexNumber = VertexNumber;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMeshDescriptionBase::GetEdgeCount(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetEdgeCount");

	FGetEdgeCount parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMeshDescriptionBase::GetEdgeConnectedTriangles(struct FEdgeID EdgeID, struct TArray<struct FTriangleID>& OutConnectedTriangleIDs){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles");

	FGetEdgeConnectedTriangles parms{};	
	parms.EdgeID = EdgeID;
	parms.OutConnectedTriangleIDs = OutConnectedTriangleIDs;

	ProcessEvent(fn, &parms);
}

void UMeshDescriptionBase::GetEdgeConnectedPolygons(struct FEdgeID EdgeID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons");

	FGetEdgeConnectedPolygons parms{};	
	parms.EdgeID = EdgeID;
	parms.OutConnectedPolygonIDs = OutConnectedPolygonIDs;

	ProcessEvent(fn, &parms);
}

void UMeshDescriptionBase::Empty(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.Empty");

	FEmpty parms{};	

	ProcessEvent(fn, &parms);
}

void UMeshDescriptionBase::DeleteVertexInstance(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FVertexID>& OrphanedVertices){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.DeleteVertexInstance");

	FDeleteVertexInstance parms{};	
	parms.VertexInstanceID = VertexInstanceID;
	parms.OrphanedVertices = OrphanedVertices;

	ProcessEvent(fn, &parms);
}

void UMeshDescriptionBase::DeleteVertex(struct FVertexID VertexID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.DeleteVertex");

	FDeleteVertex parms{};	
	parms.VertexID = VertexID;

	ProcessEvent(fn, &parms);
}

void UMeshDescriptionBase::DeleteTriangle(struct FTriangleID TriangleID, struct TArray<struct FEdgeID>& OrphanedEdges, struct TArray<struct FVertexInstanceID>& OrphanedVertexInstances, struct TArray<struct FPolygonGroupID>& OrphanedPolygonGroupsPtr){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.DeleteTriangle");

	FDeleteTriangle parms{};	
	parms.TriangleID = TriangleID;
	parms.OrphanedEdges = OrphanedEdges;
	parms.OrphanedVertexInstances = OrphanedVertexInstances;
	parms.OrphanedPolygonGroupsPtr = OrphanedPolygonGroupsPtr;

	ProcessEvent(fn, &parms);
}

void UMeshDescriptionBase::DeletePolygonGroup(struct FPolygonGroupID PolygonGroupID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup");

	FDeletePolygonGroup parms{};	
	parms.PolygonGroupID = PolygonGroupID;

	ProcessEvent(fn, &parms);
}

void UMeshDescriptionBase::DeletePolygon(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OrphanedEdges, struct TArray<struct FVertexInstanceID>& OrphanedVertexInstances, struct TArray<struct FPolygonGroupID>& OrphanedPolygonGroups){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.DeletePolygon");

	FDeletePolygon parms{};	
	parms.PolygonID = PolygonID;
	parms.OrphanedEdges = OrphanedEdges;
	parms.OrphanedVertexInstances = OrphanedVertexInstances;
	parms.OrphanedPolygonGroups = OrphanedPolygonGroups;

	ProcessEvent(fn, &parms);
}

void UMeshDescriptionBase::DeleteEdge(struct FEdgeID EdgeID, struct TArray<struct FVertexID>& OrphanedVertices){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.DeleteEdge");

	FDeleteEdge parms{};	
	parms.EdgeID = EdgeID;
	parms.OrphanedVertices = OrphanedVertices;

	ProcessEvent(fn, &parms);
}

void UMeshDescriptionBase::CreateVertexWithID(struct FVertexID VertexID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreateVertexWithID");

	FCreateVertexWithID parms{};	
	parms.VertexID = VertexID;

	ProcessEvent(fn, &parms);
}

void UMeshDescriptionBase::CreateVertexInstanceWithID(struct FVertexInstanceID VertexInstanceID, struct FVertexID VertexID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID");

	FCreateVertexInstanceWithID parms{};	
	parms.VertexInstanceID = VertexInstanceID;
	parms.VertexID = VertexID;

	ProcessEvent(fn, &parms);
}

struct FVertexInstanceID UMeshDescriptionBase::CreateVertexInstance(struct FVertexID VertexID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreateVertexInstance");

	FCreateVertexInstance parms{};	
	parms.VertexID = VertexID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVertexID UMeshDescriptionBase::CreateVertex(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreateVertex");

	FCreateVertex parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMeshDescriptionBase::CreateTriangleWithID(struct FTriangleID TriangleID, struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID");

	FCreateTriangleWithID parms{};	
	parms.TriangleID = TriangleID;
	parms.PolygonGroupID = PolygonGroupID;
	parms.VertexInstanceIDs = VertexInstanceIDs;
	parms.NewEdgeIDs = NewEdgeIDs;

	ProcessEvent(fn, &parms);
}

struct FTriangleID UMeshDescriptionBase::CreateTriangle(struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreateTriangle");

	FCreateTriangle parms{};	
	parms.PolygonGroupID = PolygonGroupID;
	parms.VertexInstanceIDs = VertexInstanceIDs;
	parms.NewEdgeIDs = NewEdgeIDs;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMeshDescriptionBase::CreatePolygonWithID(struct FPolygonID PolygonID, struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID");

	FCreatePolygonWithID parms{};	
	parms.PolygonID = PolygonID;
	parms.PolygonGroupID = PolygonGroupID;
	parms.VertexInstanceIDs = VertexInstanceIDs;
	parms.NewEdgeIDs = NewEdgeIDs;

	ProcessEvent(fn, &parms);
}

void UMeshDescriptionBase::CreatePolygonGroupWithID(struct FPolygonGroupID PolygonGroupID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID");

	FCreatePolygonGroupWithID parms{};	
	parms.PolygonGroupID = PolygonGroupID;

	ProcessEvent(fn, &parms);
}

struct FPolygonGroupID UMeshDescriptionBase::CreatePolygonGroup(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup");

	FCreatePolygonGroup parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FPolygonID UMeshDescriptionBase::CreatePolygon(struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreatePolygon");

	FCreatePolygon parms{};	
	parms.PolygonGroupID = PolygonGroupID;
	parms.VertexInstanceIDs = VertexInstanceIDs;
	parms.NewEdgeIDs = NewEdgeIDs;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMeshDescriptionBase::CreateEdgeWithID(struct FEdgeID EdgeID, struct FVertexID VertexID0, struct FVertexID VertexID1){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID");

	FCreateEdgeWithID parms{};	
	parms.EdgeID = EdgeID;
	parms.VertexID0 = VertexID0;
	parms.VertexID1 = VertexID1;

	ProcessEvent(fn, &parms);
}

struct FEdgeID UMeshDescriptionBase::CreateEdge(struct FVertexID VertexID0, struct FVertexID VertexID1){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreateEdge");

	FCreateEdge parms{};	
	parms.VertexID0 = VertexID0;
	parms.VertexID1 = VertexID1;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMeshDescriptionBase::ComputePolygonTriangulation(struct FPolygonID PolygonID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation");

	FComputePolygonTriangulation parms{};	
	parms.PolygonID = PolygonID;

	ProcessEvent(fn, &parms);
}

