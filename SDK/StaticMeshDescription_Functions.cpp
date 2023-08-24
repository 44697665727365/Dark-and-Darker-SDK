#include "pch.h"
#include "SDK.h"

void UStaticMeshDescription::SetVertexInstanceUV(struct FVertexInstanceID VertexInstanceID, struct FVector2D UV, int32_t UVIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV");

	FSetVertexInstanceUV parms{};	
	parms.VertexInstanceID = VertexInstanceID;
	parms.UV = UV;
	parms.UVIndex = UVIndex;

	ProcessEvent(fn, &parms);
}

void UStaticMeshDescription::SetPolygonGroupMaterialSlotName(struct FPolygonGroupID PolygonGroupID, struct FName& SlotName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName");

	FSetPolygonGroupMaterialSlotName parms{};	
	parms.PolygonGroupID = PolygonGroupID;
	parms.SlotName = SlotName;

	ProcessEvent(fn, &parms);
}

struct FVector2D UStaticMeshDescription::GetVertexInstanceUV(struct FVertexInstanceID VertexInstanceID, int32_t UVIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV");

	FGetVertexInstanceUV parms{};	
	parms.VertexInstanceID = VertexInstanceID;
	parms.UVIndex = UVIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UStaticMeshDescription::CreateCube(struct FVector Center, struct FVector HalfExtents, struct FPolygonGroupID PolygonGroup, struct FPolygonID& PolygonID_PlusX, struct FPolygonID& PolygonID_MinusX, struct FPolygonID& PolygonID_PlusY, struct FPolygonID& PolygonID_MinusY, struct FPolygonID& PolygonID_PlusZ, struct FPolygonID& PolygonID_MinusZ){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function StaticMeshDescription.StaticMeshDescription.CreateCube");

	FCreateCube parms{};	
	parms.Center = Center;
	parms.HalfExtents = HalfExtents;
	parms.PolygonGroup = PolygonGroup;
	parms.PolygonID_PlusX = PolygonID_PlusX;
	parms.PolygonID_MinusX = PolygonID_MinusX;
	parms.PolygonID_PlusY = PolygonID_PlusY;
	parms.PolygonID_MinusY = PolygonID_MinusY;
	parms.PolygonID_PlusZ = PolygonID_PlusZ;
	parms.PolygonID_MinusZ = PolygonID_MinusZ;

	ProcessEvent(fn, &parms);
}

