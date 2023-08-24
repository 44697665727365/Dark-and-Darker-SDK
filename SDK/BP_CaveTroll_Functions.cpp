#include "pch.h"
#include "SDK.h"

void ABP_CaveTroll_C::Trigger In Overlap NPT Area(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_CaveTroll.BP_CaveTroll_C.Trigger In Overlap NPT Area");

	FTrigger In Overlap NPT Area parms{};	
	parms.OverlappedComponent = OverlappedComponent;
	parms.OtherActor = OtherActor;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;
	parms.bFromSweep = bFromSweep;
	parms.SweepResult = SweepResult;

	ProcessEvent(fn, &parms);
}

void ABP_CaveTroll_C::EventReceived_91854E014BDF1001DBBDF39E92099E75(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_CaveTroll.BP_CaveTroll_C.EventReceived_91854E014BDF1001DBBDF39E92099E75");

	FEventReceived_91854E014BDF1001DBBDF39E92099E75 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void ABP_CaveTroll_C::EventReceived_0B96BE9F4BE2B9A385CB12AAB43A0BC6(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_CaveTroll.BP_CaveTroll_C.EventReceived_0B96BE9F4BE2B9A385CB12AAB43A0BC6");

	FEventReceived_0B96BE9F4BE2B9A385CB12AAB43A0BC6 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void ABP_CaveTroll_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_CaveTroll.BP_CaveTroll_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_CaveTroll_C::OnSetAI(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_CaveTroll.BP_CaveTroll_C.OnSetAI");

	FOnSetAI parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_CaveTroll_C::Comeback Event Start(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_CaveTroll.BP_CaveTroll_C.Comeback Event Start");

	FComeback Event Start parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_CaveTroll_C::ExecuteUbergraph_BP_CaveTroll(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_CaveTroll.BP_CaveTroll_C.ExecuteUbergraph_BP_CaveTroll");

	FExecuteUbergraph_BP_CaveTroll parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

