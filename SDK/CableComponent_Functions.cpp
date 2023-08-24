#include "pch.h"
#include "SDK.h"

void UCableComponent::SetAttachEndToComponent(struct USceneComponent* Component, struct FName SocketName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CableComponent.CableComponent.SetAttachEndToComponent");

	FSetAttachEndToComponent parms{};	
	parms.Component = Component;
	parms.SocketName = SocketName;

	ProcessEvent(fn, &parms);
}

void UCableComponent::SetAttachEndTo(struct AActor* Actor, struct FName ComponentProperty, struct FName SocketName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CableComponent.CableComponent.SetAttachEndTo");

	FSetAttachEndTo parms{};	
	parms.Actor = Actor;
	parms.ComponentProperty = ComponentProperty;
	parms.SocketName = SocketName;

	ProcessEvent(fn, &parms);
}

void UCableComponent::GetCableParticleLocations(struct TArray<struct FVector>& Locations){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CableComponent.CableComponent.GetCableParticleLocations");

	FGetCableParticleLocations parms{};	
	parms.Locations = Locations;

	ProcessEvent(fn, &parms);
}

struct USceneComponent* UCableComponent::GetAttachedComponent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CableComponent.CableComponent.GetAttachedComponent");

	FGetAttachedComponent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct AActor* UCableComponent::GetAttachedActor(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CableComponent.CableComponent.GetAttachedActor");

	FGetAttachedActor parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

