#include "pch.h"
#include "SDK.h"

void UGA_GiantDragonfly_Attack_C::Get Angle And Interval Per Shot Num(double ShotNum, double& Interval, double& Final Y Angle, double& Final Z Angle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantDragonfly_Attack.GA_GiantDragonfly_Attack_C.Get Angle And Interval Per Shot Num");

	FGet Angle And Interval Per Shot Num parms{};	
	parms.ShotNum = ShotNum;
	parms.Interval = Interval;
	parms.Final Y Angle = Final Y Angle;
	parms.Final Z Angle = Final Z Angle;

	ProcessEvent(fn, &parms);
}

void UGA_GiantDragonfly_Attack_C::OnSuccess_CDC5EED6459E6038C7E9AF8563E48374(struct AActor* ProjectileActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantDragonfly_Attack.GA_GiantDragonfly_Attack_C.OnSuccess_CDC5EED6459E6038C7E9AF8563E48374");

	FOnSuccess_CDC5EED6459E6038C7E9AF8563E48374 parms{};	
	parms.ProjectileActor = ProjectileActor;

	ProcessEvent(fn, &parms);
}

void UGA_GiantDragonfly_Attack_C::OnSuccess_071F11194890A77D250DD8981AE1965F(struct AActor* ProjectileActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantDragonfly_Attack.GA_GiantDragonfly_Attack_C.OnSuccess_071F11194890A77D250DD8981AE1965F");

	FOnSuccess_071F11194890A77D250DD8981AE1965F parms{};	
	parms.ProjectileActor = ProjectileActor;

	ProcessEvent(fn, &parms);
}

void UGA_GiantDragonfly_Attack_C::OnSuccess_8D0746724A5BB8C55BD729A85796F151(struct AActor* ProjectileActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantDragonfly_Attack.GA_GiantDragonfly_Attack_C.OnSuccess_8D0746724A5BB8C55BD729A85796F151");

	FOnSuccess_8D0746724A5BB8C55BD729A85796F151 parms{};	
	parms.ProjectileActor = ProjectileActor;

	ProcessEvent(fn, &parms);
}

void UGA_GiantDragonfly_Attack_C::OnSuccess_B006B21D49F0C69A4B3DBFB20E8708E8(struct AActor* ProjectileActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantDragonfly_Attack.GA_GiantDragonfly_Attack_C.OnSuccess_B006B21D49F0C69A4B3DBFB20E8708E8");

	FOnSuccess_B006B21D49F0C69A4B3DBFB20E8708E8 parms{};	
	parms.ProjectileActor = ProjectileActor;

	ProcessEvent(fn, &parms);
}

void UGA_GiantDragonfly_Attack_C::OnSuccess_170067C34A65D85FB84E42B93D304C35(struct AActor* ProjectileActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantDragonfly_Attack.GA_GiantDragonfly_Attack_C.OnSuccess_170067C34A65D85FB84E42B93D304C35");

	FOnSuccess_170067C34A65D85FB84E42B93D304C35 parms{};	
	parms.ProjectileActor = ProjectileActor;

	ProcessEvent(fn, &parms);
}

void UGA_GiantDragonfly_Attack_C::OnSuccess_DB727C2149FAF71130EEA6BD7E2097BD(struct AActor* ProjectileActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantDragonfly_Attack.GA_GiantDragonfly_Attack_C.OnSuccess_DB727C2149FAF71130EEA6BD7E2097BD");

	FOnSuccess_DB727C2149FAF71130EEA6BD7E2097BD parms{};	
	parms.ProjectileActor = ProjectileActor;

	ProcessEvent(fn, &parms);
}

void UGA_GiantDragonfly_Attack_C::EventReceived_D5ACA6FE440316AD030BBD9DAFC03B8C(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantDragonfly_Attack.GA_GiantDragonfly_Attack_C.EventReceived_D5ACA6FE440316AD030BBD9DAFC03B8C");

	FEventReceived_D5ACA6FE440316AD030BBD9DAFC03B8C parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_GiantDragonfly_Attack_C::CreateProjectiles(struct FGameplayTag EventTag, struct FGameplayEventData EventData, float FirePower, struct FVector StartLocation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantDragonfly_Attack.GA_GiantDragonfly_Attack_C.CreateProjectiles");

	FCreateProjectiles parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;
	parms.FirePower = FirePower;
	parms.StartLocation = StartLocation;

	ProcessEvent(fn, &parms);
}

void UGA_GiantDragonfly_Attack_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantDragonfly_Attack.GA_GiantDragonfly_Attack_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GiantDragonfly_Attack_C::ExecuteUbergraph_GA_GiantDragonfly_Attack(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantDragonfly_Attack.GA_GiantDragonfly_Attack_C.ExecuteUbergraph_GA_GiantDragonfly_Attack");

	FExecuteUbergraph_GA_GiantDragonfly_Attack parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

