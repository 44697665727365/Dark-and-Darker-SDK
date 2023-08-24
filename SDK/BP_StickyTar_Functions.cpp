#include "pch.h"
#include "SDK.h"

void ABP_StickyTar_C::OnTrapActivate(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_StickyTar.BP_StickyTar_C.OnTrapActivate");

	FOnTrapActivate parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_StickyTar_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_StickyTar.BP_StickyTar_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_StickyTar_C::EventCollisionOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_StickyTar.BP_StickyTar_C.EventCollisionOverlapBegin");

	FEventCollisionOverlapBegin parms{};	
	parms.OverlappedComponent = OverlappedComponent;
	parms.OtherActor = OtherActor;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;
	parms.bFromSweep = bFromSweep;
	parms.SweepResult = SweepResult;

	ProcessEvent(fn, &parms);
}

void ABP_StickyTar_C::EventCollisionOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_StickyTar.BP_StickyTar_C.EventCollisionOverlapEnd");

	FEventCollisionOverlapEnd parms{};	
	parms.OverlappedComponent = OverlappedComponent;
	parms.OtherActor = OtherActor;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;

	ProcessEvent(fn, &parms);
}

void ABP_StickyTar_C::ExecuteUbergraph_BP_StickyTar(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_StickyTar.BP_StickyTar_C.ExecuteUbergraph_BP_StickyTar");

	FExecuteUbergraph_BP_StickyTar parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

