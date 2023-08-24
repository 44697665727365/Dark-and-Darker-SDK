#include "pch.h"
#include "SDK.h"

void ABP_ItemActorWithQuiver_TEMP_C::AttachQuiverMeshComponentToSocket(struct FName InSocketName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.AttachQuiverMeshComponentToSocket");

	FAttachQuiverMeshComponentToSocket parms{};	
	parms.InSocketName = InSocketName;

	ProcessEvent(fn, &parms);
}

void ABP_ItemActorWithQuiver_TEMP_C::OnMontageFinished(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.OnMontageFinished");

	FOnMontageFinished parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_ItemActorWithQuiver_TEMP_C::AmmoCountUpdated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.AmmoCountUpdated");

	FAmmoCountUpdated parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_ItemActorWithQuiver_TEMP_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_ItemActorWithQuiver_TEMP_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.ReceiveEndPlay");

	FReceiveEndPlay parms{};	
	parms.EndPlayReason = EndPlayReason;

	ProcessEvent(fn, &parms);
}

void ABP_ItemActorWithQuiver_TEMP_C::ItemDataUpdated(struct FItemData& InItemData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.ItemDataUpdated");

	FItemDataUpdated parms{};	
	parms.InItemData = InItemData;

	ProcessEvent(fn, &parms);
}

void ABP_ItemActorWithQuiver_TEMP_C::OnAttachedSheathSocket(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.OnAttachedSheathSocket");

	FOnAttachedSheathSocket parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_ItemActorWithQuiver_TEMP_C::OnAttachedEquipSocket(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.OnAttachedEquipSocket");

	FOnAttachedEquipSocket parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_ItemActorWithQuiver_TEMP_C::PreReduceAmmoCount(int32_t ReduceCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.PreReduceAmmoCount");

	FPreReduceAmmoCount parms{};	
	parms.ReduceCount = ReduceCount;

	ProcessEvent(fn, &parms);
}

void ABP_ItemActorWithQuiver_TEMP_C::OnAttachmentReplication(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.OnAttachmentReplication");

	FOnAttachmentReplication parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_ItemActorWithQuiver_TEMP_C::ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP");

	FExecuteUbergraph_BP_ItemActorWithQuiver_TEMP parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

