#include "pch.h"
#include "SDK.h"

void ABP_SkeletonWarlord_GettingSoulProjectile_C::BndEvt__BP_Lich_GettingSoulProjectile_Mesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonWarlord_GettingSoulProjectile.BP_SkeletonWarlord_GettingSoulProjectile_C.BndEvt__BP_Lich_GettingSoulProjectile_Mesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	FBndEvt__BP_Lich_GettingSoulProjectile_Mesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature parms{};	
	parms.OverlappedComponent = OverlappedComponent;
	parms.OtherActor = OtherActor;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;
	parms.bFromSweep = bFromSweep;
	parms.SweepResult = SweepResult;

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonWarlord_GettingSoulProjectile_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonWarlord_GettingSoulProjectile.BP_SkeletonWarlord_GettingSoulProjectile_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonWarlord_GettingSoulProjectile_C::ExecuteUbergraph_BP_SkeletonWarlord_GettingSoulProjectile(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonWarlord_GettingSoulProjectile.BP_SkeletonWarlord_GettingSoulProjectile_C.ExecuteUbergraph_BP_SkeletonWarlord_GettingSoulProjectile");

	FExecuteUbergraph_BP_SkeletonWarlord_GettingSoulProjectile parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

