#include "pch.h"
#include "SDK.h"

void ABP_PressurePlate_C::BndEvt__BP_FloorSpikeTrap_ActiveBox_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PressurePlate.BP_PressurePlate_C.BndEvt__BP_FloorSpikeTrap_ActiveBox_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature");

	FBndEvt__BP_FloorSpikeTrap_ActiveBox_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature parms{};	
	parms.OverlappedComponent = OverlappedComponent;
	parms.OtherActor = OtherActor;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;
	parms.bFromSweep = bFromSweep;
	parms.SweepResult = SweepResult;

	ProcessEvent(fn, &parms);
}

void ABP_PressurePlate_C::BndEvt__BP_PressurePlates_ActiveBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PressurePlate.BP_PressurePlate_C.BndEvt__BP_PressurePlates_ActiveBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

	FBndEvt__BP_PressurePlates_ActiveBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature parms{};	
	parms.OverlappedComponent = OverlappedComponent;
	parms.OtherActor = OtherActor;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;

	ProcessEvent(fn, &parms);
}

void ABP_PressurePlate_C::ExecuteUbergraph_BP_PressurePlate(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PressurePlate.BP_PressurePlate_C.ExecuteUbergraph_BP_PressurePlate");

	FExecuteUbergraph_BP_PressurePlate parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

