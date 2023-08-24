#include "pch.h"
#include "SDK.h"

void ABP_Resurrection_Womon_Capture_C::OnEquipItemMesh(struct USkeletalMeshComponent* PartComp, struct USkeletalMesh* ItemMesh){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Resurrection_Womon_Capture.BP_Resurrection_Womon_Capture_C.OnEquipItemMesh");

	FOnEquipItemMesh parms{};	
	parms.PartComp = PartComp;
	parms.ItemMesh = ItemMesh;

	ProcessEvent(fn, &parms);
}

void ABP_Resurrection_Womon_Capture_C::BP_Resurrection_Capture_AutoGenFunc(struct UObject* InObjectLoaded){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Resurrection_Womon_Capture.BP_Resurrection_Womon_Capture_C.BP_Resurrection_Capture_AutoGenFunc");

	FBP_Resurrection_Capture_AutoGenFunc parms{};	
	parms.InObjectLoaded = InObjectLoaded;

	ProcessEvent(fn, &parms);
}

