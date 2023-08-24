#include "pch.h"
#include "SDK.h"

void UGA_FloorSpikesAura_C::OnAuraOverlapBeginEvent(struct AActor* TargetActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_FloorSpikesAura.GA_FloorSpikesAura_C.OnAuraOverlapBeginEvent");

	FOnAuraOverlapBeginEvent parms{};	
	parms.TargetActor = TargetActor;

	ProcessEvent(fn, &parms);
}

void UGA_FloorSpikesAura_C::ExecuteUbergraph_GA_FloorSpikesAura(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_FloorSpikesAura.GA_FloorSpikesAura_C.ExecuteUbergraph_GA_FloorSpikesAura");

	FExecuteUbergraph_GA_FloorSpikesAura parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

