#include "pch.h"
#include "SDK.h"

void UGA_BowMultiShot_C::OnSuccess_AD00B3DA4CDB4D669E483EA55702AB02(struct AActor* ProjectileActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_BowMultiShot.GA_BowMultiShot_C.OnSuccess_AD00B3DA4CDB4D669E483EA55702AB02");

	FOnSuccess_AD00B3DA4CDB4D669E483EA55702AB02 parms{};	
	parms.ProjectileActor = ProjectileActor;

	ProcessEvent(fn, &parms);
}

void UGA_BowMultiShot_C::CreateProjectiles(struct FGameplayTag EventTag, struct FGameplayEventData EventData, float FirePower, struct FVector StartLocation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_BowMultiShot.GA_BowMultiShot_C.CreateProjectiles");

	FCreateProjectiles parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;
	parms.FirePower = FirePower;
	parms.StartLocation = StartLocation;

	ProcessEvent(fn, &parms);
}

void UGA_BowMultiShot_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_BowMultiShot.GA_BowMultiShot_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_BowMultiShot_C::ExecuteUbergraph_GA_BowMultiShot(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_BowMultiShot.GA_BowMultiShot_C.ExecuteUbergraph_GA_BowMultiShot");

	FExecuteUbergraph_GA_BowMultiShot parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

