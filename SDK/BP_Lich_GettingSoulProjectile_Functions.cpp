#include "pch.h"
#include "SDK.h"

void ABP_Lich_GettingSoulProjectile_C::BndEvt__BP_Lich_GettingSoulProjectile_Mesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Lich_GettingSoulProjectile.BP_Lich_GettingSoulProjectile_C.BndEvt__BP_Lich_GettingSoulProjectile_Mesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	FBndEvt__BP_Lich_GettingSoulProjectile_Mesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature parms{};	
	parms.OverlappedComponent = OverlappedComponent;
	parms.OtherActor = OtherActor;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;
	parms.bFromSweep = bFromSweep;
	parms.SweepResult = SweepResult;

	ProcessEvent(fn, &parms);
}

void ABP_Lich_GettingSoulProjectile_C::ExecuteUbergraph_BP_Lich_GettingSoulProjectile(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Lich_GettingSoulProjectile.BP_Lich_GettingSoulProjectile_C.ExecuteUbergraph_BP_Lich_GettingSoulProjectile");

	FExecuteUbergraph_BP_Lich_GettingSoulProjectile parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

